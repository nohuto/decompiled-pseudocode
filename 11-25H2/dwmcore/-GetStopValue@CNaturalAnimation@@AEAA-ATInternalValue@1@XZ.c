/*
 * XREFs of ?GetStopValue@CNaturalAnimation@@AEAA?ATInternalValue@1@XZ @ 0x1801CCC30
 * Callers:
 *     ?CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1801CC5C0 (-CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ProcessSetBindingBroken@CNaturalAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x1802AA4B0 (-ProcessSetBindingBroken@CNaturalAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSIO.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CNaturalAnimation::GetStopValue(__int64 a1, __int64 a2)
{
  int v2; // r8d
  __int64 v3; // xmm0_8
  int v4; // eax
  int v6; // r8d
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(_DWORD *)(a1 + 392);
  *(_QWORD *)a2 = 0LL;
  *(_DWORD *)(a2 + 8) = 0;
  if ( v2 )
  {
    v6 = v2 - 1;
    if ( v6 )
    {
      if ( v6 != 1 )
        ModuleFailFastForHRESULT(-2147467259, retaddr);
      v3 = *(_QWORD *)(a1 + 344);
      v4 = *(_DWORD *)(a1 + 352);
    }
    else
    {
      v3 = *(_QWORD *)(a1 + 320);
      v4 = *(_DWORD *)(a1 + 328);
    }
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 332);
    v4 = *(_DWORD *)(a1 + 340);
  }
  *(_QWORD *)a2 = v3;
  *(_DWORD *)(a2 + 8) = v4;
  return a2;
}

/*
 * XREFs of ?ExpressionValueFromInternalValue@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValue@@@Z @ 0x180216360
 * Callers:
 *     ?GetProperty@CNaturalAnimation@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1802162D0 (-GetProperty@CNaturalAnimation@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?ProcessSetBindingBroken@CNaturalAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x1802AA4B0 (-ProcessSetBindingBroken@CNaturalAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSIO.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ @ 0x18005D310 (-InternalRelease@-$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     ??4CExpressionValue@@QEAAAEAV0@$$QEAV0@@Z @ 0x1802A2C34 (--4CExpressionValue@@QEAAAEAV0@$$QEAV0@@Z.c)
 */

__int64 __fastcall CNaturalAnimation::ExpressionValueFromInternalValue(__int64 a1, unsigned int *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // xmm0_8
  _BYTE v8[64]; // [rsp+20h] [rbp-58h] BYREF
  CPathData *v9; // [rsp+60h] [rbp-18h] BYREF
  int v10; // [rsp+68h] [rbp-10h]
  void *retaddr; // [rsp+78h] [rbp+0h]

  memset_0(v8, 0, sizeof(v8));
  v9 = 0LL;
  v10 = 0;
  CExpressionValue::operator=(a3, v8);
  Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v9);
  result = *(unsigned int *)(a1 + 160);
  switch ( (_DWORD)result )
  {
    case 0x34:
      v7 = *(_QWORD *)a2;
      *(_DWORD *)(a3 + 72) = 52;
      result = a2[2];
      *(_QWORD *)a3 = v7;
      *(_DWORD *)(a3 + 8) = result;
      break;
    case 0x12:
      result = *a2;
      *(_DWORD *)a3 = result;
      *(_DWORD *)(a3 + 72) = 18;
      break;
    case 0x23:
      *(_QWORD *)a3 = *(_QWORD *)a2;
      *(_DWORD *)(a3 + 72) = 35;
      break;
    default:
      ModuleFailFastForHRESULT(-2147467259, retaddr);
  }
  return result;
}

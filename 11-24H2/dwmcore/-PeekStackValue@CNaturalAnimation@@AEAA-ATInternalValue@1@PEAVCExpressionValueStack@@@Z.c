/*
 * XREFs of ?PeekStackValue@CNaturalAnimation@@AEAA?ATInternalValue@1@PEAVCExpressionValueStack@@@Z @ 0x1802A0658
 * Callers:
 *     ?CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1801BAEE0 (-CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18015B3A0 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CNaturalAnimation::PeekStackValue(__int64 a1, __int64 a2, CExpressionValueStack *a3)
{
  int v4; // eax
  struct CExpressionValue *v5; // rax
  __int64 v6; // xmm0_8
  void *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)a2 = 0LL;
  *(_DWORD *)(a2 + 8) = 0;
  v4 = *(_DWORD *)(a1 + 160);
  switch ( v4 )
  {
    case 18:
      *(_DWORD *)a2 = *(_DWORD *)CExpressionValueStack::PeekStackValue(a3, 0);
      break;
    case 35:
      *(_QWORD *)a2 = *(_QWORD *)CExpressionValueStack::PeekStackValue(a3, 0);
      break;
    case 52:
      v5 = CExpressionValueStack::PeekStackValue(a3, 0);
      v6 = *(_QWORD *)v5;
      LODWORD(v5) = *((_DWORD *)v5 + 2);
      *(_QWORD *)a2 = v6;
      *(_DWORD *)(a2 + 8) = (_DWORD)v5;
      break;
    default:
      ModuleFailFastForHRESULT(0x80004005, retaddr);
  }
  return a2;
}

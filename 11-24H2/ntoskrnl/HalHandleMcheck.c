/*
 * XREFs of HalHandleMcheck @ 0x140543080
 * Callers:
 *     KiHandleMcheck @ 0x1405B7610 (KiHandleMcheck.c)
 * Callees:
 *     HalpHandleMachineCheck @ 0x14053F7A8 (HalpHandleMachineCheck.c)
 *     HalpMcaReportError @ 0x1405400E4 (HalpMcaReportError.c)
 */

char __fastcall HalHandleMcheck(__int64 a1, __int64 a2, int *a3, __int64 a4)
{
  char result; // al
  __int64 v7; // rdi
  int v8; // eax

  result = HalpMcaEnabled;
  if ( HalpMcaEnabled )
  {
    v7 = *(_QWORD *)&KeGetPcr()->HalReserved[6];
    if ( !v7 )
      HalpMcaReportError(0LL, 0LL, 0x80000003);
    if ( a3 )
    {
      v8 = *a3;
      *(_OWORD *)a3 = 0LL;
      *a3 = v8;
    }
    *(_QWORD *)(v7 + 32) = a3;
    result = HalpHandleMachineCheck(a1, a2, (__int64)a3, a4);
    *(_QWORD *)(v7 + 32) = 0LL;
  }
  return result;
}

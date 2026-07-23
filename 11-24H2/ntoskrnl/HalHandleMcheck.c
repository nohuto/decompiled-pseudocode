/*
 * XREFs of HalHandleMcheck @ 0x1405409D0
 * Callers:
 *     KiHandleMcheck @ 0x1405B4BE0 (KiHandleMcheck.c)
 * Callees:
 *     HalpHandleMachineCheck @ 0x14053D0A8 (HalpHandleMachineCheck.c)
 *     HalpMcaReportError @ 0x14053D9E4 (HalpMcaReportError.c)
 */

char __fastcall HalHandleMcheck(__int64 a1, __int64 a2, int *a3)
{
  char result; // al
  __int64 v6; // rdi
  int v7; // eax

  result = HalpMcaEnabled;
  if ( HalpMcaEnabled )
  {
    v6 = *(_QWORD *)&KeGetPcr()->HalReserved[6];
    if ( !v6 )
      HalpMcaReportError(0LL, 0LL, 0x80000003);
    if ( a3 )
    {
      v7 = *a3;
      *(_OWORD *)a3 = 0LL;
      *a3 = v7;
    }
    *(_QWORD *)(v6 + 32) = a3;
    result = HalpHandleMachineCheck(a1);
    *(_QWORD *)(v6 + 32) = 0LL;
  }
  return result;
}

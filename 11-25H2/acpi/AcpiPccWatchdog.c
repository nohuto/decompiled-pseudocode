/*
 * XREFs of AcpiPccWatchdog @ 0x1400513F0
 * Callers:
 *     <none>
 * Callees:
 *     AcpiPccCommandComplete @ 0x140050C90 (AcpiPccCommandComplete.c)
 *     AcpiDiagTracePccCommandTimeout @ 0x140056DC0 (AcpiDiagTracePccCommandTimeout.c)
 *     AcpiPccIsCommandCompleteSet @ 0x140064150 (AcpiPccIsCommandCompleteSet.c)
 */

__int64 __fastcall AcpiPccWatchdog(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(a2 + 560);
  if ( (_DWORD)result )
  {
    if ( !(unsigned __int8)AcpiPccIsCommandCompleteSet(a2) )
    {
      if ( ++*(_DWORD *)(a2 + 776) <= 5u )
        return KeSetTimer2(a2 + 568, -10LL * *(unsigned int *)(a2 + 24), 0LL, 0LL);
      AcpiDiagTracePccCommandTimeout(
        a2 + 792,
        a2 + 784,
        *(_DWORD *)(a2 + 4),
        ++*(_DWORD *)(a2 + 780),
        *(_DWORD *)(a2 + 784),
        *(_QWORD *)(a2 + 792));
    }
    return AcpiPccCommandComplete((char *)a2);
  }
  return result;
}

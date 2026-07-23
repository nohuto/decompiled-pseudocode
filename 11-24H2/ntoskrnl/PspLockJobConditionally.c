/*
 * XREFs of PspLockJobConditionally @ 0x14085A6BC
 * Callers:
 *     PspJobDelete @ 0x1404E6110 (PspJobDelete.c)
 *     PspSetNetRateControl @ 0x1407783E4 (PspSetNetRateControl.c)
 *     PspSetJobIoRateControl @ 0x14085A388 (PspSetJobIoRateControl.c)
 *     NtSetInformationJobObject @ 0x140ACC7F0 (NtSetInformationJobObject.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 */

BOOLEAN __fastcall PspLockJobConditionally(__int64 a1, __int64 a2)
{
  __int64 i; // r8
  BOOLEAN result; // al

  for ( i = 0LL; !(_DWORD)i; i = 1LL )
  {
    if ( a1 == *(_QWORD *)(a2 + 8 * i) )
      return result;
  }
  return ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
}

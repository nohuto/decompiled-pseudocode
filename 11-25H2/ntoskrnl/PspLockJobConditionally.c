/*
 * XREFs of PspLockJobConditionally @ 0x140A3B07C
 * Callers:
 *     PspJobDelete @ 0x1404EB860 (PspJobDelete.c)
 *     PspSetNetRateControl @ 0x140768744 (PspSetNetRateControl.c)
 *     PspSetJobIoRateControl @ 0x140A3AD48 (PspSetJobIoRateControl.c)
 *     NtSetInformationJobObject @ 0x140AC4C00 (NtSetInformationJobObject.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
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

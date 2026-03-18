/*
 * XREFs of PspLockJobConditionally @ 0x14085E94C
 * Callers:
 *     PspJobDelete @ 0x1404EE9D0 (PspJobDelete.c)
 *     PspSetNetRateControl @ 0x140778224 (PspSetNetRateControl.c)
 *     PspSetJobIoRateControl @ 0x14085E618 (PspSetJobIoRateControl.c)
 *     NtSetInformationJobObject @ 0x140ACE760 (NtSetInformationJobObject.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
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

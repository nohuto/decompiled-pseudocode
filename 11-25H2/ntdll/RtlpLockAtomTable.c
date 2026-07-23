/*
 * XREFs of RtlpLockAtomTable @ 0x1800682F0
 * Callers:
 *     RtlEmptyAtomTable @ 0x1800671D0 (RtlEmptyAtomTable.c)
 *     RtlQueryAtomInAtomTable @ 0x180067B90 (RtlQueryAtomInAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x180067DA0 (RtlDeleteAtomFromAtomTable.c)
 *     RtlAddAtomToAtomTableEx @ 0x180067E44 (RtlAddAtomToAtomTableEx.c)
 *     RtlDestroyAtomTable @ 0x1801174F0 (RtlDestroyAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x18013D7F0 (RtlPinAtomInAtomTable.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall RtlpLockAtomTable(__int64 a1)
{
  if ( !a1 || *(_DWORD *)a1 != 1836020801 )
    return 0;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 8));
  return 1;
}

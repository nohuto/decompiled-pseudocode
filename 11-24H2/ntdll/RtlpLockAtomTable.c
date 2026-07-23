/*
 * XREFs of RtlpLockAtomTable @ 0x18007B1E0
 * Callers:
 *     RtlQueryAtomInAtomTable @ 0x18007AA70 (RtlQueryAtomInAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x18007AC90 (RtlDeleteAtomFromAtomTable.c)
 *     RtlAddAtomToAtomTableEx @ 0x18007AD34 (RtlAddAtomToAtomTableEx.c)
 *     RtlEmptyAtomTable @ 0x18010E600 (RtlEmptyAtomTable.c)
 *     RtlDestroyAtomTable @ 0x18010F790 (RtlDestroyAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x18013A2B0 (RtlPinAtomInAtomTable.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall RtlpLockAtomTable(__int64 a1)
{
  if ( !a1 || *(_DWORD *)a1 != 1836020801 )
    return 0;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 8));
  return 1;
}

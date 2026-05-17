/*
 * XREFs of RtlpLockAtomTable @ 0x1800AEA00
 * Callers:
 *     RtlEmptyAtomTable @ 0x1800ADAF0 (RtlEmptyAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x1800AE4B0 (RtlDeleteAtomFromAtomTable.c)
 *     RtlAddAtomToAtomTableEx @ 0x1800AE554 (RtlAddAtomToAtomTableEx.c)
 *     RtlDestroyAtomTable @ 0x180114540 (RtlDestroyAtomTable.c)
 *     RtlQueryAtomInAtomTable @ 0x1801191C0 (RtlQueryAtomInAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x18013C0C0 (RtlPinAtomInAtomTable.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall RtlpLockAtomTable(__int64 a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  if ( !a1 || *(_DWORD *)a1 != 1836020801 )
    return 0;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 8), a2, a3);
  return 1;
}

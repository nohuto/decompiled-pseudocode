/*
 * XREFs of RtlResetMemoryBlockLookaside @ 0x18013D8D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlInitializeSListHead @ 0x1800E4E80 (RtlInitializeSListHead.c)
 *     RtlResetMemoryZone @ 0x18013D930 (RtlResetMemoryZone.c)
 */

__int64 __fastcall RtlResetMemoryBlockLookaside(__int64 a1)
{
  unsigned int i; // ebx
  unsigned int v3; // ebx

  RtlAcquireSRWLockExclusive((volatile signed __int32 *)a1);
  for ( i = 0; i < *(_DWORD *)(a1 + 40); ++i )
    RtlInitializeSListHead((PSLIST_HEADER)(a1 + 32LL * i + 48));
  v3 = RtlResetMemoryZone(*(_QWORD *)(a1 + 16));
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
  return v3;
}

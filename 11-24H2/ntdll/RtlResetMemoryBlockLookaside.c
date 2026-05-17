/*
 * XREFs of RtlResetMemoryBlockLookaside @ 0x18013C1A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlInitializeSListHead @ 0x1800E5EB0 (RtlInitializeSListHead.c)
 *     RtlResetMemoryZone @ 0x18013C200 (RtlResetMemoryZone.c)
 */

__int64 __fastcall RtlResetMemoryBlockLookaside(__int64 a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  unsigned int i; // ebx
  unsigned int v5; // ebx

  RtlAcquireSRWLockExclusive((volatile signed __int32 *)a1, a2, a3);
  for ( i = 0; i < *(_DWORD *)(a1 + 40); ++i )
    RtlInitializeSListHead((PSLIST_HEADER)(a1 + 32LL * i + 48));
  v5 = RtlResetMemoryZone(*(_QWORD *)(a1 + 16));
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
  return v5;
}

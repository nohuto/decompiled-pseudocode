/*
 * XREFs of RtlUnlockMemoryBlockLookaside @ 0x180105AA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     RtlpUnregisterLockedMemoryBlockLookaside @ 0x1800AA93C (RtlpUnregisterLockedMemoryBlockLookaside.c)
 *     RtlUnlockMemoryZone @ 0x180105B00 (RtlUnlockMemoryZone.c)
 */

NTSTATUS __cdecl RtlUnlockMemoryBlockLookaside(PVOID MemoryBlockLookaside)
{
  int v2; // ecx
  NTSTATUS v3; // edi
  int v4; // ecx

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)MemoryBlockLookaside);
  v2 = *((_DWORD *)MemoryBlockLookaside + 11);
  v3 = 0;
  if ( v2 )
  {
    v4 = v2 - 1;
    *((_DWORD *)MemoryBlockLookaside + 11) = v4;
    if ( !v4 )
    {
      RtlUnlockMemoryZone(*((PVOID *)MemoryBlockLookaside + 2));
      RtlUnlockMemoryZone(*((PVOID *)MemoryBlockLookaside + 1));
      RtlpUnregisterLockedMemoryBlockLookaside();
    }
  }
  else
  {
    v3 = -1073741823;
  }
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)MemoryBlockLookaside);
  return v3;
}

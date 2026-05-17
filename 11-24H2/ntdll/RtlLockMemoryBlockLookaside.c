/*
 * XREFs of RtlLockMemoryBlockLookaside @ 0x180001A20
 * Callers:
 *     <none>
 * Callees:
 *     RtlUnlockMemoryZone @ 0x1800018E0 (RtlUnlockMemoryZone.c)
 *     RtlLockMemoryZone @ 0x180001AA0 (RtlLockMemoryZone.c)
 *     RtlpRegisterLockedMemoryBlockLookaside @ 0x180001C88 (RtlpRegisterLockedMemoryBlockLookaside.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall RtlLockMemoryBlockLookaside(__int64 a1)
{
  int locked; // edi
  __int64 v4; // rcx

  locked = 0;
  RtlAcquireSRWLockExclusive(a1);
  if ( *(_DWORD *)(a1 + 44) )
    goto LABEL_5;
  locked = RtlLockMemoryZone(*(_QWORD *)(a1 + 8));
  if ( locked >= 0 )
  {
    locked = RtlLockMemoryZone(*(_QWORD *)(a1 + 16));
    if ( locked < 0 )
    {
      v4 = *(_QWORD *)(a1 + 8);
    }
    else
    {
      locked = RtlpRegisterLockedMemoryBlockLookaside();
      if ( locked >= 0 )
      {
LABEL_5:
        ++*(_DWORD *)(a1 + 44);
        goto LABEL_6;
      }
      RtlUnlockMemoryZone(*(_QWORD *)(a1 + 8));
      v4 = *(_QWORD *)(a1 + 16);
    }
    RtlUnlockMemoryZone(v4);
  }
LABEL_6:
  RtlReleaseSRWLockExclusive(a1);
  return (unsigned int)locked;
}

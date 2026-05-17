/*
 * XREFs of RtlLockMemoryBlockLookaside @ 0x1800EFFC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlLockMemoryZone @ 0x1800F0040 (RtlLockMemoryZone.c)
 *     RtlpRegisterLockedMemoryBlockLookaside @ 0x1800F0228 (RtlpRegisterLockedMemoryBlockLookaside.c)
 *     RtlUnlockMemoryZone @ 0x1800F05F0 (RtlUnlockMemoryZone.c)
 */

__int64 __fastcall RtlLockMemoryBlockLookaside(__int64 a1)
{
  int locked; // edi
  __int64 v4; // rcx

  locked = 0;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)a1);
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
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
  return (unsigned int)locked;
}

/*
 * XREFs of RtlUnlockMemoryBlockLookaside @ 0x1800EFF60
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpUnregisterLockedMemoryBlockLookaside @ 0x1800F01CC (RtlpUnregisterLockedMemoryBlockLookaside.c)
 *     RtlUnlockMemoryZone @ 0x1800F05F0 (RtlUnlockMemoryZone.c)
 */

__int64 __fastcall RtlUnlockMemoryBlockLookaside(__int64 a1)
{
  int v2; // ecx
  unsigned int v3; // edi
  int v4; // ecx

  RtlAcquireSRWLockExclusive((volatile signed __int32 *)a1);
  v2 = *(_DWORD *)(a1 + 44);
  v3 = 0;
  if ( v2 )
  {
    v4 = v2 - 1;
    *(_DWORD *)(a1 + 44) = v4;
    if ( !v4 )
    {
      RtlUnlockMemoryZone(*(_QWORD *)(a1 + 16));
      RtlUnlockMemoryZone(*(_QWORD *)(a1 + 8));
      RtlpUnregisterLockedMemoryBlockLookaside();
    }
  }
  else
  {
    v3 = -1073741823;
  }
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
  return v3;
}

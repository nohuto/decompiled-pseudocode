/*
 * XREFs of RtlUnlockMemoryZone @ 0x1800F05F0
 * Callers:
 *     RtlUnlockMemoryBlockLookaside @ 0x1800EFF60 (RtlUnlockMemoryBlockLookaside.c)
 *     RtlLockMemoryBlockLookaside @ 0x1800EFFC0 (RtlLockMemoryBlockLookaside.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpUnregisterLockedMemoryZone @ 0x1800F068C (RtlpUnregisterLockedMemoryZone.c)
 *     ZwUnlockVirtualMemory @ 0x180166DD0 (ZwUnlockVirtualMemory.c)
 */

__int64 __fastcall RtlUnlockMemoryZone(__int64 a1)
{
  volatile signed __int64 *v1; // rsi
  unsigned int v3; // ebx
  int v4; // eax
  int v6; // eax
  _QWORD *i; // rdi
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v9; // [rsp+38h] [rbp+10h] BYREF

  v1 = (volatile signed __int64 *)(a1 + 32);
  v3 = 0;
  v9 = 0LL;
  v8 = 0LL;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 32));
  v4 = *(_DWORD *)(a1 + 40);
  if ( v4 )
  {
    v6 = v4 - 1;
    *(_DWORD *)(a1 + 40) = v6;
    if ( !v6 )
    {
      for ( i = *(_QWORD **)(a1 + 48); i; i = (_QWORD *)*i )
      {
        v9 = i;
        v8 = i[1];
        ZwUnlockVirtualMemory(-1LL, &v9, &v8, 1LL);
      }
      RtlpUnregisterLockedMemoryZone();
    }
  }
  else
  {
    v3 = -1073741823;
  }
  RtlReleaseSRWLockExclusive(v1);
  return v3;
}

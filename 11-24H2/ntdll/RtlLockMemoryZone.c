/*
 * XREFs of RtlLockMemoryZone @ 0x180001AA0
 * Callers:
 *     RtlLockMemoryBlockLookaside @ 0x180001A20 (RtlLockMemoryBlockLookaside.c)
 * Callees:
 *     RtlpRegisterLockedMemoryZone @ 0x180001BB8 (RtlpRegisterLockedMemoryZone.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     NtLockVirtualMemory @ 0x180163F60 (NtLockVirtualMemory.c)
 *     ZwUnlockVirtualMemory @ 0x180165840 (ZwUnlockVirtualMemory.c)
 */

__int64 __fastcall RtlLockMemoryZone(__int64 a1)
{
  int locked; // r14d
  _DWORD *v3; // rcx
  _QWORD *i; // rdi
  _QWORD *j; // rsi
  _QWORD *k; // rdi
  __int64 v8; // [rsp+50h] [rbp+30h] BYREF
  _QWORD *v9; // [rsp+58h] [rbp+38h] BYREF

  v9 = 0LL;
  v8 = 0LL;
  locked = 0;
  RtlAcquireSRWLockExclusive(a1 + 32);
  v3 = (_DWORD *)(a1 + 40);
  if ( *(_DWORD *)(a1 + 40) )
  {
LABEL_6:
    *v3 = *(_DWORD *)(a1 + 40) + 1;
  }
  else
  {
    for ( i = *(_QWORD **)(a1 + 48); i; i = (_QWORD *)*i )
    {
      v9 = i;
      v8 = i[1];
      locked = NtLockVirtualMemory(-1LL, &v9, &v8, 1LL);
      if ( locked < 0 )
      {
        for ( j = *(_QWORD **)(a1 + 48); j != i; j = (_QWORD *)*j )
        {
          v9 = j;
          v8 = j[1];
          ZwUnlockVirtualMemory(-1LL, &v9, &v8, 1LL);
        }
        goto LABEL_7;
      }
    }
    locked = RtlpRegisterLockedMemoryZone(v3);
    if ( locked >= 0 )
    {
      v3 = (_DWORD *)(a1 + 40);
      goto LABEL_6;
    }
    for ( k = *(_QWORD **)(a1 + 48); k; k = (_QWORD *)*k )
    {
      v9 = k;
      v8 = k[1];
      ZwUnlockVirtualMemory(-1LL, &v9, &v8, 1LL);
    }
  }
LABEL_7:
  RtlReleaseSRWLockExclusive(a1 + 32);
  return (unsigned int)locked;
}

/*
 * XREFs of RtlDestroyMemoryZone @ 0x18010D7F0
 * Callers:
 *     RtlCreateMemoryBlockLookaside @ 0x1800E5CA0 (RtlCreateMemoryBlockLookaside.c)
 *     RtlDestroyMemoryBlockLookaside @ 0x18010D790 (RtlDestroyMemoryBlockLookaside.c)
 * Callees:
 *     RtlpUnregisterLockedMemoryZone @ 0x18000197C (RtlpUnregisterLockedMemoryZone.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     ZwFreeVirtualMemory @ 0x180162050 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall RtlDestroyMemoryZone(__int64 a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  _QWORD *v4; // rbx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v7; // [rsp+38h] [rbp+10h] BYREF

  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 32), a2, a3);
  if ( *(_DWORD *)(a1 + 40) )
    RtlpUnregisterLockedMemoryZone();
  v4 = *(_QWORD **)(a1 + 48);
  while ( v4 )
  {
    v7 = v4;
    v6 = v4[1];
    v4 = (_QWORD *)*v4;
    ZwFreeVirtualMemory(-1LL, &v7, &v6, 0x8000LL);
  }
  return 0LL;
}

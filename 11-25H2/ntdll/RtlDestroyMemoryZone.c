/*
 * XREFs of RtlDestroyMemoryZone @ 0x180110270
 * Callers:
 *     RtlCreateMemoryBlockLookaside @ 0x1800E4C70 (RtlCreateMemoryBlockLookaside.c)
 *     RtlDestroyMemoryBlockLookaside @ 0x180110210 (RtlDestroyMemoryBlockLookaside.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlpUnregisterLockedMemoryZone @ 0x1800F068C (RtlpUnregisterLockedMemoryZone.c)
 *     ZwFreeVirtualMemory @ 0x1801635E0 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall RtlDestroyMemoryZone(__int64 a1)
{
  _QWORD *v2; // rbx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v5; // [rsp+38h] [rbp+10h] BYREF

  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 32));
  if ( *(_DWORD *)(a1 + 40) )
    RtlpUnregisterLockedMemoryZone();
  v2 = *(_QWORD **)(a1 + 48);
  while ( v2 )
  {
    v5 = v2;
    v4 = v2[1];
    v2 = (_QWORD *)*v2;
    ZwFreeVirtualMemory(-1LL, &v5, &v4, 0x8000LL);
  }
  return 0LL;
}

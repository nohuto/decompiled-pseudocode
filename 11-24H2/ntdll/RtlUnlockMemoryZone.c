/*
 * XREFs of RtlUnlockMemoryZone @ 0x180105B00
 * Callers:
 *     RtlLockMemoryBlockLookaside @ 0x1800AA730 (RtlLockMemoryBlockLookaside.c)
 *     RtlUnlockMemoryBlockLookaside @ 0x180105AA0 (RtlUnlockMemoryBlockLookaside.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     RtlpUnregisterLockedMemoryZone @ 0x180105B9C (RtlpUnregisterLockedMemoryZone.c)
 *     ZwUnlockVirtualMemory @ 0x180163C00 (ZwUnlockVirtualMemory.c)
 */

NTSTATUS __cdecl RtlUnlockMemoryZone(PVOID MemoryZone)
{
  _RTL_SRWLOCK *v1; // rsi
  NTSTATUS v3; // ebx
  int v4; // eax
  int v6; // eax
  ULONG_PTR *i; // rdi
  ULONG_PTR RegionSize; // [rsp+30h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp+10h] BYREF

  v1 = (_RTL_SRWLOCK *)((char *)MemoryZone + 32);
  v3 = 0;
  BaseAddress = 0LL;
  RegionSize = 0LL;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)MemoryZone + 4);
  v4 = *((_DWORD *)MemoryZone + 10);
  if ( v4 )
  {
    v6 = v4 - 1;
    *((_DWORD *)MemoryZone + 10) = v6;
    if ( !v6 )
    {
      for ( i = (ULONG_PTR *)*((_QWORD *)MemoryZone + 6); i; i = (ULONG_PTR *)*i )
      {
        BaseAddress = i;
        RegionSize = i[1];
        ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 1u);
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

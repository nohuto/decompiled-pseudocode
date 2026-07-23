/*
 * XREFs of RtlLockMemoryZone @ 0x1800F0040
 * Callers:
 *     RtlLockMemoryBlockLookaside @ 0x1800EFFC0 (RtlLockMemoryBlockLookaside.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpRegisterLockedMemoryZone @ 0x1800F0158 (RtlpRegisterLockedMemoryZone.c)
 *     NtLockVirtualMemory @ 0x1801654F0 (NtLockVirtualMemory.c)
 *     ZwUnlockVirtualMemory @ 0x180166DD0 (ZwUnlockVirtualMemory.c)
 */

NTSTATUS __cdecl RtlLockMemoryZone(PVOID MemoryZone)
{
  int locked; // r14d
  _DWORD *v3; // rcx
  ULONG_PTR *i; // rdi
  ULONG_PTR *j; // rsi
  ULONG_PTR *k; // rdi
  ULONG_PTR RegionSize; // [rsp+50h] [rbp+30h] BYREF
  PVOID BaseAddress; // [rsp+58h] [rbp+38h] BYREF

  BaseAddress = 0LL;
  RegionSize = 0LL;
  locked = 0;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)MemoryZone + 4);
  v3 = (char *)MemoryZone + 40;
  if ( *((_DWORD *)MemoryZone + 10) )
  {
LABEL_6:
    *v3 = *((_DWORD *)MemoryZone + 10) + 1;
  }
  else
  {
    for ( i = (ULONG_PTR *)*((_QWORD *)MemoryZone + 6); i; i = (ULONG_PTR *)*i )
    {
      BaseAddress = i;
      RegionSize = i[1];
      locked = NtLockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 1u);
      if ( locked < 0 )
      {
        for ( j = (ULONG_PTR *)*((_QWORD *)MemoryZone + 6); j != i; j = (ULONG_PTR *)*j )
        {
          BaseAddress = j;
          RegionSize = j[1];
          ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 1u);
        }
        goto LABEL_7;
      }
    }
    locked = RtlpRegisterLockedMemoryZone(v3);
    if ( locked >= 0 )
    {
      v3 = (char *)MemoryZone + 40;
      goto LABEL_6;
    }
    for ( k = (ULONG_PTR *)*((_QWORD *)MemoryZone + 6); k; k = (ULONG_PTR *)*k )
    {
      BaseAddress = k;
      RegionSize = k[1];
      ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 1u);
    }
  }
LABEL_7:
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)MemoryZone + 4);
  return locked;
}

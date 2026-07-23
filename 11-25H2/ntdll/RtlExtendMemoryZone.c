/*
 * XREFs of RtlExtendMemoryZone @ 0x1800F9A70
 * Callers:
 *     RtlpRegisterStackTrace @ 0x1800F9870 (RtlpRegisterStackTrace.c)
 *     RtlExtendMemoryBlockLookaside @ 0x180116E10 (RtlExtendMemoryBlockLookaside.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     ZwAllocateVirtualMemory @ 0x180163520 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1801635E0 (ZwFreeVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x1801654F0 (NtLockVirtualMemory.c)
 */

__int64 __fastcall RtlExtendMemoryZone(__int64 a1, __int64 a2)
{
  NTSTATUS v4; // edi
  _QWORD *v5; // r8
  signed __int32 v7[8]; // [rsp+0h] [rbp-48h] BYREF
  ULONG_PTR RegionSize; // [rsp+58h] [rbp+10h] BYREF
  PVOID BaseAddress; // [rsp+60h] [rbp+18h] BYREF

  if ( !a2 )
    return 3221225485LL;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 32));
  BaseAddress = 0LL;
  RegionSize = (a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v4 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x3000u, 4u);
  if ( v4 >= 0 )
  {
    if ( *(_DWORD *)(a1 + 40)
      && (v4 = NtLockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 1u), v4 < 0) )
    {
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    }
    else
    {
      v5 = BaseAddress;
      *((_QWORD *)BaseAddress + 1) = RegionSize;
      v5[2] = v5 + 4;
      v5[3] = (char *)v5 + RegionSize;
      *v5 = *(_QWORD *)(a1 + 48);
      _InterlockedOr(v7, 0);
      *(_QWORD *)(a1 + 48) = v5;
    }
  }
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 32));
  return (unsigned int)v4;
}

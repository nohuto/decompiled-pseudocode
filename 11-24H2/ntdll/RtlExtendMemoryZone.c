/*
 * XREFs of RtlExtendMemoryZone @ 0x1800F7EE0
 * Callers:
 *     RtlpRegisterStackTrace @ 0x1800F7CE0 (RtlpRegisterStackTrace.c)
 *     RtlExtendMemoryBlockLookaside @ 0x180113F20 (RtlExtendMemoryBlockLookaside.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     ZwAllocateVirtualMemory @ 0x180161F90 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x180162050 (ZwFreeVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x180163F60 (NtLockVirtualMemory.c)
 */

__int64 __fastcall RtlExtendMemoryZone(__int64 a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  int v5; // edi
  _QWORD *v6; // r8
  signed __int32 v8[8]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v9; // [rsp+58h] [rbp+10h] BYREF
  _QWORD *v10; // [rsp+60h] [rbp+18h] BYREF

  if ( !a2 )
    return 3221225485LL;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 32), a2, a3);
  v10 = 0LL;
  v9 = ((unsigned __int64)a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v5 = ZwAllocateVirtualMemory(-1LL, &v10, 0LL, &v9, 12288, 4);
  if ( v5 >= 0 )
  {
    if ( *(_DWORD *)(a1 + 40) && (v5 = NtLockVirtualMemory(-1LL, &v10, &v9, 1LL), v5 < 0) )
    {
      ZwFreeVirtualMemory(-1LL, &v10, &v9, 0x8000LL);
    }
    else
    {
      v6 = v10;
      v10[1] = v9;
      v6[2] = v6 + 4;
      v6[3] = (char *)v6 + v9;
      *v6 = *(_QWORD *)(a1 + 48);
      _InterlockedOr(v8, 0);
      *(_QWORD *)(a1 + 48) = v6;
    }
  }
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 32));
  return (unsigned int)v5;
}

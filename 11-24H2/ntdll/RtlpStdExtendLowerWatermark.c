/*
 * XREFs of RtlpStdExtendLowerWatermark @ 0x1800F1930
 * Callers:
 *     RtlpStdGetSpaceForTrace @ 0x1800F186C (RtlpStdGetSpaceForTrace.c)
 * Callees:
 *     RtlpStdLockAcquire @ 0x180031088 (RtlpStdLockAcquire.c)
 *     RtlpStdLockRelease @ 0x1800310A8 (RtlpStdLockRelease.c)
 *     ZwAllocateVirtualMemory @ 0x180160350 (ZwAllocateVirtualMemory.c)
 */

__int64 __fastcall RtlpStdExtendLowerWatermark(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v5; // r14
  void *v6; // rcx
  unsigned __int64 v7; // rsi
  ULONG_PTR RegionSize; // [rsp+50h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0LL;
  RegionSize = 0LL;
  RtlpStdLockAcquire((_RTL_SRWLOCK *)a1);
  v5 = *(_QWORD *)(a1 + 160);
  v6 = *(void **)(a1 + 144);
  BaseAddress = v6;
  v7 = v5 + a2;
  if ( *(_BYTE *)(a1 + 128) )
  {
    if ( v7 > *(_QWORD *)(a1 + 168) )
      goto LABEL_4;
    goto LABEL_3;
  }
  if ( v7 <= (unsigned __int64)v6 )
  {
LABEL_3:
    ++*(_DWORD *)(a1 + 192);
    v2 = v5;
    *(_QWORD *)(a1 + 160) = v7;
    goto LABEL_4;
  }
  RegionSize = (a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( (unsigned __int64)v6 + RegionSize < *(_QWORD *)(a1 + 152)
    && ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) >= 0 )
  {
    *(_QWORD *)(a1 + 144) = (char *)BaseAddress + RegionSize;
    goto LABEL_3;
  }
LABEL_4:
  RtlpStdLockRelease((_RTL_SRWLOCK *)a1);
  return v2;
}

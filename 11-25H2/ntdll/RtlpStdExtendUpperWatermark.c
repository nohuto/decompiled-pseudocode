/*
 * XREFs of RtlpStdExtendUpperWatermark @ 0x1800258CC
 * Callers:
 *     RtlpStdGetRecordedStackTraceIndex @ 0x1800259B0 (RtlpStdGetRecordedStackTraceIndex.c)
 * Callees:
 *     RtlpStdLockAcquire @ 0x180025A78 (RtlpStdLockAcquire.c)
 *     RtlpStdLockRelease @ 0x180025A98 (RtlpStdLockRelease.c)
 *     ZwAllocateVirtualMemory @ 0x180163520 (ZwAllocateVirtualMemory.c)
 */

__int64 __fastcall RtlpStdExtendUpperWatermark(__int64 a1, void *a2)
{
  __int64 v2; // rsi
  __int64 v4; // rcx
  char *v5; // rdx
  unsigned __int64 v6; // rax
  __int64 v7; // rdi
  ULONG_PTR RegionSize; // [rsp+40h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp+10h] BYREF

  BaseAddress = a2;
  v2 = 0LL;
  RegionSize = 0LL;
  RtlpStdLockAcquire();
  v4 = *(_QWORD *)(a1 + 168);
  v5 = *(char **)(a1 + 152);
  BaseAddress = v5;
  v6 = v4 - 8;
  if ( *(_BYTE *)(a1 + 128) )
  {
    if ( v6 >= *(_QWORD *)(a1 + 160) )
    {
      v7 = v4 - 8;
LABEL_4:
      ++*(_DWORD *)(a1 + 180);
      v2 = v7;
      *(_QWORD *)(a1 + 168) = v7;
    }
  }
  else
  {
    v7 = v4 - 8;
    if ( v6 >= (unsigned __int64)v5 )
      goto LABEL_4;
    RegionSize = 4096LL;
    if ( (unsigned __int64)(v5 - 4096) > *(_QWORD *)(a1 + 144) )
    {
      BaseAddress = v5 - 4096;
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) >= 0 )
      {
        *(_QWORD *)(a1 + 152) = BaseAddress;
        goto LABEL_4;
      }
    }
  }
  RtlpStdLockRelease(a1);
  return v2;
}

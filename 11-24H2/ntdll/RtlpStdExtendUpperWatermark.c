/*
 * XREFs of RtlpStdExtendUpperWatermark @ 0x18009C91C
 * Callers:
 *     RtlpStdGetRecordedStackTraceIndex @ 0x18009CA00 (RtlpStdGetRecordedStackTraceIndex.c)
 * Callees:
 *     RtlpStdLockAcquire @ 0x18009CAC8 (RtlpStdLockAcquire.c)
 *     RtlpStdLockRelease @ 0x18009CAE8 (RtlpStdLockRelease.c)
 *     ZwAllocateVirtualMemory @ 0x180161F90 (ZwAllocateVirtualMemory.c)
 */

__int64 __fastcall RtlpStdExtendUpperWatermark(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rsi
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  v2 = 0LL;
  v9 = 0LL;
  RtlpStdLockAcquire();
  v4 = *(_QWORD *)(a1 + 168);
  v5 = *(_QWORD *)(a1 + 152);
  v10 = v5;
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
    if ( v6 >= v5 )
      goto LABEL_4;
    v9 = 4096LL;
    if ( v5 - 4096 > *(_QWORD *)(a1 + 144) )
    {
      v10 = v5 - 4096;
      if ( (int)ZwAllocateVirtualMemory(-1LL, &v10, 0LL, &v9, 4096, 4) >= 0 )
      {
        *(_QWORD *)(a1 + 152) = v10;
        goto LABEL_4;
      }
    }
  }
  RtlpStdLockRelease(a1);
  return v2;
}

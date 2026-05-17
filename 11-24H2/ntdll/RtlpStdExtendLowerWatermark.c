/*
 * XREFs of RtlpStdExtendLowerWatermark @ 0x1800EFA38
 * Callers:
 *     RtlpStdGetSpaceForTrace @ 0x1800EF974 (RtlpStdGetSpaceForTrace.c)
 * Callees:
 *     RtlpStdLockAcquire @ 0x18009CAC8 (RtlpStdLockAcquire.c)
 *     RtlpStdLockRelease @ 0x18009CAE8 (RtlpStdLockRelease.c)
 *     ZwAllocateVirtualMemory @ 0x180161F90 (ZwAllocateVirtualMemory.c)
 */

__int64 __fastcall RtlpStdExtendLowerWatermark(__int64 a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  __int64 v3; // rdi
  __int64 v6; // r14
  unsigned __int64 v7; // rcx
  char *v8; // rsi
  unsigned __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v11; // [rsp+60h] [rbp+18h] BYREF

  v3 = 0LL;
  v10 = 0LL;
  RtlpStdLockAcquire((volatile signed __int32 *)a1, a2, a3);
  v6 = *(_QWORD *)(a1 + 160);
  v7 = *(_QWORD *)(a1 + 144);
  v11 = v7;
  v8 = (char *)a2 + v6;
  if ( *(_BYTE *)(a1 + 128) )
  {
    if ( (unsigned __int64)v8 > *(_QWORD *)(a1 + 168) )
      goto LABEL_4;
    goto LABEL_3;
  }
  if ( (unsigned __int64)v8 <= v7 )
  {
LABEL_3:
    ++*(_DWORD *)(a1 + 192);
    v3 = v6;
    *(_QWORD *)(a1 + 160) = v8;
    goto LABEL_4;
  }
  v10 = ((unsigned __int64)a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( v7 + v10 < *(_QWORD *)(a1 + 152) && (int)ZwAllocateVirtualMemory(-1LL, &v11, 0LL, &v10, 4096, 4) >= 0 )
  {
    *(_QWORD *)(a1 + 144) = v10 + v11;
    goto LABEL_3;
  }
LABEL_4:
  RtlpStdLockRelease((volatile signed __int64 *)a1);
  return v3;
}

/*
 * XREFs of FsRtlAcquireAutoExpandPushLockShared @ 0x14028F100
 * Callers:
 *     FsRtlLookupPerFileObjectContext @ 0x14028F020 (FsRtlLookupPerFileObjectContext.c)
 *     FsRtlLookupPerStreamContextInternal @ 0x14028FE70 (FsRtlLookupPerStreamContextInternal.c)
 *     FsRtlLookupPerFileContext @ 0x140414D60 (FsRtlLookupPerFileContext.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 */

__int64 __fastcall FsRtlAcquireAutoExpandPushLockShared(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rax
  unsigned __int64 v4; // r9
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rbx
  unsigned int v9; // eax
  unsigned int v10; // ecx
  volatile signed __int64 *v11; // rsi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire(a1, 0LL, 0LL);
  v4 = *(unsigned int *)(a1 + 8);
  v5 = v3;
  if ( (v4 & 1) != 0 )
  {
    v9 = ((unsigned int)v4 >> 13) & 0x3FFFF;
    _BitScanReverse(&v10, v9);
    v11 = (volatile signed __int64 *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v10 - 2)
                                                + 8LL * (v9 ^ (1 << v10))
                                                + 8)
                                    + 8 * ((v4 >> 4) & 0x1FF));
    if ( _InterlockedCompareExchange64(v11, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v11, 0LL, v5, a1);
    v6 = (__int64)v11;
  }
  else
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)a1, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(a1, 0LL, v3, a1);
    v6 = a1 | 1;
  }
  v7 = v6 | 2;
  if ( v5 )
    *(_BYTE *)(v5 + 10) = 1;
  return v7;
}

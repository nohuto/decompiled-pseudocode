/*
 * XREFs of EtwpCovSampStackHashCheck @ 0x1409231EC
 * Callers:
 *     EtwpCovSampCaptureBufferProcess @ 0x140922AE8 (EtwpCovSampCaptureBufferProcess.c)
 *     EtwpCovSampCaptureBufferMapAddressesAndQueue @ 0x140922D10 (EtwpCovSampCaptureBufferMapAddressesAndQueue.c)
 *     EtwpCovSampSampleBufferProcess @ 0x140924BD4 (EtwpCovSampSampleBufferProcess.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     EtwpCovSampStackHashLookup @ 0x1407B2C28 (EtwpCovSampStackHashLookup.c)
 */

__int64 __fastcall EtwpCovSampStackHashCheck(ULONG_PTR *a1, __int64 a2, unsigned __int8 *a3, unsigned int a4)
{
  ULONG_PTR v6; // rbp
  unsigned int v7; // r12d
  ULONG_PTR v8; // rsi
  int v9; // r13d
  ULONG_PTR v10; // rdi
  __int64 v11; // r10
  unsigned __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // r9
  struct _KTHREAD *CurrentThread; // rax
  char *v22; // r15
  unsigned int v23; // eax
  unsigned int v24; // ecx
  struct _KTHREAD *v25; // rax
  char *v26; // rax
  char *v27; // rdi
  size_t v28; // r8
  struct _KTHREAD *v29; // rax
  char *v30; // r15
  signed __int64 *v31; // rcx
  volatile signed __int32 *v32; // [rsp+68h] [rbp+10h] BYREF

  v32 = 0LL;
  if ( !a1[164] )
    return 0LL;
  v6 = a1[164];
  v7 = 0;
  v8 = a1[165];
  v9 = 0;
  if ( v6 == v8 )
    v8 = a1[166];
  v10 = a1[167];
  v11 = a4;
  v12 = 8LL * a4;
  if ( v12 >= 8 )
  {
    v12 -= 8LL * (unsigned int)v11;
    do
    {
      v13 = a3[6] + 37 * (a3[5] + 37 * (a3[4] + 37 * (a3[3] + 37 * (a3[2] + 37 * (a3[1] + 37 * (*a3 + 37 * v10))))));
      v14 = a3[7];
      a3 += 8;
      v10 = v14 + 37 * v13;
      --v11;
    }
    while ( v11 );
  }
  v15 = v12 - 1;
  if ( !v15 )
    goto LABEL_21;
  v16 = v15 - 1;
  if ( !v16 )
  {
LABEL_20:
    LODWORD(v10) = *a3++ + 37 * v10;
LABEL_21:
    LODWORD(v10) = *a3 + 37 * v10;
    goto LABEL_22;
  }
  v17 = v16 - 1;
  if ( !v17 )
  {
LABEL_19:
    LODWORD(v10) = *a3++ + 37 * v10;
    goto LABEL_20;
  }
  v18 = v17 - 1;
  if ( !v18 )
  {
LABEL_18:
    LODWORD(v10) = *a3++ + 37 * v10;
    goto LABEL_19;
  }
  v19 = v18 - 1;
  if ( !v19 )
  {
LABEL_17:
    LODWORD(v10) = *a3++ + 37 * v10;
    goto LABEL_18;
  }
  v20 = v19 - 1;
  if ( !v20 )
  {
LABEL_16:
    LODWORD(v10) = *a3++ + 37 * v10;
    goto LABEL_17;
  }
  if ( v20 == 1 )
  {
    LODWORD(v10) = *a3++ + 37 * v10;
    goto LABEL_16;
  }
LABEL_22:
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v22 = (char *)KeAbPreAcquire(v6, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v6, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)v6, 0, v22, v6);
  if ( v22 )
    v22[10] = 1;
  if ( (unsigned int)EtwpCovSampStackHashLookup(v6, v10, &v32) )
  {
    v7 = 1;
  }
  else
  {
    v23 = (unsigned int)(7 * *(_DWORD *)(v6 + 20)) >> 3;
    if ( *(_DWORD *)(v6 + 16) <= v23 )
    {
      v24 = _InterlockedIncrement((volatile signed __int32 *)(v6 + 16));
      if ( v24 == v23 )
        v9 = 1;
      if ( v24 < (unsigned int)(7 * *(_DWORD *)(v6 + 20)) >> 3 )
      {
        while ( !v32 || _InterlockedCompareExchange(v32, v10, 0) )
        {
          if ( (unsigned int)EtwpCovSampStackHashLookup(v6, v10, &v32) )
          {
            v7 = 1;
            goto LABEL_36;
          }
        }
        v29 = KeGetCurrentThread();
        --v29->KernelApcDisable;
        v30 = (char *)KeAbPreAcquire(v8, 0LL);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v8, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx((signed __int64 *)v8, 0, v30, v8);
        if ( v30 )
          v30[10] = 1;
        LOBYTE(v7) = (unsigned int)EtwpCovSampStackHashLookup(v8, v10, &v32) != 0;
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v8, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v31);
        KeAbPostRelease(v8);
        KeLeaveCriticalRegion();
      }
    }
  }
LABEL_36:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v6, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v6);
  KeAbPostRelease(v6);
  KeLeaveCriticalRegion();
  if ( v9 )
  {
    v25 = KeGetCurrentThread();
    --v25->KernelApcDisable;
    v26 = (char *)KeAbPreAcquire(v8, 0LL);
    v27 = v26;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v8, v26, v8);
    if ( v27 )
      v27[10] = 1;
    v28 = 4LL * *(unsigned int *)(v8 + 20);
    *(_QWORD *)(v8 + 8) = KeGetCurrentThread();
    memset_0((void *)(v8 + 24), 0, v28);
    *(_QWORD *)(v8 + 8) = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v8);
    KeAbPostRelease(v8);
    KeLeaveCriticalRegion();
    *(_DWORD *)(v8 + 16) = 0;
    _InterlockedExchange64((volatile __int64 *)a1 + 164, v8);
  }
  return v7;
}

/*
 * XREFs of EtwpCoverageSamplerStop @ 0x140ADAAD0
 * Callers:
 *     EtwpCoverageSamplerClose @ 0x1407B2A40 (EtwpCoverageSamplerClose.c)
 *     EtwpSetCoverageSamplerInformation @ 0x1407B3064 (EtwpSetCoverageSamplerInformation.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402C6A90 (ExWaitForRundownProtectionRelease.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     EtwpCovSampCaptureContextStop @ 0x1404BB96C (EtwpCovSampCaptureContextStop.c)
 *     KeStopProfile @ 0x1405BF174 (KeStopProfile.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x1408EB088 (EtwpUpdateGlobalGroupMasks.c)
 *     PsGetNextProcess @ 0x1408EEB70 (PsGetNextProcess.c)
 *     EtwpCovSampProcessCleanup @ 0x140902250 (EtwpCovSampProcessCleanup.c)
 *     EtwUnregister @ 0x140A00060 (EtwUnregister.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x140AAB560 (PsRemoveLoadImageNotifyRoutine.c)
 */

NTSTATUS __fastcall EtwpCoverageSamplerStop(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  void *v3; // r12
  _QWORD *v4; // rax
  signed __int8 v5; // cf
  _QWORD *v6; // rsi
  int v7; // eax
  struct _KTHREAD *v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // rsi
  __int64 v11; // r13
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // eax
  __int64 *i; // rcx
  __int64 v16; // r14
  struct _KTHREAD *v17; // rcx
  _QWORD *v18; // rax
  _QWORD *v19; // r15
  __int64 *NextProcess; // rax
  __int64 *v21; // rbp
  REGHANDLE v22; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = 0LL;
  v4 = KeAbPreAcquire((__int64)&EtwpCovSampGlobals, 0LL);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&EtwpCovSampGlobals, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx(&EtwpCovSampGlobals, (__int64)v4, (__int64)&EtwpCovSampGlobals);
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
  qword_140EFEC68 = (__int64)KeGetCurrentThread();
  if ( qword_140EFEC78 == a1 )
  {
    v7 = *(_DWORD *)(a1 + 1728);
    if ( (v7 & 2) == 0 )
    {
      *(_DWORD *)(a1 + 1728) = v7 | 2;
      qword_140EFEC68 = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCovSampGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCovSampGlobals);
      KeAbPostRelease((ULONG_PTR)&EtwpCovSampGlobals);
      KeLeaveCriticalRegion();
      ExWaitForRundownProtectionRelease(&stru_140EFEC80);
      _InterlockedExchange64((volatile __int64 *)&stru_140EFEC80, 1LL);
      v8 = KeGetCurrentThread();
      --v8->KernelApcDisable;
      v9 = KeAbPreAcquire((__int64)&EtwpCovSampGlobals, 0LL);
      v5 = _interlockedbittestandset64((volatile signed __int32 *)&EtwpCovSampGlobals, 0LL);
      v10 = v9;
      if ( v5 )
        ExfAcquirePushLockExclusiveEx(&EtwpCovSampGlobals, (__int64)v9, (__int64)&EtwpCovSampGlobals);
      if ( v10 )
        *((_BYTE *)v10 + 10) = 1;
      v3 = (void *)qword_140EFEC78;
      v11 = qword_140EFEC88;
      qword_140EFEC68 = (__int64)KeGetCurrentThread();
      qword_140EFEC78 = 0LL;
      v12 = *(_DWORD *)(a1 + 1660);
      if ( (v12 & 8) != 0 )
      {
        KeStopProfile(qword_140EFEC88 + 16);
        *(_DWORD *)(a1 + 1660) &= ~8u;
        v12 = *(_DWORD *)(a1 + 1660);
      }
      if ( (v12 & 2) != 0 )
      {
        PsRemoveLoadImageNotifyRoutine((PLOAD_IMAGE_NOTIFY_ROUTINE)EtwpCovSampImageNotify);
        *(_DWORD *)(a1 + 1660) &= ~2u;
        v12 = *(_DWORD *)(a1 + 1660);
      }
      if ( (v12 & 4) != 0 )
      {
        v13 = EtwpHostSiloState;
        v14 = *(_DWORD *)(EtwpHostSiloState + 4848) & 0xFFFFFFFB;
        *(_DWORD *)(EtwpHostSiloState + 4844) &= 0xFFFFEFFB;
        *(_DWORD *)(v13 + 4848) = v14 & 0xFFFFFDFF;
        EtwpUpdateGlobalGroupMasks(v13, 0, 9u);
        *(_DWORD *)(a1 + 1660) &= ~4u;
      }
      for ( i = 0LL; ; i = v21 )
      {
        NextProcess = PsGetNextProcess(i);
        v21 = NextProcess;
        if ( !NextProcess )
          break;
        v16 = NextProcess[238];
        if ( v16 )
        {
          v17 = KeGetCurrentThread();
          --v17->KernelApcDisable;
          v18 = KeAbPreAcquire(v16 + 8, 0LL);
          v19 = v18;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 8), 0LL) )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v16 + 8), (__int64)v18, v16 + 8);
          if ( v19 )
            *((_BYTE *)v19 + 10) = 1;
          *(_QWORD *)(v16 + 16) = KeGetCurrentThread();
          EtwpCovSampProcessCleanup(v16, 1);
          *(_QWORD *)(v16 + 16) = 0LL;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v16 + 8), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v16 + 8));
          KeAbPostRelease(v16 + 8);
          KeLeaveCriticalRegion();
        }
      }
      EtwpCovSampCaptureContextStop(v11);
      *(_DWORD *)(a1 + 1660) &= ~1u;
    }
  }
  if ( (struct _KTHREAD *)qword_140EFEC68 == KeGetCurrentThread() )
  {
    qword_140EFEC68 = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCovSampGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCovSampGlobals);
    KeAbPostRelease((ULONG_PTR)&EtwpCovSampGlobals);
    KeLeaveCriticalRegion();
  }
  if ( v3 )
    ObfDereferenceObject(v3);
  v22 = qword_140E09240;
  qword_140E09240 = 0LL;
  dword_140E09220 = 0;
  return EtwUnregister(v22);
}

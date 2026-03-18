/*
 * XREFs of EtwpCoverageSamplerStop @ 0x140ACFEE0
 * Callers:
 *     EtwpCoverageSamplerClose @ 0x1407A3670 (EtwpCoverageSamplerClose.c)
 *     EtwpSetCoverageSamplerInformation @ 0x1407A3C94 (EtwpSetCoverageSamplerInformation.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ExWaitForRundownProtectionRelease @ 0x14036DCA0 (ExWaitForRundownProtectionRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     EtwpCovSampCaptureContextStop @ 0x1404BC80C (EtwpCovSampCaptureContextStop.c)
 *     KeStopProfile @ 0x1405BB340 (KeStopProfile.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x1408DBCB4 (EtwpUpdateGlobalGroupMasks.c)
 *     PsGetNextProcess @ 0x1408DF760 (PsGetNextProcess.c)
 *     EtwpCovSampProcessCleanup @ 0x14090E2F0 (EtwpCovSampProcessCleanup.c)
 *     EtwUnregister @ 0x140A01CC0 (EtwUnregister.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x140AA5FA0 (PsRemoveLoadImageNotifyRoutine.c)
 */

NTSTATUS __fastcall EtwpCoverageSamplerStop(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  void *v3; // r12
  __int64 *v4; // rax
  signed __int8 v5; // cf
  __int64 *v6; // rsi
  int v7; // eax
  struct _KTHREAD *v8; // rcx
  __int64 *v9; // rax
  __int64 *v10; // rsi
  __int64 v11; // r13
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // eax
  __int64 *i; // rcx
  __int64 v16; // r14
  struct _KTHREAD *v17; // rcx
  __int64 *v18; // rax
  __int64 *v19; // r15
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
    ExfAcquirePushLockExclusiveEx(&EtwpCovSampGlobals, v4, (__int64)&EtwpCovSampGlobals);
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
  qword_140EFE8E8 = (__int64)KeGetCurrentThread();
  if ( qword_140EFE8F8 == a1 )
  {
    v7 = *(_DWORD *)(a1 + 1728);
    if ( (v7 & 2) == 0 )
    {
      *(_DWORD *)(a1 + 1728) = v7 | 2;
      qword_140EFE8E8 = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCovSampGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCovSampGlobals);
      KeAbPostRelease((ULONG_PTR)&EtwpCovSampGlobals);
      KeLeaveCriticalRegion();
      ExWaitForRundownProtectionRelease(&stru_140EFE900);
      _InterlockedExchange64((volatile __int64 *)&stru_140EFE900, 1LL);
      v8 = KeGetCurrentThread();
      --v8->KernelApcDisable;
      v9 = KeAbPreAcquire((__int64)&EtwpCovSampGlobals, 0LL);
      v5 = _interlockedbittestandset64((volatile signed __int32 *)&EtwpCovSampGlobals, 0LL);
      v10 = v9;
      if ( v5 )
        ExfAcquirePushLockExclusiveEx(&EtwpCovSampGlobals, v9, (__int64)&EtwpCovSampGlobals);
      if ( v10 )
        *((_BYTE *)v10 + 10) = 1;
      v3 = (void *)qword_140EFE8F8;
      v11 = qword_140EFE908;
      qword_140EFE8E8 = (__int64)KeGetCurrentThread();
      qword_140EFE8F8 = 0LL;
      v12 = *(_DWORD *)(a1 + 1660);
      if ( (v12 & 8) != 0 )
      {
        KeStopProfile(qword_140EFE908 + 16);
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
        v14 = *(_DWORD *)(EtwpHostSiloState + 4576) & 0xFFFFFFFB;
        *(_DWORD *)(EtwpHostSiloState + 4572) &= 0xFFFFEFFB;
        *(_DWORD *)(v13 + 4576) = v14 & 0xFFFFFDFF;
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
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v16 + 8), v18, v16 + 8);
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
  if ( (struct _KTHREAD *)qword_140EFE8E8 == KeGetCurrentThread() )
  {
    qword_140EFE8E8 = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCovSampGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCovSampGlobals);
    KeAbPostRelease((ULONG_PTR)&EtwpCovSampGlobals);
    KeLeaveCriticalRegion();
  }
  if ( v3 )
    ObfDereferenceObject(v3);
  v22 = qword_140E09160;
  qword_140E09160 = 0LL;
  dword_140E09140 = 0;
  return EtwUnregister(v22);
}

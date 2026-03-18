/*
 * XREFs of ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1403F8E44
 * Callers:
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1401930D4 (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x140019B00 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?VidSchSetRecoveryThread@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_GLOBAL@@PEAU_KTHREAD@@@Z @ 0x14006679C (-VidSchSetRecoveryThread@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_GLOBAL@@PEAU_KTHREAD@@@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     TdrBugcheckOnTimeout @ 0x14018490C (TdrBugcheckOnTimeout.c)
 *     ?ResetSchedulerFromTDR@ADAPTER_RENDER@@QEAAXXZ @ 0x140188D58 (-ResetSchedulerFromTDR@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?RestartSchedulerFromTDR@ADAPTER_RENDER@@QEAAJXZ @ 0x14019D754 (-RestartSchedulerFromTDR@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?Reset@DXGDEVICE@@QEAAXE@Z @ 0x1401B9040 (-Reset@DXGDEVICE@@QEAAXE@Z.c)
 *     ?DisablePinnedHardware@ADAPTER_RENDER@@QEAAXXZ @ 0x1402BAB9C (-DisablePinnedHardware@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1402BAC68 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?PurgeSegments@ADAPTER_RENDER@@AEAAXUVIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z @ 0x1402BB4A4 (-PurgeSegments@ADAPTER_RENDER@@AEAAXUVIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z.c)
 *     ?ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXEE@Z @ 0x1402BC984 (-ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXEE@Z.c)
 *     ?RestoreFromPurgeSegments@ADAPTER_RENDER@@AEAAXXZ @ 0x1403C20D0 (-RestoreFromPurgeSegments@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?DdiRestartFromTimeout@ADAPTER_RENDER@@QEAAJXZ @ 0x14040180C (-DdiRestartFromTimeout@ADAPTER_RENDER@@QEAAJXZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::Reset(ADAPTER_RENDER *this, struct _TDR_RECOVERY_CONTEXT *a2)
{
  _QWORD *i; // rcx
  _BYTE *j; // rax
  int v6; // eax
  int restarted; // eax
  VIDSCH_EXPORT *v8; // rcx
  unsigned int v9; // ebp
  DXGDEVICE *k; // rdi
  DXGDEVICE *v11; // rdi
  DXGDEVICE *m; // rbx

  ADAPTER_RENDER::FlushScheduler((__int64)this, 4, 0xFFFFFFFFLL, 0);
  ADAPTER_RENDER::DisablePinnedHardware((DXGDEVICE **)this);
  ADAPTER_RENDER::PurgeSegments((struct _EX_RUNDOWN_REF *)this, 0, 0LL);
  ADAPTER_RENDER::FlushScheduler((__int64)this, 4, 0xFFFFFFFFLL, 0);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 256, 0LL);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)this + 33) = KeGetCurrentThread();
  for ( i = (_QWORD *)*((_QWORD *)this + 35); i != (_QWORD *)((char *)this + 280); i = (_QWORD *)*i )
    *(_DWORD *)(i[2] + 12LL) |= 0x10u;
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)this + 33) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 256, 0LL);
  KeLeaveCriticalRegion();
  DXGFASTMUTEX::Acquire((ADAPTER_RENDER *)((char *)this + 192));
  for ( j = (_BYTE *)*((_QWORD *)this + 30); j != (char *)this + 240 && j; j = *(_BYTE **)j )
    j[25] = 1;
  DXGFASTMUTEX::Release((struct _KTHREAD **)this + 24);
  ADAPTER_RENDER::ResetSchedulerFromTDR(this);
  v6 = ADAPTER_RENDER::DdiRestartFromTimeout(this);
  if ( v6 < 0 )
  {
    *((_QWORD *)a2 + 13) = *(_QWORD *)(*((_QWORD *)this + 2) + 584LL);
    TdrBugcheckOnTimeout(a2, v6, 4);
  }
  restarted = ADAPTER_RENDER::RestartSchedulerFromTDR(this);
  v8 = (VIDSCH_EXPORT *)*((_QWORD *)this + 92);
  v9 = restarted;
  if ( restarted < 0 )
  {
    *((_QWORD *)a2 + 13) = *(_QWORD *)(*((_QWORD *)v8 + 1) + 760LL);
    TdrBugcheckOnTimeout(a2, restarted, 14);
  }
  VIDSCH_EXPORT::VidSchSetRecoveryThread(v8, *((struct _VIDSCH_GLOBAL **)this + 93), 0LL);
  ADAPTER_RENDER::RestoreFromPurgeSegments(this);
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)a2 + 363) )
    ADAPTER_RENDER::ResumeVidMmWorkerThread(this, 1, 0);
  *(_OWORD *)((char *)this + 824) = 0LL;
  *(_OWORD *)((char *)this + 840) = 0LL;
  *(_OWORD *)((char *)this + 1224) = 0LL;
  for ( k = (DXGDEVICE *)*((_QWORD *)this + 18); k != (ADAPTER_RENDER *)((char *)this + 144) && k; k = *(DXGDEVICE **)k )
  {
    if ( *((_DWORD *)k + 116) != 3 )
      DXGDEVICE::Reset(k, 1);
  }
  v11 = (ADAPTER_RENDER *)((char *)this + 160);
  for ( m = (DXGDEVICE *)*((_QWORD *)this + 20); m != v11 && m; m = *(DXGDEVICE **)m )
    DXGDEVICE::Reset(m, 1);
  return v9;
}

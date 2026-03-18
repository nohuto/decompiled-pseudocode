/*
 * XREFs of ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x14019D7E8
 * Callers:
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x140193B2C (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x140019B00 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?FlushDeferredDestructions@ADAPTER_RENDER@@AEAAXXZ @ 0x14019B278 (-FlushDeferredDestructions@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1401B927C (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 *     ?EnableClockCalibration@ADAPTER_RENDER@@QEAAXE@Z @ 0x1402BA40C (-EnableClockCalibration@ADAPTER_RENDER@@QEAAXE@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1402BAC68 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z @ 0x1402BB3F0 (-SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z.c)
 *     ?PurgeSegments@ADAPTER_RENDER@@AEAAXUVIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z @ 0x1402BB4A4 (-PurgeSegments@ADAPTER_RENDER@@AEAAXUVIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z.c)
 *     ?ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXEE@Z @ 0x1402BC984 (-ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXEE@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x14033DBDC (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?Stop@DXGADAPTERSYNCOBJECT@@QEAAXXZ @ 0x14033E138 (-Stop@DXGADAPTERSYNCOBJECT@@QEAAXXZ.c)
 *     ?DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z @ 0x14035D9B8 (-DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z.c)
 */

void __fastcall ADAPTER_RENDER::Stop(ADAPTER_RENDER *this, char a2, unsigned __int8 a3)
{
  DXGDEVICE *i; // rbx
  DXGDEVICE *j; // rbx
  DXGADAPTERSYNCOBJECT *k; // rbx
  DXGSHAREDRESOURCE **m; // rbx
  DXGGLOBAL *Global; // rax

  ADAPTER_RENDER::EnableClockCalibration(this, 0);
  *((_BYTE *)this + 1025) = a2;
  if ( !a3 )
  {
    if ( !KeReadStateEvent((PRKEVENT)(*((_QWORD *)this + 2) + 48LL)) )
    {
      WdLogSingleEntry5(0LL, 275LL, 6LL, *((_QWORD *)this + 2), 0LL, 0LL);
      WdLogGlobalForLineNumber = 2400;
    }
    ADAPTER_RENDER::FlushDeferredDestructions((DXGDEVICE **)this);
  }
  for ( i = (DXGDEVICE *)*((_QWORD *)this + 18); i != (ADAPTER_RENDER *)((char *)this + 144) && i; i = *(DXGDEVICE **)i )
    DXGDEVICE::Stop(i, a3);
  for ( j = (DXGDEVICE *)*((_QWORD *)this + 20); j != (ADAPTER_RENDER *)((char *)this + 160) && j; j = *(DXGDEVICE **)j )
    DXGDEVICE::Stop(j, a3);
  if ( !a3 )
  {
    DXGFASTMUTEX::Acquire((ADAPTER_RENDER *)((char *)this + 192));
    for ( k = (DXGADAPTERSYNCOBJECT *)*((_QWORD *)this + 30);
          k != (ADAPTER_RENDER *)((char *)this + 240) && k;
          k = *(DXGADAPTERSYNCOBJECT **)k )
    {
      DXGADAPTERSYNCOBJECT::Stop(k);
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)this + 24);
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 256, 0LL);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)this + 33) = KeGetCurrentThread();
  for ( m = (DXGSHAREDRESOURCE **)*((_QWORD *)this + 35);
        m != (DXGSHAREDRESOURCE **)((char *)this + 280);
        m = (DXGSHAREDRESOURCE **)*m )
  {
    DXGSHAREDRESOURCE::DestroyCoreAllocations(m[2], 0LL, 0);
    *((_DWORD *)m[2] + 3) |= 0x10u;
    if ( m[4] )
    {
      Global = DXGGLOBAL::GetGlobal();
      DXGGLOBAL::DestroySyncObject(Global, m[4], 0);
      m[4] = 0LL;
    }
  }
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)this + 33) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 256, 0LL);
  KeLeaveCriticalRegion();
  if ( !a3 && !*(_BYTE *)(*((_QWORD *)this + 2) + 209LL) )
  {
    ADAPTER_RENDER::FlushScheduler(this, 5LL, 0xFFFFFFFFLL);
    ADAPTER_RENDER::SuspendVidMmWorkerThread(this, 1LL, 0LL);
    ADAPTER_RENDER::ResumeVidMmWorkerThread(this, 0, 1u);
    ADAPTER_RENDER::PurgeSegments(this, 0LL, 0LL);
    ADAPTER_RENDER::FlushScheduler(this, 5LL, 0xFFFFFFFFLL);
  }
}

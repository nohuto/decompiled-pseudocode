/*
 * XREFs of ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x14019FC38
 * Callers:
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x140195E9C (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14000A520 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140024690 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?FlushDeferredDestructions@ADAPTER_RENDER@@AEAAXXZ @ 0x14019D6E4 (-FlushDeferredDestructions@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1401BBA38 (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z @ 0x1401F41B4 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z.c)
 *     ?EnableClockCalibration@ADAPTER_RENDER@@QEAAXE@Z @ 0x1402C7C5C (-EnableClockCalibration@ADAPTER_RENDER@@QEAAXE@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1402C84A8 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z @ 0x1402C8C30 (-SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z.c)
 *     ?PurgeSegments@ADAPTER_RENDER@@AEAAXUVIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z @ 0x1402C8CE4 (-PurgeSegments@ADAPTER_RENDER@@AEAAXUVIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z.c)
 *     ?ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXEE@Z @ 0x1402CA184 (-ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXEE@Z.c)
 *     ?Stop@DXGADAPTERSYNCOBJECT@@QEAAXXZ @ 0x1402FAA68 (-Stop@DXGADAPTERSYNCOBJECT@@QEAAXXZ.c)
 *     ?DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z @ 0x140352D08 (-DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z.c)
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
      WdLogGlobalForLineNumber = 2399;
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
      DXGGLOBAL::DestroySyncObject(Global, m[4], 0, 0);
      m[4] = 0LL;
    }
  }
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

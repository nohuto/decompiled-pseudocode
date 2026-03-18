/*
 * XREFs of ?SelectResumeDevice@VIDMM_GLOBAL@@QEAAPEAVVIDMM_DEVICE@@PEA_N@Z @ 0x1400ED970
 * Callers:
 *     VidMmSelectPagingOperation @ 0x1400EBA30 (VidMmSelectPagingOperation.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140007FC0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1400C2210 (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     ?VidMmSetWorkerThreadTimeout@@YAXPEAUVIDMM_WORKER_THREAD@@_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z @ 0x1400F6570 (-VidMmSetWorkerThreadTimeout@@YAXPEAUVIDMM_WORKER_THREAD@@_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@.c)
 */

struct VIDMM_DEVICE *__fastcall VIDMM_GLOBAL::SelectResumeDevice(VIDMM_GLOBAL *this, bool *a2)
{
  char *v2; // rbx
  __int64 v5; // rcx
  unsigned __int8 v6; // dl
  __int64 v8; // rsi
  char v9; // dl
  __int64 v10; // r8
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx

  v2 = (char *)this + 44552;
  if ( this != (VIDMM_GLOBAL *)-44552LL )
  {
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    if ( *((struct _KTHREAD **)v2 + 1) == KeGetCurrentThread() )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1575;
      DxgkLogInternalTriageEvent(v5, 262146LL);
    }
  }
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)v2);
  if ( *((VIDMM_GLOBAL **)this + 5573) == (VIDMM_GLOBAL *)((char *)this + 44584) )
  {
    if ( *((VIDMM_GLOBAL **)this + 5575) == (VIDMM_GLOBAL *)((char *)this + 44600) )
    {
      if ( *((VIDMM_GLOBAL **)this + 5577) == (VIDMM_GLOBAL *)((char *)this + 44616) )
      {
        if ( !*(_BYTE *)(*((_QWORD *)this + 3) + 3053LL) && !*(_BYTE *)(*((_QWORD *)this + 2) + 1025LL)
          || *((VIDMM_GLOBAL **)this + 5579) == (VIDMM_GLOBAL *)((char *)this + 44632) )
        {
          *a2 = 0;
          _InterlockedDecrement((volatile signed __int32 *)v2 + 4);
          ExReleasePushLockSharedEx(v2, 0LL);
          KeLeaveCriticalRegion();
          return 0LL;
        }
        v6 = 4;
      }
      else
      {
        v6 = 3;
      }
    }
    else
    {
      v6 = 2;
    }
  }
  else
  {
    v6 = 1;
  }
  *a2 = 1;
  v8 = *((_QWORD *)this + 2 * (unsigned int)v6 + 5571) - 184LL;
  if ( !VIDMM_GLOBAL::IsTdrPending(this) )
  {
    if ( v9 == 2 )
    {
      v11 = *(_QWORD **)(v8 + 240);
      if ( v11 )
      {
        v12 = v11[28];
        if ( v12 > *(_QWORD *)(*v11 + 4560LL) )
        {
          LOBYTE(v10) = 8;
          VidMmSetWorkerThreadTimeout(*(_QWORD *)this, *((_QWORD *)this + 570) - v12, v10);
          v8 = 0LL;
        }
      }
    }
    else if ( v9 == 3 )
    {
      v13 = *((_QWORD *)this + 570);
      v14 = *(_QWORD *)(v8 + 216);
      v15 = *(_QWORD *)this;
      if ( v13 >= v14 )
      {
        if ( *(__int64 *)(v15 + 128) < 0 )
        {
          *(_QWORD *)(v15 + 128) = 0LL;
          *(_BYTE *)(v15 + 214) = 6;
        }
      }
      else
      {
        LOBYTE(v10) = 6;
        VidMmSetWorkerThreadTimeout(v15, v13 - v14, v10);
        v8 = 0LL;
      }
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)v2 + 4);
  ExReleasePushLockSharedEx(v2, 0LL);
  KeLeaveCriticalRegion();
  return (struct VIDMM_DEVICE *)v8;
}

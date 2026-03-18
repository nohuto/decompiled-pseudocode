/*
 * XREFs of ?SelectResumeDevice@VIDMM_GLOBAL@@QEAAPEAVVIDMM_DEVICE@@PEA_N@Z @ 0x1400E8B80
 * Callers:
 *     VidMmSelectPagingOperation @ 0x1400E7AF0 (VidMmSelectPagingOperation.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140007FC0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1400C2B70 (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     ?VidMmSetWorkerThreadTimeout@@YAXPEAUVIDMM_WORKER_THREAD@@_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z @ 0x1400F18DC (-VidMmSetWorkerThreadTimeout@@YAXPEAUVIDMM_WORKER_THREAD@@_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@.c)
 */

struct VIDMM_DEVICE *__fastcall VIDMM_GLOBAL::SelectResumeDevice(struct _KTHREAD **this, bool *a2)
{
  volatile signed __int32 *v2; // rbx
  __int64 v5; // rcx
  unsigned __int8 v6; // dl
  __int64 v8; // rsi
  char v9; // dl
  __int64 v10; // r8
  _QWORD *v11; // rax
  __int64 v12; // rcx
  struct _KTHREAD *v13; // rdx
  __int64 v14; // rax
  struct _KTHREAD *v15; // rcx

  v2 = (volatile signed __int32 *)(this + 5569);
  if ( this != (struct _KTHREAD **)-44552LL && this[5570] == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1512;
    DxgkLogInternalTriageEvent(v5, 262146LL);
  }
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)v2);
  if ( this[5573] == (struct _KTHREAD *)(this + 5573) )
  {
    if ( this[5575] == (struct _KTHREAD *)(this + 5575) )
    {
      if ( this[5577] == (struct _KTHREAD *)(this + 5577) )
      {
        if ( !*((_BYTE *)this[3] + 3053) && !*((_BYTE *)this[2] + 1025)
          || this[5579] == (struct _KTHREAD *)(this + 5579) )
        {
          *a2 = 0;
          _InterlockedDecrement(v2 + 4);
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
  v8 = (__int64)this[2 * (unsigned int)v6 + 5571] - 184;
  if ( !VIDMM_GLOBAL::IsTdrPending((VIDMM_GLOBAL *)this) )
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
          VidMmSetWorkerThreadTimeout(*this, (char *)this[570] - v12, v10);
          v8 = 0LL;
        }
      }
    }
    else if ( v9 == 3 )
    {
      v13 = this[570];
      v14 = *(_QWORD *)(v8 + 216);
      v15 = *this;
      if ( (__int64)v13 >= v14 )
      {
        if ( *((__int64 *)v15 + 16) < 0 )
        {
          *((_QWORD *)v15 + 16) = 0LL;
          *((_BYTE *)v15 + 214) = 6;
        }
      }
      else
      {
        LOBYTE(v10) = 6;
        VidMmSetWorkerThreadTimeout(v15, (char *)v13 - v14, v10);
        v8 = 0LL;
      }
    }
  }
  _InterlockedDecrement(v2 + 4);
  ExReleasePushLockSharedEx(v2, 0LL);
  KeLeaveCriticalRegion();
  return (struct VIDMM_DEVICE *)v8;
}

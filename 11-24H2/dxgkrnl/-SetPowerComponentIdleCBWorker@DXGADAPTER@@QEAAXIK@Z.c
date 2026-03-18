/*
 * XREFs of ?SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z @ 0x140011C70
 * Callers:
 *     ?SetPowerComponentIdleCB@DXGADAPTER@@QEAAXI@Z @ 0x140010918 (-SetPowerComponentIdleCB@DXGADAPTER@@QEAAXI@Z.c)
 *     DxgSetPowerComponentIdleForceAsyncCBInternal @ 0x140011B20 (DxgSetPowerComponentIdleForceAsyncCBInternal.c)
 *     ?SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXIK@Z @ 0x140011BF0 (-SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXIK@Z.c)
 * Callees:
 *     ?PowerRuntimeComponentIdleStateCallback@DXGADAPTER@@QEAAXKKE@Z @ 0x140007DB8 (-PowerRuntimeComponentIdleStateCallback@DXGADAPTER@@QEAAXKKE@Z.c)
 *     ?PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z @ 0x140010BB0 (-PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1400118A8 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140012010 (McTemplateK0pt_EtwWriteTransfer.c)
 *     DxgkNotifySharedPowerGraphicsFStateTransition @ 0x140054D54 (DxgkNotifySharedPowerGraphicsFStateTransition.c)
 *     ?RecordIdle@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x140077604 (-RecordIdle@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::SetPowerComponentIdleCBWorker(DXGADAPTER *this, unsigned int a2, __int64 a3)
{
  unsigned int v3; // r14d
  __int64 v4; // rsi
  __int64 v6; // rbx
  __int64 v7; // rcx
  int v8; // eax
  bool v9; // zf
  DXGADAPTER *i; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  _QWORD *v19; // rbx
  __int64 v20; // [rsp+20h] [rbp-48h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v22; // [rsp+48h] [rbp-20h] BYREF

  v3 = a3;
  v4 = a2;
  if ( !*((_QWORD *)this + 404) )
    return;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
    McTemplateK0pt_EtwWriteTransfer(&DxgkControlGuid_Context, &Dxgk_SetPowerComponentIdleCB, a3, this, a2);
  v6 = *((_QWORD *)this + 403) + 520 * v4;
  v7 = *(_QWORD *)(v6 + 512);
  if ( v7 )
    DXGPOWERSTATISTICSTRANSITIONENGINE::RecordIdle((DXGPOWERSTATISTICSTRANSITIONENGINE *)(v7 + 136));
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 504), &LockHandle);
  v8 = *(_DWORD *)(v6 + 352) - 1;
  *(_DWORD *)(v6 + 352) = v8;
  if ( v8 <= 0 )
  {
    if ( *(_BYTE *)(v6 + 360) )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( *(_DWORD *)(v6 + 208) == 7 )
        DxgkNotifySharedPowerGraphicsFStateTransition(this, *(_DWORD *)(v6 + 4), 1u, 1);
      DXGADAPTER::PowerRuntimeComponentActiveCallback(this, v4, 0);
      DXGADAPTER::PowerRuntimeComponentIdleStateCallback(this, v4, 1LL, 1);
      goto LABEL_18;
    }
    v9 = *(_QWORD *)(v6 + 472) == 0LL;
    *(_QWORD *)(v6 + 480) = MEMORY[0xFFFFF78000000014];
    if ( v9 )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( *(_DWORD *)(v6 + 208) == 7 )
        DxgkNotifySharedPowerGraphicsFStateTransition(this, *(_DWORD *)(v6 + 4), 1u, 1);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
      {
        LODWORD(v20) = v4;
        McTemplateK0pqq_EtwWriteTransfer(v16, (__int64)&Dxgk_ReportPowerComponentState, v15, this, v20, 0);
      }
      v17 = *((_QWORD *)this + 404);
      if ( v17 )
        PoFxIdleComponent(v17, (unsigned int)v4, v3);
      goto LABEL_18;
    }
    if ( *(_DWORD *)(v6 + 208) != 7
      || (KeReleaseInStackQueuedSpinLock(&LockHandle),
          DxgkNotifySharedPowerGraphicsFStateTransition(this, *(_DWORD *)(v6 + 4), 1u, 1),
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 504), &LockHandle),
          *(int *)(v6 + 352) <= 0) )
    {
      *(_QWORD *)(v6 + 488) = *(_QWORD *)(v6 + 472) + *(_QWORD *)(v6 + 480);
      memset(&v22, 0, sizeof(v22));
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)this + 470, &v22);
      for ( i = (DXGADAPTER *)*((_QWORD *)this + 465);
            i != (DXGADAPTER *)((char *)this + 3712);
            i = (DXGADAPTER *)*((_QWORD *)i + 1) )
      {
        if ( *(_QWORD *)(v6 + 488) >= *((_QWORD *)i + 6) )
        {
          v18 = *(_QWORD *)i;
          v19 = (_QWORD *)(v6 + 440);
          if ( *(DXGADAPTER **)(*(_QWORD *)i + 8LL) == i )
          {
            *v19 = v18;
            v19[1] = i;
            *(_QWORD *)(v18 + 8) = v19;
            *(_QWORD *)i = v19;
            goto LABEL_16;
          }
LABEL_33:
          __fastfail(3u);
        }
      }
      v11 = (_QWORD *)((char *)this + 3712);
      v12 = *((_QWORD *)this + 464);
      v13 = (_QWORD *)(v6 + 440);
      if ( *(DXGADAPTER **)(v12 + 8) != (DXGADAPTER *)((char *)this + 3712) )
        goto LABEL_33;
      *v13 = v12;
      *(_QWORD *)(v6 + 448) = v11;
      *(_QWORD *)(v12 + 8) = v13;
      *v11 = v13;
      v14 = *(_QWORD *)(v6 + 472);
      if ( !*((_BYTE *)this + 3661) )
      {
        *((_BYTE *)this + 3661) = 1;
        KeSetTimer((PKTIMER)this + 59, (LARGE_INTEGER)-v14, (PKDPC)this + 60);
      }
LABEL_16:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v22);
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_18:
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
      McTemplateK0pt_EtwWriteTransfer(&DxgkControlGuid_Context, &Dxgk_SetPowerComponentIdleCBEnd, v15, this, v4);
  }
}

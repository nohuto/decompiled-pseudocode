/*
 * XREFs of ?SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z @ 0x140025BF0
 * Callers:
 *     ?SetPowerComponentActiveCB@DXGADAPTER@@QEAAXI@Z @ 0x1400258A4 (-SetPowerComponentActiveCB@DXGADAPTER@@QEAAXI@Z.c)
 *     ?SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z @ 0x140025980 (-SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z.c)
 *     DxgSetPowerComponentActiveNoWaitForceAsyncCB @ 0x140025A10 (DxgSetPowerComponentActiveNoWaitForceAsyncCB.c)
 * Callees:
 *     ?PowerRuntimeComponentIdleStateCallback@DXGADAPTER@@QEAAXKKE@Z @ 0x140007DB8 (-PowerRuntimeComponentIdleStateCallback@DXGADAPTER@@QEAAXKKE@Z.c)
 *     ?PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z @ 0x140010BB0 (-PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1400118A8 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140012010 (McTemplateK0pt_EtwWriteTransfer.c)
 *     DxgkNotifySharedPowerGraphicsFStateTransition @ 0x140054D54 (DxgkNotifySharedPowerGraphicsFStateTransition.c)
 *     ?RecordActivity@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x140077594 (-RecordActivity@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

void __fastcall DXGADAPTER::SetPowerComponentActiveCBWorker(
        DXGADAPTER *this,
        unsigned int a2,
        __int64 a3,
        unsigned int a4)
{
  unsigned int v4; // r15d
  char v5; // di
  __int64 v6; // r14
  __int64 v8; // rbp
  __int64 v9; // rcx
  unsigned int v10; // edx
  __int64 v11; // rcx
  char v12; // r12
  char v13; // r13
  char v14; // bl
  __int64 v15; // rbx
  __int64 *v16; // r15
  __int64 v17; // rax
  __int64 **v18; // rcx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rcx
  _QWORD *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // [rsp+20h] [rbp-C8h]
  __int64 v32; // [rsp+28h] [rbp-C0h]
  struct _KLOCK_QUEUE_HANDLE v33; // [rsp+30h] [rbp-B8h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-A0h] BYREF
  struct _KLOCK_QUEUE_HANDLE v35; // [rsp+60h] [rbp-88h] BYREF
  char *v36; // [rsp+80h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE v37; // [rsp+88h] [rbp-60h] BYREF
  char v38; // [rsp+A0h] [rbp-48h]
  char v39; // [rsp+100h] [rbp+18h]

  v39 = a3;
  v4 = a4;
  v5 = a3;
  v6 = a2;
  if ( !*((_QWORD *)this + 404) )
    return;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
    McTemplateK0pt_EtwWriteTransfer(
      (__int64)&DxgkControlGuid_Context,
      (__int64)&Dxgk_SetPowerComponentActiveCB,
      a3,
      this,
      a2);
  v8 = *((_QWORD *)this + 403) + 520 * v6;
  v9 = *(_QWORD *)(v8 + 512);
  if ( v9 )
  {
    DXGPOWERSTATISTICSTRANSITIONENGINE::RecordActivity((DXGPOWERSTATISTICSTRANSITIONENGINE *)(v9 + 136));
    if ( (*((_DWORD *)this + 744) & 0x10) != 0 )
    {
      v10 = *((_DWORD *)this + 464);
      v11 = 0LL;
      if ( v10 )
      {
        while ( *(_DWORD *)(*((_QWORD *)this + 538) + 4 * v11) )
        {
          v11 = (unsigned int)(v11 + 1);
          if ( (unsigned int)v11 >= v10 )
            goto LABEL_12;
        }
        goto LABEL_15;
      }
    }
    else if ( !**((_DWORD **)this + 538) )
    {
      goto LABEL_15;
    }
LABEL_12:
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 578, &LockHandle);
    *(_BYTE *)(*(_QWORD *)(v8 + 512) + 240LL) = 1;
    if ( !*((_BYTE *)this + 4632) )
    {
      *((_BYTE *)this + 4632) = 1;
      _InterlockedIncrement64((volatile signed __int64 *)this + 3);
      *((_QWORD *)this + 561) = -1LL;
      KeSetTimer((PKTIMER)((char *)this + 4496), (LARGE_INTEGER)-120000LL, (PKDPC)((char *)this + 4560));
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
LABEL_15:
  memset(&v35, 0, sizeof(v35));
  v12 = v5;
  v13 = 0;
  v14 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v8 + 504), &v35);
  if ( (int)++*(_DWORD *)(v8 + 352) <= 1 )
  {
    v15 = MEMORY[0xFFFFF78000000014] - *(_QWORD *)(v8 + 480);
    if ( *(_BYTE *)(v8 + 360) )
    {
      v12 = 0;
      v14 = 1;
      goto LABEL_42;
    }
    v16 = (__int64 *)(v8 + 400);
    if ( *(_QWORD *)(v8 + 400) )
    {
      v38 = 0;
      v36 = (char *)this + 3688;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 461, &v37);
      *((_QWORD *)this + 462) = KeGetCurrentThread();
      v17 = *v16;
      v38 = 1;
      if ( !v17 )
        goto LABEL_27;
      if ( *(__int64 **)(v17 + 8) != v16 )
        goto LABEL_37;
      v18 = *(__int64 ***)(v8 + 408);
      if ( *v18 != v16 )
        goto LABEL_37;
      *v18 = (__int64 *)v17;
      *(_QWORD *)(v17 + 8) = v18;
      *v16 = 0LL;
      if ( *((DXGADAPTER **)this + 459) == (DXGADAPTER *)((char *)this + 3672) && *((_BYTE *)this + 3660) )
      {
        v19 = *((_QWORD *)this + 391);
        *((_BYTE *)this + 3660) = 0;
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v19 + 736) + 8LL) + 872LL))(
          *(_QWORD *)(v19 + 744),
          0LL);
      }
      if ( v38 )
      {
LABEL_27:
        v38 = 0;
        *((_QWORD *)v36 + 1) = 0LL;
        KeReleaseInStackQueuedSpinLock(&v37);
      }
      v5 = v39;
    }
    memset(&v33, 0, sizeof(v33));
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)this + 470, &v33);
    v20 = (_QWORD *)(v8 + 440);
    v21 = *(_QWORD *)(v8 + 440);
    if ( !v21 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v33);
      v23 = *(_QWORD *)(v8 + 496);
      if ( v15 < v23 )
        *(_QWORD *)(v8 + 472) = v23;
      v12 = 1;
      goto LABEL_41;
    }
    if ( *(_QWORD **)(v21 + 8) == v20 )
    {
      v22 = *(_QWORD **)(v8 + 448);
      if ( (_QWORD *)*v22 == v20 )
      {
        *v22 = v21;
        *(_QWORD *)(v21 + 8) = v22;
        *v20 = 0LL;
        if ( *((DXGADAPTER **)this + 464) == (DXGADAPTER *)((char *)this + 3712) )
        {
          KeCancelTimer((PKTIMER)this + 59);
          *((_BYTE *)this + 3661) = 0;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v33);
        if ( v15 > *(_QWORD *)(v8 + 496) )
          *(_QWORD *)(v8 + 472) = 0LL;
        v13 = 1;
LABEL_41:
        v4 = a4;
        v14 = 0;
        goto LABEL_42;
      }
    }
LABEL_37:
    __fastfail(3u);
  }
  v13 = 1;
LABEL_42:
  KeReleaseInStackQueuedSpinLock(&v35);
  if ( *(_DWORD *)(v8 + 208) == 7 )
    DxgkNotifySharedPowerGraphicsFStateTransition(this, *(_DWORD *)(v8 + 4), 0, 1);
  if ( v12 )
  {
    if ( v5 )
    {
      if ( KeGetCurrentIrql() >= 2u )
      {
        WdLogSingleEntry5(0LL, 275LL, 20LL, this, 0LL, 0LL);
        WdLogGlobalForLineNumber = 1790;
      }
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
      {
        LODWORD(v32) = 1;
        LODWORD(v31) = v6;
        McTemplateK0pqq_EtwWriteTransfer(v26, (__int64)&Dxgk_ReportPowerComponentState, v27, this, v31, v32);
      }
      v28 = 1LL;
    }
    else
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
      {
        LODWORD(v31) = v6;
        McTemplateK0pqq_EtwWriteTransfer(v24, (__int64)&Dxgk_ReportPowerComponentState, v25, this, v31, 1);
      }
      v28 = v4;
    }
    PoFxActivateComponent(*((_QWORD *)this + 404), (unsigned int)v6, v28);
    if ( v13 )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
      {
        LODWORD(v32) = 0;
        LODWORD(v31) = v6;
        McTemplateK0pqq_EtwWriteTransfer(v29, (__int64)&Dxgk_ReportPowerComponentState, v25, this, v31, v32);
      }
      v30 = *((_QWORD *)this + 404);
      if ( v30 )
        PoFxIdleComponent(v30, (unsigned int)v6, v4);
    }
  }
  if ( v14 )
  {
    DXGADAPTER::PowerRuntimeComponentIdleStateCallback(this, v6, 0LL, 1);
    DXGADAPTER::PowerRuntimeComponentActiveCallback(this, v6, 1u);
  }
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
    {
      LODWORD(v31) = v6;
      McTemplateK0pt_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        (__int64)&Dxgk_SetPowerComponentActiveCBEnd,
        v25,
        this,
        v31);
    }
  }
}

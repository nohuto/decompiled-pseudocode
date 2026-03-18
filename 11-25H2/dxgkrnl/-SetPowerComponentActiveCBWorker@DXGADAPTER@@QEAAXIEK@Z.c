/*
 * XREFs of ?SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z @ 0x140025440
 * Callers:
 *     ?SetPowerComponentActiveCB@DXGADAPTER@@QEAAXI@Z @ 0x1400250F4 (-SetPowerComponentActiveCB@DXGADAPTER@@QEAAXI@Z.c)
 *     ?SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z @ 0x1400251D0 (-SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z.c)
 *     DxgSetPowerComponentActiveNoWaitForceAsyncCB @ 0x140025260 (DxgSetPowerComponentActiveNoWaitForceAsyncCB.c)
 * Callees:
 *     ?PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z @ 0x140013DA0 (-PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140014AA8 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140015210 (McTemplateK0pt_EtwWriteTransfer.c)
 *     ?PowerRuntimeComponentIdleStateCallback@DXGADAPTER@@QEAAXKKE@Z @ 0x140017388 (-PowerRuntimeComponentIdleStateCallback@DXGADAPTER@@QEAAXKKE@Z.c)
 *     DxgkNotifySharedPowerGraphicsFStateTransition @ 0x140055494 (DxgkNotifySharedPowerGraphicsFStateTransition.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?RecordActivity@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x140076B54 (-RecordActivity@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
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
  __int64 *v16; // rdi
  __int64 v17; // rax
  __int64 **v18; // rcx
  __int64 v19; // rcx
  char *v20; // rdi
  _QWORD *v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // [rsp+20h] [rbp-C8h]
  __int64 v33; // [rsp+28h] [rbp-C0h]
  struct _KLOCK_QUEUE_HANDLE v34; // [rsp+30h] [rbp-B8h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-A0h] BYREF
  struct _KLOCK_QUEUE_HANDLE v36; // [rsp+60h] [rbp-88h] BYREF
  char *v37; // [rsp+80h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE v38; // [rsp+88h] [rbp-60h] BYREF
  char v39; // [rsp+A0h] [rbp-48h]
  char v40; // [rsp+100h] [rbp+18h]

  v40 = a3;
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
  memset(&v36, 0, sizeof(v36));
  v12 = v5;
  v13 = 0;
  v14 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v8 + 504), &v36);
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
      v39 = 0;
      v37 = (char *)this + 3688;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 461, &v38);
      Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
      *((_QWORD *)this + 462) = KeGetCurrentThread();
      v17 = *v16;
      v39 = 1;
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
      if ( v39 )
      {
LABEL_27:
        v20 = v37;
        v39 = 0;
        Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
        *((_QWORD *)v20 + 1) = 0LL;
        KeReleaseInStackQueuedSpinLock(&v38);
      }
      v4 = a4;
    }
    memset(&v34, 0, sizeof(v34));
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)this + 470, &v34);
    v21 = (_QWORD *)(v8 + 440);
    v22 = *(_QWORD *)(v8 + 440);
    if ( !v22 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v34);
      v24 = *(_QWORD *)(v8 + 496);
      if ( v15 < v24 )
        *(_QWORD *)(v8 + 472) = v24;
      v12 = 1;
      goto LABEL_41;
    }
    if ( *(_QWORD **)(v22 + 8) == v21 )
    {
      v23 = *(_QWORD **)(v8 + 448);
      if ( (_QWORD *)*v23 == v21 )
      {
        *v23 = v22;
        *(_QWORD *)(v22 + 8) = v23;
        *v21 = 0LL;
        if ( *((DXGADAPTER **)this + 464) == (DXGADAPTER *)((char *)this + 3712) )
        {
          KeCancelTimer((PKTIMER)this + 59);
          *((_BYTE *)this + 3661) = 0;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v34);
        if ( v15 > *(_QWORD *)(v8 + 496) )
          *(_QWORD *)(v8 + 472) = 0LL;
        v13 = 1;
LABEL_41:
        v5 = v40;
        v14 = 0;
        goto LABEL_42;
      }
    }
LABEL_37:
    __fastfail(3u);
  }
  v13 = 1;
LABEL_42:
  KeReleaseInStackQueuedSpinLock(&v36);
  if ( *(_DWORD *)(v8 + 208) == 7 )
    DxgkNotifySharedPowerGraphicsFStateTransition(this, *(_DWORD *)(v8 + 4), 0, 1);
  if ( v12 )
  {
    if ( v5 )
    {
      if ( KeGetCurrentIrql() >= 2u )
      {
        WdLogSingleEntry5(0LL, 275LL, 20LL, this, 0LL, 0LL);
        WdLogGlobalForLineNumber = 1733;
      }
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
      {
        LODWORD(v33) = 1;
        LODWORD(v32) = v6;
        McTemplateK0pqq_EtwWriteTransfer(v27, (__int64)&Dxgk_ReportPowerComponentState, v28, this, v32, v33);
      }
      v29 = 1LL;
    }
    else
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
      {
        LODWORD(v32) = v6;
        McTemplateK0pqq_EtwWriteTransfer(v25, (__int64)&Dxgk_ReportPowerComponentState, v26, this, v32, 1);
      }
      v29 = v4;
    }
    PoFxActivateComponent(*((_QWORD *)this + 404), (unsigned int)v6, v29);
    if ( v13 )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
      {
        LODWORD(v33) = 0;
        LODWORD(v32) = v6;
        McTemplateK0pqq_EtwWriteTransfer(v30, (__int64)&Dxgk_ReportPowerComponentState, v26, this, v32, v33);
      }
      v31 = *((_QWORD *)this + 404);
      if ( v31 )
        PoFxIdleComponent(v31, (unsigned int)v6, v4);
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
      LODWORD(v32) = v6;
      McTemplateK0pt_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        (__int64)&Dxgk_SetPowerComponentActiveCBEnd,
        v26,
        this,
        v32);
    }
  }
}

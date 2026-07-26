/*
 * XREFs of ?ndisQueuedCheckForHang@@YAXPEAX@Z @ 0x140076710
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400129C0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x140037AD0 (-ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140038840 (-NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x14004A900 (-ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisSetWakeUpTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140052670 (-ndisSetWakeUpTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMResetMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_RESET_REASON@@@Z @ 0x140080060 (-ndisMResetMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_RESET_REASON@@@Z.c)
 *     Feature_CFHCancelTimerFix__private_IsEnabledDeviceUsageNoInline @ 0x140090F10 (Feature_CFHCancelTimerFix__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 *     ?ndisMInvokeCheckForHang@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14015FB30 (-ndisMInvokeCheckForHang@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisQueuedCheckForHang(struct _NDIS_MINIPORT_BLOCK *a1)
{
  char v2; // r12
  bool busy; // al
  unsigned __int8 v4; // r14
  KIRQL v5; // bl
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rsi
  unsigned int v7; // ebp
  unsigned int Flags; // ebx
  KIRQL v9; // al
  KIRQL v10; // r15
  struct _NDIS_WDF_CX_DRIVER_BLOCK *CxBlockFromMiniport; // rax
  int v12; // ebx
  int v13; // edx
  unsigned int WSyncFlags; // eax
  KIRQL v15; // si
  bool v16; // sf
  unsigned __int16 CFHangXTicks; // cx
  KIRQL v18; // al
  LARGE_INTEGER Interval; // [rsp+70h] [rbp+8h] BYREF

  v2 = 1;
  if ( !a1->SelectiveSuspend
    || ((a1->Flags & 0x80u) == 0
      ? (busy = ndisWdmSetBusyAsync((__int64)a1, 1, 0x31u, 0LL, 0))
      : (busy = ndisWdfSetBusyAsync((__int64)a1, 1u, 0x31u, 0LL, 0)),
        busy) )
  {
    if ( a1->MajorNdisVersion < 6u )
    {
      v5 = KfRaiseIrql(2u);
      v4 = a1->DriverHandle->MiniportCharacteristics.Ndis50Chars.CheckForHangHandler(a1->MiniportAdapterContext);
      if ( v5 != 2 )
        KeLowerIrql(v5);
    }
    else
    {
      v4 = ndisMInvokeCheckForHang(a1);
    }
    SelectiveSuspend = a1->SelectiveSuspend;
    v7 = v4 != 0 ? 2 : 0;
    if ( SelectiveSuspend )
    {
      Flags = a1->Flags;
      v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1->SelectiveSuspend);
      *((_DWORD *)SelectiveSuspend + 128) &= ~0x10u;
      v10 = v9;
      if ( (Flags & 0x80u) != 0
        && !*((_DWORD *)SelectiveSuspend + 128)
        && !*((_DWORD *)SelectiveSuspend + 129)
        && !*((_DWORD *)SelectiveSuspend + 132)
        && !*((_DWORD *)SelectiveSuspend + 133)
        && !*((_DWORD *)SelectiveSuspend + 130)
        && !*((_DWORD *)SelectiveSuspend + 131)
        && !*((_DWORD *)SelectiveSuspend + 144)
        && !*((_DWORD *)SelectiveSuspend + 127) )
      {
        CxBlockFromMiniport = NdisWdfGetCxBlockFromMiniport(a1);
        CxBlockFromMiniport->Chars.EvtCxPowerDereference(a1->MiniportAdapterContext);
      }
      KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v10);
    }
    if ( v4 )
    {
LABEL_38:
      ndisMResetMiniportInternal(a1, v7);
    }
    else if ( (a1->Flags & 0x1000) == 0 )
    {
      v12 = 0;
      while ( 1 )
      {
        if ( v12 )
        {
          Interval.QuadPart = -2500000LL;
          KeDelayExecutionThread(0, 0, &Interval);
        }
        v13 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
        a1->LockThread = KeGetCurrentThread();
        WSyncFlags = a1->WSyncFlags;
        if ( (WSyncFlags & 1) == 0 )
          break;
        if ( (WSyncFlags & 2) == 0 )
        {
          CFHangXTicks = a1->CFHangXTicks;
          if ( CFHangXTicks )
            a1->CFHangXTicks = CFHangXTicks - 1;
          else
            a1->WSyncFlags = WSyncFlags | 2;
          break;
        }
        if ( v13 == 254 )
        {
          a1->LockThread = 0LL;
          KeReleaseSpinLockFromDpcLevel(&a1->Lock);
        }
        else if ( v13 != 255 )
        {
          a1->LockThread = 0LL;
          KeReleaseSpinLock(&a1->Lock, v13);
        }
        if ( ++v12 >= 2 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v13) = 3;
            WPP_RECORDER_SF_qq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v13,
              17,
              10,
              (struct _GUID *)&WPP_e2f6c99a9d093186e9afc0671e670fa3_Traceguids,
              (char)a1,
              (char)a1->PendingOidRequest);
          }
          v7 = 1;
          goto LABEL_38;
        }
      }
      if ( v13 == 254 )
      {
        a1->LockThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(&a1->Lock);
      }
      else if ( v13 != 255 )
      {
        a1->LockThread = 0LL;
        KeReleaseSpinLock(&a1->Lock, v13);
      }
    }
  }
  else
  {
    v2 = 0;
  }
  if ( (unsigned int)Feature_CFHCancelTimerFix__private_IsEnabledDeviceUsageNoInline() )
  {
    v18 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    a1->MiniportThread = KeGetCurrentThread();
    v15 = v18;
    KeSetEvent(&a1->CFHCompletedEvent, 0, 0);
    _InterlockedExchange(&a1->CFHWorkItemQueued, 0);
    if ( !v2 )
    {
LABEL_54:
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(&a1->Lock, v15);
      goto LABEL_55;
    }
    v16 = (a1->Flags & 0x80000000) != 0;
LABEL_51:
    if ( !v16 && (a1->PnPFlags & 0x20080000) == 0 )
      ndisSetWakeUpTimer(a1);
    goto LABEL_54;
  }
  KeSetEvent(&a1->CFHCompletedEvent, 0, 0);
  _InterlockedExchange(&a1->CFHWorkItemQueued, 0);
  if ( v2 )
  {
    v15 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    a1->MiniportThread = KeGetCurrentThread();
    v16 = (a1->Flags & 0x80000000) != 0;
    goto LABEL_51;
  }
LABEL_55:
  ndisDereferenceMiniport(a1, 0x53u);
}

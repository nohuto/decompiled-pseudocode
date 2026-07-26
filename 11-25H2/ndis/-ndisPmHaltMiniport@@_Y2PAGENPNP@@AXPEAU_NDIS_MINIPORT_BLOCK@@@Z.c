/*
 * XREFs of ?ndisPmHaltMiniport@@_Y2PAGENPNP@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140185920
 * Callers:
 *     ?ndisSetDevicePower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@W4_DEVICE_POWER_STATE@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140056330 (-ndisSetDevicePower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@W4_DEVICE_POWER_STATE@@PEAU_NDIS_MINIP.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002B910 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x140068440 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     NdisResetEvent @ 0x14006A940 (NdisResetEvent.c)
 *     ?ndisMDeregisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14008FBA0 (-ndisMDeregisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@@@Z @ 0x1400993C0 (-NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@.c)
 *     ?ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4CallRunMode@@@Z @ 0x14015D7E0 (-ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4Ca.c)
 *     ?ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x140185AE0 (-ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

void __fastcall ndisPmHaltMiniport(struct _NDIS_MINIPORT_BLOCK *a1)
{
  KIRQL v2; // al
  KIRQL v3; // si
  unsigned __int64 *p_Lock; // rcx
  KIRQL v5; // al
  unsigned int Flags; // ecx

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      14,
      44,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      (char)a1);
  NdisTraceLoggingDeviceRemoved();
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  v2 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  a1->MiniportThread = KeGetCurrentThread();
  v3 = v2;
  NdisResetEvent(&a1->OpenReadyEvent);
  p_Lock = &a1->Lock;
  a1->MiniportThread = 0LL;
  if ( (a1->PnPFlags & 0x4000) != 0 )
  {
    KeReleaseSpinLock(p_Lock, v3);
    ndisDereferencePackage((PVOID *)&ndisPkgs);
  }
  else
  {
    KeReleaseSpinLock(p_Lock, v3);
    ndisMSetMiniportReadyForBinding(a1, 0, Reason_MiniportLowPower, RunSynchronous);
    v5 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    Flags = a1->Flags;
    a1->PnPFlags |= 0x4004u;
    a1->MiniportThread = 0LL;
    a1->Flags = Flags & 0x7FFFFFFE | 0x80000000;
    KeReleaseSpinLock(&a1->Lock, v5);
    ndisMCommonHaltMiniport(a1, ~(unsigned __int8)(a1->Flags >> 6) & 2 | 0x3C);
    _InterlockedOr((volatile signed __int32 *)&a1->InterlockedFlags, 0x10u);
    ndisMDeregisterBugCheckHandler(a1);
    ndisDereferencePackage((PVOID *)&ndisPkgs);
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4,
        14,
        45,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        (char)a1);
  }
}

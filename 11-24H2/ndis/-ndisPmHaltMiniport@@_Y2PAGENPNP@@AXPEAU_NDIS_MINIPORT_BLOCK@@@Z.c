/*
 * XREFs of ?ndisPmHaltMiniport@@_Y2PAGENPNP@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140181C30
 * Callers:
 *     ?ndisSetDevicePower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@W4_DEVICE_POWER_STATE@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140036540 (-ndisSetDevicePower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@W4_DEVICE_POWER_STATE@@PEAU_NDIS_MINIP.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002E9A0 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14004B9E0 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ??$ReadNoFence@KX@mem@@YAKPEDK@Z @ 0x14004CDA0 (--$ReadNoFence@KX@mem@@YAKPEDK@Z.c)
 *     NdisResetEvent @ 0x1400500C0 (NdisResetEvent.c)
 *     ?ndisMDeregisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140076E30 (-ndisMDeregisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@@@Z @ 0x14008DB60 (-NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@.c)
 *     ?ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4CallRunMode@@@Z @ 0x140161630 (-ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4Ca.c)
 *     ?ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x14017AC30 (-ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

void __fastcall ndisPmHaltMiniport(struct _NDIS_MINIPORT_BLOCK *a1)
{
  KIRQL v2; // al
  KIRQL v3; // bl
  unsigned __int64 *p_Lock; // rcx
  KIRQL v5; // al
  unsigned int No; // eax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
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
  a1->MiniportThread = 0LL;
  p_Lock = &a1->Lock;
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
    a1->MiniportThread = KeGetCurrentThread();
    _InterlockedOr((volatile signed __int32 *)&a1->Flags, 0x80000000);
    a1->PnPFlags |= 0x4000u;
    _InterlockedAnd((volatile signed __int32 *)&a1->Flags, 0xFFFFFFFE);
    a1->PnPFlags |= 4u;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v5);
    No = mem::ReadNoFence<unsigned long,void>(&a1->Flags);
    ndisMCommonHaltMiniport(a1, ~(unsigned __int8)(No >> 6) & 2 | 0x3C);
    _InterlockedOr((volatile signed __int32 *)&a1->InterlockedFlags, 0x10u);
    ndisMDeregisterBugCheckHandler(a1);
    ndisDereferencePackage((PVOID *)&ndisPkgs);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4,
        14,
        45,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        (char)a1);
  }
}

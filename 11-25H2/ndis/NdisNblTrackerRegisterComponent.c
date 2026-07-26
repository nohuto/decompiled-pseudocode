/*
 * XREFs of NdisNblTrackerRegisterComponent @ 0x14006E120
 * Callers:
 *     ?ndisUpdateNoPauseOnSuspend@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400170C0 (-ndisUpdateNoPauseOnSuspend@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAllocateOpenBlock@@YAPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x14006E230 (-ndisAllocateOpenBlock@@YAPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLO.c)
 *     ?ndisSelectiveSuspendInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14014BFA4 (-ndisSelectiveSuspendInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x140186B80 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x140189A40 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ?ndisNblTrackerDeleteTracker@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x140017220 (-ndisNblTrackerDeleteTracker@@YAXPEAU_NDIS_NBL_TRACKER@@@Z.c)
 *     ?ndisAllocatePerProcessorSlot@@YAPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z @ 0x14006E4B0 (-ndisAllocatePerProcessorSlot@@YAPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z.c)
 */

__int64 __fastcall NdisNblTrackerRegisterComponent(__int16 a1, __int64 a2, __int64 a3)
{
  __int64 Pool2; // rax
  __int64 v7; // rsi
  unsigned int v8; // edi
  struct PNDIS_PER_PROCESSOR_SLOT__ *PerProcessorSlot; // rax
  __int64 v10; // rcx
  KIRQL v12; // al
  __int64 *v13; // rcx

  if ( *(int *)ndisNblTrackerMode < 2 )
    return a2 | 2;
  Pool2 = ExAllocatePool2(64LL, 72LL, 1802781774);
  v7 = Pool2;
  if ( !Pool2 )
    return a2 | 2;
  *(_QWORD *)(Pool2 + 32) = a3;
  v8 = 0;
  *(_WORD *)(Pool2 + 16) = a1;
  *(_QWORD *)(Pool2 + 24) = a2;
  *(_QWORD *)(Pool2 + 8) = Pool2;
  *(_QWORD *)Pool2 = Pool2;
  while ( v8 < 2 )
  {
    PerProcessorSlot = ndisAllocatePerProcessorSlot(0x6B74444Eu);
    if ( !PerProcessorSlot )
    {
      ndisNblTrackerDeleteTracker((_QWORD *)v7);
      return a2 | 2;
    }
    v10 = 2LL * v8++;
    *(_QWORD *)(v7 + 8 * v10 + 40) = PerProcessorSlot;
  }
  v12 = KeAcquireSpinLockRaiseToDpc(&ndisNblTrackerListLock);
  v13 = (__int64 *)qword_1401266A0;
  if ( *(struct _NDIS_NBL_TRACKER ***)qword_1401266A0 != &ndisNblTrackerList )
    __fastfail(3u);
  *(_QWORD *)v7 = &ndisNblTrackerList;
  *(_QWORD *)(v7 + 8) = v13;
  *v13 = v7;
  qword_1401266A0 = v7;
  KeReleaseSpinLock(&ndisNblTrackerListLock, v12);
  return v7 | 1;
}

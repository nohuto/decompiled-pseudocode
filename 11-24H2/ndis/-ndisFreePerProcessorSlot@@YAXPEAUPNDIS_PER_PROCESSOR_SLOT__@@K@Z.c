/*
 * XREFs of ?ndisFreePerProcessorSlot@@YAXPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z @ 0x14004F210
 * Callers:
 *     NdisFreeRWLock @ 0x14004F170 (NdisFreeRWLock.c)
 *     ?ndisNblTrackerDeleteTracker@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x14004F1B0 (-ndisNblTrackerDeleteTracker@@YAXPEAU_NDIS_NBL_TRACKER@@@Z.c)
 *     ?ndisMCleanupMiniportBlockOnStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400638B0 (-ndisMCleanupMiniportBlockOnStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAllocateOpenBlock@@YAPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x14007BBB0 (-ndisAllocateOpenBlock@@YAPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLO.c)
 *     ?ndisFreeOpenBlock@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14007BD10 (-ndisFreeOpenBlock@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x14017BC40 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008ADC0 (-ndisBugCheckEx@@YAX_K000@Z.c)
 */

void __fastcall ndisFreePerProcessorSlot(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter4)
{
  ULONG_PTR v2; // rdi
  __int64 v4; // rbx
  ULONG_PTR v5; // rsi
  unsigned int i; // eax
  unsigned int v7; // ecx
  KIRQL v8; // al

  v2 = BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL;
  v4 = (__int64)(BugCheckParameter2 - (BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL)) >> 3;
  v5 = (BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL) + 4LL * (unsigned int)v4;
  if ( *(_DWORD *)(v5 - 4076) != (_DWORD)BugCheckParameter4 )
    ndisBugCheckEx(0x2CuLL, BugCheckParameter2, *(unsigned int *)(v5 - 4076), (unsigned int)BugCheckParameter4);
  for ( i = 0; i < ndisMaxNumberOfProcessors; *(_QWORD *)((v7 << 12) + BugCheckParameter2) = 0LL )
    v7 = i++;
  v8 = KeAcquireSpinLockRaiseToDpc(&ndisPerProcessorDescriptorLock);
  *(_DWORD *)(v5 - 4076) = *(_DWORD *)(v2 - 4080);
  *(_DWORD *)(v2 - 4080) = v4 | 0xFE000000;
  KeReleaseSpinLock(&ndisPerProcessorDescriptorLock, v8);
}

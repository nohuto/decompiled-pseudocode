/*
 * XREFs of ?ndisPcwCollectPhysicalData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1400809F0
 * Callers:
 *     ndisPhysicalNicPcwProviderCallback @ 0x14014A810 (ndisPhysicalNicPcwProviderCallback.c)
 * Callees:
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000E960 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000F080 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisPcwUpdatePhysicalMiniportCounters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_K@Z @ 0x140140E00 (-ndisPcwUpdatePhysicalMiniportCounters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_K@Z.c)
 *     ?ndisPcwAddSinglePhysicalInstance@@YAJPEAU_PCW_BUFFER@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140171DC0 (-ndisPcwAddSinglePhysicalInstance@@YAJPEAU_PCW_BUFFER@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisPcwCollectPhysicalData(struct _PCW_BUFFER *a1)
{
  int v2; // esi
  unsigned __int64 v3; // rbx
  KIRQL v4; // al
  struct _NDIS_MINIPORT_BLOCK *v5; // rdi
  KIRQL i; // bp

  v2 = 0;
  v3 = MEMORY[0xFFFFF78000000014];
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
  v5 = ndisMiniportList;
  for ( i = v4; v5; v5 = v5->NextGlobalMiniport )
  {
    if ( v2 < 0 )
      break;
    if ( v5->PnPDeviceState == NdisPnPDeviceStarted
      && v5->PhysicalPerformanceCounters
      && (unsigned __int8)ndisReferenceMiniport(v5, 0x59u) )
    {
      KeReleaseSpinLock(&ndisMiniportListLock, i);
      ndisPcwUpdatePhysicalMiniportCounters(v5, v3);
      v2 = ndisPcwAddSinglePhysicalInstance(a1, v5);
      i = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
      ndisDereferenceMiniport(v5, 0x59u);
    }
  }
  KeReleaseSpinLock(&ndisMiniportListLock, i);
  return (unsigned int)v2;
}

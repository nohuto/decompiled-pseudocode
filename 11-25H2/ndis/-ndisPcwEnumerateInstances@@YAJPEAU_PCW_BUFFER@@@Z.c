/*
 * XREFs of ?ndisPcwEnumerateInstances@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1400748E0
 * Callers:
 *     ndisCounterSetProviderCallback @ 0x1401667E0 (ndisCounterSetProviderCallback.c)
 * Callees:
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000E960 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000F080 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisPcwEnumerateSingleInstance@@YAJPEAU_PCW_BUFFER@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x14016BD50 (-ndisPcwEnumerateSingleInstance@@YAJPEAU_PCW_BUFFER@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

__int64 __fastcall ndisPcwEnumerateInstances(PPCW_BUFFER Buffer)
{
  int v2; // esi
  ULONG ActiveProcessorCount; // r14d
  KIRQL v4; // al
  struct _NDIS_MINIPORT_BLOCK *v5; // rdi
  KIRQL i; // bl
  unsigned int v7; // ebx

  v2 = 0;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
  v5 = ndisMiniportList;
  for ( i = v4; v5; v5 = v5->NextGlobalMiniport )
  {
    if ( v2 < 0 )
      break;
    if ( v5->PnPDeviceState == NdisPnPDeviceStarted && (unsigned __int8)ndisReferenceMiniport(v5, 0x58u) )
    {
      KeReleaseSpinLock(&ndisMiniportListLock, i);
      v7 = 0;
      if ( ActiveProcessorCount )
      {
        while ( 1 )
        {
          v2 = ndisPcwEnumerateSingleInstance(Buffer, v5, v7);
          if ( v2 < 0 )
            break;
          if ( ++v7 >= ActiveProcessorCount )
            goto LABEL_8;
        }
      }
      else
      {
LABEL_8:
        v2 = ndisPcwEnumerateSingleInstance(Buffer, v5, 0xFFFu);
      }
      i = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
      ndisDereferenceMiniport(v5, 0x58u);
    }
  }
  KeReleaseSpinLock(&ndisMiniportListLock, i);
  if ( v2 >= 0 )
    return ndisPcwEnumerateSingleInstance(Buffer, 0LL, 0xFFFFFFFE);
  else
    return (unsigned int)v2;
}

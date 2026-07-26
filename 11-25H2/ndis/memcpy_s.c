/*
 * XREFs of memcpy_s @ 0x14009AF00
 * Callers:
 *     ?ndisMUpdateNameOnPMWakePacket@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_WAKE_PACKET@@@Z @ 0x140078610 (-ndisMUpdateNameOnPMWakePacket@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_WAKE_PACKET@@@Z.c)
 *     ?ndisAddWoLMagicPacket@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400BA050 (-ndisAddWoLMagicPacket@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisInitializeDirectedWolPattern@@YAXPEAU_DIRECT_WOL_PATTERN@@KPEAU_RTL_BITMAP@@PEAPEAE@Z @ 0x1400BA9BC (-ndisInitializeDirectedWolPattern@@YAXPEAU_DIRECT_WOL_PATTERN@@KPEAU_RTL_BITMAP@@PEAPEAE@Z.c)
 * Callees:
 *     NdisQueryOffloadState @ 0x14009CC70 (NdisQueryOffloadState.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 *     memset @ 0x1400EE380 (memset.c)
 */

errno_t __cdecl memcpy_s(void *a1, rsize_t DstSize, const void *Src, rsize_t MaxCount)
{
  errno_t v8; // ebx

  if ( !MaxCount )
    return 0;
  if ( !a1 )
    goto LABEL_11;
  if ( Src && DstSize >= MaxCount )
  {
    memmove(a1, Src, MaxCount);
    return 0;
  }
  memset(a1, 0, DstSize);
  if ( Src )
  {
    if ( DstSize >= MaxCount )
      return 22;
    v8 = 34;
  }
  else
  {
LABEL_11:
    v8 = 22;
  }
  NdisQueryOffloadState(0LL);
  return v8;
}

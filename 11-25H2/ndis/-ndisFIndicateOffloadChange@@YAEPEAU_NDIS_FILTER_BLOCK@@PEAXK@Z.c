/*
 * XREFs of ?ndisFIndicateOffloadChange@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAXK@Z @ 0x1400826A0
 * Callers:
 *     ?ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x140069920 (-ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x140072EB0 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     ?ndisFAllocateFilterOffload@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140057FB0 (-ndisFAllocateFilterOffload@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 *     memset @ 0x1400EE380 (memset.c)
 */

unsigned __int8 __fastcall ndisFIndicateOffloadChange(
        struct _NDIS_FILTER_BLOCK *a1,
        unsigned __int16 *Src,
        unsigned int a3)
{
  _NDIS_FILTER_TASK_OFFLOAD *Offload; // rcx
  size_t v6; // rsi

  if ( a3 < 0x70 || *(_BYTE *)Src != 0xA7 || Src[1] < 0x70u || !*((_BYTE *)Src + 1) )
    return 0;
  Offload = a1->Offload;
  v6 = 220LL;
  if ( Offload )
  {
    memset(Offload, 0, sizeof(_NDIS_FILTER_TASK_OFFLOAD));
  }
  else if ( (unsigned int)ndisFAllocateFilterOffload(a1) )
  {
    return 0;
  }
  if ( Src[1] < 0xDCu )
    v6 = Src[1];
  memmove(a1->Offload, Src, v6);
  return 1;
}

/*
 * XREFs of ?ndisFIndicateStatusWrapper@@YAXPEAX@Z @ 0x140032B10
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x140032B30 (-ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 */

void __fastcall ndisFIndicateStatusWrapper(PVOID Parameter)
{
  ndisFIndicateStatusInternal(
    *((struct _NDIS_FILTER_BLOCK **)Parameter + 1),
    *((struct _NDIS_STATUS_INDICATION **)Parameter + 3));
}

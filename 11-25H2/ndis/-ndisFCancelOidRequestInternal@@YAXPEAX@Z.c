/*
 * XREFs of ?ndisFCancelOidRequestInternal@@YAXPEAX@Z @ 0x1400A3250
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisCancelOidRequestInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAXE@Z @ 0x1400C0AFC (-ndisCancelOidRequestInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAXE@Z.c)
 */

void __fastcall ndisFCancelOidRequestInternal(void *a1)
{
  ndisCancelOidRequestInternal(
    *(struct _NDIS_MINIPORT_BLOCK **)(*((_QWORD *)a1 + 1) + 32LL),
    *((struct _NDIS_FILTER_BLOCK **)a1 + 1),
    *((void **)a1 + 3),
    0);
}

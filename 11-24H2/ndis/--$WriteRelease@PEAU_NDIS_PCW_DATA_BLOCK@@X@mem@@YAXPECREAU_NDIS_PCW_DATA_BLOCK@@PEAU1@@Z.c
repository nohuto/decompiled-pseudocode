/*
 * XREFs of ??$WriteRelease@PEAU_NDIS_PCW_DATA_BLOCK@@X@mem@@YAXPECREAU_NDIS_PCW_DATA_BLOCK@@PEAU1@@Z @ 0x1400B1C78
 * Callers:
 *     ?ndisPcwGetMiniportDataBlockInternal@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401664E0 (-ndisPcwGetMiniportDataBlockInternal@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall mem::WriteRelease<_NDIS_PCW_DATA_BLOCK *,void>(_QWORD *a1, __int64 a2)
{
  *a1 = a2;
}

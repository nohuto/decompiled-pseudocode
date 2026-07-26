/*
 * XREFs of ?ndisEqualUnicodeStringDispatchLevel@@YA_NPEBU_UNICODE_STRING@@0@Z @ 0x140032700
 * Callers:
 *     ndisMapOpenByName @ 0x1400A32B8 (ndisMapOpenByName.c)
 *     ?ndisFindMiniportOnGlobalList@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@@Z @ 0x140170008 (-ndisFindMiniportOnGlobalList@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x140172D30 (-ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_R.c)
 *     ndisFindRootDevice @ 0x140175C60 (ndisFindRootDevice.c)
 * Callees:
 *     memcmp @ 0x1400E7A20 (memcmp.c)
 */

bool __fastcall ndisEqualUnicodeStringDispatchLevel(const struct _UNICODE_STRING *a1, const struct _UNICODE_STRING *a2)
{
  return a1->Length == a2->Length && memcmp(a1->Buffer, a2->Buffer, a1->Length) == 0;
}

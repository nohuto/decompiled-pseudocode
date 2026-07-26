/*
 * XREFs of ?ndisEqualUnicodeStringDispatchLevel@@YA_NPEBU_UNICODE_STRING@@0@Z @ 0x14005E4D0
 * Callers:
 *     ndisMapOpenByName @ 0x1400AB468 (ndisMapOpenByName.c)
 *     ?ndisFindMiniportOnGlobalList@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@@Z @ 0x14017B008 (-ndisFindMiniportOnGlobalList@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x14017DCF0 (-ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_R.c)
 *     ndisFindRootDevice @ 0x140183630 (ndisFindRootDevice.c)
 * Callees:
 *     memcmp @ 0x1400EE8A0 (memcmp.c)
 */

bool __fastcall ndisEqualUnicodeStringDispatchLevel(const struct _UNICODE_STRING *a1, const struct _UNICODE_STRING *a2)
{
  return a1->Length == a2->Length && memcmp(a1->Buffer, a2->Buffer, a1->Length) == 0;
}

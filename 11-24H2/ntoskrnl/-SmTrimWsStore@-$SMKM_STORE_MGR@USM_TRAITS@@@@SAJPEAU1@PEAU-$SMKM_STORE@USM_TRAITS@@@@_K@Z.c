/*
 * XREFs of ?SmTrimWsStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@_K@Z @ 0x1404B43DC
 * Callers:
 *     SmStoreCompressionStop @ 0x140A4CBCC (SmStoreCompressionStop.c)
 *     SmProcessSystemStoreTrimRequest @ 0x140A5FC18 (SmProcessSystemStoreTrimRequest.c)
 * Callees:
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x14039A348 (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmTrimWsStore(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  if ( (*a2 & 0x20000) != 0 )
    return SMKM_STORE<SM_TRAITS>::SmStTrimWsStore((__int64)a2, a3);
  else
    return 3221225659LL;
}

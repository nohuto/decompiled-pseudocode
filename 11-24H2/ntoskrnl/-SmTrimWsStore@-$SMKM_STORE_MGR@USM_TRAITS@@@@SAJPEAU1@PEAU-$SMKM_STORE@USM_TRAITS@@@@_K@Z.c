/*
 * XREFs of ?SmTrimWsStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@_K@Z @ 0x1404AEC1C
 * Callers:
 *     SmStoreCompressionStop @ 0x140A4375C (SmStoreCompressionStop.c)
 *     SmProcessSystemStoreTrimRequest @ 0x140A58168 (SmProcessSystemStoreTrimRequest.c)
 * Callees:
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x1402F7648 (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmTrimWsStore(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  if ( (*a2 & 0x20000) != 0 )
    return SMKM_STORE<SM_TRAITS>::SmStTrimWsStore((__int64)a2, a3);
  else
    return 3221225659LL;
}

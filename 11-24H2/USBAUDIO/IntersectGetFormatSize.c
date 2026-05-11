/*
 * XREFs of IntersectGetFormatSize @ 0x14003ADFC
 * Callers:
 *     PinDataFormatIntersection @ 0x14003AB60 (PinDataFormatIntersection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IntersectGetFormatSize(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rdx
  __int64 v3; // rdx

  v1 = *(_QWORD *)(a1 + 32) - KSDATAFORMAT_SUBTYPE_DOLBY_AC3_SPDIF;
  if ( !v1 )
    v1 = *(_QWORD *)(a1 + 40) - *((_QWORD *)&KSDATAFORMAT_SUBTYPE_DOLBY_AC3_SPDIF + 1);
  if ( !v1 )
    return 82LL;
  v2 = *(_QWORD *)(a1 + 32) - KSDATAFORMAT_SUBTYPE_DOLBY_MP3_SPDIF;
  if ( !v2 )
    v2 = *(_QWORD *)(a1 + 40) - *((_QWORD *)&KSDATAFORMAT_SUBTYPE_DOLBY_MP3_SPDIF + 1);
  if ( !v2 )
    return 82LL;
  v3 = *(_QWORD *)(a1 + 32) - KSDATAFORMAT_SUBTYPE_WMA_SPDIF;
  if ( !v3 )
    v3 = *(_QWORD *)(a1 + 40) - *((_QWORD *)&KSDATAFORMAT_SUBTYPE_WMA_SPDIF + 1);
  if ( v3 && (*(_DWORD *)(a1 + 104) > 0x10u || *(_DWORD *)(a1 + 64) > 2u) )
    return 104LL;
  else
    return 82LL;
}

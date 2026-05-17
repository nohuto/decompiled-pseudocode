/*
 * XREFs of RtlpGetProcessCodepagesForLocale @ 0x18011ED5C
 * Callers:
 *     LdrpFusionManifestCodePages @ 0x1800AC848 (LdrpFusionManifestCodePages.c)
 * Callees:
 *     RtlpNlsGetNameIndex @ 0x180033300 (RtlpNlsGetNameIndex.c)
 *     RtlpLoadNlsData @ 0x1800333EC (RtlpLoadNlsData.c)
 *     RtlpNlsGetLcidIndex @ 0x1800363D0 (RtlpNlsGetLcidIndex.c)
 */

__int64 __fastcall RtlpGetProcessCodepagesForLocale(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  char v6; // si
  int LcidIndex; // eax
  __int64 v8; // r8
  int v9; // edx
  int NameIndex; // eax
  __int64 v11; // rcx

  if ( !pTblPtrs && !RtlpLoadNlsData() )
    return 3221225473LL;
  v6 = 0;
  if ( a1 )
  {
    NameIndex = RtlpNlsGetNameIndex(a1);
    if ( NameIndex < 0 )
      return 3221225473LL;
    _mm_lfence();
    v8 = pTblPtrs;
    v9 = *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 24) + 8LL * NameIndex + 2);
  }
  else
  {
    v6 = 1;
    LcidIndex = RtlpNlsGetLcidIndex(gSystemLocale);
    if ( LcidIndex < 0 )
      return 3221225473LL;
    _mm_lfence();
    v8 = pTblPtrs;
    v9 = *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 16) + 8LL * LcidIndex + 4);
  }
  v11 = *(_QWORD *)(v8 + 8) + *(unsigned __int16 *)(v8 + 48) * v9;
  *a2 = *(unsigned __int16 *)(v11 + 110);
  *a3 = *(unsigned __int16 *)(v11 + 112);
  if ( *a2 )
    return 0LL;
  if ( v6 )
  {
    *a2 = 1252;
    *a3 = 437;
    return 0LL;
  }
  return 3221225473LL;
}

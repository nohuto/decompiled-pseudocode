/*
 * XREFs of RtlpGetProcessCodepagesForLocale @ 0x18012062C
 * Callers:
 *     LdrpFusionManifestCodePages @ 0x1800AFF58 (LdrpFusionManifestCodePages.c)
 * Callees:
 *     RtlpNlsGetLcidIndex @ 0x18005BBE0 (RtlpNlsGetLcidIndex.c)
 *     RtlpNlsGetNameIndex @ 0x18005C590 (RtlpNlsGetNameIndex.c)
 *     RtlpLoadNlsData @ 0x18005C67C (RtlpLoadNlsData.c)
 */

__int64 __fastcall RtlpGetProcessCodepagesForLocale(__int64 a1, _DWORD *a2, _DWORD *a3, ULONG *a4)
{
  char v7; // si
  int LcidIndex; // eax
  __int64 v9; // r8
  int v10; // edx
  int NameIndex; // eax
  __int64 v12; // rcx

  if ( !pTblPtrs && !RtlpLoadNlsData(a1, (__int64)a2, (__int64)a3, a4) )
    return 3221225473LL;
  v7 = 0;
  if ( a1 )
  {
    NameIndex = RtlpNlsGetNameIndex(a1);
    if ( NameIndex < 0 )
      return 3221225473LL;
    _mm_lfence();
    v9 = pTblPtrs;
    v10 = *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 24) + 8LL * NameIndex + 2);
  }
  else
  {
    v7 = 1;
    LcidIndex = RtlpNlsGetLcidIndex(gSystemLocale);
    if ( LcidIndex < 0 )
      return 3221225473LL;
    _mm_lfence();
    v9 = pTblPtrs;
    v10 = *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 16) + 8LL * LcidIndex + 4);
  }
  v12 = *(_QWORD *)(v9 + 8) + *(unsigned __int16 *)(v9 + 48) * v10;
  *a2 = *(unsigned __int16 *)(v12 + 110);
  *a3 = *(unsigned __int16 *)(v12 + 112);
  if ( *a2 )
    return 0LL;
  if ( v7 )
  {
    *a2 = 1252;
    *a3 = 437;
    return 0LL;
  }
  return 3221225473LL;
}

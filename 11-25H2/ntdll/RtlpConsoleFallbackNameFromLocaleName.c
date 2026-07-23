/*
 * XREFs of RtlpConsoleFallbackNameFromLocaleName @ 0x1800A86FC
 * Callers:
 *     RtlpFilterandReplaceConsoleLanguages @ 0x1800A84AC (RtlpFilterandReplaceConsoleLanguages.c)
 * Callees:
 *     RtlpNlsGetLcidIndex @ 0x18005BBE0 (RtlpNlsGetLcidIndex.c)
 *     RtlpNlsGetNameIndex @ 0x18005C590 (RtlpNlsGetNameIndex.c)
 *     RtlpLoadNlsData @ 0x18005C67C (RtlpLoadNlsData.c)
 *     RtlInitUnicodeString @ 0x1800A8A00 (RtlInitUnicodeString.c)
 *     RtlpGetAlternateCodePage @ 0x1800A9158 (RtlpGetAlternateCodePage.c)
 *     _wcsicmp @ 0x180124750 (_wcsicmp.c)
 */

__int64 __fastcall RtlpConsoleFallbackNameFromLocaleName(
        wchar_t *String2,
        __int64 a2,
        bool *a3,
        _UNICODE_STRING *a4,
        __int64 a5,
        unsigned __int16 a6)
{
  bool v6; // bl
  char v9; // r14
  bool v11; // zf
  int LcidIndex; // eax
  int v13; // edx
  __int64 v14; // rax
  int NameIndex; // eax
  __int64 v16; // rcx
  __int64 v17; // rax
  int v18; // r15d
  int v19; // r12d
  int v20; // r9d
  const WCHAR *v21; // rdx
  __int16 i; // cx
  const wchar_t *v24; // rdi
  const wchar_t *v25; // r14
  int v26; // eax
  int v27; // edx
  __int64 v28; // rax
  int AlternateCodePage; // edx
  int v30; // eax
  int v31; // [rsp+20h] [rbp-38h]
  _QWORD v32[6]; // [rsp+28h] [rbp-30h] BYREF
  int v33; // [rsp+60h] [rbp+8h]

  v6 = 0;
  v32[0] = 0LL;
  v9 = a2;
  if ( !String2 )
    return 3221225711LL;
  if ( !a3 )
    return 3221225713LL;
  if ( !a4 )
    return 3221225714LL;
  v11 = pTblPtrs == 0;
  *a3 = 0;
  if ( !v11 || RtlpLoadNlsData((__int64)String2, a2, (__int64)a3, (ULONG *)&a4->Length) )
  {
    LcidIndex = RtlpNlsGetLcidIndex(gSystemLocale);
    if ( LcidIndex >= 0 )
    {
      _mm_lfence();
      v13 = *(unsigned __int16 *)(pTblPtrs + 48)
          * *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 16) + 8LL * LcidIndex + 4);
      v14 = *(_QWORD *)(pTblPtrs + 8);
      v33 = *(unsigned __int16 *)(v13 + v14 + 110);
      v31 = *(unsigned __int16 *)(v13 + v14 + 112);
      NameIndex = RtlpNlsGetNameIndex((__int64)String2);
      if ( NameIndex >= 0 )
      {
        _mm_lfence();
        v16 = *(_QWORD *)(pTblPtrs + 8);
        v17 = *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 24) + 8LL * NameIndex + 2)
            * *(unsigned __int16 *)(pTblPtrs + 48);
        v18 = *(unsigned __int16 *)(v17 + v16 + 110);
        v19 = *(unsigned __int16 *)(v17 + v16 + 112);
        if ( (unsigned int)(v18 - 1250) <= 7 )
        {
          v20 = 149;
          if ( _bittest(&v20, v18 - 1250) )
          {
            v21 = String2;
LABEL_24:
            *a3 = v6;
            RtlInitUnicodeString(a4, v21);
            return 0LL;
          }
        }
        v24 = (const wchar_t *)(*(_QWORD *)(pTblPtrs + 32) + 2LL + 2LL * *(unsigned int *)(v17 + v16 + 276));
        if ( v9 && !wcsicmp(v24, String2) )
        {
          v25 = String2;
LABEL_23:
          v21 = v25;
          goto LABEL_24;
        }
        v25 = L"en-US";
        if ( !wcsicmp(v24, L"en") || !wcsicmp(v24, L"en-US") )
          goto LABEL_20;
        if ( wcsicmp(v24, String2) )
        {
          v26 = RtlpNlsGetNameIndex((__int64)v24);
          if ( v26 < 0 )
            goto LABEL_19;
          _mm_lfence();
          v27 = *(unsigned __int16 *)(pTblPtrs + 48) * *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 24) + 8LL * v26 + 2);
          v28 = *(_QWORD *)(pTblPtrs + 8);
          v18 = *(unsigned __int16 *)(v27 + v28 + 110);
          v19 = *(unsigned __int16 *)(v27 + v28 + 112);
        }
        AlternateCodePage = RtlpGetAlternateCodePage(a5, v24, v32);
        if ( !a6 || AlternateCodePage || a6 == v18 || a6 == v19 )
        {
          if ( v18 == v33 || v18 == v31 || v19 == v33 || v19 == v31 )
            goto LABEL_20;
          if ( AlternateCodePage )
          {
            if ( AlternateCodePage != -1 )
            {
              for ( i = 0; i < AlternateCodePage; ++i )
              {
                if ( *(__int16 *)(v32[0] + 2LL * i) > 0 )
                {
                  v30 = *(__int16 *)(v32[0] + 2LL * i);
                  if ( v30 == v33 || v30 == v31 )
                    goto LABEL_20;
                }
              }
              goto LABEL_19;
            }
LABEL_20:
            if ( wcsicmp(v24, L"en") )
              v25 = v24;
            v6 = wcsicmp(v25, String2) != 0;
            goto LABEL_23;
          }
        }
LABEL_19:
        v24 = L"en-US";
        goto LABEL_20;
      }
      return 3221225711LL;
    }
  }
  return 3221225473LL;
}

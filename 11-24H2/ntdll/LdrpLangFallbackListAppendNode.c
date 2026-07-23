/*
 * XREFs of LdrpLangFallbackListAppendNode @ 0x180012EE0
 * Callers:
 *     RtlpAddNeutralsToMergedList @ 0x180012510 (RtlpAddNeutralsToMergedList.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x1800145C0 (LdrpMergeParentBaseLanguagesToList.c)
 *     LdrpMergeLangFallbackLists @ 0x180015940 (LdrpMergeLangFallbackLists.c)
 *     RtlpFilterandReplaceConsoleLanguages @ 0x1800C798C (RtlpFilterandReplaceConsoleLanguages.c)
 * Callees:
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180013360 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpNlsGetNameIndex @ 0x1800143C0 (RtlpNlsGetNameIndex.c)
 *     RtlpLoadNlsData @ 0x1800144AC (RtlpLoadNlsData.c)
 *     RtlpMatchUserLanguage @ 0x18009A410 (RtlpMatchUserLanguage.c)
 *     RtlpMatchUILanguage @ 0x18009A584 (RtlpMatchUILanguage.c)
 *     RtlpIsCustomLocale @ 0x1800F2354 (RtlpIsCustomLocale.c)
 *     __report_rangecheckfailure @ 0x18011EC5C (__report_rangecheckfailure.c)
 *     _wcsicmp @ 0x180120EA0 (_wcsicmp.c)
 *     wcslen @ 0x180125A00 (wcslen.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

__int64 __fastcall LdrpLangFallbackListAppendNode(__int64 *a1, __int64 a2, char a3, __int16 *a4, wchar_t *String)
{
  __int16 *v5; // rdi
  __int64 v6; // r10
  unsigned int v8; // r15d
  __int64 v9; // rbx
  size_t v10; // rax
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rdi
  _QWORD *v13; // r14
  __int64 v14; // r13
  __int64 v15; // r14
  int v16; // edi
  __int64 v17; // rbp
  wchar_t *v18; // rcx
  unsigned __int16 i; // dx
  __int64 v20; // r8
  __int64 v21; // rax
  int v22; // r10d
  __int64 v23; // rdi
  int NameIndex; // eax
  int v25; // r10d
  char v26; // al
  __int64 v27; // r14
  int v28; // edi
  __int64 v29; // rbp
  wchar_t *v30; // rcx
  __int16 j; // r8
  __int64 result; // rax
  __int16 v33; // dx
  unsigned __int16 *v34; // rdx
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  bool v38; // zf
  int v39; // eax
  int v40; // [rsp+40h] [rbp-118h]
  __int64 v44; // [rsp+58h] [rbp-100h]
  wchar_t String2[88]; // [rsp+60h] [rbp-F8h] BYREF

  v5 = a4;
  v6 = a2;
  if ( !a1 || !*a1 || !String || !a4 )
    return 3221225485LL;
  v8 = 0;
  v9 = -1LL;
  *a4 = -1;
  v44 = *a1;
  v40 = 0;
  if ( a2 && *a1 )
  {
    v10 = 2 * wcslen(String);
    if ( v10 >= 0xFFFE )
      LOWORD(v10) = -4;
    if ( !(_WORD)v10 || (unsigned int)(unsigned __int16)v10 + 2 > 0x55 )
    {
LABEL_47:
      v6 = a2;
      goto LABEL_48;
    }
    v11 = (unsigned __int16)v10;
    memmove(String2, String, (unsigned __int16)v10);
    v12 = v11 >> 1;
    if ( v12 >= 85 )
      _report_rangecheckfailure();
    v13 = g_RegInfo;
    String2[v12] = 0;
    if ( v13 )
    {
      v14 = v13[3];
      if ( v14 )
      {
        if ( *(_QWORD *)(v14 + 16) && String2[0] )
        {
          v15 = v13[4];
          if ( v15 )
          {
            v16 = 0;
            v17 = 0LL;
            while ( v16 < *(unsigned __int16 *)(v15 + 6) )
            {
              v18 = (wchar_t *)(*(_QWORD *)(v15 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v15 + 16) + v17));
              if ( v18 == String2 || !wcsicmp(v18, String2) )
              {
                if ( v16 < 0 )
                  break;
                goto LABEL_23;
              }
              ++v16;
              v17 += 2LL;
            }
          }
          LOWORD(v16) = -1;
LABEL_23:
          if ( (v16 & 0x8000u) == 0 )
          {
            for ( i = 0; ; ++i )
            {
              if ( i >= *(_WORD *)(v14 + 6) )
                goto LABEL_29;
              v20 = 28LL * i;
              v21 = *(_QWORD *)(v14 + 16);
              if ( *(_WORD *)(v20 + v21 + 6) == (_WORD)v16 )
                break;
            }
            v22 = *(unsigned __int16 *)(v20 + v21 + 4);
            v40 = v22;
            goto LABEL_33;
          }
        }
      }
    }
LABEL_29:
    v23 = pTblPtrs;
    if ( !pTblPtrs )
    {
      if ( !(unsigned __int8)RtlpLoadNlsData() )
        goto LABEL_68;
      v23 = pTblPtrs;
    }
    NameIndex = RtlpNlsGetNameIndex(String2);
    if ( NameIndex >= 0 )
    {
      v25 = *(_DWORD *)(*(_QWORD *)(v23 + 24) + 8LL * NameIndex + 4);
      v26 = 1;
      v22 = v25 & 0x7FFFFFFF;
      v40 = v22;
LABEL_32:
      if ( v26 )
      {
LABEL_33:
        if ( ((v22 - 4096) & 0xFFFFFBFF) == 0 )
        {
          v22 = 0;
          v40 = 0;
        }
        if ( !*String )
          goto LABEL_73;
        v27 = *(_QWORD *)(a2 + 32);
        if ( v27 )
        {
          v28 = 0;
          v29 = 0LL;
          while ( v28 < *(unsigned __int16 *)(v27 + 6) )
          {
            v30 = (wchar_t *)(*(_QWORD *)(v27 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v27 + 16) + v29));
            if ( v30 == String || !wcsicmp(v30, String) )
            {
              v22 = v40;
              if ( v28 >= 0 )
                goto LABEL_43;
              goto LABEL_63;
            }
            ++v28;
            v29 += 2LL;
          }
          v22 = v40;
        }
LABEL_63:
        LOWORD(v28) = -1;
LABEL_43:
        if ( (v28 & 0x8000u) != 0 )
LABEL_73:
          LOWORD(v28) = -1;
        for ( j = 0; ; ++j )
        {
          if ( j >= (int)*(unsigned __int16 *)(v44 + 4) )
            goto LABEL_46;
          v34 = (unsigned __int16 *)(*(_QWORD *)(v44 + 24) + 6LL * j);
          v35 = *v34;
          if ( v35 != 2 )
            break;
          v36 = 28LL * (__int16)v34[2];
          v37 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL);
          if ( (__int16)v28 > 0 && (_WORD)v28 == *(_WORD *)(v36 + v37 + 6) )
          {
LABEL_65:
            v5 = a4;
            result = 0LL;
            *a4 = j;
            if ( j < 0 )
              goto LABEL_47;
            return result;
          }
          if ( v22 )
          {
            v38 = v22 == *(unsigned __int16 *)(v36 + v37 + 4);
LABEL_60:
            if ( v38 )
              goto LABEL_65;
            continue;
          }
LABEL_61:
          ;
        }
        v39 = v35 - 1;
        if ( v39 )
        {
          if ( v39 != 2 || (_WORD)v28 == 0xFFFF )
            goto LABEL_61;
          v38 = v34[2] == (unsigned __int16)v28;
        }
        else
        {
          if ( !v22 )
            goto LABEL_61;
          v38 = (__int16)v34[2] == v22;
        }
        goto LABEL_60;
      }
LABEL_46:
      v5 = a4;
      goto LABEL_47;
    }
    if ( (unsigned __int8)RtlpIsCustomLocale(String2) )
    {
      if ( (unsigned __int8)RtlpMatchUILanguage(String2) )
      {
        v22 = 5120;
        v26 = 1;
        v40 = 5120;
      }
      else
      {
        v38 = (unsigned __int8)RtlpMatchUserLanguage(String2) == 0;
        v26 = 1;
        if ( v38 )
        {
          v22 = 4096;
          v40 = 4096;
        }
        else
        {
          v22 = 3072;
          v40 = 3072;
        }
      }
      goto LABEL_32;
    }
LABEL_68:
    v22 = 0;
    v26 = 0;
    goto LABEL_32;
  }
LABEL_48:
  if ( !a3 )
    v8 = 2;
  do
    v38 = String[++v9] == 0;
  while ( !v38 );
  result = RtlpMuiRegAddMultiSzToLangFallbackList(v6, String, (unsigned int)(v9 + 1), v8, 2, 1, a1);
  if ( (int)result >= 0 )
  {
    v33 = *(_WORD *)(*a1 + 4);
    if ( v33 )
      *v5 = v33 - 1;
  }
  return result;
}

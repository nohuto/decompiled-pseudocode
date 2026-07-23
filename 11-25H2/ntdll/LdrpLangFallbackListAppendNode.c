/*
 * XREFs of LdrpLangFallbackListAppendNode @ 0x18005A8F0
 * Callers:
 *     LdrpMergeLangFallbackLists @ 0x18008D050 (LdrpMergeLangFallbackLists.c)
 *     RtlpAddNeutralsToMergedList @ 0x1800A80C0 (RtlpAddNeutralsToMergedList.c)
 *     RtlpFilterandReplaceConsoleLanguages @ 0x1800A84AC (RtlpFilterandReplaceConsoleLanguages.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x1800A93A0 (LdrpMergeParentBaseLanguagesToList.c)
 * Callees:
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x18005AD70 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpNlsGetNameIndex @ 0x18005C590 (RtlpNlsGetNameIndex.c)
 *     RtlpLoadNlsData @ 0x18005C67C (RtlpLoadNlsData.c)
 *     RtlpIsCustomLocale @ 0x1800F943C (RtlpIsCustomLocale.c)
 *     RtlpMatchUserLanguage @ 0x180115B18 (RtlpMatchUserLanguage.c)
 *     RtlpMatchUILanguage @ 0x180118314 (RtlpMatchUILanguage.c)
 *     __report_rangecheckfailure @ 0x18012250C (__report_rangecheckfailure.c)
 *     _wcsicmp @ 0x180124750 (_wcsicmp.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall LdrpLangFallbackListAppendNode(__int64 *a1, __int64 a2, char a3, __int16 *a4, wchar_t *String)
{
  __int16 *v5; // rdi
  __int64 v6; // r10
  unsigned int v8; // r15d
  __int64 v9; // rbx
  size_t v10; // rax
  unsigned __int64 v11; // rdi
  __int64 v12; // rcx
  unsigned __int64 v13; // rdi
  _QWORD *v14; // r14
  __int64 v15; // r13
  __int64 v16; // r14
  int v17; // edi
  __int64 v18; // rbp
  wchar_t *v19; // rcx
  unsigned __int16 i; // dx
  __int64 v21; // r8
  __int64 v22; // rax
  int v23; // r10d
  __int64 v24; // rdi
  int NameIndex; // eax
  int v26; // r10d
  char v27; // al
  __int64 v28; // r14
  int v29; // edi
  __int64 v30; // rbp
  wchar_t *v31; // rcx
  __int16 j; // r8
  __int64 result; // rax
  __int16 v34; // dx
  unsigned __int16 *v35; // rdx
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  bool v39; // zf
  int v40; // eax
  int v41; // [rsp+40h] [rbp-118h]
  __int64 v45; // [rsp+58h] [rbp-100h]
  wchar_t String2[88]; // [rsp+60h] [rbp-F8h] BYREF

  v5 = a4;
  v6 = a2;
  if ( !a1 || !*a1 || !String || !a4 )
    return 3221225485LL;
  v8 = 0;
  v9 = -1LL;
  *a4 = -1;
  v45 = *a1;
  v41 = 0;
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
    v13 = v11 >> 1;
    if ( v13 >= 85 )
      _report_rangecheckfailure(v12);
    v14 = g_RegInfo;
    String2[v13] = 0;
    if ( v14 )
    {
      v15 = v14[3];
      if ( v15 )
      {
        if ( *(_QWORD *)(v15 + 16) && String2[0] )
        {
          v16 = v14[4];
          if ( v16 )
          {
            v17 = 0;
            v18 = 0LL;
            while ( v17 < *(unsigned __int16 *)(v16 + 6) )
            {
              v19 = (wchar_t *)(*(_QWORD *)(v16 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v16 + 16) + v18));
              if ( v19 == String2 || !wcsicmp(v19, String2) )
              {
                if ( v17 < 0 )
                  break;
                goto LABEL_23;
              }
              ++v17;
              v18 += 2LL;
            }
          }
          LOWORD(v17) = -1;
LABEL_23:
          if ( (v17 & 0x8000u) == 0 )
          {
            for ( i = 0; ; ++i )
            {
              if ( i >= *(_WORD *)(v15 + 6) )
                goto LABEL_29;
              v21 = 28LL * i;
              v22 = *(_QWORD *)(v15 + 16);
              if ( *(_WORD *)(v21 + v22 + 6) == (_WORD)v17 )
                break;
            }
            v23 = *(unsigned __int16 *)(v21 + v22 + 4);
            v41 = v23;
            goto LABEL_33;
          }
        }
      }
    }
LABEL_29:
    v24 = pTblPtrs;
    if ( !pTblPtrs )
    {
      if ( !(unsigned __int8)RtlpLoadNlsData() )
        goto LABEL_68;
      v24 = pTblPtrs;
    }
    NameIndex = RtlpNlsGetNameIndex(String2);
    if ( NameIndex >= 0 )
    {
      v26 = *(_DWORD *)(*(_QWORD *)(v24 + 24) + 8LL * NameIndex + 4);
      v27 = 1;
      v23 = v26 & 0x7FFFFFFF;
      v41 = v23;
LABEL_32:
      if ( v27 )
      {
LABEL_33:
        if ( ((v23 - 4096) & 0xFFFFFBFF) == 0 )
        {
          v23 = 0;
          v41 = 0;
        }
        if ( !*String )
          goto LABEL_73;
        v28 = *(_QWORD *)(a2 + 32);
        if ( v28 )
        {
          v29 = 0;
          v30 = 0LL;
          while ( v29 < *(unsigned __int16 *)(v28 + 6) )
          {
            v31 = (wchar_t *)(*(_QWORD *)(v28 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v28 + 16) + v30));
            if ( v31 == String || !wcsicmp(v31, String) )
            {
              v23 = v41;
              if ( v29 >= 0 )
                goto LABEL_43;
              goto LABEL_63;
            }
            ++v29;
            v30 += 2LL;
          }
          v23 = v41;
        }
LABEL_63:
        LOWORD(v29) = -1;
LABEL_43:
        if ( (v29 & 0x8000u) != 0 )
LABEL_73:
          LOWORD(v29) = -1;
        for ( j = 0; ; ++j )
        {
          if ( j >= (int)*(unsigned __int16 *)(v45 + 4) )
            goto LABEL_46;
          v35 = (unsigned __int16 *)(*(_QWORD *)(v45 + 24) + 6LL * j);
          v36 = *v35;
          if ( v36 != 2 )
            break;
          v37 = 28LL * (__int16)v35[2];
          v38 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL);
          if ( (__int16)v29 > 0 && (_WORD)v29 == *(_WORD *)(v37 + v38 + 6) )
          {
LABEL_65:
            v5 = a4;
            result = 0LL;
            *a4 = j;
            if ( j < 0 )
              goto LABEL_47;
            return result;
          }
          if ( v23 )
          {
            v39 = v23 == *(unsigned __int16 *)(v37 + v38 + 4);
LABEL_60:
            if ( v39 )
              goto LABEL_65;
            continue;
          }
LABEL_61:
          ;
        }
        v40 = v36 - 1;
        if ( v40 )
        {
          if ( v40 != 2 || (_WORD)v29 == 0xFFFF )
            goto LABEL_61;
          v39 = v35[2] == (unsigned __int16)v29;
        }
        else
        {
          if ( !v23 )
            goto LABEL_61;
          v39 = (__int16)v35[2] == v23;
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
        v23 = 5120;
        v27 = 1;
        v41 = 5120;
      }
      else
      {
        v39 = (unsigned __int8)RtlpMatchUserLanguage(String2) == 0;
        v27 = 1;
        if ( v39 )
        {
          v23 = 4096;
          v41 = 4096;
        }
        else
        {
          v23 = 3072;
          v41 = 3072;
        }
      }
      goto LABEL_32;
    }
LABEL_68:
    v23 = 0;
    v27 = 0;
    goto LABEL_32;
  }
LABEL_48:
  if ( !a3 )
    v8 = 2;
  do
    v39 = String[++v9] == 0;
  while ( !v39 );
  result = RtlpMuiRegAddMultiSzToLangFallbackList(v6, String, (unsigned int)(v9 + 1), v8, 2, 1, a1);
  if ( (int)result >= 0 )
  {
    v34 = *(_WORD *)(*a1 + 4);
    if ( v34 )
      *v5 = v34 - 1;
  }
  return result;
}

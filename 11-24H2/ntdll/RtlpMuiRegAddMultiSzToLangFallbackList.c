/*
 * XREFs of RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180013360
 * Callers:
 *     RtlSetProcessPreferredUILanguages @ 0x18000F8D0 (RtlSetProcessPreferredUILanguages.c)
 *     RtlSetThreadPreferredUILanguages @ 0x180011A20 (RtlSetThreadPreferredUILanguages.c)
 *     LdrpLangFallbackListAppendNode @ 0x180012EE0 (LdrpLangFallbackListAppendNode.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x1800C8B80 (RtlpMuiRegLoadPreferredUILanguages.c)
 * Callees:
 *     RtlUnicodeStringToInteger @ 0x180013E20 (RtlUnicodeStringToInteger.c)
 *     RtlCultureNameToLCID @ 0x1800141A0 (RtlCultureNameToLCID.c)
 *     RtlpNlsGetNameIndex @ 0x1800143C0 (RtlpNlsGetNameIndex.c)
 *     RtlpLoadNlsData @ 0x1800144AC (RtlpLoadNlsData.c)
 *     RtlLCIDToCultureName @ 0x180016340 (RtlLCIDToCultureName.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x18003ECF0 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlpMuiRegGetOrAddString @ 0x1800993D0 (RtlpMuiRegGetOrAddString.c)
 *     RtlpMatchUserLanguage @ 0x18009A410 (RtlpMatchUserLanguage.c)
 *     RtlpMatchUILanguage @ 0x18009A584 (RtlpMatchUILanguage.c)
 *     RtlpMuiRegCreateLanguageList @ 0x1800CA3B0 (RtlpMuiRegCreateLanguageList.c)
 *     RtlpMuiRegGrowLanguageList @ 0x1800CA450 (RtlpMuiRegGrowLanguageList.c)
 *     RtlpIsCustomLocale @ 0x1800F2354 (RtlpIsCustomLocale.c)
 *     __report_rangecheckfailure @ 0x18011EC5C (__report_rangecheckfailure.c)
 *     _wcsicmp @ 0x180120EA0 (_wcsicmp.c)
 *     wcslen @ 0x180125A00 (wcslen.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

__int64 __fastcall RtlpMuiRegAddMultiSzToLangFallbackList(
        __int64 a1,
        _WORD *a2,
        int a3,
        int a4,
        int a5,
        unsigned int a6,
        __int64 *a7)
{
  __int64 *v7; // r12
  int v8; // ebx
  unsigned int v9; // r15d
  char v10; // di
  _WORD *v11; // rsi
  char v12; // r14
  void *v13; // r13
  __int64 v14; // rbx
  unsigned int v15; // ebx
  size_t v16; // rcx
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rdi
  _QWORD *v19; // r14
  __int64 v20; // r13
  __int64 v21; // r14
  int v22; // edi
  __int64 v23; // r12
  wchar_t *v24; // rcx
  unsigned __int16 i; // dx
  __int64 v26; // r8
  __int64 v27; // rax
  int v28; // ecx
  __int64 v29; // rdi
  int NameIndex; // eax
  unsigned __int8 v31; // r14
  ULONG v32; // edi
  __int64 v33; // r10
  __int64 v34; // rdx
  __int64 v35; // r9
  int InstalledLanguageIndexByLangId; // eax
  int j; // ecx
  __int64 v38; // rdx
  int v39; // r8d
  int v40; // ecx
  __int64 v41; // r9
  __int16 v42; // r10
  __int64 *v43; // r8
  __int64 v45; // rax
  __int64 v46; // rax
  _WORD *v47; // rdx
  __int64 LanguageList; // rax
  __int64 v49; // r8
  __int64 v50; // rdx
  __int64 v51; // rax
  const wchar_t *v52; // rcx
  size_t v53; // rax
  BOOLEAN v54; // al
  __int16 v55[2]; // [rsp+20h] [rbp-E0h] BYREF
  int v56; // [rsp+24h] [rbp-DCh]
  __int16 v57[2]; // [rsp+28h] [rbp-D8h] BYREF
  ULONG Value; // [rsp+2Ch] [rbp-D4h] BYREF
  __int64 v59; // [rsp+30h] [rbp-D0h]
  int v60; // [rsp+38h] [rbp-C8h]
  int v61; // [rsp+3Ch] [rbp-C4h]
  __int64 *v62; // [rsp+40h] [rbp-C0h]
  void *Src[2]; // [rsp+48h] [rbp-B8h] BYREF
  PVOID Heap; // [rsp+58h] [rbp-A8h]
  _UNICODE_STRING String; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t String2[88]; // [rsp+70h] [rbp-90h] BYREF

  v7 = a7;
  v8 = 2 * a3;
  v9 = 0;
  v56 = a4;
  v59 = a1;
  v62 = a7;
  v60 = 0;
  v10 = a4;
  v61 = 2 * a3;
  v11 = a2;
  v55[0] = 0;
  v57[0] = -1;
  *(_OWORD *)Src = 0LL;
  if ( 2 * a3 <= 0 )
    return 3221225485LL;
  if ( !a2 )
    return 3221225485LL;
  if ( !a7 )
    return 3221225485LL;
  v12 = a5;
  if ( (a5 & 0xFFFFFFE0) != 0 )
    return 3221225485LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
  v13 = Heap;
  if ( Heap )
  {
    while ( 1 )
    {
      if ( !v11 || !*v11 || v8 <= 0 )
      {
LABEL_55:
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v13);
        return v9;
      }
      Value = 0;
      v14 = -1LL;
      do
        ++v14;
      while ( v11[v14] );
      Src[0] = 0LL;
      v15 = 2 * v14;
      Src[1] = v11;
      v16 = 2 * wcslen(v11);
      if ( v16 >= 0xFFFE )
        LOWORD(v16) = -4;
      LOWORD(Src[0]) = v16;
      WORD1(Src[0]) = v16 + 2;
      if ( (v10 & 4) != 0 )
        break;
      if ( (_WORD)v16 && (unsigned int)(unsigned __int16)v16 + 2 <= 0x55 )
      {
        v17 = (unsigned __int16)v16;
        memmove(String2, Src[1], (unsigned __int16)v16);
        v18 = v17 >> 1;
        if ( v18 >= 85 )
          _report_rangecheckfailure();
        v19 = g_RegInfo;
        String2[v18] = 0;
        if ( v19 )
        {
          v20 = v19[3];
          if ( v20 )
          {
            if ( *(_QWORD *)(v20 + 16) && String2[0] )
            {
              v21 = v19[4];
              if ( v21 )
              {
                v22 = 0;
                v23 = 0LL;
                while ( v22 < *(unsigned __int16 *)(v21 + 6) )
                {
                  v24 = (wchar_t *)(*(_QWORD *)(v21 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v21 + 16) + v23));
                  if ( v24 == String2 || !wcsicmp(v24, String2) )
                  {
                    if ( v22 < 0 )
                      break;
                    goto LABEL_30;
                  }
                  ++v22;
                  v23 += 2LL;
                }
              }
              LOWORD(v22) = -1;
LABEL_30:
              if ( (v22 & 0x8000u) == 0 )
              {
                for ( i = 0; i < *(_WORD *)(v20 + 6); ++i )
                {
                  v26 = 28LL * i;
                  v27 = *(_QWORD *)(v20 + 16);
                  if ( *(_WORD *)(v26 + v27 + 6) == (_WORD)v22 )
                  {
                    v28 = *(unsigned __int16 *)(v26 + v27 + 4);
                    goto LABEL_39;
                  }
                }
              }
            }
          }
        }
        v29 = pTblPtrs;
        if ( !pTblPtrs )
        {
          if ( (unsigned __int8)RtlpLoadNlsData() )
          {
            v29 = pTblPtrs;
            goto LABEL_37;
          }
          goto LABEL_63;
        }
LABEL_37:
        NameIndex = RtlpNlsGetNameIndex(String2);
        if ( NameIndex >= 0 )
        {
          v28 = *(_DWORD *)(*(_QWORD *)(v29 + 24) + 8LL * NameIndex + 4) & 0x7FFFFFFF;
          goto LABEL_39;
        }
        if ( (unsigned __int8)RtlpIsCustomLocale(String2) )
        {
          if ( (unsigned __int8)RtlpMatchUILanguage(String2) )
          {
            v28 = 5120;
          }
          else if ( (unsigned __int8)RtlpMatchUserLanguage(String2) )
          {
            v28 = 3072;
          }
          else
          {
            v28 = 4096;
          }
LABEL_39:
          if ( ((v28 - 4096) & 0xFFFFFBFF) != 0 )
          {
            v31 = 1;
            v55[0] = v28;
            LOWORD(v32) = v28;
            goto LABEL_41;
          }
          v12 = a5;
          if ( (a5 & 2) != 0 )
          {
            LOBYTE(v26) = 1;
            if ( (int)RtlpMuiRegGetOrAddString(v59, Src[1], v26, v55) >= 0 )
            {
              LOWORD(v32) = v55[0];
              v31 = 3;
LABEL_41:
              v7 = v62;
              v13 = Heap;
LABEL_42:
              v33 = v59;
              Value = 0;
              v34 = (unsigned __int16)v32;
              LOBYTE(v26) = 1;
              String = 0LL;
              if ( v59 )
              {
                v35 = *(_QWORD *)(v59 + 24);
                if ( v31 == 3 )
                {
                  for ( j = 0; j < *(unsigned __int16 *)(v35 + 6); ++j )
                  {
                    v47 = (_WORD *)(*(_QWORD *)(v35 + 16) + 28LL * j);
                    if ( (*v47 & 0x1020) == 0x20 && v47[3] == (_WORD)v32 )
                    {
                      v57[0] = j;
                      goto LABEL_46;
                    }
                  }
                  v49 = *(_QWORD *)(v59 + 32);
                  if ( v49 )
                  {
                    if ( (v32 & 0x8000u) == 0 && (__int16)v32 < (int)*(unsigned __int16 *)(v49 + 6) )
                    {
                      v50 = *(__int16 *)(*(_QWORD *)(v49 + 16) + 2LL * (__int16)v32);
                      v51 = *(_QWORD *)(v49 + 24);
                      v52 = (const wchar_t *)(v51 + 2 * v50);
                      if ( v52 )
                      {
                        *(_DWORD *)(&String.MaximumLength + 1) = 0;
                        String.Buffer = (wchar_t *)(v51 + 2 * v50);
                        v53 = 2 * wcslen(v52);
                        if ( v53 >= 0xFFFE )
                          LOWORD(v53) = -4;
                        String.Length = v53;
                        String.MaximumLength = v53 + 2;
                        v54 = RtlCultureNameToLCID(&String, &Value);
                        v33 = v59;
                        if ( v54 )
                        {
                          v34 = (unsigned __int16)Value;
                          LOBYTE(v26) = 0;
                          goto LABEL_44;
                        }
                      }
                    }
                  }
                }
                else
                {
LABEL_44:
                  InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByLangId(v33, v34, v26, v57);
                  v33 = v59;
                  if ( InstalledLanguageIndexByLangId >= 0 )
                  {
                    LOWORD(j) = v57[0];
LABEL_46:
                    if ( (v56 & 0x10) == 0 )
                    {
                      v31 = 2;
                      v55[0] = j;
                      LOWORD(v32) = j;
                    }
LABEL_48:
                    v38 = *v7;
                    if ( *v7
                      || (LanguageList = RtlpMuiRegCreateLanguageList(1LL, a5 & 1, v33),
                          *v7 = LanguageList,
                          (v38 = LanguageList) != 0) )
                    {
                      v39 = *(unsigned __int16 *)(v38 + 4);
                      v40 = 0;
                      v41 = 0LL;
                      v42 = v31;
                      while ( v40 < v39 )
                      {
                        v45 = *(_QWORD *)(v38 + 24);
                        v42 = v31;
                        if ( *(_WORD *)(v41 + v45) == v31 && *(_WORD *)(v41 + v45 + 4) == (_WORD)v32 )
                          goto LABEL_54;
                        ++v40;
                        v41 += 6LL;
                      }
                      if ( (unsigned __int16)v39 >= *(_WORD *)(v38 + 6) )
                      {
                        v46 = RtlpMuiRegGrowLanguageList(v38);
                        v43 = v62;
                        v38 = v46;
                        v42 = v31;
                        *v62 = v46;
                        if ( !v46 )
                          goto LABEL_69;
                      }
                      else
                      {
                        v43 = v62;
                      }
                      *(_WORD *)(*(_QWORD *)(v38 + 24) + 6LL * *(unsigned __int16 *)(v38 + 4)) = v42;
                      *(_WORD *)(*(_QWORD *)(*v43 + 24) + 6LL * (unsigned __int16)(*(_WORD *)(*v43 + 4))++ + 4) = v32;
LABEL_54:
                      if ( ++v60 < a6 )
                        goto LABEL_63;
                    }
                    else
                    {
LABEL_69:
                      v9 = -1073741801;
                    }
                    goto LABEL_55;
                  }
                }
              }
              if ( (v56 & 2) != 0 )
                goto LABEL_48;
              goto LABEL_63;
            }
          }
        }
        else
        {
LABEL_63:
          v12 = a5;
        }
        goto LABEL_64;
      }
LABEL_28:
      v13 = Heap;
      v7 = v62;
      v11 = (_WORD *)((char *)v11 + v15 + 2);
      v8 = -2 - v15 + v61;
      v61 = v8;
    }
    if ( RtlUnicodeStringToInteger((PUNICODE_STRING)Src, 0x10u, &Value) < 0 )
      goto LABEL_28;
    v32 = Value;
    if ( Value == 4096 || Value == 5120 || Value == 3072 || Value == 1024 || Value == 2048 || Value == 127 )
    {
      if ( (v12 & 4) != 0 )
        goto LABEL_64;
      if ( (v12 & 8) != 0 )
      {
        v9 = -1073741637;
        goto LABEL_55;
      }
    }
    Src[1] = v13;
    LODWORD(Src[0]) = 11141120;
    if ( RtlLCIDToCultureName(Value, (PUNICODE_STRING)Src) && ((v12 & 2) != 0 || ((v32 - 4096) & 0xFFFFFBFF) != 0) )
    {
      v31 = 1;
      v55[0] = v32;
      goto LABEL_42;
    }
LABEL_64:
    v10 = v56;
    goto LABEL_28;
  }
  return 3221225495LL;
}

/*
 * XREFs of RtlpMuiRegAddMultiSzToLangFallbackList @ 0x18005AD70
 * Callers:
 *     RtlSetProcessPreferredUILanguages @ 0x180059D10 (RtlSetProcessPreferredUILanguages.c)
 *     LdrpLangFallbackListAppendNode @ 0x18005A8F0 (LdrpLangFallbackListAppendNode.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x180087AE0 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlSetThreadPreferredUILanguages @ 0x18008B390 (RtlSetThreadPreferredUILanguages.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlLCIDToCultureName @ 0x18005B640 (RtlLCIDToCultureName.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x18005B950 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlUnicodeStringToInteger @ 0x18005BFF0 (RtlUnicodeStringToInteger.c)
 *     RtlCultureNameToLCID @ 0x18005C370 (RtlCultureNameToLCID.c)
 *     RtlpNlsGetNameIndex @ 0x18005C590 (RtlpNlsGetNameIndex.c)
 *     RtlpLoadNlsData @ 0x18005C67C (RtlpLoadNlsData.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlpMuiRegGrowLanguageList @ 0x180088948 (RtlpMuiRegGrowLanguageList.c)
 *     RtlpMuiRegCreateLanguageList @ 0x180089780 (RtlpMuiRegCreateLanguageList.c)
 *     RtlpMuiRegGetOrAddString @ 0x1800A7910 (RtlpMuiRegGetOrAddString.c)
 *     RtlpIsCustomLocale @ 0x1800F943C (RtlpIsCustomLocale.c)
 *     RtlpMatchUserLanguage @ 0x180115B18 (RtlpMatchUserLanguage.c)
 *     RtlpMatchUILanguage @ 0x180118314 (RtlpMatchUILanguage.c)
 *     __report_rangecheckfailure @ 0x18012250C (__report_rangecheckfailure.c)
 *     _wcsicmp @ 0x180124750 (_wcsicmp.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
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
  __int64 v18; // rcx
  unsigned __int64 v19; // rdi
  _QWORD *v20; // r14
  __int64 v21; // r13
  __int64 v22; // r14
  int v23; // edi
  __int64 v24; // r12
  wchar_t *v25; // rcx
  unsigned __int16 i; // dx
  __int64 v27; // r8
  __int64 v28; // rax
  int v29; // ecx
  __int64 v30; // rdi
  int NameIndex; // eax
  unsigned __int8 v32; // r14
  ULONG v33; // edi
  __int64 v34; // r10
  __int64 v35; // rdx
  __int64 v36; // r9
  int InstalledLanguageIndexByLangId; // eax
  int j; // ecx
  __int64 v39; // rdx
  int v40; // r8d
  int v41; // ecx
  __int64 v42; // r9
  __int16 v43; // r10
  __int64 *v44; // r8
  __int64 v46; // rax
  __int64 v47; // rax
  _WORD *v48; // rdx
  __int64 LanguageList; // rax
  __int64 v50; // r8
  __int64 v51; // rdx
  __int64 v52; // rax
  const wchar_t *v53; // rcx
  size_t v54; // rax
  BOOLEAN v55; // al
  __int16 v56[2]; // [rsp+20h] [rbp-E0h] BYREF
  int v57; // [rsp+24h] [rbp-DCh]
  __int16 v58[2]; // [rsp+28h] [rbp-D8h] BYREF
  ULONG Value; // [rsp+2Ch] [rbp-D4h] BYREF
  __int64 v60; // [rsp+30h] [rbp-D0h]
  int v61; // [rsp+38h] [rbp-C8h]
  int v62; // [rsp+3Ch] [rbp-C4h]
  __int64 *v63; // [rsp+40h] [rbp-C0h]
  void *Src[2]; // [rsp+48h] [rbp-B8h] BYREF
  PVOID Heap; // [rsp+58h] [rbp-A8h]
  _UNICODE_STRING String; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t String2[88]; // [rsp+70h] [rbp-90h] BYREF

  v7 = a7;
  v8 = 2 * a3;
  v9 = 0;
  v57 = a4;
  v60 = a1;
  v63 = a7;
  v61 = 0;
  v10 = a4;
  v62 = 2 * a3;
  v11 = a2;
  v56[0] = 0;
  v58[0] = -1;
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
        v19 = v17 >> 1;
        if ( v19 >= 85 )
          _report_rangecheckfailure(v18);
        v20 = g_RegInfo;
        String2[v19] = 0;
        if ( v20 )
        {
          v21 = v20[3];
          if ( v21 )
          {
            if ( *(_QWORD *)(v21 + 16) && String2[0] )
            {
              v22 = v20[4];
              if ( v22 )
              {
                v23 = 0;
                v24 = 0LL;
                while ( v23 < *(unsigned __int16 *)(v22 + 6) )
                {
                  v25 = (wchar_t *)(*(_QWORD *)(v22 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v22 + 16) + v24));
                  if ( v25 == String2 || !wcsicmp(v25, String2) )
                  {
                    if ( v23 < 0 )
                      break;
                    goto LABEL_30;
                  }
                  ++v23;
                  v24 += 2LL;
                }
              }
              LOWORD(v23) = -1;
LABEL_30:
              if ( (v23 & 0x8000u) == 0 )
              {
                for ( i = 0; i < *(_WORD *)(v21 + 6); ++i )
                {
                  v27 = 28LL * i;
                  v28 = *(_QWORD *)(v21 + 16);
                  if ( *(_WORD *)(v27 + v28 + 6) == (_WORD)v23 )
                  {
                    v29 = *(unsigned __int16 *)(v27 + v28 + 4);
                    goto LABEL_39;
                  }
                }
              }
            }
          }
        }
        v30 = pTblPtrs;
        if ( !pTblPtrs )
        {
          if ( (unsigned __int8)RtlpLoadNlsData() )
          {
            v30 = pTblPtrs;
            goto LABEL_37;
          }
          goto LABEL_63;
        }
LABEL_37:
        NameIndex = RtlpNlsGetNameIndex(String2);
        if ( NameIndex >= 0 )
        {
          v29 = *(_DWORD *)(*(_QWORD *)(v30 + 24) + 8LL * NameIndex + 4) & 0x7FFFFFFF;
          goto LABEL_39;
        }
        if ( (unsigned __int8)RtlpIsCustomLocale(String2) )
        {
          if ( (unsigned __int8)RtlpMatchUILanguage(String2) )
          {
            v29 = 5120;
          }
          else if ( (unsigned __int8)RtlpMatchUserLanguage(String2) )
          {
            v29 = 3072;
          }
          else
          {
            v29 = 4096;
          }
LABEL_39:
          if ( ((v29 - 4096) & 0xFFFFFBFF) != 0 )
          {
            v32 = 1;
            v56[0] = v29;
            LOWORD(v33) = v29;
            goto LABEL_41;
          }
          v12 = a5;
          if ( (a5 & 2) != 0 )
          {
            LOBYTE(v27) = 1;
            if ( (int)RtlpMuiRegGetOrAddString(v60, Src[1], v27, v56) >= 0 )
            {
              LOWORD(v33) = v56[0];
              v32 = 3;
LABEL_41:
              v7 = v63;
              v13 = Heap;
LABEL_42:
              v34 = v60;
              Value = 0;
              v35 = (unsigned __int16)v33;
              LOBYTE(v27) = 1;
              String = 0LL;
              if ( v60 )
              {
                v36 = *(_QWORD *)(v60 + 24);
                if ( v32 == 3 )
                {
                  for ( j = 0; j < *(unsigned __int16 *)(v36 + 6); ++j )
                  {
                    v48 = (_WORD *)(*(_QWORD *)(v36 + 16) + 28LL * j);
                    if ( (*v48 & 0x1020) == 0x20 && v48[3] == (_WORD)v33 )
                    {
                      v58[0] = j;
                      goto LABEL_46;
                    }
                  }
                  v50 = *(_QWORD *)(v60 + 32);
                  if ( v50 )
                  {
                    if ( (v33 & 0x8000u) == 0 && (__int16)v33 < (int)*(unsigned __int16 *)(v50 + 6) )
                    {
                      v51 = *(__int16 *)(*(_QWORD *)(v50 + 16) + 2LL * (__int16)v33);
                      v52 = *(_QWORD *)(v50 + 24);
                      v53 = (const wchar_t *)(v52 + 2 * v51);
                      if ( v53 )
                      {
                        *(_DWORD *)(&String.MaximumLength + 1) = 0;
                        String.Buffer = (wchar_t *)(v52 + 2 * v51);
                        v54 = 2 * wcslen(v53);
                        if ( v54 >= 0xFFFE )
                          LOWORD(v54) = -4;
                        String.Length = v54;
                        String.MaximumLength = v54 + 2;
                        v55 = RtlCultureNameToLCID(&String, &Value);
                        v34 = v60;
                        if ( v55 )
                        {
                          v35 = (unsigned __int16)Value;
                          LOBYTE(v27) = 0;
                          goto LABEL_44;
                        }
                      }
                    }
                  }
                }
                else
                {
LABEL_44:
                  InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByLangId(v34, v35, v27, v58);
                  v34 = v60;
                  if ( InstalledLanguageIndexByLangId >= 0 )
                  {
                    LOWORD(j) = v58[0];
LABEL_46:
                    if ( (v57 & 0x10) == 0 )
                    {
                      v32 = 2;
                      v56[0] = j;
                      LOWORD(v33) = j;
                    }
LABEL_48:
                    v39 = *v7;
                    if ( *v7
                      || (LanguageList = RtlpMuiRegCreateLanguageList(1LL, a5 & 1, v34),
                          *v7 = LanguageList,
                          (v39 = LanguageList) != 0) )
                    {
                      v40 = *(unsigned __int16 *)(v39 + 4);
                      v41 = 0;
                      v42 = 0LL;
                      v43 = v32;
                      while ( v41 < v40 )
                      {
                        v46 = *(_QWORD *)(v39 + 24);
                        v43 = v32;
                        if ( *(_WORD *)(v42 + v46) == v32 && *(_WORD *)(v42 + v46 + 4) == (_WORD)v33 )
                          goto LABEL_54;
                        ++v41;
                        v42 += 6LL;
                      }
                      if ( (unsigned __int16)v40 >= *(_WORD *)(v39 + 6) )
                      {
                        v47 = RtlpMuiRegGrowLanguageList(v39);
                        v44 = v63;
                        v39 = v47;
                        v43 = v32;
                        *v63 = v47;
                        if ( !v47 )
                          goto LABEL_69;
                      }
                      else
                      {
                        v44 = v63;
                      }
                      *(_WORD *)(*(_QWORD *)(v39 + 24) + 6LL * *(unsigned __int16 *)(v39 + 4)) = v43;
                      *(_WORD *)(*(_QWORD *)(*v44 + 24) + 6LL * (unsigned __int16)(*(_WORD *)(*v44 + 4))++ + 4) = v33;
LABEL_54:
                      if ( ++v61 < a6 )
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
              if ( (v57 & 2) != 0 )
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
      v7 = v63;
      v11 = (_WORD *)((char *)v11 + v15 + 2);
      v8 = -2 - v15 + v62;
      v62 = v8;
    }
    if ( RtlUnicodeStringToInteger((PUNICODE_STRING)Src, 0x10u, &Value) < 0 )
      goto LABEL_28;
    v33 = Value;
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
    if ( RtlLCIDToCultureName(Value, (PUNICODE_STRING)Src) && ((v12 & 2) != 0 || ((v33 - 4096) & 0xFFFFFBFF) != 0) )
    {
      v32 = 1;
      v56[0] = v33;
      goto LABEL_42;
    }
LABEL_64:
    v10 = v57;
    goto LABEL_28;
  }
  return 3221225495LL;
}

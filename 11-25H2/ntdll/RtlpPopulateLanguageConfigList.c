/*
 * XREFs of RtlpPopulateLanguageConfigList @ 0x18008C780
 * Callers:
 *     RtlpLoadLanguageConfigList @ 0x18008C150 (RtlpLoadLanguageConfigList.c)
 * Callees:
 *     RtlCultureNameToLCID @ 0x18005C370 (RtlCultureNameToLCID.c)
 *     RtlpMuiRegCreateLanguageConfigList @ 0x18008C6FC (RtlpMuiRegCreateLanguageConfigList.c)
 *     RtlpMuiRegGetOrAddString @ 0x1800A7910 (RtlpMuiRegGetOrAddString.c)
 *     RtlpMuiRegValidateConfigNode @ 0x1800EEECC (RtlpMuiRegValidateConfigNode.c)
 *     RtlpMuiRegConfigListAddLanguage @ 0x1800F8B78 (RtlpMuiRegConfigListAddLanguage.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     ZwEnumerateValueKey @ 0x180163480 (ZwEnumerateValueKey.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpPopulateLanguageConfigList(void *a1, _QWORD *a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  ULONG v4; // eax
  __int64 v5; // r12
  _WORD *v7; // rdi
  signed int v8; // ebx
  NTSTATUS v9; // eax
  unsigned int v10; // ecx
  unsigned __int64 v11; // rsi
  __int16 v12; // r15
  size_t v13; // rax
  int v14; // ecx
  unsigned __int8 v15; // al
  __int16 v16; // bx
  __int64 v17; // rax
  __int16 v18; // bx
  const wchar_t *v19; // rsi
  int v20; // eax
  int v21; // r15d
  unsigned __int16 i; // r12
  size_t v23; // rax
  int v24; // edx
  __int16 v25; // r8
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  const wchar_t *v28; // rax
  unsigned __int64 v29; // rcx
  __int64 v30; // rcx
  _WORD *LanguageConfigList; // rax
  int v33; // eax
  _WORD *v34; // rax
  _WORD v35[2]; // [rsp+50h] [rbp+0h] BYREF

  v3 = (unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0uLL;
  v4 = 0;
  *(_QWORD *)(v3 + 32) = a3;
  v5 = a3;
  *(_QWORD *)(v3 + 40) = a1;
  *(_QWORD *)(v3 + 80) = 0LL;
  *(_DWORD *)(v3 + 24) = 0;
  *(_DWORD *)(v3 + 88) = 0;
  v7 = 0LL;
  if ( !a1 || !a2 || !a3 )
  {
    v8 = -1073741811;
    goto LABEL_38;
  }
  v7 = (_WORD *)*a2;
  *(_QWORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = *a2;
  v8 = 0;
  *(_DWORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 0;
LABEL_8:
  while ( 2 )
  {
    if ( v8 == -2147483622 )
    {
      v8 = 0;
      goto LABEL_38;
    }
    v9 = ZwEnumerateValueKey(a1, v4, KeyValueFullInformation, (PVOID)(v3 + 96), 0x200u, (PULONG)(v3 + 24));
    v8 = v9;
    if ( v9 >= 0 )
    {
      v4 = *(_DWORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
      a1 = *(void **)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28);
      if ( *(_DWORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0uLL) + 0x64) != 7 )
        continue;
      v10 = *(_DWORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70);
      v4 = *(_DWORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
      if ( v10 + 24 > 0x200 )
        goto LABEL_7;
      *(_DWORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 0;
      v11 = (unsigned __int64)v10 >> 1;
      *(_WORD *)v3 = 0;
      *(_DWORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0uLL) + 0x34) = 0;
      *(_QWORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = ((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                          + 116;
      v12 = *(_WORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0uLL) + 0x74 + 2 * v11);
      *(_WORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0uLL) + 0x74 + 2 * v11) = 0;
      v13 = 2 * wcslen((const wchar_t *)(v3 + 116));
      if ( v13 >= 0xFFFE )
        LOWORD(v13) = -4;
      *(_WORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = v13;
      *(_WORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0uLL) + 0x32) = v13 + 2;
      if ( !RtlCultureNameToLCID((PUNICODE_STRING)(v3 + 48), (PLCID)(v3 + 4)) )
        goto LABEL_57;
      v14 = *(_DWORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
      if ( ((v14 - 4096) & 0xFFFFFBFF) != 0 )
      {
        v15 = 1;
      }
      else
      {
        v8 = RtlpMuiRegGetOrAddString(v5, v3 + 116, 1LL, (unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0uLL);
        if ( v8 < 0 )
        {
          *(_WORD *)v3 = 0;
          goto LABEL_6;
        }
        LOWORD(v14) = *(_WORD *)v3;
        v15 = 3;
      }
      *(_WORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0uLL) + 0x74 + 2 * v11) = v12;
      v16 = v15;
      v17 = *(unsigned int *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68);
      v18 = v16 << 14;
      *(_QWORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0uLL) + 0x54) = 0LL;
      *(_WORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = v18;
      *(_WORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0uLL) + 0x52) = v18;
      *(_WORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = v14;
      v19 = (const wchar_t *)(v17 + v3 + 96);
      if ( !v19 || (v20 = *(_DWORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0uLL) + 0x6C)) == 0 )
      {
LABEL_57:
        v8 = -1073741811;
        goto LABEL_6;
      }
      v21 = 2 * v20;
      for ( i = 0; ; ++i )
      {
        if ( !v19 || !*v19 || v21 <= 0 || i >= 3u )
        {
          v5 = *(_QWORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
          v8 = RtlpMuiRegValidateConfigNode(v5, v3 + 80, 0LL);
          if ( v8 < 0 )
            goto LABEL_6;
          if ( !v7 )
          {
            LanguageConfigList = RtlpMuiRegCreateLanguageConfigList(-1);
            *(_QWORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = LanguageConfigList;
            v7 = LanguageConfigList;
            if ( !LanguageConfigList )
            {
              v8 = -1073741801;
              goto LABEL_38;
            }
            *a2 = LanguageConfigList;
          }
          v33 = RtlpMuiRegConfigListAddLanguage(v3 + 16, v3 + 80, 0LL);
          v7 = *(_WORD **)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
          v8 = v33;
          if ( v33 >= 0 )
            *a2 = v7;
LABEL_6:
          v4 = *(_DWORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0uLL) + 8) + 1;
          *(_DWORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = v4;
LABEL_7:
          a1 = *(void **)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28);
          goto LABEL_8;
        }
        *(_DWORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC) = 0;
        *(_WORD *)v3 = 0;
        *(_DWORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0uLL) + 0x44) = 0;
        *(_QWORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = v19;
        v23 = 2 * wcslen(v19);
        if ( v23 >= 0xFFFE )
          LOWORD(v23) = -4;
        *(_WORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = v23;
        *(_WORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0uLL) + 0x42) = v23 + 2;
        if ( RtlCultureNameToLCID((PUNICODE_STRING)(v3 + 64), (PLCID)(v3 + 12)) )
        {
          v24 = *(_DWORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC);
          v25 = 1;
          if ( ((v24 - 4096) & 0xFFFFFBFF) != 0 )
            goto LABEL_28;
          if ( (int)RtlpMuiRegGetOrAddString(
                      *(_QWORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20),
                      v19,
                      1LL,
                      (unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0uLL) >= 0 )
          {
            LOWORD(v24) = *(_WORD *)v3;
            v25 = 3;
LABEL_28:
            *(_WORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0uLL) + 0x52) = (v25 << (2 * i)) | v18 & ~(3 << (2 * i));
            *(_WORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0uLL) + 0x56 + 2LL * i) = v24;
            *(_WORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = *(_WORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                       + 0x52);
            goto LABEL_29;
          }
          *(_WORD *)v3 = 0;
        }
LABEL_29:
        v26 = (unsigned __int64)v21 >> 1;
        if ( v26 > 0x7FFFFFFF )
        {
          v8 = -1073741811;
LABEL_64:
          v5 = *(_QWORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
          goto LABEL_6;
        }
        v27 = (unsigned __int64)v21 >> 1;
        v28 = v19;
        if ( v26 )
        {
          do
          {
            if ( !*v28 )
              break;
            ++v28;
            --v27;
          }
          while ( v27 );
        }
        v8 = v27 == 0 ? 0xC000000D : 0;
        if ( v27 )
          v29 = v26 - v27;
        else
          v29 = 0LL;
        if ( !v27 )
          goto LABEL_64;
        v18 = *(_WORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
        v30 = 2 * v29;
        v19 = (const wchar_t *)((char *)v19 + v30 + 2);
        v21 += -2 - v30;
      }
    }
    break;
  }
  if ( v9 == -2147483622 )
    goto LABEL_6;
LABEL_38:
  if ( !v7 && v8 != -1073741811 )
  {
    v34 = RtlpMuiRegCreateLanguageConfigList(1);
    *a2 = v34;
    v7 = v34;
    if ( !v34 )
      v8 = -1073741801;
  }
  if ( v8 < 0 && v7 )
    v7[2] = 0;
  return (unsigned int)v8;
}

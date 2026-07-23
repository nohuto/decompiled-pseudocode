/*
 * XREFs of RtlpPopulateLanguageConfigList @ 0x14082D8F0
 * Callers:
 *     RtlpLoadLanguageConfigList @ 0x14082BE20 (RtlpLoadLanguageConfigList.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x14044CF68 (RtlStringCbLengthW.c)
 *     RtlpMuiRegValidateConfigNode @ 0x1406A3538 (RtlpMuiRegValidateConfigNode.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwEnumerateValueKey @ 0x1406A7610 (ZwEnumerateValueKey.c)
 *     RtlpMuiRegConfigListAddLanguage @ 0x14082C290 (RtlpMuiRegConfigListAddLanguage.c)
 *     RtlpMuiRegCreateLanguageConfigList @ 0x14082C6A4 (RtlpMuiRegCreateLanguageConfigList.c)
 *     RtlpMuiRegGetLanguageSpec @ 0x14082D050 (RtlpMuiRegGetLanguageSpec.c)
 */

__int64 __fastcall RtlpPopulateLanguageConfigList(void *a1, __int64 *a2, __int64 a3)
{
  unsigned __int8 *v3; // rbp
  NTSTATUS v4; // r11d
  ULONG v5; // eax
  __int64 v6; // r15
  __int64 v8; // rdi
  NTSTATUS v9; // ebx
  NTSTATUS v10; // eax
  __int64 v11; // r9
  unsigned int v12; // ecx
  unsigned __int64 v13; // rsi
  __int16 v14; // r12
  int LanguageSpec; // eax
  __int64 v16; // r9
  __int16 v17; // ax
  __int16 v18; // r13
  __int16 v19; // r13
  __int64 v20; // rax
  const WCHAR *v21; // rsi
  int v22; // r15d
  int v23; // r15d
  unsigned __int16 i; // r12
  __int16 v25; // ax
  __int64 v26; // rcx
  int v27; // eax
  __int64 LanguageConfigList; // rax
  int v29; // eax
  __int64 v30; // rax
  char v32; // [rsp+50h] [rbp+0h] BYREF

  v3 = (unsigned __int8 *)((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL);
  v4 = 0;
  *((_QWORD *)v3 + 3) = a3;
  v5 = 0;
  *((_QWORD *)v3 + 5) = a1;
  *((_WORD *)v3 + 2) = 0;
  v6 = a3;
  *v3 = 0;
  *((_DWORD *)v3 + 8) = 0;
  *((_QWORD *)v3 + 7) = 0LL;
  v8 = 0LL;
  *((_DWORD *)v3 + 16) = 0;
  if ( !a1 || !a2 || !a3 )
  {
    v9 = -1073741811;
    goto LABEL_36;
  }
  v8 = *a2;
  v9 = 0;
  *(_QWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = *a2;
  *(_DWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC) = 0;
  while ( v9 != -2147483622 )
  {
    v10 = ZwEnumerateValueKey(a1, v5, KeyValueFullInformation, v3 + 96, 0x200u, (PULONG)v3 + 8);
    v4 = 0;
    v9 = v10;
    if ( v10 < 0 )
    {
      if ( v10 != -2147483622 )
        goto LABEL_36;
      goto LABEL_32;
    }
    v5 = *(_DWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC);
    a1 = *(void **)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28);
    if ( *(_DWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x64) == 7 )
    {
      v12 = *(_DWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70);
      v5 = *(_DWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC);
      if ( v12 + 24 > 0x200 )
        goto LABEL_5;
      v13 = (unsigned __int64)v12 >> 1;
      v14 = *(_WORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x74 + 2 * v13);
      *(_WORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x74 + 2 * v13) = 0;
      LanguageSpec = RtlpMuiRegGetLanguageSpec(
                       v6,
                       (const WCHAR *)v3 + 58,
                       (char *)((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL),
                       v11,
                       (_WORD *)v3 + 2);
      v4 = 0;
      v9 = LanguageSpec;
      if ( LanguageSpec >= 0 )
      {
        v17 = *(_WORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
        v18 = *v3;
        *(_WORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x74 + 2 * v13) = v14;
        v19 = v18 << 14;
        *(_WORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = v17;
        v20 = *(unsigned int *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68);
        *(_QWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3C) = 0LL;
        *(_WORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3A) = v19;
        *(_QWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = 0LL;
        *(_BYTE *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 1) = 0;
        *(_WORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 0;
        v21 = (const WCHAR *)&v3[v20 + 96];
        if ( v21 )
        {
          v22 = *(_DWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x6C);
          if ( v22 )
          {
            v23 = 2 * v22;
            for ( i = 0; v21 && *v21 != (_WORD)v4 && v23 > 0 && i < 3u; ++i )
            {
              if ( (int)RtlpMuiRegGetLanguageSpec(
                          *(_QWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18),
                          v21,
                          (char *)v3 + 1,
                          v16,
                          (_WORD *)v3 + 4) >= 0 )
              {
                v25 = *(_WORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
                *(_WORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3A) = ((*(_BYTE *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                                 + 1) & 3) << (2 * i)) | v19 & ~(3 << (2 * i));
                *(_WORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3E + 2LL * i) = v25;
                v19 = *(_WORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3A);
              }
              v9 = RtlStringCbLengthW(v21, v23, (size_t *)v3 + 6);
              if ( v9 < 0 )
              {
                v6 = *(_QWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
                goto LABEL_32;
              }
              v26 = *(_QWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30);
              v21 = (const WCHAR *)((char *)v21 + v26 + 2);
              v23 += -2 - v26;
            }
            v6 = *(_QWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
            v27 = RtlpMuiRegValidateConfigNode(v6, (unsigned __int16 *)v3 + 28);
            v4 = 0;
            v9 = v27;
            if ( v27 >= 0 )
            {
              if ( !v8 )
              {
                LanguageConfigList = RtlpMuiRegCreateLanguageConfigList(-1);
                LOWORD(v4) = 0;
                *(_QWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = LanguageConfigList;
                v8 = LanguageConfigList;
                if ( !LanguageConfigList )
                {
                  v9 = -1073741801;
                  goto LABEL_36;
                }
                *a2 = LanguageConfigList;
              }
              v29 = RtlpMuiRegConfigListAddLanguage((__int64 *)v3 + 2, (__int16 *)v3 + 28);
              v8 = *(_QWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
              v4 = 0;
              v9 = v29;
              if ( v29 >= 0 )
                *a2 = v8;
            }
            goto LABEL_32;
          }
          v6 = *(_QWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
        }
        v9 = -1073741811;
      }
LABEL_32:
      v5 = *(_DWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC) + 1;
      *(_DWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC) = v5;
LABEL_5:
      a1 = *(void **)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28);
    }
  }
  v9 = v4;
LABEL_36:
  if ( !v8 && v9 != -1073741811 )
  {
    v30 = RtlpMuiRegCreateLanguageConfigList(1);
    LOWORD(v4) = 0;
    *a2 = v30;
    v8 = v30;
    if ( !v30 )
      v9 = -1073741801;
  }
  if ( v9 < 0 && v8 )
    *(_WORD *)(v8 + 4) = v4;
  return (unsigned int)v9;
}

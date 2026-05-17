/*
 * XREFs of OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x18008AAA4
 * Callers:
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x180087AE0 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpLoadUserUIByPolicy @ 0x180088B20 (RtlpLoadUserUIByPolicy.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x18008A784 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18008BBB8 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     OpenGlobalizationUserSettingsKey @ 0x18008C0B0 (OpenGlobalizationUserSettingsKey.c)
 *     RtlpLoadLanguageConfigList @ 0x18008C150 (RtlpLoadLanguageConfigList.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     IdnaMemAlloc @ 0x1800BEB6C (IdnaMemAlloc.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtOpenKey @ 0x180163460 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x180163500 (NtQueryValueKey.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall OpenGlobalizationUserSettingsKey_ForSingleUserModel(unsigned int a1, HANDLE *a2)
{
  size_t v4; // rax
  int v5; // edi
  size_t v6; // rax
  int v7; // eax
  __int64 v8; // r14
  HANDLE v9; // rax
  size_t v11; // rax
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rdi
  size_t v14; // rax
  void *v15; // [rsp+30h] [rbp-49h] BYREF
  __int64 v16; // [rsp+38h] [rbp-41h] BYREF
  void *Src; // [rsp+40h] [rbp-39h]
  _WORD v18[2]; // [rsp+48h] [rbp-31h] BYREF
  int v19; // [rsp+4Ch] [rbp-2Dh]
  void *v20; // [rsp+50h] [rbp-29h]
  __int16 v21; // [rsp+58h] [rbp-21h] BYREF
  __int16 v22; // [rsp+5Ah] [rbp-1Fh]
  int v23; // [rsp+5Ch] [rbp-1Dh]
  wchar_t *v24; // [rsp+60h] [rbp-19h]
  __int64 v25; // [rsp+68h] [rbp-11h] BYREF
  __int64 v26; // [rsp+70h] [rbp-9h]
  __int16 *v27; // [rsp+78h] [rbp-1h]
  __int64 v28; // [rsp+80h] [rbp+7h]
  __int128 v29; // [rsp+88h] [rbp+Fh]
  unsigned int v30; // [rsp+F0h] [rbp+77h] BYREF
  HANDLE Handle; // [rsp+F8h] [rbp+7Fh] BYREF

  if ( !dword_1801D4374 )
  {
    Handle = 0LL;
    v20 = (void *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CommonGlobUserSettings\\";
    v19 = 0;
    v4 = 2 * wcslen(L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CommonGlobUserSettings\\");
    v25 = 48LL;
    v28 = 576LL;
    v26 = 0LL;
    if ( v4 >= 0xFFFE )
      LOWORD(v4) = -4;
    v18[0] = v4;
    v18[1] = v4 + 2;
    v27 = v18;
    v29 = 0LL;
    v5 = NtOpenKey(&Handle, a1, &v25);
    if ( v5 < 0 )
      goto LABEL_15;
    v30 = 0;
    v24 = (wchar_t *)L"RedirectedKey";
    v23 = 0;
    v6 = 2 * wcslen(L"RedirectedKey");
    if ( v6 >= 0xFFFE )
      LOWORD(v6) = -4;
    v21 = v6;
    v22 = v6 + 2;
    v7 = NtQueryValueKey(Handle, &v21, 2LL, 0LL, 0, &v30);
    if ( !v30 || v7 != -1073741789 && v7 != -2147483643 )
    {
      if ( v18[0] <= 0xAAu )
      {
        v13 = v18[0];
        memmove(word_1801D02F0, v20, v18[0]);
        if ( v13 + 2 <= 0xAA )
          word_1801D02F0[v13 >> 1] = 0;
        dword_1801D4374 = 1;
      }
      v5 = 0;
      *a2 = Handle;
      Handle = 0LL;
      goto LABEL_15;
    }
    v8 = IdnaMemAlloc(v30);
    if ( !v8 )
    {
      v5 = -1073741801;
LABEL_15:
      if ( Handle )
        NtClose(Handle);
      return (unsigned int)v5;
    }
    v5 = NtQueryValueKey(Handle, &v21, 2LL, v8, v30, &v30);
    if ( v5 >= 0 )
    {
      if ( *(_DWORD *)(v8 + 4) == 1 )
      {
        v15 = 0LL;
        v16 = 0LL;
        Src = (void *)(v8 + 12);
        if ( v8 != -12 )
        {
          v11 = 2 * wcslen((const wchar_t *)(v8 + 12));
          if ( v11 >= 0xFFFE )
            LOWORD(v11) = -4;
          LOWORD(v16) = v11;
          WORD1(v16) = v11 + 2;
        }
        v26 = 0LL;
        v27 = (__int16 *)&v16;
        v25 = 48LL;
        v28 = 576LL;
        v29 = 0LL;
        v5 = NtOpenKey(&v15, a1, &v25);
        if ( v5 < 0 )
          goto LABEL_14;
        if ( (unsigned __int16)v16 <= 0xAAu )
        {
          v12 = (unsigned __int16)v16;
          memmove(word_1801D02F0, Src, (unsigned __int16)v16);
          if ( v12 + 2 <= 0xAA )
            word_1801D02F0[v12 >> 1] = 0;
          dword_1801D4374 = 1;
        }
        v9 = v15;
      }
      else
      {
        v9 = Handle;
        Handle = 0LL;
      }
      *a2 = v9;
    }
LABEL_14:
    RtlpSysVolFree(v8);
    goto LABEL_15;
  }
  v23 = 0;
  v24 = word_1801D02F0;
  v14 = 2 * wcslen(word_1801D02F0);
  v25 = 48LL;
  v28 = 576LL;
  v26 = 0LL;
  if ( v14 >= 0xFFFE )
    LOWORD(v14) = -4;
  v21 = v14;
  v22 = v14 + 2;
  v27 = &v21;
  v29 = 0LL;
  return (unsigned int)NtOpenKey(a2, a1, &v25);
}

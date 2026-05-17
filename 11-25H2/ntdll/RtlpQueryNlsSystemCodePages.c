/*
 * XREFs of RtlpQueryNlsSystemCodePages @ 0x1800B02A0
 * Callers:
 *     LdrpInitializeNlsInfo @ 0x1800AFC74 (LdrpInitializeNlsInfo.c)
 * Callees:
 *     RtlUnicodeStringToInteger @ 0x18005BFF0 (RtlUnicodeStringToInteger.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtOpenKey @ 0x180163460 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x180163500 (NtQueryValueKey.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpQueryNlsSystemCodePages(int *a1, int *a2)
{
  size_t v4; // rax
  size_t v5; // rax
  int v6; // ebx
  size_t v7; // rax
  size_t v8; // rax
  size_t v9; // rax
  int v11; // [rsp+30h] [rbp-69h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-61h] BYREF
  __int64 v13; // [rsp+40h] [rbp-59h] BYREF
  const wchar_t *v14; // [rsp+48h] [rbp-51h]
  unsigned __int16 v15; // [rsp+50h] [rbp-49h] BYREF
  __int16 v16; // [rsp+52h] [rbp-47h]
  int v17; // [rsp+54h] [rbp-45h]
  wchar_t *v18; // [rsp+58h] [rbp-41h]
  _WORD v19[2]; // [rsp+60h] [rbp-39h] BYREF
  int v20; // [rsp+64h] [rbp-35h]
  const wchar_t *v21; // [rsp+68h] [rbp-31h]
  _DWORD v22[2]; // [rsp+70h] [rbp-29h] BYREF
  __int64 v23; // [rsp+78h] [rbp-21h]
  _WORD *v24; // [rsp+80h] [rbp-19h]
  int v25; // [rsp+88h] [rbp-11h]
  int v26; // [rsp+8Ch] [rbp-Dh]
  __int128 v27; // [rsp+90h] [rbp-9h]
  _BYTE v28[4]; // [rsp+A0h] [rbp+7h] BYREF
  int v29; // [rsp+A4h] [rbp+Bh]
  wchar_t String[11]; // [rsp+ACh] [rbp+13h] BYREF
  __int16 v31; // [rsp+C2h] [rbp+29h]

  *a1 = 65001;
  v22[1] = 0;
  v26 = 0;
  v21 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Nls\\CodePage";
  v11 = 0;
  Handle = 0LL;
  *a2 = 65001;
  v20 = 0;
  v4 = 2 * wcslen(L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Nls\\CodePage");
  v22[0] = 48;
  v23 = 0LL;
  v25 = 576;
  v27 = 0LL;
  if ( v4 >= 0xFFFE )
    LOWORD(v4) = -4;
  v19[0] = v4;
  v19[1] = v4 + 2;
  v24 = v19;
  if ( (int)NtOpenKey(&Handle, 0x80000000LL, v22) < 0 )
    goto LABEL_20;
  HIDWORD(v13) = 0;
  v14 = L"ACP";
  v5 = 2 * wcslen(L"ACP");
  if ( v5 >= 0xFFFE )
    LOWORD(v5) = -4;
  LOWORD(v13) = v5;
  WORD1(v13) = v5 + 2;
  v6 = NtQueryValueKey(Handle, &v13, 2LL, v28, 36, &v11);
  if ( v6 >= 0 )
  {
    if ( v29 != 1 )
      goto LABEL_11;
    v31 = 0;
    v18 = String;
    v17 = 0;
    v7 = 2 * wcslen(String);
    if ( v7 >= 0xFFFE )
      LOWORD(v7) = -4;
    v15 = v7;
    v16 = v7 + 2;
    v6 = RtlUnicodeStringToInteger(&v15, 0xAu, a1);
    if ( v6 >= 0 )
    {
LABEL_11:
      v13 = 0LL;
      v14 = L"OEMCP";
      v8 = 2 * wcslen(L"OEMCP");
      if ( v8 >= 0xFFFE )
        LOWORD(v8) = -4;
      LOWORD(v13) = v8;
      WORD1(v13) = v8 + 2;
      v6 = NtQueryValueKey(Handle, &v13, 2LL, v28, 36, &v11);
      if ( v6 >= 0 && v29 == 1 )
      {
        v31 = 0;
        v18 = String;
        v17 = 0;
        v9 = 2 * wcslen(String);
        if ( v9 >= 0xFFFE )
          LOWORD(v9) = -4;
        v15 = v9;
        v16 = v9 + 2;
        v6 = RtlUnicodeStringToInteger(&v15, 0xAu, a2);
      }
    }
  }
  NtClose(Handle);
  if ( v6 < 0 )
  {
LABEL_20:
    *a1 = 65001;
    *a2 = 65001;
  }
  return 0LL;
}

/*
 * XREFs of _RtlpMuiRegLoadInstalledFromKey @ 0x1406A372C
 * Callers:
 *     _RtlpMuiRegLoadInstalled @ 0x14082E4EC (_RtlpMuiRegLoadInstalled.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwEnumerateKey @ 0x1406A79F0 (ZwEnumerateKey.c)
 *     LdrpOpenKey @ 0x140784064 (LdrpOpenKey.c)
 *     LdrpQueryValueKey @ 0x1407840B0 (LdrpQueryValueKey.c)
 *     RtlpMuiRegAddLanguageByName @ 0x14082C118 (RtlpMuiRegAddLanguageByName.c)
 *     ValidateRegistrLangType @ 0x14082DC28 (ValidateRegistrLangType.c)
 *     NtClose @ 0x140846CC0 (NtClose.c)
 */

__int64 __fastcall RtlpMuiRegLoadInstalledFromKey(int a1)
{
  unsigned int *v1; // rbp
  ULONG v3; // edi
  __int64 v4; // r8
  int v5; // ebx
  NTSTATUS v7; // eax
  unsigned __int64 v8; // rcx
  __int64 v9; // r8
  void *v10; // rcx
  __int16 v11; // r11
  unsigned int v12; // r11d
  char v13; // cl
  int v14; // ecx
  void *v15; // rcx
  void *v16; // rcx
  int Length; // [rsp+20h] [rbp-30h]
  int v18; // [rsp+50h] [rbp+0h] BYREF

  v1 = (unsigned int *)((unsigned __int64)&v18 & 0xFFFFFFFFFFFFFFE0uLL);
  v1[8] = 0;
  *((_QWORD *)v1 + 2) = 0LL;
  *v1 = 0;
  *((_WORD *)v1 + 2) = -1;
  v3 = 0;
  *((_QWORD *)v1 + 3) = 0LL;
  *(_OWORD *)(v1 + 10) = 0LL;
  RtlInitUnicodeString(
    (PUNICODE_STRING)(((unsigned __int64)&v18 & 0xFFFFFFFFFFFFFFE0uLL) + 40),
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\UILanguages");
  v5 = LdrpOpenKey(v1 + 10, 0LL, v4, v1 + 6);
  if ( v5 < 0 )
    return 0LL;
  while ( v5 != -2147483622 )
  {
    v7 = ZwEnumerateKey(
           *(HANDLE *)(((unsigned __int64)&v18 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18),
           v3,
           KeyBasicInformation,
           v1 + 16,
           0x200u,
           v1 + 8);
    v5 = v7;
    if ( v7 < 0 )
    {
      if ( v7 != -2147483622 )
        goto LABEL_23;
    }
    else
    {
      v8 = *(unsigned int *)(((unsigned __int64)&v18 & 0xFFFFFFFFFFFFFFE0uLL) + 0x4C);
      if ( v8 + 24 <= 0x200 )
      {
        *(_WORD *)(((unsigned __int64)&v18 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50 + 2 * (v8 >> 1)) = 0;
        RtlInitUnicodeString((PUNICODE_STRING)(v1 + 10), (PCWSTR)v1 + 40);
        if ( (int)LdrpOpenKey(v1 + 10, *(_QWORD *)(((unsigned __int64)&v18 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18), v9, v1 + 4) >= 0 )
        {
          RtlInitUnicodeString((PUNICODE_STRING)(v1 + 10), L"Type");
          v10 = *(void **)(((unsigned __int64)&v18 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
          *(_DWORD *)(((unsigned __int64)&v18 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 4;
          *(_DWORD *)(((unsigned __int64)&v18 & 0xFFFFFFFFFFFFFFE0uLL) + 0x24) = 4;
          if ( (int)LdrpQueryValueKey(v10, (PUNICODE_STRING)(v1 + 10), (__int64)(v1 + 9)) >= 0
            && (int)ValidateRegistrLangType(*v1) >= 0 )
          {
            v12 = v11 & 0x419F;
            *v1 = v12;
            if ( (v12 & 7) != 0 && (v12 & 7 & -(v12 & 7)) == (v12 & 7) )
            {
              if ( (v12 & 0x180) == 0 || (v13 = v12, (v12 & 0x180 & -(v12 & 0x180)) != (v12 & 0x180)) )
              {
                v12 = v12 & 0xFFFFFE7F | 0x80;
                *v1 = v12;
                v13 = v12;
              }
              v14 = v13 & 0x18;
              if ( v14 && (v14 & -v14) == v14 && (v12 & 0xC) != 8 )
                RtlpMuiRegAddLanguageByName(a1, Length, (__int64)(v1 + 1));
            }
          }
        }
      }
    }
    v15 = *(void **)(((unsigned __int64)&v18 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
    if ( v15 )
    {
      NtClose(v15);
      *(_QWORD *)(((unsigned __int64)&v18 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = 0LL;
    }
    ++v3;
  }
  v5 = 0;
LABEL_23:
  v16 = *(void **)(((unsigned __int64)&v18 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
  if ( v16 )
    NtClose(v16);
  return (unsigned int)v5;
}

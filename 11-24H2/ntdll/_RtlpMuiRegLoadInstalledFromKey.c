/*
 * XREFs of _RtlpMuiRegLoadInstalledFromKey @ 0x1801488A4
 * Callers:
 *     _RtlpMuiRegLoadInstalled @ 0x18011D478 (_RtlpMuiRegLoadInstalled.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800C7EE0 (RtlInitUnicodeString.c)
 *     LdrpQueryValueKey @ 0x1800E4440 (LdrpQueryValueKey.c)
 *     LdrpOpenKey @ 0x1800E61E0 (LdrpOpenKey.c)
 *     RtlpMuiRegAddLanguageByName @ 0x180147570 (RtlpMuiRegAddLanguageByName.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     NtEnumerateKey @ 0x180160690 (NtEnumerateKey.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpMuiRegLoadInstalledFromKey(_QWORD *a1)
{
  unsigned __int64 v1; // rbp
  ULONG v3; // edi
  NTSTATUS v4; // ebx
  NTSTATUS v6; // eax
  unsigned __int64 v7; // rcx
  void *v8; // rcx
  int v9; // r9d
  int v10; // ecx
  _DWORD *v11; // rdx
  __int64 v12; // r9
  char v13; // cl
  int v14; // ecx
  void *v15; // rcx
  void *v16; // rcx
  int Length; // [rsp+20h] [rbp-30h]
  int v18; // [rsp+50h] [rbp+0h] BYREF

  v1 = (unsigned __int64)&v18 & 0xFFFFFFFFFFFFFFE0uLL;
  *(_DWORD *)(v1 + 32) = 0;
  *(_QWORD *)(v1 + 16) = 0LL;
  *(_DWORD *)v1 = 0;
  *(_WORD *)(v1 + 4) = -1;
  v3 = 0;
  *(_QWORD *)(v1 + 24) = 0LL;
  *(_OWORD *)(v1 + 40) = 0LL;
  RtlInitUnicodeString(
    (PUNICODE_STRING)(((unsigned __int64)&v18 & 0xFFFFFFFFFFFFFFE0uLL) + 40),
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\UILanguages");
  v4 = LdrpOpenKey((_UNICODE_STRING *)(v1 + 40), 0LL, 0x20019u, (HANDLE *)(v1 + 24));
  if ( v4 < 0 )
    return 0LL;
  while ( v4 != -2147483622 )
  {
    v6 = NtEnumerateKey(
           *(HANDLE *)(((unsigned __int64)&v18 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18),
           v3,
           KeyBasicInformation,
           (PVOID)(v1 + 64),
           0x200u,
           (PULONG)(v1 + 32));
    v4 = v6;
    if ( v6 < 0 )
    {
      if ( v6 != -2147483622 )
        goto LABEL_31;
    }
    else
    {
      v7 = *(unsigned int *)(((unsigned __int64)&v18 & 0xFFFFFFFFFFFFFFE0uLL) + 0x4C);
      if ( v7 + 24 <= 0x200 )
      {
        *(_WORD *)(((unsigned __int64)&v18 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50 + 2 * (v7 >> 1)) = 0;
        RtlInitUnicodeString((PUNICODE_STRING)(v1 + 40), (PCWSTR)(v1 + 80));
        if ( LdrpOpenKey(
               (_UNICODE_STRING *)(v1 + 40),
               *(void **)(((unsigned __int64)&v18 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18),
               0x20019u,
               (HANDLE *)(v1 + 16)) >= 0 )
        {
          RtlInitUnicodeString((PUNICODE_STRING)(v1 + 40), L"Type");
          v8 = *(void **)(((unsigned __int64)&v18 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
          *(_DWORD *)(((unsigned __int64)&v18 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 4;
          *(_DWORD *)(((unsigned __int64)&v18 & 0xFFFFFFFFFFFFFFE0uLL) + 0x24) = 4;
          if ( (int)LdrpQueryValueKey(
                      v8,
                      (PUNICODE_STRING)(v1 + 40),
                      (_DWORD *)(v1 + 8),
                      (void *)((unsigned __int64)&v18 & 0xFFFFFFFFFFFFFFE0uLL),
                      (ULONG *)(v1 + 36)) >= 0 )
          {
            v9 = *(_DWORD *)v1;
            if ( (*(_DWORD *)v1 & 0x18) != 0 && (v9 & 7) != 0 )
            {
              v10 = 0;
              v11 = &ulInvalidTypes;
              while ( v10 < 8 )
              {
                if ( *v11 == (v9 & *v11) )
                  goto LABEL_27;
                ++v10;
                ++v11;
              }
              if ( (v9 & 1) == 0 && (v9 & 2) == 0 || (v9 & 0x10) != 0 )
              {
                v12 = v9 & 0x419F;
                *(_DWORD *)v1 = v12;
                if ( (v12 & 7) != 0 && (v12 & 7 & (unsigned int)-(v12 & 7)) == (v12 & 7) )
                {
                  if ( (v12 & 0x180) == 0 || (v13 = v12, (v12 & 0x180 & (unsigned int)-(v12 & 0x180)) != (v12 & 0x180)) )
                  {
                    LODWORD(v12) = v12 & 0xFFFFFE7F | 0x80;
                    *(_DWORD *)v1 = v12;
                    v13 = v12;
                  }
                  v14 = v13 & 0x18;
                  if ( v14 && (v14 & -v14) == v14 && (v12 & 0xC) != 8 )
                    RtlpMuiRegAddLanguageByName(
                      a1,
                      *(void **)(((unsigned __int64)&v18 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10),
                      (wchar_t *)(v1 + 80),
                      v12,
                      Length,
                      v1 + 4);
                }
              }
            }
          }
        }
      }
    }
LABEL_27:
    v15 = *(void **)(((unsigned __int64)&v18 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
    if ( v15 )
    {
      NtClose(v15);
      *(_QWORD *)(((unsigned __int64)&v18 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = 0LL;
    }
    ++v3;
  }
  v4 = 0;
LABEL_31:
  v16 = *(void **)(((unsigned __int64)&v18 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
  if ( v16 )
    NtClose(v16);
  return (unsigned int)v4;
}

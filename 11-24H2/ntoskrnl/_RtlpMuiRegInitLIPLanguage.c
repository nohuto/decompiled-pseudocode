/*
 * XREFs of _RtlpMuiRegInitLIPLanguage @ 0x14082E2A8
 * Callers:
 *     RtlpMuiRegAddLanguageByName @ 0x14082C118 (RtlpMuiRegAddLanguageByName.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwEnumerateValueKey @ 0x1406A7610 (ZwEnumerateValueKey.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     LdrpQueryValueKey @ 0x1407840B0 (LdrpQueryValueKey.c)
 *     _RtlMuiRegAddLIPParent @ 0x14082DC8C (_RtlMuiRegAddLIPParent.c)
 *     RtlCompareUnicodeStrings @ 0x14088C7D0 (RtlCompareUnicodeStrings.c)
 */

__int64 __fastcall RtlpMuiRegInitLIPLanguage(__int64 a1, void *a2, _BYTE *a3)
{
  unsigned __int64 v3; // rbp
  __int64 v4; // rbx
  NTSTATUS v8; // esi
  unsigned int v9; // edi
  ULONG v10; // r12d
  NTSTATUS ValueKey; // eax
  unsigned __int64 v12; // rcx
  int v14; // [rsp+50h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0uLL;
  LODWORD(v4) = 0;
  *(_DWORD *)(v3 + 28) = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  *(_OWORD *)(v3 + 8) = 0LL;
  memset_0((void *)(((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0uLL) + 32), 0, 0xAAuLL);
  if ( !a1 || !a2 || !a3 || (*a3 & 4) == 0 )
    return 3221225485LL;
  RtlInitUnicodeString((PUNICODE_STRING)(v3 + 8), L"DefaultFallback");
  *(_DWORD *)v3 = 1;
  *(_DWORD *)(((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = 170;
  if ( (int)LdrpQueryValueKey(
              a2,
              (PUNICODE_STRING)(v3 + 8),
              (_DWORD *)((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0uLL),
              (void *)(v3 + 32),
              (ULONG *)(v3 + 24)) >= 0
    && *(_DWORD *)v3 == 1 )
  {
    RtlInitUnicodeString((PUNICODE_STRING)(v3 + 8), (PCWSTR)(v3 + 32));
    *(_DWORD *)v3 = 7;
    ValueKey = LdrpQueryValueKey(
                 a2,
                 (PUNICODE_STRING)(v3 + 8),
                 (_DWORD *)((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0uLL),
                 0LL,
                 0LL);
    v8 = ValueKey;
    if ( (!ValueKey || ValueKey == -2147483643)
      && (*(_DWORD *)v3 == 7 || *(_DWORD *)v3 == 1)
      && (int)RtlMuiRegAddLIPParent(a1, (__int64)a3, 0, (WCHAR *)(v3 + 32)) >= 0 )
    {
      v9 = 1;
      v4 = -1LL;
      do
        ++v4;
      while ( *(_WORD *)(((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20 + 2 * v4) );
    }
  }
  while ( v8 != -2147483622 )
  {
    if ( v9 >= 4 )
      break;
    v8 = ZwEnumerateValueKey(a2, v10, KeyValueFullInformation, (PVOID)(v3 + 224), 0x200u, (PULONG)(v3 + 28));
    if ( v8 < 0 )
      break;
    if ( *(_DWORD *)(((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0uLL) + 0xE4) == 7
      || *(_DWORD *)(((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0uLL) + 0xE4) == 1 )
    {
      v12 = *(unsigned int *)(((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0uLL) + 0xF0);
      if ( v12 + 24 <= 0x200 )
      {
        *(_WORD *)(((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0uLL) + 0xF4 + 2 * (v12 >> 1)) = 0;
        RtlInitUnicodeString((PUNICODE_STRING)(v3 + 8), (PCWSTR)(v3 + 244));
        if ( (!(_DWORD)v4
           || RtlCompareUnicodeStrings(
                *(PCWCH *)(((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10),
                (unsigned __int64)*(unsigned __int16 *)(((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0uLL) + 8) >> 1,
                (PCWCH)(v3 + 32),
                (unsigned int)v4,
                1u))
          && (int)RtlMuiRegAddLIPParent(
                    a1,
                    (__int64)a3,
                    v9,
                    *(WCHAR **)(((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10)) >= 0 )
        {
          ++v9;
        }
      }
    }
    ++v10;
  }
  return 0LL;
}

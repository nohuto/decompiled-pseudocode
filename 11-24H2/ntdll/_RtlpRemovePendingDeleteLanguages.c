/*
 * XREFs of _RtlpRemovePendingDeleteLanguages @ 0x180149744
 * Callers:
 *     _RtlpMuiRegValidateInstalled @ 0x180149010 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800C7EE0 (RtlInitUnicodeString.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x1800CAFA0 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     LdrpOpenKey @ 0x1800E61E0 (LdrpOpenKey.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     NtEnumerateKey @ 0x180160690 (NtEnumerateKey.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpRemovePendingDeleteLanguages(__int64 a1, __int16 a2)
{
  __int16 *v2; // rbp
  ULONG v6; // ebx
  NTSTATUS v7; // esi
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  void *v11; // rcx
  _WORD v12[2]; // [rsp+50h] [rbp+0h] BYREF

  v2 = (__int16 *)((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFE0uLL);
  *((_QWORD *)v2 + 1) = 0LL;
  *((_DWORD *)v2 + 1) = 0;
  *v2 = -1;
  *((_OWORD *)v2 + 1) = 0LL;
  if ( !a1 )
    return 3221225485LL;
  RtlInitUnicodeString(
    (PUNICODE_STRING)v2 + 1,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\UILanguages\\PendingDelete");
  if ( LdrpOpenKey((_UNICODE_STRING *)v2 + 1, 0LL, 0x20019u, (HANDLE *)v2 + 1) >= 0 )
  {
    v6 = 0;
    do
    {
      while ( 1 )
      {
        v7 = NtEnumerateKey(
               *(HANDLE *)(((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFE0uLL) + 8),
               v6,
               KeyBasicInformation,
               v2 + 16,
               0x200u,
               (PULONG)v2 + 1);
        if ( v7 < 0 )
          break;
        v8 = *(unsigned int *)(((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFE0uLL) + 0x2C);
        if ( v8 + 24 >= 0x1FE )
          break;
        *(_WORD *)(((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30 + 2 * (v8 >> 1)) = 0;
        if ( (int)RtlpMuiRegGetInstalledLanguageIndexByName(
                    a1,
                    (wchar_t *)v2 + 24,
                    0,
                    (_WORD *)((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFE0uLL)) < 0 )
          break;
        v9 = *v2;
        if ( (_WORD)v9 == 0xFFFF || (_WORD)v9 == a2 )
          break;
        v10 = 28 * v9;
        *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + v10) &= ~0x20u;
        *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + v10) |= 0x8000u;
        ++v6;
      }
      ++v6;
    }
    while ( v7 != -2147483622 );
    v11 = *(void **)(((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
    if ( v11 )
      NtClose(v11);
  }
  return 0LL;
}

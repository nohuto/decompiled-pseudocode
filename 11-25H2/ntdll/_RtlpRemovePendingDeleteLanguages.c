/*
 * XREFs of _RtlpRemovePendingDeleteLanguages @ 0x18014C944
 * Callers:
 *     _RtlpMuiRegValidateInstalled @ 0x18014C210 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x180089F60 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlInitUnicodeString @ 0x1800A8A00 (RtlInitUnicodeString.c)
 *     LdrpOpenKey @ 0x1800EBDC0 (LdrpOpenKey.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtEnumerateKey @ 0x180163860 (NtEnumerateKey.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpRemovePendingDeleteLanguages(__int64 a1, __int16 a2)
{
  UNICODE_STRING *v2; // rbp
  unsigned int v6; // ebx
  int v7; // esi
  unsigned __int64 v8; // rdx
  __int64 Length; // rax
  __int64 v10; // rdx
  void *v11; // rcx
  _WORD v12[2]; // [rsp+50h] [rbp+0h] BYREF

  v2 = (UNICODE_STRING *)((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFE0uLL);
  v2->Buffer = 0LL;
  *(_DWORD *)(&v2->MaximumLength + 1) = 0;
  v2->Length = -1;
  v2[1] = 0LL;
  if ( !a1 )
    return 3221225485LL;
  RtlInitUnicodeString(
    v2 + 1,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\UILanguages\\PendingDelete");
  if ( (int)LdrpOpenKey((__int64)&v2[1], 0LL, 0x20019u, &v2->Buffer) >= 0 )
  {
    v6 = 0;
    do
    {
      while ( 1 )
      {
        v7 = NtEnumerateKey(
               *(_QWORD *)(((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFE0uLL) + 8),
               v6,
               0LL,
               &v2[2],
               512,
               &v2->MaximumLength + 1);
        if ( v7 < 0 )
          break;
        v8 = *(unsigned int *)(((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFE0uLL) + 0x2C);
        if ( v8 + 24 >= 0x1FE )
          break;
        *(_WORD *)(((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30 + 2 * (v8 >> 1)) = 0;
        if ( (int)RtlpMuiRegGetInstalledLanguageIndexByName(
                    a1,
                    &v2[3].Length,
                    0,
                    (_WORD *)((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFE0uLL)) < 0 )
          break;
        Length = (__int16)v2->Length;
        if ( (_WORD)Length == 0xFFFF || (_WORD)Length == a2 )
          break;
        v10 = 28 * Length;
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

/*
 * XREFs of RtlpWow64SelectSystem32PathInternal @ 0x18007BFBC
 * Callers:
 *     RtlReplaceSystemDirectoryInPath @ 0x18007C4E0 (RtlReplaceSystemDirectoryInPath.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800C7EE0 (RtlInitUnicodeString.c)
 *     wcslen @ 0x180125A00 (wcslen.c)
 */

__int64 __fastcall RtlpWow64SelectSystem32PathInternal(unsigned __int16 a1, char a2, _UNICODE_STRING *a3)
{
  const wchar_t *v5; // rcx
  size_t v6; // rax
  const wchar_t *v8; // rcx
  size_t v9; // rax
  const WCHAR *v10; // rdx

  switch ( a1 )
  {
    case 1u:
      goto LABEL_9;
    case 0x14Cu:
      *(_QWORD *)&a3->Length = 0LL;
      v5 = L"\\SysWOW64\\";
      if ( !a2 )
        v5 = L"SysWOW64";
LABEL_5:
      a3->Buffer = (wchar_t *)v5;
      v6 = 2 * wcslen(v5);
      if ( v6 >= 0xFFFE )
        LOWORD(v6) = -4;
      a3->Length = v6;
      a3->MaximumLength = v6 + 2;
      return 0LL;
    case 0x1C4u:
      *(_QWORD *)&a3->Length = 0LL;
      v5 = L"\\SysARM32\\";
      if ( !a2 )
        v5 = L"SysARM32";
      goto LABEL_5;
    case 0x3A64u:
      v10 = L"\\SyCHPE32\\";
      if ( !a2 )
        v10 = L"SyCHPE32";
      RtlInitUnicodeString(a3, v10);
      return 0LL;
    case 0x8664u:
    case 0xAA64u:
LABEL_9:
      *(_QWORD *)&a3->Length = 0LL;
      v8 = L"\\System32\\";
      if ( !a2 )
        v8 = L"System32";
      a3->Buffer = (wchar_t *)v8;
      v9 = 2 * wcslen(v8);
      if ( v9 >= 0xFFFE )
        LOWORD(v9) = -4;
      a3->Length = v9;
      a3->MaximumLength = v9 + 2;
      return 0LL;
  }
  return 3221225485LL;
}

/*
 * XREFs of RtlpInitNlsSectionName @ 0x140A05900
 * Callers:
 *     NtGetNlsSectionPtr @ 0x140A053E0 (NtGetNlsSectionPtr.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     RtlStringCchPrintfW @ 0x140472F38 (RtlStringCchPrintfW.c)
 */

NTSTATUS __fastcall RtlpInitNlsSectionName(
        int a1,
        unsigned int a2,
        wchar_t *a3,
        __int64 a4,
        UNICODE_STRING *DestinationString)
{
  const WCHAR *v5; // rdi
  int v6; // ecx
  int v7; // ecx
  char *v8; // r9
  __int64 v9; // rdx
  wchar_t v10; // ax
  wchar_t *v11; // rax
  unsigned int v12; // ebx
  NTSTATUS result; // eax

  v5 = a3;
  v6 = a1 - 11;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 != 2 )
        return -1073741585;
      v8 = (char *)((char *)L"\\NLS\\NlsSectionCASE" - (char *)a3);
      v9 = 64LL;
      do
      {
        if ( v9 == -2147483582 )
          break;
        v10 = *(wchar_t *)((char *)a3 + (_QWORD)v8);
        if ( !v10 )
          break;
        *a3++ = v10;
        --v9;
      }
      while ( v9 );
      v11 = a3 - 1;
      if ( v9 )
        v11 = a3;
      *v11 = 0;
      v12 = v9 == 0 ? 0x80000005 : 0;
      if ( !v9 )
        return v12;
LABEL_15:
      RtlInitUnicodeString(DestinationString, v5);
      return v12;
    }
    result = RtlStringCchPrintfW(a3, 0x40uLL, L"\\NLS\\NlsSectionNORM%.8x", a2);
  }
  else
  {
    result = RtlStringCchPrintfW(a3, 0x40uLL, L"\\NLS\\NlsSectionCP%d", a2);
  }
  v12 = result;
  if ( result >= 0 )
    goto LABEL_15;
  return result;
}

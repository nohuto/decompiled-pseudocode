/*
 * XREFs of RtlUnicodeStringCopyString @ 0x1C000612C
 * Callers:
 *     KbdConfiguration @ 0x1C00119A0 (KbdConfiguration.c)
 * Callees:
 *     RtlUnicodeStringValidateDestWorker @ 0x1C0005900 (RtlUnicodeStringValidateDestWorker.c)
 */

NTSTATUS __stdcall RtlUnicodeStringCopyString(PUNICODE_STRING DestinationString, NTSTRSAFE_PCWSTR pszSrc)
{
  size_t *v2; // r9
  int v4; // r8d
  size_t v5; // rcx
  const wchar_t *v6; // rdx
  __int64 v7; // r9
  __int16 v8; // ax
  signed __int64 v9; // r11
  size_t v11; // [rsp+20h] [rbp-18h]
  ULONG v12; // [rsp+28h] [rbp-10h]
  size_t v13; // [rsp+48h] [rbp+10h] BYREF
  wchar_t *v14; // [rsp+50h] [rbp+18h] BYREF

  v14 = 0LL;
  v13 = 0LL;
  v4 = RtlUnicodeStringValidateDestWorker(DestinationString, &v14, &v13, v2, v11, v12);
  if ( v4 >= 0 )
  {
    v5 = v13;
    v6 = L"KeyboardClass";
    v7 = 0x7FFFLL;
    v4 = 0;
    v8 = 0;
    if ( !v13 )
      goto LABEL_10;
    v9 = (char *)v14 - (char *)L"KeyboardClass";
    do
    {
      if ( !v7 )
        break;
      if ( !*v6 )
        break;
      *(const wchar_t *)((char *)v6 + v9) = *v6;
      --v7;
      ++v6;
      ++v8;
      --v5;
    }
    while ( v5 );
    if ( !v5 && v7 && *v6 )
LABEL_10:
      v4 = -2147483643;
    DestinationString->Length = 2 * v8;
  }
  return v4;
}

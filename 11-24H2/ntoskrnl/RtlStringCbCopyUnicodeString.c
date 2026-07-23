/*
 * XREFs of RtlStringCbCopyUnicodeString @ 0x1404109F4
 * Callers:
 *     PoStoreRequester @ 0x1402BAE34 (PoStoreRequester.c)
 *     PopSafeCopyUnicodeString @ 0x14041093C (PopSafeCopyUnicodeString.c)
 * Callees:
 *     RtlUnicodeStringValidateWorker_0 @ 0x140410AA0 (RtlUnicodeStringValidateWorker_0.c)
 */

NTSTATUS __stdcall RtlStringCbCopyUnicodeString(NTSTRSAFE_PWSTR pszDest, size_t cbDest, PCUNICODE_STRING SourceString)
{
  NTSTATUS result; // eax
  __int64 v5; // r10
  _WORD *v6; // r11
  wchar_t *Buffer; // r9
  unsigned __int64 v8; // r8
  __int64 v9; // r8
  _WORD *v10; // rcx
  signed __int64 v11; // r9
  __int64 v12; // rdx
  _WORD *v13; // rax

  if ( (cbDest >> 1) - 1 > 0x7FFE )
    return -1073741811;
  result = RtlUnicodeStringValidateWorker_0(SourceString, cbDest, (ULONG)SourceString);
  if ( result >= 0 && SourceString )
  {
    Buffer = SourceString->Buffer;
    v8 = (unsigned __int64)SourceString->Length >> 1;
  }
  else
  {
    Buffer = 0LL;
    v8 = 0LL;
    if ( result < 0 )
    {
      *v6 = 0;
      return result;
    }
  }
  v9 = v8 - v5;
  v10 = v6;
  v11 = (char *)Buffer - (char *)v6;
  v12 = v5;
  do
  {
    if ( !(v9 + v12) )
      break;
    *v10 = *(_WORD *)((char *)v10 + v11);
    ++v10;
    --v12;
  }
  while ( v12 );
  v13 = v10 - 1;
  if ( v12 )
    v13 = v10;
  *v13 = 0;
  return v12 == 0 ? 0x80000005 : 0;
}

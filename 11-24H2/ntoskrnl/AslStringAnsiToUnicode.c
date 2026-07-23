/*
 * XREFs of AslStringAnsiToUnicode @ 0x140808AD4
 * Callers:
 *     AslpFileGet16BitDescription @ 0x14080D144 (AslpFileGet16BitDescription.c)
 *     AslpFileGet16BitModuleName @ 0x14080D228 (AslpFileGet16BitModuleName.c)
 *     AslpFileGetClrVersionAttribute @ 0x14080D7FC (AslpFileGetClrVersionAttribute.c)
 *     AslpFileGetExportName @ 0x14080DFE0 (AslpFileGetExportName.c)
 * Callees:
 *     RtlInitAnsiString @ 0x14045BBA0 (RtlInitAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x140903ED0 (RtlAnsiStringToUnicodeString.c)
 *     RtlMultiByteToUnicodeSize @ 0x140904BB0 (RtlMultiByteToUnicodeSize.c)
 *     AslFree @ 0x1409447E4 (AslFree.c)
 *     AslAlloc @ 0x140944EA4 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 */

__int64 __fastcall AslStringAnsiToUnicode(wchar_t **a1, const CHAR *a2)
{
  __int64 v3; // rcx
  ULONG v4; // esi
  NTSTATUS v5; // edi
  const char *v6; // r9
  int v7; // r8d
  __int64 v8; // rcx
  UNICODE_STRING v10; // [rsp+30h] [rbp-20h] BYREF
  STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  ULONG BytesInUnicodeString; // [rsp+70h] [rbp+20h] BYREF

  DestinationString = 0LL;
  RtlInitAnsiString(&DestinationString, a2);
  BytesInUnicodeString = 0;
  RtlMultiByteToUnicodeSize(&BytesInUnicodeString, DestinationString.Buffer, DestinationString.Length);
  v4 = BytesInUnicodeString + 2;
  *a1 = 0LL;
  v10 = 0LL;
  if ( v4 <= 0xFFFF )
  {
    v10.Buffer = (wchar_t *)AslAlloc(v3, v4);
    if ( !v10.Buffer )
    {
      v5 = -1073741801;
      AslLogCallPrintf(1, (unsigned int)"AslStringAnsiToUnicode", 404, (unsigned int)"Out of memory");
      goto LABEL_9;
    }
    v10.MaximumLength = v4;
    v10.Length = 0;
    v5 = RtlAnsiStringToUnicodeString(&v10, &DestinationString, 0);
    if ( v5 >= 0 )
    {
      *a1 = v10.Buffer;
      v5 = 0;
      goto LABEL_9;
    }
    v6 = "RtlAnsiStringToUnicodeString failed [%x]";
    v7 = 413;
  }
  else
  {
    v5 = -1073741811;
    v6 = "Ansi string is too long to convert at %d";
    v7 = 397;
  }
  AslLogCallPrintf(1, (unsigned int)"AslStringAnsiToUnicode", v7, (_DWORD)v6);
LABEL_9:
  AslFree(v8);
  return (unsigned int)v5;
}

/*
 * XREFs of RtlUnicodeToOemN @ 0x180102310
 * Callers:
 *     RtlUnicodeStringToCountedOemString @ 0x18013A480 (RtlUnicodeStringToCountedOemString.c)
 * Callees:
 *     RtlUnicodeToCustomCPN @ 0x18007E5D0 (RtlUnicodeToCustomCPN.c)
 *     RtlpIsUtf8Process @ 0x18008D5B0 (RtlpIsUtf8Process.c)
 */

NTSTATUS __cdecl RtlUnicodeToOemN(
        PCHAR OemString,
        ULONG MaxBytesInOemString,
        PULONG BytesInOemString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  ULONG v5; // edx
  ULONG *v6; // r8
  WCHAR *v7; // r9
  CHAR *v8; // r10
  _CPTABLEINFO *v9; // rcx
  signed __int32 v11[8]; // [rsp+0h] [rbp-38h] BYREF

  if ( RtlpIsUtf8Process() )
  {
    v9 = (_CPTABLEINFO *)&Utf8TableInfo;
  }
  else
  {
    _InterlockedOr(v11, 0);
    v9 = &GlobalRtlNlsState;
  }
  return RtlUnicodeToCustomCPN(v9, v8, v5, v6, v7, BytesInUnicodeString);
}

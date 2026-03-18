/*
 * XREFs of RtlUnicodeToOemN @ 0x1408B1040
 * Callers:
 *     RtlUnicodeStringToCountedOemString @ 0x1408B0F30 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUnicodeStringToOemString @ 0x140AA95F0 (RtlUnicodeStringToOemString.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
 *     RtlpIsUtf8Process @ 0x1408AF8F0 (RtlpIsUtf8Process.c)
 *     RtlUnicodeToCustomCPN @ 0x1408B0480 (RtlUnicodeToCustomCPN.c)
 */

NTSTATUS __stdcall RtlUnicodeToOemN(
        PCHAR OemString,
        ULONG MaxBytesInOemString,
        PULONG BytesInOemString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  struct _CPTABLEINFO *p_Blink; // rcx
  signed __int32 v11[8]; // [rsp+0h] [rbp-38h] BYREF

  if ( RtlpIsUtf8Process() )
  {
    p_Blink = &Utf8TableInfo;
  }
  else
  {
    _InterlockedOr(v11, 0);
    p_Blink = (struct _CPTABLEINFO *)&PsGetCurrentServerSiloGlobals()[64].Blink;
  }
  return RtlUnicodeToCustomCPN(
           p_Blink,
           OemString,
           MaxBytesInOemString,
           BytesInOemString,
           (PWCH)UnicodeString,
           BytesInUnicodeString);
}

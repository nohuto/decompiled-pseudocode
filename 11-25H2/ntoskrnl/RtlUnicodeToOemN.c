/*
 * XREFs of RtlUnicodeToOemN @ 0x1408E8900
 * Callers:
 *     RtlUnicodeStringToCountedOemString @ 0x1408E87F0 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUnicodeStringToOemString @ 0x140AA4590 (RtlUnicodeStringToOemString.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     RtlpIsUtf8Process @ 0x1408E7140 (RtlpIsUtf8Process.c)
 *     RtlUnicodeToCustomCPN @ 0x1408E7CD0 (RtlUnicodeToCustomCPN.c)
 */

NTSTATUS __stdcall RtlUnicodeToOemN(
        PCHAR OemString,
        ULONG MaxBytesInOemString,
        PULONG BytesInOemString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  _CPTABLEINFO *p_Blink; // rcx
  signed __int32 v11[8]; // [rsp+0h] [rbp-38h] BYREF

  if ( RtlpIsUtf8Process() )
  {
    p_Blink = &Utf8TableInfo;
  }
  else
  {
    _InterlockedOr(v11, 0);
    p_Blink = (_CPTABLEINFO *)&PsGetCurrentServerSiloGlobals()[64].Blink;
  }
  return RtlUnicodeToCustomCPN(
           p_Blink,
           OemString,
           MaxBytesInOemString,
           BytesInOemString,
           (PWCH)UnicodeString,
           BytesInUnicodeString);
}

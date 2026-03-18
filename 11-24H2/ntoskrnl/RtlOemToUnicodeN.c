/*
 * XREFs of RtlOemToUnicodeN @ 0x1408B10C0
 * Callers:
 *     RtlOemStringToCountedUnicodeString @ 0x1408B1160 (RtlOemStringToCountedUnicodeString.c)
 *     RtlOemStringToUnicodeString @ 0x1408B1450 (RtlOemStringToUnicodeString.c)
 *     FsRtlNotifyUpdateBuffer @ 0x140A7284C (FsRtlNotifyUpdateBuffer.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
 *     RtlpIsUtf8Process @ 0x1408AF8F0 (RtlpIsUtf8Process.c)
 *     RtlCustomCPToUnicodeN @ 0x1408AFC70 (RtlCustomCPToUnicodeN.c)
 */

NTSTATUS __stdcall RtlOemToUnicodeN(
        PWCH UnicodeString,
        ULONG MaxBytesInUnicodeString,
        PULONG BytesInUnicodeString,
        PCCH OemString,
        ULONG BytesInOemString)
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  struct _CPTABLEINFO *p_Blink; // rcx
  signed __int32 v12[8]; // [rsp+0h] [rbp-38h] BYREF

  if ( RtlpIsUtf8Process() )
  {
    p_Blink = &Utf8TableInfo;
  }
  else
  {
    _InterlockedOr(v12, 0);
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    p_Blink = (struct _CPTABLEINFO *)&CurrentServerSiloGlobals[64].Blink;
    if ( LOWORD(CurrentServerSiloGlobals[64].Blink) != 1 )
      p_Blink = (struct _CPTABLEINFO *)&CurrentServerSiloGlobals[68].Blink;
  }
  return RtlCustomCPToUnicodeN(
           p_Blink,
           UnicodeString,
           MaxBytesInUnicodeString,
           BytesInUnicodeString,
           (PCH)OemString,
           BytesInOemString);
}

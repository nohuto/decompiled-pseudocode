/*
 * XREFs of RtlOemToUnicodeN @ 0x140907320
 * Callers:
 *     RtlOemStringToCountedUnicodeString @ 0x1409073C0 (RtlOemStringToCountedUnicodeString.c)
 *     RtlOemStringToUnicodeString @ 0x1409076B0 (RtlOemStringToUnicodeString.c)
 *     FsRtlNotifyUpdateBuffer @ 0x140A6BC2C (FsRtlNotifyUpdateBuffer.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     RtlpIsUtf8Process @ 0x140905B50 (RtlpIsUtf8Process.c)
 *     RtlCustomCPToUnicodeN @ 0x140905ED0 (RtlCustomCPToUnicodeN.c)
 */

NTSTATUS __stdcall RtlOemToUnicodeN(
        PWCH UnicodeString,
        ULONG MaxBytesInUnicodeString,
        PULONG BytesInUnicodeString,
        PCCH OemString,
        ULONG BytesInOemString)
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  _CPTABLEINFO *p_Blink; // rcx
  signed __int32 v12[8]; // [rsp+0h] [rbp-38h] BYREF

  if ( RtlpIsUtf8Process() )
  {
    p_Blink = &Utf8TableInfo;
  }
  else
  {
    _InterlockedOr(v12, 0);
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    p_Blink = (_CPTABLEINFO *)&CurrentServerSiloGlobals[64].Blink;
    if ( LOWORD(CurrentServerSiloGlobals[64].Blink) != 1 )
      p_Blink = (_CPTABLEINFO *)&CurrentServerSiloGlobals[68].Blink;
  }
  return RtlCustomCPToUnicodeN(
           p_Blink,
           UnicodeString,
           MaxBytesInUnicodeString,
           BytesInUnicodeString,
           (PCH)OemString,
           BytesInOemString);
}

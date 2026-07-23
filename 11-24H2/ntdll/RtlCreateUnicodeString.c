/*
 * XREFs of RtlCreateUnicodeString @ 0x180054A50
 * Callers:
 *     LdrpLogDllStateEx2 @ 0x180006024 (LdrpLogDllStateEx2.c)
 *     RtlGetParentLocaleName @ 0x180012850 (RtlGetParentLocaleName.c)
 *     RtlConvertSidToUnicodeString @ 0x1800190C0 (RtlConvertSidToUnicodeString.c)
 *     LdrSetDllDirectory @ 0x180052B00 (LdrSetDllDirectory.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180080610 (EtwpAddLogHeaderToLogFile.c)
 *     RtlpInitUnicodeStringUsingBuffer @ 0x18009A010 (RtlpInitUnicodeStringUsingBuffer.c)
 *     EtwpInitLoggerContext @ 0x1800A8DF0 (EtwpInitLoggerContext.c)
 *     EtwpAddInstanceIdToLogFileName @ 0x1800A92EC (EtwpAddInstanceIdToLogFileName.c)
 *     RtlCanonicalizeDomainName @ 0x1800B2190 (RtlCanonicalizeDomainName.c)
 *     LdrpMakeUnicodeStringFromPathElement @ 0x18015ED14 (LdrpMakeUnicodeStringFromPathElement.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180005870 (RtlpSysVolFree.c)
 *     RtlpAllocateAtom @ 0x180039CC0 (RtlpAllocateAtom.c)
 *     wcslen @ 0x180125A00 (wcslen.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

BOOLEAN __cdecl RtlCreateUnicodeString(PUNICODE_STRING DestinationString, PCWSTR SourceString)
{
  int v4; // eax
  unsigned int v5; // esi
  wchar_t *Atom; // rax

  v4 = wcslen(SourceString);
  v5 = 2 * v4 + 2;
  if ( (unsigned int)(2 * v4 + 1) > 0xFFFD )
    return 0;
  Atom = (wchar_t *)RtlpAllocateAtom(v5);
  DestinationString->Buffer = Atom;
  if ( !Atom )
    return 0;
  DestinationString->MaximumLength = v5;
  memmove(Atom, SourceString, v5);
  DestinationString->Length = v5 - 2;
  return 1;
}

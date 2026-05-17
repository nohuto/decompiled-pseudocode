/*
 * XREFs of RtlCreateUnicodeString @ 0x180028050
 * Callers:
 *     LdrSetDllDirectory @ 0x180026100 (LdrSetDllDirectory.c)
 *     RtlGetParentLocaleName @ 0x180033970 (RtlGetParentLocaleName.c)
 *     RtlConvertSidToUnicodeString @ 0x180038E40 (RtlConvertSidToUnicodeString.c)
 *     LdrpLogDllStateEx2 @ 0x180084174 (LdrpLogDllStateEx2.c)
 *     EtwpInitLoggerContext @ 0x18008D330 (EtwpInitLoggerContext.c)
 *     EtwpAddInstanceIdToLogFileName @ 0x18008D82C (EtwpAddInstanceIdToLogFileName.c)
 *     EtwpAddLogHeaderToLogFile @ 0x1800B3D70 (EtwpAddLogHeaderToLogFile.c)
 *     RtlCanonicalizeDomainName @ 0x1800BA3D0 (RtlCanonicalizeDomainName.c)
 *     RtlpInitUnicodeStringUsingBuffer @ 0x1800D30B0 (RtlpInitUnicodeStringUsingBuffer.c)
 *     LdrpMakeUnicodeStringFromPathElement @ 0x180160954 (LdrpMakeUnicodeStringFromPathElement.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180001470 (RtlpSysVolFree.c)
 *     RtlpAllocateAtom @ 0x18000D2C0 (RtlpAllocateAtom.c)
 *     wcslen @ 0x1801277D0 (wcslen.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

char __fastcall RtlCreateUnicodeString(__int64 a1, const wchar_t *a2)
{
  int v4; // eax
  unsigned int v5; // esi
  void *Atom; // rax

  v4 = wcslen(a2);
  v5 = 2 * v4 + 2;
  if ( (unsigned int)(2 * v4 + 1) > 0xFFFD )
    return 0;
  Atom = (void *)RtlpAllocateAtom(v5);
  *(_QWORD *)(a1 + 8) = Atom;
  if ( !Atom )
    return 0;
  *(_WORD *)(a1 + 2) = v5;
  memmove(Atom, a2, v5);
  *(_WORD *)a1 = v5 - 2;
  return 1;
}

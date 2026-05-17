/*
 * XREFs of RtlCreateUnicodeString @ 0x180082430
 * Callers:
 *     RtlConvertSidToUnicodeString @ 0x18005F8F0 (RtlConvertSidToUnicodeString.c)
 *     LdrSetDllDirectory @ 0x1800804E0 (LdrSetDllDirectory.c)
 *     EtwpAddLogHeaderToLogFile @ 0x1800824C0 (EtwpAddLogHeaderToLogFile.c)
 *     RtlGetParentLocaleName @ 0x1800A7380 (RtlGetParentLocaleName.c)
 *     LdrpLogDllStateEx2 @ 0x1800AC504 (LdrpLogDllStateEx2.c)
 *     EtwpInitLoggerContext @ 0x1800B5FE0 (EtwpInitLoggerContext.c)
 *     EtwpAddInstanceIdToLogFileName @ 0x1800B66D8 (EtwpAddInstanceIdToLogFileName.c)
 *     RtlCanonicalizeDomainName @ 0x1800BF430 (RtlCanonicalizeDomainName.c)
 *     RtlpInitUnicodeStringUsingBuffer @ 0x1800DF090 (RtlpInitUnicodeStringUsingBuffer.c)
 *     LdrpMakeUnicodeStringFromPathElement @ 0x180161EA4 (LdrpMakeUnicodeStringFromPathElement.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     RtlpAllocateAtom @ 0x18004C160 (RtlpAllocateAtom.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     memmove @ 0x180168980 (memmove.c)
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
  Atom = (void *)RtlpAllocateAtom();
  *(_QWORD *)(a1 + 8) = Atom;
  if ( !Atom )
    return 0;
  *(_WORD *)(a1 + 2) = v5;
  memmove(Atom, a2, v5);
  *(_WORD *)a1 = v5 - 2;
  return 1;
}

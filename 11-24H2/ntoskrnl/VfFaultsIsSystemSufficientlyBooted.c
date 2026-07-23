/*
 * XREFs of VfFaultsIsSystemSufficientlyBooted @ 0x140B9865C
 * Callers:
 *     VfFaultsInjectResourceFailure @ 0x140B98568 (VfFaultsInjectResourceFailure.c)
 *     ViRlrsMmMapLockedPages_Entry @ 0x140BA1770 (ViRlrsMmMapLockedPages_Entry.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x140BA2B40 (VerifierMmMapLockedPagesSpecifyCache.c)
 *     VfHandlePoolAlloc @ 0x140BAAAA0 (VfHandlePoolAlloc.c)
 * Callees:
 *     <none>
 */

__int64 VfFaultsIsSystemSufficientlyBooted()
{
  if ( ViSystemSufficientlyBooted )
    return 1LL;
  if ( (MEMORY[0xFFFFF78000000014] - KeBootTime.QuadPart) / 0x2710uLL <= ViRequiredTimeSinceBootInMsecs )
    ++dword_140FFEF8C;
  else
    ViSystemSufficientlyBooted = 1;
  return (unsigned int)ViSystemSufficientlyBooted;
}

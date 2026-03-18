/*
 * XREFs of VfFaultsIsSystemSufficientlyBooted @ 0x140B9665C
 * Callers:
 *     VfFaultsInjectResourceFailure @ 0x140B96568 (VfFaultsInjectResourceFailure.c)
 *     ViRlrsMmMapLockedPages_Entry @ 0x140B9F770 (ViRlrsMmMapLockedPages_Entry.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x140BA0B40 (VerifierMmMapLockedPagesSpecifyCache.c)
 *     VfHandlePoolAlloc @ 0x140BA8AA0 (VfHandlePoolAlloc.c)
 * Callees:
 *     <none>
 */

__int64 VfFaultsIsSystemSufficientlyBooted()
{
  if ( ViSystemSufficientlyBooted )
    return 1LL;
  if ( (MEMORY[0xFFFFF78000000014] - KeBootTime.QuadPart) / 0x2710uLL <= ViRequiredTimeSinceBootInMsecs )
    ++dword_140FFDF8C;
  else
    ViSystemSufficientlyBooted = 1;
  return (unsigned int)ViSystemSufficientlyBooted;
}

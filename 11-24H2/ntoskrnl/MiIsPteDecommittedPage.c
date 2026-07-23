/*
 * XREFs of MiIsPteDecommittedPage @ 0x140213A80
 * Callers:
 *     MiComputePageCommitment @ 0x140212C0C (MiComputePageCommitment.c)
 *     MiCommitExistingVad @ 0x140306380 (MiCommitExistingVad.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPteDecommittedPage(unsigned __int64 a1)
{
  if ( (a1 & 0x3E0) != 0x200 || (a1 & 1) != 0 )
    return 0LL;
  if ( (a1 & 0x400) == 0 )
    return 1LL;
  if ( qword_140E2DCC0 )
  {
    if ( (a1 & 0x10) == 0 )
      a1 &= ~qword_140E2DCC0;
  }
  return HIDWORD(a1) == 0xFFFFFFFF;
}

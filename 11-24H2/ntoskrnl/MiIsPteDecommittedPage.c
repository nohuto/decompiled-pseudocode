/*
 * XREFs of MiIsPteDecommittedPage @ 0x140238E20
 * Callers:
 *     MiCommitExistingVad @ 0x140213020 (MiCommitExistingVad.c)
 *     MiComputePageCommitment @ 0x140238A7C (MiComputePageCommitment.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPteDecommittedPage(unsigned __int64 a1)
{
  if ( (a1 & 0x3E0) != 0x200 || (a1 & 1) != 0 )
    return 0LL;
  if ( (a1 & 0x400) == 0 )
    return 1LL;
  if ( qword_140E2DB80 )
  {
    if ( (a1 & 0x10) == 0 )
      a1 &= ~qword_140E2DB80;
  }
  return HIDWORD(a1) == 0xFFFFFFFF;
}

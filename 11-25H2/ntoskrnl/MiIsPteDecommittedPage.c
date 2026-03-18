/*
 * XREFs of MiIsPteDecommittedPage @ 0x14037DD50
 * Callers:
 *     MiComputePageCommitment @ 0x14037DDA4 (MiComputePageCommitment.c)
 *     MiCommitExistingVad @ 0x1403840D0 (MiCommitExistingVad.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPteDecommittedPage(unsigned __int64 a1)
{
  if ( (a1 & 0x3E0) != 0x200 || (a1 & 1) != 0 )
    return 0LL;
  if ( (a1 & 0x400) == 0 )
    return 1LL;
  if ( qword_140E2D940 )
  {
    if ( (a1 & 0x10) == 0 )
      a1 &= ~qword_140E2D940;
  }
  return HIDWORD(a1) == 0xFFFFFFFF;
}

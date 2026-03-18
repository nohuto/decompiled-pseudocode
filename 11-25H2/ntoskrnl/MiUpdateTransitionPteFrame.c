/*
 * XREFs of MiUpdateTransitionPteFrame @ 0x1402D110C
 * Callers:
 *     MiMigratePfn @ 0x140217D00 (MiMigratePfn.c)
 *     MiReplaceTransitionPage @ 0x1402C6590 (MiReplaceTransitionPage.c)
 *     MiDuplicateCloneLeaf @ 0x1402D08F8 (MiDuplicateCloneLeaf.c)
 *     MiSwapHardFaultPage @ 0x1402D11D4 (MiSwapHardFaultPage.c)
 *     MiSwapNumaStandbyPage @ 0x1403B905C (MiSwapNumaStandbyPage.c)
 *     MiInvalidateCollidedIos @ 0x1404192CC (MiInvalidateCollidedIos.c)
 *     MiSplitDirectMapPage @ 0x1404D1400 (MiSplitDirectMapPage.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiUpdateTransitionPteFrame(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax

  if ( qword_140E2D940 )
  {
    if ( (a1 & 0x10) != 0 )
      a1 &= ~0x10uLL;
    else
      a1 &= ~qword_140E2D940;
  }
  result = (a2 << 12) ^ (a1 ^ (a2 << 12)) & 0xFFF0000000000FFFuLL;
  if ( qword_140E2D940 )
  {
    if ( (qword_140E2D940 & result) != 0 )
      result |= 0x10uLL;
    else
      result |= qword_140E2D940;
  }
  return result;
}

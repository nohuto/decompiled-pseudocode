/*
 * XREFs of MiUpdateTransitionPteFrame @ 0x140395BFC
 * Callers:
 *     MiReplaceTransitionPage @ 0x140224B14 (MiReplaceTransitionPage.c)
 *     MiMigratePfn @ 0x14022C0A0 (MiMigratePfn.c)
 *     MiInvalidateCollidedIos @ 0x14036FA08 (MiInvalidateCollidedIos.c)
 *     MiSwapHardFaultPage @ 0x140394570 (MiSwapHardFaultPage.c)
 *     MiSwapNumaStandbyPage @ 0x14039474C (MiSwapNumaStandbyPage.c)
 *     MiDuplicateCloneLeaf @ 0x140396854 (MiDuplicateCloneLeaf.c)
 *     MiSplitDirectMapPage @ 0x1404D14D0 (MiSplitDirectMapPage.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiUpdateTransitionPteFrame(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax

  if ( qword_140E2DB80 )
  {
    if ( (a1 & 0x10) != 0 )
      a1 &= ~0x10uLL;
    else
      a1 &= ~qword_140E2DB80;
  }
  result = (a2 << 12) ^ (a1 ^ (a2 << 12)) & 0xFFF0000000000FFFuLL;
  if ( qword_140E2DB80 )
  {
    if ( (qword_140E2DB80 & result) != 0 )
      result |= 0x10uLL;
    else
      result |= qword_140E2DB80;
  }
  return result;
}

/*
 * XREFs of MiUpdateTransitionPteFrame @ 0x14038F5E4
 * Callers:
 *     MiReplaceTransitionPage @ 0x140251EC4 (MiReplaceTransitionPage.c)
 *     MiMigratePfn @ 0x1402FF9B0 (MiMigratePfn.c)
 *     MiSwapHardFaultPage @ 0x14038DB8C (MiSwapHardFaultPage.c)
 *     MiDuplicateCloneLeaf @ 0x14038FAFC (MiDuplicateCloneLeaf.c)
 *     MiSwapNumaStandbyPage @ 0x1403F7A6C (MiSwapNumaStandbyPage.c)
 *     MiInvalidateCollidedIos @ 0x14049B72C (MiInvalidateCollidedIos.c)
 *     MiSplitDirectMapPage @ 0x1404CA510 (MiSplitDirectMapPage.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiUpdateTransitionPteFrame(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax

  if ( qword_140E2DCC0 )
  {
    if ( (a1 & 0x10) != 0 )
      a1 &= ~0x10uLL;
    else
      a1 &= ~qword_140E2DCC0;
  }
  result = (a2 << 12) ^ (a1 ^ (a2 << 12)) & 0xFFF0000000000FFFuLL;
  if ( qword_140E2DCC0 )
  {
    if ( (qword_140E2DCC0 & result) != 0 )
      result |= 0x10uLL;
    else
      result |= qword_140E2DCC0;
  }
  return result;
}

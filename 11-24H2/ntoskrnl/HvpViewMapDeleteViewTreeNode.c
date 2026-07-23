/*
 * XREFs of HvpViewMapDeleteViewTreeNode @ 0x140A40F84
 * Callers:
 *     HvpViewMapCleanup @ 0x140A40EA4 (HvpViewMapCleanup.c)
 * Callees:
 *     HvpViewMapFreeView @ 0x140A40FA4 (HvpViewMapFreeView.c)
 */

__int64 __fastcall HvpViewMapDeleteViewTreeNode(__int64 a1, __int64 a2)
{
  return HvpViewMapFreeView(a2, a1);
}

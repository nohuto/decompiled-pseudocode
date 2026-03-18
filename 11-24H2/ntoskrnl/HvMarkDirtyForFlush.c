/*
 * XREFs of HvMarkDirtyForFlush @ 0x140488CB4
 * Callers:
 *     HvFoldBackDirtyData @ 0x14097AA78 (HvFoldBackDirtyData.c)
 *     CmpFlushHive @ 0x14097D2B4 (CmpFlushHive.c)
 * Callees:
 *     HvpMarkDirty @ 0x140882A90 (HvpMarkDirty.c)
 */

__int64 __fastcall HvMarkDirtyForFlush(ULONG_PTR a1)
{
  return HvpMarkDirty(a1);
}

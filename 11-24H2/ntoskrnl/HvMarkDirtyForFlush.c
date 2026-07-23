/*
 * XREFs of HvMarkDirtyForFlush @ 0x140483DA4
 * Callers:
 *     HvFoldBackDirtyData @ 0x140963288 (HvFoldBackDirtyData.c)
 *     CmpFlushHive @ 0x140965AC4 (CmpFlushHive.c)
 * Callees:
 *     HvpMarkDirty @ 0x140886940 (HvpMarkDirty.c)
 */

__int64 __fastcall HvMarkDirtyForFlush(ULONG_PTR a1)
{
  return HvpMarkDirty(a1);
}

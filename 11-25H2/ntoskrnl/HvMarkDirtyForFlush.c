/*
 * XREFs of HvMarkDirtyForFlush @ 0x1404895E8
 * Callers:
 *     CmpFlushHive @ 0x140883A5C (CmpFlushHive.c)
 *     HvFoldBackDirtyData @ 0x140A2F230 (HvFoldBackDirtyData.c)
 * Callees:
 *     HvpMarkDirty @ 0x140880BA0 (HvpMarkDirty.c)
 */

__int64 __fastcall HvMarkDirtyForFlush(ULONG_PTR a1)
{
  return HvpMarkDirty(a1);
}

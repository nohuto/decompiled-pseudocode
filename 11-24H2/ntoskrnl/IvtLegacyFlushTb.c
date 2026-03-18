/*
 * XREFs of IvtLegacyFlushTb @ 0x140570120
 * Callers:
 *     <none>
 * Callees:
 *     IvtLegacyFlushTbInternal @ 0x140570168 (IvtLegacyFlushTbInternal.c)
 */

__int64 __fastcall IvtLegacyFlushTb(int a1, int a2, __int64 a3, __int64 a4, __int64 a5, int a6, __int64 a7)
{
  return IvtLegacyFlushTbInternal(a1, a2, 0, 0, a4, a5, a6, a7);
}

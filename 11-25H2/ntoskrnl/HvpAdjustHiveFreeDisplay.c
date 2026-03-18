/*
 * XREFs of HvpAdjustHiveFreeDisplay @ 0x14087E300
 * Callers:
 *     HvpAddBin @ 0x1409F795C (HvpAddBin.c)
 *     HvLoadHive @ 0x1409F8C4C (HvLoadHive.c)
 *     HvpPerformLogFileRecovery @ 0x1409FA6B8 (HvpPerformLogFileRecovery.c)
 *     HvFreeHivePartial @ 0x140A4CAE0 (HvFreeHivePartial.c)
 *     HvHiveStartMemoryBacked @ 0x140A9F924 (HvHiveStartMemoryBacked.c)
 * Callees:
 *     HvpAdjustBitmap @ 0x14087E37C (HvpAdjustBitmap.c)
 */

__int64 __fastcall HvpAdjustHiveFreeDisplay(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // rbp
  unsigned int i; // ebx
  __int64 result; // rax

  v3 = a3;
  if ( a2 > 0x7FFFE000 )
    return 3221225804LL;
  for ( i = 0; i < 0x18; ++i )
  {
    result = HvpAdjustBitmap(a1, a2, a1 + 632 * v3 + 24 * (i + 13LL));
    if ( (int)result < 0 )
      return result;
  }
  return 0LL;
}

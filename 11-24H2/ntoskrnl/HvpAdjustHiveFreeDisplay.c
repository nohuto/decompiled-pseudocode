/*
 * XREFs of HvpAdjustHiveFreeDisplay @ 0x140882DB0
 * Callers:
 *     HvHiveStartMemoryBacked @ 0x14093363C (HvHiveStartMemoryBacked.c)
 *     HvpAddBin @ 0x140968D94 (HvpAddBin.c)
 *     HvLoadHive @ 0x140969B4C (HvLoadHive.c)
 *     HvFreeHivePartial @ 0x140A46B7C (HvFreeHivePartial.c)
 *     HvpPerformLogFileRecovery @ 0x140AAB57C (HvpPerformLogFileRecovery.c)
 * Callees:
 *     HvpAdjustBitmap @ 0x140882E2C (HvpAdjustBitmap.c)
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

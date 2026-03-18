/*
 * XREFs of HvpAdjustHiveFreeDisplay @ 0x14087EF00
 * Callers:
 *     HvHiveStartMemoryBacked @ 0x1409314FC (HvHiveStartMemoryBacked.c)
 *     HvpAddBin @ 0x140980584 (HvpAddBin.c)
 *     HvLoadHive @ 0x14098133C (HvLoadHive.c)
 *     HvFreeHivePartial @ 0x140A4FDCC (HvFreeHivePartial.c)
 *     HvpPerformLogFileRecovery @ 0x140AB060C (HvpPerformLogFileRecovery.c)
 * Callees:
 *     HvpAdjustBitmap @ 0x14087EF7C (HvpAdjustBitmap.c)
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

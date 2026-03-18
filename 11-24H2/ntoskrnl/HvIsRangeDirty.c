/*
 * XREFs of HvIsRangeDirty @ 0x1407E364C
 * Callers:
 *     HvpRemapAndEnlistHiveBins @ 0x140982010 (HvpRemapAndEnlistHiveBins.c)
 * Callees:
 *     RtlAreBitsClear @ 0x14044B100 (RtlAreBitsClear.c)
 *     HvLockHiveWriter @ 0x140882A38 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x140882E28 (HvUnlockHiveWriter.c)
 */

bool __fastcall HvIsRangeDirty(__int64 a1, int a2, ULONG a3)
{
  BOOLEAN v6; // bl

  if ( (*(_DWORD *)(a1 + 160) & 1) != 0 || a2 < 0 )
    return 1;
  HvLockHiveWriter(a1);
  v6 = RtlAreBitsClear((PRTL_BITMAP)(a1 + 88), (unsigned int)a2 >> 9, a3);
  HvUnlockHiveWriter(a1);
  return v6 == 0;
}

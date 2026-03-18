/*
 * XREFs of HvIsRangeDirty @ 0x1407D3D6C
 * Callers:
 *     HvpRemapAndEnlistHiveBins @ 0x1408820A0 (HvpRemapAndEnlistHiveBins.c)
 * Callees:
 *     RtlAreBitsClear @ 0x14044C370 (RtlAreBitsClear.c)
 *     HvLockHiveWriter @ 0x140880B44 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x140880F30 (HvUnlockHiveWriter.c)
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

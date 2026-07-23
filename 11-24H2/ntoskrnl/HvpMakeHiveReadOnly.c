/*
 * XREFs of HvpMakeHiveReadOnly @ 0x140666CD8
 * Callers:
 *     CmShutdownSystem1 @ 0x140666298 (CmShutdownSystem1.c)
 * Callees:
 *     HvUnlockHiveFlusherExclusive @ 0x140BBBA98 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140BBBAB4 (HvLockHiveFlusherExclusive.c)
 */

__int64 __fastcall HvpMakeHiveReadOnly(__int64 a1)
{
  HvLockHiveFlusherExclusive(a1);
  *(_DWORD *)(a1 + 164) |= 2u;
  return HvUnlockHiveFlusherExclusive(a1);
}

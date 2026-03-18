/*
 * XREFs of HvpMakeHiveReadOnly @ 0x14065C918
 * Callers:
 *     CmShutdownSystem1 @ 0x14065C0A4 (CmShutdownSystem1.c)
 * Callees:
 *     HvUnlockHiveFlusherExclusive @ 0x140BA9B20 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140BA9B3C (HvLockHiveFlusherExclusive.c)
 */

__int64 __fastcall HvpMakeHiveReadOnly(__int64 a1)
{
  HvLockHiveFlusherExclusive(a1);
  *(_DWORD *)(a1 + 164) |= 2u;
  return HvUnlockHiveFlusherExclusive(a1);
}

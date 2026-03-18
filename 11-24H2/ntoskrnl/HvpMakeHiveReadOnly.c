/*
 * XREFs of HvpMakeHiveReadOnly @ 0x1406683E8
 * Callers:
 *     CmShutdownSystem1 @ 0x1406679A8 (CmShutdownSystem1.c)
 * Callees:
 *     HvUnlockHiveFlusherExclusive @ 0x140BB9A98 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140BB9AB4 (HvLockHiveFlusherExclusive.c)
 */

__int64 __fastcall HvpMakeHiveReadOnly(__int64 a1)
{
  HvLockHiveFlusherExclusive(a1);
  *(_DWORD *)(a1 + 164) |= 2u;
  return HvUnlockHiveFlusherExclusive(a1);
}

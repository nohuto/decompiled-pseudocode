/*
 * XREFs of CmpTransMgrSyncHive @ 0x140865CE8
 * Callers:
 *     CmpTransMgrPrepare @ 0x14086632C (CmpTransMgrPrepare.c)
 * Callees:
 *     HvLockHiveWriter @ 0x140880B44 (HvLockHiveWriter.c)
 *     HvpMarkDirty @ 0x140880BA0 (HvpMarkDirty.c)
 *     HvUnlockHiveWriter @ 0x140880F30 (HvUnlockHiveWriter.c)
 *     CmpFlushHive @ 0x140883A5C (CmpFlushHive.c)
 *     CmpLockRegistry @ 0x140BA9570 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BA9920 (CmpUnlockRegistry.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140BA9B20 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140BA9B3C (HvLockHiveFlusherExclusive.c)
 */

__int64 __fastcall CmpTransMgrSyncHive(ULONG_PTR BugCheckParameter2)
{
  __int64 v2; // rcx
  int v3; // edi
  __int64 v5; // rcx

  CmpLockRegistry(BugCheckParameter2);
  HvLockHiveFlusherExclusive(BugCheckParameter2);
  if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 144LL) & 1) == 0 )
  {
    HvLockHiveWriter(BugCheckParameter2);
    v3 = HvpMarkDirty(BugCheckParameter2);
    HvUnlockHiveWriter(BugCheckParameter2);
    if ( v3 < 0 )
    {
      HvUnlockHiveFlusherExclusive(BugCheckParameter2);
      CmpUnlockRegistry(v5);
      return (unsigned int)v3;
    }
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 144LL) |= 1u;
  }
  HvUnlockHiveFlusherExclusive(BugCheckParameter2);
  CmpUnlockRegistry(v2);
  v3 = 0;
  if ( (int)CmpFlushHive(BugCheckParameter2, 0LL) < 0 )
    return (unsigned int)-1073741670;
  return (unsigned int)v3;
}

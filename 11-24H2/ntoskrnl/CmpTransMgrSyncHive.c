/*
 * XREFs of CmpTransMgrSyncHive @ 0x140A030DC
 * Callers:
 *     CmpTransMgrPrepare @ 0x140A013B8 (CmpTransMgrPrepare.c)
 * Callees:
 *     HvLockHiveWriter @ 0x1408868E8 (HvLockHiveWriter.c)
 *     HvpMarkDirty @ 0x140886940 (HvpMarkDirty.c)
 *     HvUnlockHiveWriter @ 0x140886CD8 (HvUnlockHiveWriter.c)
 *     CmpFlushHive @ 0x140965AC4 (CmpFlushHive.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140BBBA98 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140BBBAB4 (HvLockHiveFlusherExclusive.c)
 *     CmpLockRegistry @ 0x140BBBE60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
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
    v3 = HvpMarkDirty(BugCheckParameter2, 0, 0x20u, 0);
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
  if ( (int)CmpFlushHive(BugCheckParameter2, 0) < 0 )
    return (unsigned int)-1073741670;
  return (unsigned int)v3;
}

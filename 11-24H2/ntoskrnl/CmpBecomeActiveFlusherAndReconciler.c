/*
 * XREFs of CmpBecomeActiveFlusherAndReconciler @ 0x1407D8440
 * Callers:
 *     CmShutdownSystem1 @ 0x140666298 (CmShutdownSystem1.c)
 *     CmpLoadHiveThread @ 0x1407CB550 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1407CC328 (CmpMountPreloadedHives.c)
 *     CmpRefreshHive @ 0x1407CEFE0 (CmpRefreshHive.c)
 *     CmpSaveKeyByFileCopy @ 0x1407CF4D0 (CmpSaveKeyByFileCopy.c)
 *     CmReplaceKey @ 0x1407DA838 (CmReplaceKey.c)
 * Callees:
 *     CmpIsWriteQueueActive @ 0x14047CD10 (CmpIsWriteQueueActive.c)
 *     CmpAcquireWriteQueue @ 0x14048E38C (CmpAcquireWriteQueue.c)
 *     CmpLockRegistryFreezeAware @ 0x1409667E8 (CmpLockRegistryFreezeAware.c)
 *     CmpWaitOnHiveWriteQueue @ 0x140A847CC (CmpWaitOnHiveWriteQueue.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140BBBA98 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140BBBAB4 (HvLockHiveFlusherExclusive.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpBecomeActiveFlusherAndReconciler(__int64 a1)
{
  _QWORD *v2; // rsi
  _QWORD *v3; // rdi
  _QWORD *v4; // rdx
  __int64 v5; // rcx

  v2 = (_QWORD *)(a1 + 4208);
  v3 = (_QWORD *)(a1 + 4192);
  while ( 1 )
  {
    CmpLockRegistryFreezeAware(0LL);
    HvLockHiveFlusherExclusive(a1);
    if ( CmpIsWriteQueueActive(v2) )
    {
      v4 = v2;
      goto LABEL_4;
    }
    if ( !CmpIsWriteQueueActive(v3) )
      break;
    v4 = v3;
LABEL_4:
    CmpWaitOnHiveWriteQueue(a1, v4);
  }
  CmpAcquireWriteQueue(v2);
  CmpAcquireWriteQueue(v3);
  HvUnlockHiveFlusherExclusive(a1);
  return CmpUnlockRegistry(v5);
}

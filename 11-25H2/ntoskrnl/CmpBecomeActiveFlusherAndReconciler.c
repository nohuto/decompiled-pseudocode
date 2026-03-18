/*
 * XREFs of CmpBecomeActiveFlusherAndReconciler @ 0x1407C8754
 * Callers:
 *     CmShutdownSystem1 @ 0x14065C0A4 (CmShutdownSystem1.c)
 *     CmpLoadHiveThread @ 0x1407BB850 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1407BC620 (CmpMountPreloadedHives.c)
 *     CmpRefreshHive @ 0x1407BF2D8 (CmpRefreshHive.c)
 *     CmpSaveKeyByFileCopy @ 0x1407BF7D0 (CmpSaveKeyByFileCopy.c)
 *     CmReplaceKey @ 0x1407CAB24 (CmReplaceKey.c)
 * Callees:
 *     CmpIsWriteQueueActive @ 0x14048091C (CmpIsWriteQueueActive.c)
 *     CmpAcquireWriteQueue @ 0x140494C0C (CmpAcquireWriteQueue.c)
 *     CmpLockRegistryFreezeAware @ 0x140884780 (CmpLockRegistryFreezeAware.c)
 *     CmpWaitOnHiveWriteQueue @ 0x140A837E0 (CmpWaitOnHiveWriteQueue.c)
 *     CmpUnlockRegistry @ 0x140BA9920 (CmpUnlockRegistry.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140BA9B20 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140BA9B3C (HvLockHiveFlusherExclusive.c)
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

/*
 * XREFs of CmpGetNextActiveHive @ 0x14090B0EC
 * Callers:
 *     CmShutdownSystem1 @ 0x1406679A8 (CmShutdownSystem1.c)
 *     CmShutdownSystem2 @ 0x140667BF4 (CmShutdownSystem2.c)
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x140668020 (CmpLockKcbStackFlusherLocksExclusive.c)
 *     CmpAcceptBoot @ 0x1407CF594 (CmpAcceptBoot.c)
 *     CmpHandlePageFileOpenNotification @ 0x1407CF660 (CmpHandlePageFileOpenNotification.c)
 *     CmpFreeAllMemory @ 0x1407D51F0 (CmpFreeAllMemory.c)
 *     CmFreezeRegistry @ 0x1407D841C (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x1407D85E0 (CmThawRegistry.c)
 *     CmpIsHiveAlreadyLoaded @ 0x1407DA6B4 (CmpIsHiveAlreadyLoaded.c)
 *     CmpDoFlushNextHive @ 0x14090AE60 (CmpDoFlushNextHive.c)
 *     CmpBlockTwoHiveWrites @ 0x14090AFE4 (CmpBlockTwoHiveWrites.c)
 *     CmpDoReconcileNextHive @ 0x14097B2F0 (CmpDoReconcileNextHive.c)
 *     CmpDoLocalizeNextHive @ 0x140984290 (CmpDoLocalizeNextHive.c)
 *     CmpTransMgrPrepare @ 0x140A04E88 (CmpTransMgrPrepare.c)
 *     CmEtwRunDown @ 0x140A6EEE8 (CmEtwRunDown.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     CmpLockHiveListShared @ 0x1408442F8 (CmpLockHiveListShared.c)
 *     CmpUnlockHiveList @ 0x140844354 (CmpUnlockHiveList.c)
 */

__int64 *__fastcall CmpGetNextActiveHive(struct _EX_RUNDOWN_REF *a1)
{
  __int64 *v1; // rsi
  __int64 *v3; // rdi

  v1 = 0LL;
  v3 = &CmpHiveListHead;
  if ( a1 )
    v3 = (__int64 *)&a1[201];
  CmpLockHiveListShared();
  while ( 1 )
  {
    v3 = (__int64 *)*v3;
    if ( v3 == &CmpHiveListHead )
      break;
    v1 = v3 - 201;
    if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)v3 + 4) )
      break;
    v1 = 0LL;
  }
  CmpUnlockHiveList();
  if ( a1 )
    ExReleaseRundownProtection_0(a1 + 205);
  return v1;
}

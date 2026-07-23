/*
 * XREFs of CmpGetNextActiveHive @ 0x1408E280C
 * Callers:
 *     CmShutdownSystem1 @ 0x140666298 (CmShutdownSystem1.c)
 *     CmShutdownSystem2 @ 0x1406664E4 (CmShutdownSystem2.c)
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x140666910 (CmpLockKcbStackFlusherLocksExclusive.c)
 *     CmpAcceptBoot @ 0x1407CFA84 (CmpAcceptBoot.c)
 *     CmpHandlePageFileOpenNotification @ 0x1407CFB50 (CmpHandlePageFileOpenNotification.c)
 *     CmpFreeAllMemory @ 0x1407D56E0 (CmpFreeAllMemory.c)
 *     CmFreezeRegistry @ 0x1407D896C (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x1407D8B30 (CmThawRegistry.c)
 *     CmpIsHiveAlreadyLoaded @ 0x1407DAC04 (CmpIsHiveAlreadyLoaded.c)
 *     CmpDoFlushNextHive @ 0x1408E2580 (CmpDoFlushNextHive.c)
 *     CmpBlockTwoHiveWrites @ 0x1408E2704 (CmpBlockTwoHiveWrites.c)
 *     CmpDoReconcileNextHive @ 0x140963B00 (CmpDoReconcileNextHive.c)
 *     CmpDoLocalizeNextHive @ 0x14096CAA0 (CmpDoLocalizeNextHive.c)
 *     CmpTransMgrPrepare @ 0x140A013B8 (CmpTransMgrPrepare.c)
 *     CmEtwRunDown @ 0x140A6836C (CmEtwRunDown.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     CmpLockHiveListShared @ 0x1408405B8 (CmpLockHiveListShared.c)
 *     CmpUnlockHiveList @ 0x140840614 (CmpUnlockHiveList.c)
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
    if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)v3 + 4) )
      break;
    v1 = 0LL;
  }
  CmpUnlockHiveList();
  if ( a1 )
    ExReleaseRundownProtection_0(a1 + 205);
  return v1;
}

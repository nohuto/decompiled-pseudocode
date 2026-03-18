/*
 * XREFs of CmpGetNextActiveHive @ 0x140848344
 * Callers:
 *     CmShutdownSystem1 @ 0x14065C0A4 (CmShutdownSystem1.c)
 *     CmShutdownSystem2 @ 0x14065C2F0 (CmShutdownSystem2.c)
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x14065C630 (CmpLockKcbStackFlusherLocksExclusive.c)
 *     CmpAcceptBoot @ 0x1407BFEA8 (CmpAcceptBoot.c)
 *     CmpHandlePageFileOpenNotification @ 0x1407BFF74 (CmpHandlePageFileOpenNotification.c)
 *     CmpFreeAllMemory @ 0x1407C5AA4 (CmpFreeAllMemory.c)
 *     CmFreezeRegistry @ 0x1407C8C7C (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x1407C8E40 (CmThawRegistry.c)
 *     CmpIsHiveAlreadyLoaded @ 0x1407CAEF0 (CmpIsHiveAlreadyLoaded.c)
 *     CmpBlockTwoHiveWrites @ 0x14083F0C8 (CmpBlockTwoHiveWrites.c)
 *     CmpTransMgrPrepare @ 0x14086632C (CmpTransMgrPrepare.c)
 *     CmpDoFlushNextHive @ 0x1408837F0 (CmpDoFlushNextHive.c)
 *     CmpDoLocalizeNextHive @ 0x140A402A0 (CmpDoLocalizeNextHive.c)
 *     CmpDoReconcileNextHive @ 0x140A44330 (CmpDoReconcileNextHive.c)
 *     CmEtwRunDown @ 0x140A6CC98 (CmEtwRunDown.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     CmpLockHiveListShared @ 0x140848578 (CmpLockHiveListShared.c)
 *     CmpUnlockHiveList @ 0x1408485D4 (CmpUnlockHiveList.c)
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

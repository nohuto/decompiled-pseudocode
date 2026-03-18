/*
 * XREFs of ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x140045260
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x140042F90 (xxxEnumDisplayMonitors.c)
 *     ??$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z @ 0x140045BD8 (--$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z.c)
 *     DeleteProperties @ 0x140045EA0 (DeleteProperties.c)
 *     HMUnlockObjectInternal @ 0x140046060 (HMUnlockObjectInternal.c)
 *     ??0?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@AEAUtagObjLock@@@Z @ 0x140046170 (--0-$ObjectLock@UtagObjLock@@@-$DomainExclusive@$$V@-$DomainShared@$$V@SharedUserCritOnly@@QEAA@.c)
 *     HMUnlockObject @ 0x14005F160 (HMUnlockObject.c)
 *     ??$DeferrableUnlockObjectAssignment@UtagWINDOWSTATION@@@@YAXPEAPEAUtagWINDOWSTATION@@@Z @ 0x140121A30 (--$DeferrableUnlockObjectAssignment@UtagWINDOWSTATION@@@@YAXPEAPEAUtagWINDOWSTATION@@@Z.c)
 *     UserIsUserCritSecInShared @ 0x140153990 (UserIsUserCritSecInShared.c)
 *     LockIntoSharedUserCritDeferredUnlockList @ 0x1401B6588 (LockIntoSharedUserCritDeferredUnlockList.c)
 * Callees:
 *     <none>
 */

bool IS_USERCRIT_OWNED_SHAREDONLY(void)
{
  return (*(_DWORD *)(PsGetCurrentThreadWin32Thread() + 24) & 0xC) == 4;
}

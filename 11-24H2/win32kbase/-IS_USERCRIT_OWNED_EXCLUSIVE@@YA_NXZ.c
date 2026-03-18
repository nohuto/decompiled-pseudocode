/*
 * XREFs of ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x140042D50
 * Callers:
 *     DrvEnumDisplaySettings @ 0x140024870 (DrvEnumDisplaySettings.c)
 *     ?Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z @ 0x1400415C0 (-Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z.c)
 *     HMMarkObjectDestroy @ 0x140041E50 (HMMarkObjectDestroy.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z @ 0x140041F94 (-LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z.c)
 *     HMAllocObjectEx @ 0x140041FF0 (HMAllocObjectEx.c)
 *     _HMPheFromObject @ 0x140042A90 (_HMPheFromObject.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x140042B50 (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     _FindProp @ 0x140042BA0 (_FindProp.c)
 *     RealGetProp @ 0x140042C50 (RealGetProp.c)
 *     ?GetPointerCaptureInt@CTouchProcessor@@AEAAPEAVCInputDest@@PEAUCPointerCaptureInfo@@PEAH@Z @ 0x1400D25D8 (-GetPointerCaptureInt@CTouchProcessor@@AEAAPEAVCInputDest@@PEAUCPointerCaptureInfo@@PEAH@Z.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1400E47E0 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     UserIsUserCritSecInExclusive @ 0x14012B420 (UserIsUserCritSecInExclusive.c)
 *     LockIntoExclusiveUserCritDeferredUnlockList @ 0x14016AD70 (LockIntoExclusiveUserCritDeferredUnlockList.c)
 *     ?JITThaw@tagPROCESSINFO@@AEAA_NXZ @ 0x1401A3374 (-JITThaw@tagPROCESSINFO@@AEAA_NXZ.c)
 *     HMDestroyUnlockedObject @ 0x1401B6480 (HMDestroyUnlockedObject.c)
 * Callees:
 *     <none>
 */

bool IS_USERCRIT_OWNED_EXCLUSIVE(void)
{
  return (*(_DWORD *)(PsGetCurrentThreadWin32Thread() + 24) & 0xC) == 8;
}

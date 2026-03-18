/*
 * XREFs of ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x140042D80
 * Callers:
 *     ?GreGetDCPoint@@YAHPEAUHDC__@@IPEAU_POINTL@@@Z @ 0x140010910 (-GreGetDCPoint@@YAHPEAUHDC__@@IPEAU_POINTL@@@Z.c)
 *     UserIsUserCritSecIn @ 0x140041C70 (UserIsUserCritSecIn.c)
 *     ReferenceDwmApiPort @ 0x140041C90 (ReferenceDwmApiPort.c)
 *     HMMarkObjectDestroy @ 0x140041E50 (HMMarkObjectDestroy.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z @ 0x140041F94 (-LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z.c)
 *     HMAllocObjectEx @ 0x140041FF0 (HMAllocObjectEx.c)
 *     _HMPheFromObject @ 0x140042A90 (_HMPheFromObject.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x140042B50 (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     _FindProp @ 0x140042BA0 (_FindProp.c)
 *     RealGetProp @ 0x140042C50 (RealGetProp.c)
 *     DrvSessionHasAnyGraphicsDevice @ 0x14004F970 (DrvSessionHasAnyGraphicsDevice.c)
 *     ?ExecuteMoveMouseWindowManagement@CMouseProcessor@@QEAAXXZ @ 0x14005025C (-ExecuteMoveMouseWindowManagement@CMouseProcessor@@QEAAXXZ.c)
 *     CheckOrAcquireDwmStateLock @ 0x14006F960 (CheckOrAcquireDwmStateLock.c)
 *     DrvNotifySessionStateChange @ 0x14008A3A0 (DrvNotifySessionStateChange.c)
 *     DrvIsNotUsingGraphicsDevice @ 0x140146D70 (DrvIsNotUsingGraphicsDevice.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x1401A2C38 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     NtUserEnableTouchPad @ 0x1401BA850 (NtUserEnableTouchPad.c)
 *     DrvCleanupRemoteGraphicsDevices @ 0x1401C989C (DrvCleanupRemoteGraphicsDevices.c)
 *     DrvUpdateRemoteGraphicsDeviceList @ 0x1401CC938 (DrvUpdateRemoteGraphicsDeviceList.c)
 * Callees:
 *     <none>
 */

bool IS_USERCRIT_OWNED_AT_ALL(void)
{
  return (*(_DWORD *)(PsGetCurrentThreadWin32Thread() + 24) & 0xC) != 0;
}

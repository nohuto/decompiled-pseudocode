/*
 * XREFs of VfAvlInitializeLockContext @ 0x140496D08
 * Callers:
 *     DifEnumeratePluginData @ 0x14060EB40 (DifEnumeratePluginData.c)
 *     VfTargetRecoverIoCallbacks @ 0x14060F7A0 (VfTargetRecoverIoCallbacks.c)
 *     VfTargetReplaceIoCallbacks @ 0x14060F810 (VfTargetReplaceIoCallbacks.c)
 *     VfAvlDeleteAllTreeNodes @ 0x140B85BAC (VfAvlDeleteAllTreeNodes.c)
 *     VfTargetDriversDisableVerifier @ 0x140B8D2DC (VfTargetDriversDisableVerifier.c)
 *     VfTargetDriversEnableVerifier @ 0x140B8D364 (VfTargetDriversEnableVerifier.c)
 *     VfTargetEtwRegister @ 0x140B8D4AC (VfTargetEtwRegister.c)
 *     VfTargetEtwUnregister @ 0x140B8D5A0 (VfTargetEtwUnregister.c)
 *     VfTargetFreeContiguousMemory @ 0x140B8D6CC (VfTargetFreeContiguousMemory.c)
 *     VfTargetWMIRegistrationControl @ 0x140B8D75C (VfTargetWMIRegistrationControl.c)
 *     ViTargetAddToCounter @ 0x140B8D8F0 (ViTargetAddToCounter.c)
 *     ViTargetWMIDeregister @ 0x140B8DC38 (ViTargetWMIDeregister.c)
 *     IovpCallDriver1 @ 0x140B8ECB4 (IovpCallDriver1.c)
 *     VerifierKeAcquireQueuedSpinLock @ 0x140B91BE0 (VerifierKeAcquireQueuedSpinLock.c)
 *     ViDevObjAdd @ 0x140B94404 (ViDevObjAdd.c)
 *     ViDevObjRemove @ 0x140B9449C (ViDevObjRemove.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x140B94620 (VerifierIoInitializeRemoveLockEx.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x140B94904 (ViRemLockDeleteFirstTreeNode.c)
 *     ViRemLockFindSurrogate @ 0x140B949A4 (ViRemLockFindSurrogate.c)
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140B96F30 (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     VerifierKeAcquireInStackQueuedSpinLockCommon @ 0x140B96FE8 (VerifierKeAcquireInStackQueuedSpinLockCommon.c)
 *     VerifierKeAcquireInStackQueuedSpinLockForDpcCommon @ 0x140B97110 (VerifierKeAcquireInStackQueuedSpinLockForDpcCommon.c)
 *     VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x140B971D0 (VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeAcquireQueuedSpinLockRaiseToSynch @ 0x140B972D0 (VerifierKeAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeAcquireSpinLockAtDpcLevel @ 0x140B973C0 (VerifierKeAcquireSpinLockAtDpcLevel.c)
 *     VerifierKeSynchronizeExecution @ 0x140B979B0 (VerifierKeSynchronizeExecution.c)
 *     VerifierKeTryToAcquireQueuedSpinLock @ 0x140B97A90 (VerifierKeTryToAcquireQueuedSpinLock.c)
 *     VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x140B97B90 (VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeTryToAcquireSpinLockAtDpcLevel @ 0x140B97C90 (VerifierKeTryToAcquireSpinLockAtDpcLevel.c)
 *     VerifierPortKeAcquireSpinLockNoXdv @ 0x140B97E90 (VerifierPortKeAcquireSpinLockNoXdv.c)
 *     ViKeAcquireSpinLockCommon @ 0x140B980C0 (ViKeAcquireSpinLockCommon.c)
 *     ViFaultsInjectionNotification @ 0x140B98BEC (ViFaultsInjectionNotification.c)
 *     VfSuspectDriversGetVerifierInformation @ 0x140B9C894 (VfSuspectDriversGetVerifierInformation.c)
 *     VfLookasideAdd @ 0x140BA1E44 (VfLookasideAdd.c)
 *     VfLookasideDelete @ 0x140BA1F68 (VfLookasideDelete.c)
 *     VerifierIoWMIRegistrationControl @ 0x140BA35A0 (VerifierIoWMIRegistrationControl.c)
 *     VfDeleteResource @ 0x140BA388C (VfDeleteResource.c)
 *     VfTrackResource @ 0x140BA39B0 (VfTrackResource.c)
 *     VfWmiVerifyIrpStackUpward @ 0x140BA8210 (VfWmiVerifyIrpStackUpward.c)
 *     VfCheckForResource @ 0x140BA91D8 (VfCheckForResource.c)
 *     VfRemLockDeleteMemoryRange @ 0x140BA9AFC (VfRemLockDeleteMemoryRange.c)
 *     VfCheckForLookaside @ 0x140BA9C90 (VfCheckForLookaside.c)
 *     VfHandlePoolAlloc @ 0x140BAAAA0 (VfHandlePoolAlloc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VfAvlInitializeLockContext(__int64 a1, int a2)
{
  __int64 result; // rax

  result = 0LL;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( !a2 )
    *(_BYTE *)(a1 + 12) = 4;
  return result;
}

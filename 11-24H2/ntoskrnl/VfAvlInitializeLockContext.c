/*
 * XREFs of VfAvlInitializeLockContext @ 0x14049C0D8
 * Callers:
 *     DifEnumeratePluginData @ 0x140610580 (DifEnumeratePluginData.c)
 *     VfTargetRecoverIoCallbacks @ 0x1406111E0 (VfTargetRecoverIoCallbacks.c)
 *     VfTargetReplaceIoCallbacks @ 0x140611250 (VfTargetReplaceIoCallbacks.c)
 *     VfAvlDeleteAllTreeNodes @ 0x140B83BAC (VfAvlDeleteAllTreeNodes.c)
 *     VfTargetDriversDisableVerifier @ 0x140B8B2DC (VfTargetDriversDisableVerifier.c)
 *     VfTargetDriversEnableVerifier @ 0x140B8B364 (VfTargetDriversEnableVerifier.c)
 *     VfTargetEtwRegister @ 0x140B8B4AC (VfTargetEtwRegister.c)
 *     VfTargetEtwUnregister @ 0x140B8B5A0 (VfTargetEtwUnregister.c)
 *     VfTargetFreeContiguousMemory @ 0x140B8B6CC (VfTargetFreeContiguousMemory.c)
 *     VfTargetWMIRegistrationControl @ 0x140B8B75C (VfTargetWMIRegistrationControl.c)
 *     ViTargetAddToCounter @ 0x140B8B8F0 (ViTargetAddToCounter.c)
 *     ViTargetWMIDeregister @ 0x140B8BC38 (ViTargetWMIDeregister.c)
 *     IovpCallDriver1 @ 0x140B8CCB4 (IovpCallDriver1.c)
 *     VerifierKeAcquireQueuedSpinLock @ 0x140B8FBE0 (VerifierKeAcquireQueuedSpinLock.c)
 *     ViDevObjAdd @ 0x140B92404 (ViDevObjAdd.c)
 *     ViDevObjRemove @ 0x140B9249C (ViDevObjRemove.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x140B92620 (VerifierIoInitializeRemoveLockEx.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x140B92904 (ViRemLockDeleteFirstTreeNode.c)
 *     ViRemLockFindSurrogate @ 0x140B929A4 (ViRemLockFindSurrogate.c)
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140B94F30 (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     VerifierKeAcquireInStackQueuedSpinLockCommon @ 0x140B94FE8 (VerifierKeAcquireInStackQueuedSpinLockCommon.c)
 *     VerifierKeAcquireInStackQueuedSpinLockForDpcCommon @ 0x140B95110 (VerifierKeAcquireInStackQueuedSpinLockForDpcCommon.c)
 *     VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x140B951D0 (VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeAcquireQueuedSpinLockRaiseToSynch @ 0x140B952D0 (VerifierKeAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeAcquireSpinLockAtDpcLevel @ 0x140B953C0 (VerifierKeAcquireSpinLockAtDpcLevel.c)
 *     VerifierKeSynchronizeExecution @ 0x140B959B0 (VerifierKeSynchronizeExecution.c)
 *     VerifierKeTryToAcquireQueuedSpinLock @ 0x140B95A90 (VerifierKeTryToAcquireQueuedSpinLock.c)
 *     VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x140B95B90 (VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeTryToAcquireSpinLockAtDpcLevel @ 0x140B95C90 (VerifierKeTryToAcquireSpinLockAtDpcLevel.c)
 *     VerifierPortKeAcquireSpinLockNoXdv @ 0x140B95E90 (VerifierPortKeAcquireSpinLockNoXdv.c)
 *     ViKeAcquireSpinLockCommon @ 0x140B960C0 (ViKeAcquireSpinLockCommon.c)
 *     ViFaultsInjectionNotification @ 0x140B96BEC (ViFaultsInjectionNotification.c)
 *     VfSuspectDriversGetVerifierInformation @ 0x140B9A894 (VfSuspectDriversGetVerifierInformation.c)
 *     VfLookasideAdd @ 0x140B9FE44 (VfLookasideAdd.c)
 *     VfLookasideDelete @ 0x140B9FF68 (VfLookasideDelete.c)
 *     VerifierIoWMIRegistrationControl @ 0x140BA15A0 (VerifierIoWMIRegistrationControl.c)
 *     VfDeleteResource @ 0x140BA188C (VfDeleteResource.c)
 *     VfTrackResource @ 0x140BA19B0 (VfTrackResource.c)
 *     VfWmiVerifyIrpStackUpward @ 0x140BA6210 (VfWmiVerifyIrpStackUpward.c)
 *     VfCheckForResource @ 0x140BA71D8 (VfCheckForResource.c)
 *     VfRemLockDeleteMemoryRange @ 0x140BA7AFC (VfRemLockDeleteMemoryRange.c)
 *     VfCheckForLookaside @ 0x140BA7C90 (VfCheckForLookaside.c)
 *     VfHandlePoolAlloc @ 0x140BA8AA0 (VfHandlePoolAlloc.c)
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

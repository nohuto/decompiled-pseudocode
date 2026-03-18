/*
 * XREFs of VfAvlCleanupLockContext @ 0x1403F142C
 * Callers:
 *     VfTargetDriversGetNode @ 0x1403F00E4 (VfTargetDriversGetNode.c)
 *     VfTargetDriversAdd @ 0x1403F01F8 (VfTargetDriversAdd.c)
 *     VfTargetDriversRemove @ 0x1403F0E5C (VfTargetDriversRemove.c)
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
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x1403F1490 (ViAvlReleaseTableLockFromDpcLevel.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall VfAvlCleanupLockContext(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v4; // rdi

  if ( (*(_BYTE *)(a1 + 12) & 2) != 0 )
    result = ViAvlReleaseTableLockFromDpcLevel(*(_QWORD *)a1, a1);
  if ( (*(_BYTE *)(a1 + 12) & 1) != 0 )
  {
    result = *(unsigned int *)(a1 + 16);
    if ( (result & 0xF) == 0 )
    {
      v4 = *(unsigned __int8 *)(a1 + 8);
      if ( KiIrqlFlags )
      {
        LOBYTE(a2) = *(_BYTE *)(a1 + 8);
        result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), a2);
      }
      __writecr8(v4);
      *(_BYTE *)(a1 + 12) &= ~1u;
      *(_BYTE *)(a1 + 8) = 0;
    }
  }
  return result;
}

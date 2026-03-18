/*
 * XREFs of VfAvlLookupTreeNode @ 0x1403F1074
 * Callers:
 *     VfTargetDriversGetNode @ 0x1403F00E4 (VfTargetDriversGetNode.c)
 *     VfTargetDriversRemove @ 0x1403F0E5C (VfTargetDriversRemove.c)
 *     VfTargetRecoverIoCallbacks @ 0x1406111E0 (VfTargetRecoverIoCallbacks.c)
 *     VfTargetReplaceIoCallbacks @ 0x140611250 (VfTargetReplaceIoCallbacks.c)
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
 *     ViDevObjRemove @ 0x140B9249C (ViDevObjRemove.c)
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
 *     ViAvlTableIndex @ 0x1403F1238 (ViAvlTableIndex.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x1403F1260 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     ViAvlRaiseIrqlSafe @ 0x1403F12C4 (ViAvlRaiseIrqlSafe.c)
 *     RtlLookupElementGenericTableFullAvl @ 0x1403F1320 (RtlLookupElementGenericTableFullAvl.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x1403F1490 (ViAvlReleaseTableLockFromDpcLevel.c)
 */

PVOID __fastcall VfAvlLookupTreeNode(__int64 *a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  PVOID v4; // r12
  unsigned __int64 v5; // r13
  __int64 v7; // rsi
  __int64 *v9; // r8
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // r14
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r8
  RTL_AVL_TABLE *v17; // r12
  unsigned __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // r8
  RTL_AVL_TABLE *v21; // rbx
  RTL_AVL_TABLE *v22; // [rsp+20h] [rbp-20h]
  unsigned __int64 Buffer; // [rsp+28h] [rbp-18h] BYREF
  __int64 v24; // [rsp+30h] [rbp-10h]
  TABLE_SEARCH_RESULT SearchResult; // [rsp+90h] [rbp+50h] BYREF
  PVOID NodeOrParent; // [rsp+98h] [rbp+58h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  v7 = a4;
  v9 = a1;
  if ( !a4 )
    v7 = *a1;
  v10 = a3 & 0xFFFFFFFFFFFFF000uLL;
  v11 = (v7 + (a3 & 0xFFF) + 4095) >> 12;
  if ( (a3 & 0xFFFFFFFFFFFFF000uLL) == a3 )
    goto LABEL_4;
  Buffer = a3;
  v14 = v7;
  if ( v11 > 1 )
    v14 = 4096LL;
  v24 = v14;
  v15 = ViAvlTableIndex(a1, a3);
  v17 = (RTL_AVL_TABLE *)(*(_QWORD *)(v16 + 16) + 192 * v15);
  v22 = v17;
  ViAvlRaiseIrqlSafe(a2);
  ViAvlAcquireTableLockAtDpcLevelSafe(v17, a2);
  NodeOrParent = 0LL;
  SearchResult = TableEmptyTree;
  v4 = RtlLookupElementGenericTableFullAvl(v17, &Buffer, &NodeOrParent, &SearchResult);
  if ( !v4 )
  {
    ViAvlReleaseTableLockFromDpcLevel(v22, a2);
    v9 = a1;
    --v11;
    v10 += 4096LL;
LABEL_4:
    v12 = v7 + a3;
    if ( v11 )
    {
      do
      {
        v18 = v10 + 4096;
        Buffer = v10;
        if ( v10 + 4096 <= v12 )
          v24 = 4096LL;
        else
          v24 = v12 - v10;
        v19 = ViAvlTableIndex(v9, v10);
        v21 = (RTL_AVL_TABLE *)(*(_QWORD *)(v20 + 16) + 192 * v19);
        ViAvlRaiseIrqlSafe(a2);
        ViAvlAcquireTableLockAtDpcLevelSafe(v21, a2);
        NodeOrParent = 0LL;
        SearchResult = TableEmptyTree;
        v4 = RtlLookupElementGenericTableFullAvl(v21, &Buffer, &NodeOrParent, &SearchResult);
        if ( v4 )
          break;
        ViAvlReleaseTableLockFromDpcLevel(v21, a2);
        v9 = a1;
        ++v5;
        v10 = v18;
      }
      while ( v5 < v11 );
    }
  }
  return v4;
}

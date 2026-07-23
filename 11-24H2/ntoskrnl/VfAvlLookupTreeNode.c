/*
 * XREFs of VfAvlLookupTreeNode @ 0x1403E4D94
 * Callers:
 *     VfTargetDriversGetNode @ 0x1403E3D54 (VfTargetDriversGetNode.c)
 *     VfTargetDriversRemove @ 0x1403E4B7C (VfTargetDriversRemove.c)
 *     VfTargetRecoverIoCallbacks @ 0x14060F7A0 (VfTargetRecoverIoCallbacks.c)
 *     VfTargetReplaceIoCallbacks @ 0x14060F810 (VfTargetReplaceIoCallbacks.c)
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
 *     ViDevObjRemove @ 0x140B9449C (ViDevObjRemove.c)
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
 *     ViAvlTableIndex @ 0x1403E4F58 (ViAvlTableIndex.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x1403E4F80 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     ViAvlRaiseIrqlSafe @ 0x1403E4FE4 (ViAvlRaiseIrqlSafe.c)
 *     RtlLookupElementGenericTableFullAvl @ 0x1403E5040 (RtlLookupElementGenericTableFullAvl.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x1403E51B0 (ViAvlReleaseTableLockFromDpcLevel.c)
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
  _RTL_AVL_TABLE *v17; // r12
  unsigned __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // r8
  _RTL_AVL_TABLE *v21; // rbx
  _RTL_AVL_TABLE *v22; // [rsp+20h] [rbp-20h]
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
  v17 = (_RTL_AVL_TABLE *)(*(_QWORD *)(v16 + 16) + 192 * v15);
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
        v21 = (_RTL_AVL_TABLE *)(*(_QWORD *)(v20 + 16) + 192 * v19);
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

/*
 * XREFs of RtlDeleteElementGenericTableAvl @ 0x1403F0610
 * Callers:
 *     VfAvlDeleteTreeNode @ 0x1403F0144 (VfAvlDeleteTreeNode.c)
 *     VfTargetDriversRemove @ 0x1403F0E5C (VfTargetDriversRemove.c)
 *     PnpUnmapActivatingDeviceNodeToThreadV2 @ 0x1405A9454 (PnpUnmapActivatingDeviceNodeToThreadV2.c)
 *     DifObjTrkRemoveItem @ 0x1406181C0 (DifObjTrkRemoveItem.c)
 *     CarDeleteDriverRuleViolations @ 0x14061937C (CarDeleteDriverRuleViolations.c)
 *     CarDeletePluginRuleViolations @ 0x140619430 (CarDeletePluginRuleViolations.c)
 *     CarDeleteRuleViolationDB @ 0x1406194C0 (CarDeleteRuleViolationDB.c)
 *     IopSetFileObjectIosbRange @ 0x140712DF8 (IopSetFileObjectIosbRange.c)
 *     PiDmObjectManagerPopulate @ 0x140727138 (PiDmObjectManagerPopulate.c)
 *     PopDirectedDripsUmDirectedFxRemoveTestDevice @ 0x1407648B4 (PopDirectedDripsUmDirectedFxRemoveTestDevice.c)
 *     EtwpFreeKeyNameList @ 0x1407AF160 (EtwpFreeKeyNameList.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1408B4894 (PiDmRemoveCacheReferenceForObject.c)
 *     PiPnpRtlObjectEventWorker @ 0x1408B9D40 (PiPnpRtlObjectEventWorker.c)
 *     PnpPoFxActivateDevice @ 0x1408BB7C0 (PnpPoFxActivateDevice.c)
 *     PiPnpRtlEndOperation @ 0x1408CC158 (PiPnpRtlEndOperation.c)
 *     PopPowerRequestTableDeleteEntry @ 0x1409BAB80 (PopPowerRequestTableDeleteEntry.c)
 *     PiUpdateDriverDBCache @ 0x1409C5084 (PiUpdateDriverDBCache.c)
 *     IopCleanupFileObjectIosbRange @ 0x1409E2728 (IopCleanupFileObjectIosbRange.c)
 *     PiSwIrpStartCreateWorker @ 0x1409F8A64 (PiSwIrpStartCreateWorker.c)
 *     PiSwBusRelationRemove @ 0x1409FA96C (PiSwBusRelationRemove.c)
 *     PiSwProcessRemove @ 0x1409FB008 (PiSwProcessRemove.c)
 *     PnpCleanupDeviceRegistryValues @ 0x140A0D54C (PnpCleanupDeviceRegistryValues.c)
 *     SshpCacheRemoveBlocker @ 0x140A415A4 (SshpCacheRemoveBlocker.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x140A4FE3C (PiDqQueryDeleteObjectFromResultSet.c)
 *     PiDmListRemoveObjectWorker @ 0x140A71708 (PiDmListRemoveObjectWorker.c)
 *     PiSwCloseDevice @ 0x140A93D94 (PiSwCloseDevice.c)
 *     VfAvlDeleteAllTreeNodes @ 0x140B83BAC (VfAvlDeleteAllTreeNodes.c)
 *     VfPtProcessFreePoolInfo @ 0x140B8C614 (VfPtProcessFreePoolInfo.c)
 *     ViPtDeleteAvlTrees @ 0x140B8C740 (ViPtDeleteAvlTrees.c)
 * Callees:
 *     RebalanceNode @ 0x1403F0D50 (RebalanceNode.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PiDmCompareObjects @ 0x14099F010 (PiDmCompareObjects.c)
 *     PnpCompareInstancePath @ 0x1409AB010 (PnpCompareInstancePath.c)
 *     PiPnpRtlObjectEventCompareObjects @ 0x1409FF8B0 (PiPnpRtlObjectEventCompareObjects.c)
 *     PiPnpRtlOperationFreeGenericTableEntry @ 0x140A2EEF0 (PiPnpRtlOperationFreeGenericTableEntry.c)
 *     SshpCacheDatabaseFree @ 0x140A61420 (SshpCacheDatabaseFree.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

BOOLEAN __stdcall RtlDeleteElementGenericTableAvl(PRTL_AVL_TABLE Table, PVOID Buffer)
{
  __int64 v2; // r9
  _RTL_BALANCED_LINKS *RightChild; // rbx
  _RTL_GENERIC_COMPARE_RESULTS (__fastcall *CompareRoutine)(_RTL_AVL_TABLE *, void *, void *); // rax
  _RTL_BALANCED_LINKS *v7; // r8
  RTL_GENERIC_COMPARE_RESULTS v8; // eax
  _RTL_BALANCED_LINKS **p_LeftChild; // rdx
  char *v11; // r14
  _RTL_BALANCED_LINKS *j; // rax
  _RTL_BALANCED_LINKS *v13; // rbx
  _RTL_BALANCED_LINKS *Parent; // rax
  char v15; // dl
  _RTL_BALANCED_LINKS *LeftChild; // rcx
  _RTL_BALANCED_LINKS *v17; // r8
  _RTL_BALANCED_LINKS *v18; // rcx
  _RTL_BALANCED_LINKS *v19; // rcx
  _RTL_BALANCED_LINKS *v20; // rsi
  char Balance; // al
  void (__stdcall *FreeRoutine)(PVOID, ULONG); // rax
  bool v23; // zf
  _RTL_BALANCED_LINKS *i; // rcx
  _RTL_BALANCED_LINKS *v25; // rcx
  _RTL_BALANCED_LINKS *v26; // rax
  _RTL_BALANCED_LINKS *v27; // rax
  _RTL_BALANCED_LINKS *m; // rax
  _RTL_BALANCED_LINKS *k; // rax

  if ( !Table->NumberGenericTableElements )
    return 0;
  RightChild = Table->BalancedRoot.RightChild;
  while ( 1 )
  {
    CompareRoutine = Table->CompareRoutine;
    v7 = RightChild + 1;
    if ( (char *)CompareRoutine == (char *)PiDmCompareObjects )
    {
      v8 = PiDmCompareObjects(Table, Buffer, v7);
    }
    else if ( (char *)CompareRoutine == (char *)PnpCompareInstancePath )
    {
      v8 = (unsigned int)PnpCompareInstancePath(Table, Buffer, v7);
    }
    else
    {
      v8 = (char *)CompareRoutine == (char *)PiPnpRtlObjectEventCompareObjects
         ? PiPnpRtlObjectEventCompareObjects(Table, Buffer, v7)
         : (unsigned int)guard_dispatch_icall_no_overrides(Table, Buffer, v7, v2);
    }
    if ( v8 )
      break;
    RightChild = RightChild->LeftChild;
LABEL_7:
    if ( !RightChild )
      return 0;
  }
  if ( v8 == GenericGreaterThan )
  {
    RightChild = RightChild->RightChild;
    goto LABEL_7;
  }
  p_LeftChild = &RightChild->LeftChild;
  v11 = (char *)RightChild;
  if ( RightChild == Table->RestartKey )
  {
    j = *p_LeftChild;
    if ( *p_LeftChild )
    {
      for ( i = j->RightChild; i; i = i->RightChild )
        j = i;
    }
    else
    {
      for ( j = RightChild->Parent; j->LeftChild == RightChild; j = j->Parent )
        RightChild = j;
      if ( j->RightChild != RightChild || j->Parent == j )
        j = 0LL;
    }
    Table->RestartKey = j;
  }
  ++Table->DeleteCount;
  if ( *p_LeftChild && (v13 = (_RTL_BALANCED_LINKS *)*((_QWORD *)v11 + 2)) != 0LL )
  {
    if ( v11[24] < 0 )
    {
      v13 = *p_LeftChild;
      for ( k = (*p_LeftChild)->RightChild; k; k = k->RightChild )
        v13 = k;
    }
    else
    {
      for ( m = v13->LeftChild; m; m = m->LeftChild )
        v13 = m;
    }
  }
  else
  {
    v13 = (_RTL_BALANCED_LINKS *)v11;
  }
  Parent = v13->Parent;
  v15 = -1;
  LeftChild = v13->LeftChild;
  v17 = v13->Parent->LeftChild;
  if ( LeftChild )
  {
    if ( v17 == v13 )
    {
      Parent->LeftChild = LeftChild;
    }
    else
    {
      Parent->RightChild = LeftChild;
      v15 = 1;
    }
    v19 = v13->LeftChild;
LABEL_26:
    v19->Parent = v13->Parent;
  }
  else
  {
    v18 = v13->RightChild;
    if ( v17 == v13 )
    {
      Parent->LeftChild = v18;
    }
    else
    {
      Parent->RightChild = v18;
      v15 = 1;
    }
    v19 = v13->RightChild;
    if ( v19 )
      goto LABEL_26;
  }
  Table->BalancedRoot.Balance = 0;
  v20 = v13->Parent;
  while ( 2 )
  {
    Balance = v20->Balance;
    if ( Balance == v15 )
    {
      v20->Balance = 0;
LABEL_37:
      v15 = 1;
      v23 = v20->Parent->RightChild == v20;
      v20 = v20->Parent;
      if ( !v23 )
        v15 = -1;
      continue;
    }
    break;
  }
  if ( Balance )
  {
    if ( (unsigned int)RebalanceNode(v20) )
      goto LABEL_32;
    v20 = v20->Parent;
    goto LABEL_37;
  }
  v20->Balance = -v15;
  if ( Table->BalancedRoot.Balance )
    --Table->DepthOfTree;
LABEL_32:
  if ( v11 != (char *)v13 )
  {
    *(_OWORD *)&v13->Parent = *(_OWORD *)v11;
    *(_OWORD *)&v13->RightChild = *((_OWORD *)v11 + 1);
    v25 = v13->Parent;
    if ( *(char **)(*(_QWORD *)v11 + 8LL) == v11 )
      v25->LeftChild = v13;
    else
      v25->RightChild = v13;
    v26 = v13->LeftChild;
    if ( v26 )
      v26->Parent = v13;
    v27 = v13->RightChild;
    if ( v27 )
      v27->Parent = v13;
  }
  --Table->NumberGenericTableElements;
  FreeRoutine = (void (__stdcall *)(PVOID, ULONG))Table->FreeRoutine;
  Table->WhichOrderedElement = 0;
  Table->OrderedPointer = 0LL;
  if ( (char *)FreeRoutine == (char *)PiPnpRtlOperationFreeGenericTableEntry )
  {
    PiPnpRtlOperationFreeGenericTableEntry(Table, v11);
  }
  else if ( (char *)FreeRoutine == (char *)SshpCacheDatabaseFree )
  {
    SshpCacheDatabaseFree(Table, v11);
  }
  else if ( FreeRoutine == ExFreePoolWithTag )
  {
    ExFreePoolWithTag(Table, (ULONG)v11);
  }
  else
  {
    guard_dispatch_icall_no_overrides(Table, v11, v17, v2);
  }
  return 1;
}

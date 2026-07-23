/*
 * XREFs of RtlDeleteElementGenericTableAvl @ 0x1403E4330
 * Callers:
 *     VfAvlDeleteTreeNode @ 0x1403E3E20 (VfAvlDeleteTreeNode.c)
 *     PnpUnmapActivatingDeviceNodeToThread @ 0x1403E4004 (PnpUnmapActivatingDeviceNodeToThread.c)
 *     VfTargetDriversRemove @ 0x1403E4B7C (VfTargetDriversRemove.c)
 *     DifObjTrkRemoveItem @ 0x140616780 (DifObjTrkRemoveItem.c)
 *     CarDeleteDriverRuleViolations @ 0x14061793C (CarDeleteDriverRuleViolations.c)
 *     CarDeletePluginRuleViolations @ 0x1406179F0 (CarDeletePluginRuleViolations.c)
 *     CarDeleteRuleViolationDB @ 0x140617A80 (CarDeleteRuleViolationDB.c)
 *     IopSetFileObjectIosbRange @ 0x140710988 (IopSetFileObjectIosbRange.c)
 *     PiDmObjectManagerPopulate @ 0x140724CC8 (PiDmObjectManagerPopulate.c)
 *     PopDirectedDripsUmDirectedFxRemoveTestDevice @ 0x140764284 (PopDirectedDripsUmDirectedFxRemoveTestDevice.c)
 *     EtwpFreeKeyNameList @ 0x1407AF5B0 (EtwpFreeKeyNameList.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1408B2184 (PiDmRemoveCacheReferenceForObject.c)
 *     PiPnpRtlObjectEventWorker @ 0x1408B76F0 (PiPnpRtlObjectEventWorker.c)
 *     PiPnpRtlEndOperation @ 0x1408C9B88 (PiPnpRtlEndOperation.c)
 *     PopPowerRequestTableDeleteEntry @ 0x1409A11D0 (PopPowerRequestTableDeleteEntry.c)
 *     PnpCleanupDeviceRegistryValues @ 0x1409BB950 (PnpCleanupDeviceRegistryValues.c)
 *     IopCleanupFileObjectIosbRange @ 0x1409DC4D8 (IopCleanupFileObjectIosbRange.c)
 *     PiSwIrpStartCreateWorker @ 0x1409F13D4 (PiSwIrpStartCreateWorker.c)
 *     PiSwBusRelationRemove @ 0x1409F32DC (PiSwBusRelationRemove.c)
 *     PiSwProcessRemove @ 0x1409F3978 (PiSwProcessRemove.c)
 *     SshpCacheRemoveBlocker @ 0x140A36E84 (SshpCacheRemoveBlocker.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x140A46BEC (PiDqQueryDeleteObjectFromResultSet.c)
 *     PiDmListRemoveObjectWorker @ 0x140A6AAE8 (PiDmListRemoveObjectWorker.c)
 *     PiUpdateDriverDBCache @ 0x140A6C434 (PiUpdateDriverDBCache.c)
 *     PiSwCloseDevice @ 0x140A90544 (PiSwCloseDevice.c)
 *     VfAvlDeleteAllTreeNodes @ 0x140B85BAC (VfAvlDeleteAllTreeNodes.c)
 *     VfPtProcessFreePoolInfo @ 0x140B8E614 (VfPtProcessFreePoolInfo.c)
 *     ViPtDeleteAvlTrees @ 0x140B8E740 (ViPtDeleteAvlTrees.c)
 * Callees:
 *     RebalanceNode @ 0x1403E4A70 (RebalanceNode.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PiDmCompareObjects @ 0x140987790 (PiDmCompareObjects.c)
 *     PnpCompareInstancePath @ 0x140994780 (PnpCompareInstancePath.c)
 *     PiPnpRtlObjectEventCompareObjects @ 0x1409F8800 (PiPnpRtlObjectEventCompareObjects.c)
 *     PiPnpRtlOperationFreeGenericTableEntry @ 0x140A23930 (PiPnpRtlOperationFreeGenericTableEntry.c)
 *     SshpCacheDatabaseFree @ 0x140A59C00 (SshpCacheDatabaseFree.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

BOOLEAN __stdcall RtlDeleteElementGenericTableAvl(PRTL_AVL_TABLE Table, PVOID Buffer)
{
  _RTL_BALANCED_LINKS *RightChild; // rbx
  RTL_GENERIC_COMPARE_RESULTS (__cdecl *CompareRoutine)(_RTL_AVL_TABLE *, PVOID, PVOID); // rax
  _RTL_BALANCED_LINKS *v6; // r8
  RTL_GENERIC_COMPARE_RESULTS v7; // eax
  _RTL_BALANCED_LINKS **p_LeftChild; // rdx
  char *v10; // r14
  _RTL_BALANCED_LINKS *j; // rax
  _RTL_BALANCED_LINKS *v12; // rbx
  _RTL_BALANCED_LINKS *Parent; // rax
  char v14; // dl
  _RTL_BALANCED_LINKS *LeftChild; // rcx
  _RTL_BALANCED_LINKS *v16; // r8
  _RTL_BALANCED_LINKS *v17; // rcx
  _RTL_BALANCED_LINKS *v18; // rcx
  _RTL_BALANCED_LINKS *v19; // rsi
  char Balance; // al
  void (__stdcall *FreeRoutine)(PVOID, ULONG); // rax
  bool v22; // zf
  _RTL_BALANCED_LINKS *i; // rcx
  _RTL_BALANCED_LINKS *v24; // rcx
  _RTL_BALANCED_LINKS *v25; // rax
  _RTL_BALANCED_LINKS *v26; // rax
  _RTL_BALANCED_LINKS *m; // rax
  _RTL_BALANCED_LINKS *k; // rax

  if ( !Table->NumberGenericTableElements )
    return 0;
  RightChild = Table->BalancedRoot.RightChild;
  while ( 1 )
  {
    CompareRoutine = (RTL_GENERIC_COMPARE_RESULTS (__cdecl *)(_RTL_AVL_TABLE *, PVOID, PVOID))Table->CompareRoutine;
    v6 = RightChild + 1;
    if ( CompareRoutine == PiDmCompareObjects )
    {
      v7 = PiDmCompareObjects(Table, Buffer, v6);
    }
    else if ( (char *)CompareRoutine == (char *)PnpCompareInstancePath )
    {
      v7 = (unsigned int)PnpCompareInstancePath(Table, Buffer, v6);
    }
    else
    {
      v7 = CompareRoutine == PiPnpRtlObjectEventCompareObjects
         ? PiPnpRtlObjectEventCompareObjects(Table, Buffer, v6)
         : (unsigned int)guard_dispatch_icall_no_overrides(Table, Buffer);
    }
    if ( v7 )
      break;
    RightChild = RightChild->LeftChild;
LABEL_7:
    if ( !RightChild )
      return 0;
  }
  if ( v7 == GenericGreaterThan )
  {
    RightChild = RightChild->RightChild;
    goto LABEL_7;
  }
  p_LeftChild = &RightChild->LeftChild;
  v10 = (char *)RightChild;
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
  if ( *p_LeftChild && (v12 = (_RTL_BALANCED_LINKS *)*((_QWORD *)v10 + 2)) != 0LL )
  {
    if ( v10[24] < 0 )
    {
      v12 = *p_LeftChild;
      for ( k = (*p_LeftChild)->RightChild; k; k = k->RightChild )
        v12 = k;
    }
    else
    {
      for ( m = v12->LeftChild; m; m = m->LeftChild )
        v12 = m;
    }
  }
  else
  {
    v12 = (_RTL_BALANCED_LINKS *)v10;
  }
  Parent = v12->Parent;
  v14 = -1;
  LeftChild = v12->LeftChild;
  v16 = v12->Parent->LeftChild;
  if ( LeftChild )
  {
    if ( v16 == v12 )
    {
      Parent->LeftChild = LeftChild;
    }
    else
    {
      Parent->RightChild = LeftChild;
      v14 = 1;
    }
    v18 = v12->LeftChild;
LABEL_26:
    v18->Parent = v12->Parent;
  }
  else
  {
    v17 = v12->RightChild;
    if ( v16 == v12 )
    {
      Parent->LeftChild = v17;
    }
    else
    {
      Parent->RightChild = v17;
      v14 = 1;
    }
    v18 = v12->RightChild;
    if ( v18 )
      goto LABEL_26;
  }
  Table->BalancedRoot.Balance = 0;
  v19 = v12->Parent;
  while ( 2 )
  {
    Balance = v19->Balance;
    if ( Balance == v14 )
    {
      v19->Balance = 0;
LABEL_37:
      v14 = 1;
      v22 = v19->Parent->RightChild == v19;
      v19 = v19->Parent;
      if ( !v22 )
        v14 = -1;
      continue;
    }
    break;
  }
  if ( Balance )
  {
    if ( (unsigned int)RebalanceNode(v19) )
      goto LABEL_32;
    v19 = v19->Parent;
    goto LABEL_37;
  }
  v19->Balance = -v14;
  if ( Table->BalancedRoot.Balance )
    --Table->DepthOfTree;
LABEL_32:
  if ( v10 != (char *)v12 )
  {
    *(_OWORD *)&v12->Parent = *(_OWORD *)v10;
    *(_OWORD *)&v12->RightChild = *((_OWORD *)v10 + 1);
    v24 = v12->Parent;
    if ( *(char **)(*(_QWORD *)v10 + 8LL) == v10 )
      v24->LeftChild = v12;
    else
      v24->RightChild = v12;
    v25 = v12->LeftChild;
    if ( v25 )
      v25->Parent = v12;
    v26 = v12->RightChild;
    if ( v26 )
      v26->Parent = v12;
  }
  --Table->NumberGenericTableElements;
  FreeRoutine = (void (__stdcall *)(PVOID, ULONG))Table->FreeRoutine;
  Table->WhichOrderedElement = 0;
  Table->OrderedPointer = 0LL;
  if ( (char *)FreeRoutine == (char *)PiPnpRtlOperationFreeGenericTableEntry )
  {
    PiPnpRtlOperationFreeGenericTableEntry(Table, v10);
  }
  else if ( (char *)FreeRoutine == (char *)SshpCacheDatabaseFree )
  {
    SshpCacheDatabaseFree(Table, v10);
  }
  else if ( FreeRoutine == ExFreePoolWithTag )
  {
    ExFreePoolWithTag(Table, (ULONG)v10);
  }
  else
  {
    guard_dispatch_icall_no_overrides(Table, v10);
  }
  return 1;
}

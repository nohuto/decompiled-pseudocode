/*
 * XREFs of RtlInsertElementGenericTableAvl @ 0x1403F03D0
 * Callers:
 *     VfAvlInsertReservedTreeNode @ 0x1403F0328 (VfAvlInsertReservedTreeNode.c)
 *     PnpMapActivatingDeviceNodeToThreadV2 @ 0x1405A93E8 (PnpMapActivatingDeviceNodeToThreadV2.c)
 *     DifObjTrkInsertItem @ 0x140617CF0 (DifObjTrkInsertItem.c)
 *     CarAddUniqueViolation @ 0x14061907C (CarAddUniqueViolation.c)
 *     IopSetFileObjectIosbRange @ 0x140712DF8 (IopSetFileObjectIosbRange.c)
 *     PiDmObjectManagerPopulate @ 0x140727138 (PiDmObjectManagerPopulate.c)
 *     PiDcInitUpdateProperties @ 0x1407276DC (PiDcInitUpdateProperties.c)
 *     PnpMapActivatingDeviceNodeToThreadV1 @ 0x140733060 (PnpMapActivatingDeviceNodeToThreadV1.c)
 *     PopDirectedDripsUmDirectedFxAddTestDevice @ 0x1407647B4 (PopDirectedDripsUmDirectedFxAddTestDevice.c)
 *     EtwpEnumerateAutologgerPath @ 0x1407AEE98 (EtwpEnumerateAutologgerPath.c)
 *     EtwpInitializeAutoLoggers @ 0x1407AF194 (EtwpInitializeAutoLoggers.c)
 *     PiUpdateDriverDBCache @ 0x1409C5084 (PiUpdateDriverDBCache.c)
 *     PiSwIrpStartCreateWorker @ 0x1409F8A64 (PiSwIrpStartCreateWorker.c)
 *     PiSwBusRelationAdd @ 0x1409FA468 (PiSwBusRelationAdd.c)
 *     SleepstudyHelperBuildBlocker @ 0x140A24F30 (SleepstudyHelperBuildBlocker.c)
 *     PiDqQueryAddObjectToResultSet @ 0x140A44CF4 (PiDqQueryAddObjectToResultSet.c)
 *     PopPowerRequestTableInsertEntry @ 0x140A64C70 (PopPowerRequestTableInsertEntry.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x140A85F24 (PnpMapDeviceObjectToDeviceInstance.c)
 *     EtwpEnumerateKeyProviders @ 0x140A99E54 (EtwpEnumerateKeyProviders.c)
 *     VfPtAddStackInfoIfNotExist @ 0x140B8BD84 (VfPtAddStackInfoIfNotExist.c)
 *     VfPtProcessAllocPoolInfo @ 0x140B8C55C (VfPtProcessAllocPoolInfo.c)
 * Callees:
 *     RebalanceNode @ 0x1403F0D50 (RebalanceNode.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     PiDmCompareObjects @ 0x14099F010 (PiDmCompareObjects.c)
 *     PnpCompareInstancePath @ 0x1409AB010 (PnpCompareInstancePath.c)
 *     PiPnpRtlObjectEventCompareObjects @ 0x1409FF8B0 (PiPnpRtlObjectEventCompareObjects.c)
 *     PiPnpRtlOperationAllocateGenericTableEntry @ 0x140A26850 (PiPnpRtlOperationAllocateGenericTableEntry.c)
 *     SshpCacheDatabaseAllocate @ 0x140A64230 (SshpCacheDatabaseAllocate.c)
 *     ExAllocatePoolWithTag @ 0x140B72010 (ExAllocatePoolWithTag.c)
 */

// local variable allocation has failed, the output may be wrong!
PVOID __stdcall RtlInsertElementGenericTableAvl(
        PRTL_AVL_TABLE Table,
        PVOID Buffer,
        CLONG BufferSize,
        PBOOLEAN NewElement)
{
  void *v4; // rdi
  size_t v5; // r13
  _RTL_BALANCED_LINKS *i; // r14
  _RTL_GENERIC_COMPARE_RESULTS (__fastcall *CompareRoutine)(_RTL_AVL_TABLE *, void *, void *); // rax
  _RTL_BALANCED_LINKS *v11; // r8
  RTL_GENERIC_COMPARE_RESULTS v12; // eax
  _RTL_BALANCED_LINKS *RightChild; // rax
  int v14; // ebp
  _RTL_BALANCED_LINKS *v15; // rsi
  SIZE_T v17; // rdx
  void *(__fastcall *AllocateRoutine)(_RTL_AVL_TABLE *, unsigned int); // rax
  _RTL_BALANCED_LINKS *PoolWithTag; // rax
  _RTL_BALANCED_LINKS *v20; // rdx
  _RTL_BALANCED_LINKS *j; // rcx
  char v22; // al
  bool v23; // zf
  char Balance; // cl

  v4 = 0LL;
  v5 = BufferSize;
  i = 0LL;
  if ( Table->NumberGenericTableElements )
  {
    for ( i = Table->BalancedRoot.RightChild; ; i = RightChild )
    {
      CompareRoutine = Table->CompareRoutine;
      v11 = i + 1;
      if ( (char *)CompareRoutine == (char *)PiDmCompareObjects )
      {
        v12 = PiDmCompareObjects(Table, Buffer, v11);
      }
      else if ( (char *)CompareRoutine == (char *)PnpCompareInstancePath )
      {
        v12 = (unsigned int)PnpCompareInstancePath(Table, Buffer, v11);
      }
      else if ( (char *)CompareRoutine == (char *)PiPnpRtlObjectEventCompareObjects )
      {
        v12 = PiPnpRtlObjectEventCompareObjects(Table, Buffer, v11);
      }
      else
      {
        v12 = (unsigned int)guard_dispatch_icall_no_overrides(Table, Buffer, v11, NewElement);
      }
      if ( v12 )
      {
        if ( v12 != GenericGreaterThan )
        {
          v15 = i;
          v14 = 1;
          goto LABEL_18;
        }
        RightChild = i->RightChild;
        if ( !RightChild )
        {
          v14 = 3;
          goto LABEL_23;
        }
      }
      else
      {
        RightChild = i->LeftChild;
        if ( !RightChild )
        {
          v14 = 2;
          goto LABEL_23;
        }
      }
    }
  }
  v14 = 0;
LABEL_23:
  v17 = (unsigned int)(v5 + 32);
  if ( (unsigned int)v17 >= (unsigned int)v5
    && ((AllocateRoutine = Table->AllocateRoutine,
         (char *)AllocateRoutine != (char *)PiPnpRtlOperationAllocateGenericTableEntry)
      ? ((char *)AllocateRoutine != (char *)SshpCacheDatabaseAllocate
       ? ((char *)AllocateRoutine != (char *)ExAllocatePoolWithTag
        ? (PoolWithTag = (_RTL_BALANCED_LINKS *)guard_dispatch_icall_no_overrides(
                                                  Table,
                                                  v17,
                                                  *(_QWORD *)&BufferSize,
                                                  NewElement))
        : (PoolWithTag = (_RTL_BALANCED_LINKS *)ExAllocatePoolWithTag((POOL_TYPE)Table, v17, BufferSize)))
       : (PoolWithTag = (_RTL_BALANCED_LINKS *)SshpCacheDatabaseAllocate(Table, v17)))
      : (PoolWithTag = (_RTL_BALANCED_LINKS *)PiPnpRtlOperationAllocateGenericTableEntry(Table, v17)),
        (v15 = PoolWithTag) != 0LL) )
  {
    *(_OWORD *)&PoolWithTag->Parent = 0LL;
    *(_OWORD *)&PoolWithTag->RightChild = 0LL;
    ++Table->NumberGenericTableElements;
    if ( v14 )
    {
      v20 = PoolWithTag;
      if ( v14 == 2 )
        i->LeftChild = PoolWithTag;
      else
        i->RightChild = PoolWithTag;
      PoolWithTag->Parent = i;
      Table->BalancedRoot.Balance = -1;
      for ( j = PoolWithTag->Parent; ; i = j )
      {
        v22 = -1;
        v23 = j->LeftChild == v20;
        Balance = i->Balance;
        if ( !v23 )
          v22 = 1;
        if ( Balance )
          break;
        j = i->Parent;
        v20 = i;
        i->Balance = v22;
      }
      if ( Balance == v22 )
      {
        RebalanceNode(i);
      }
      else
      {
        i->Balance = 0;
        if ( !Table->BalancedRoot.Balance )
          ++Table->DepthOfTree;
      }
    }
    else
    {
      Table->BalancedRoot.RightChild = PoolWithTag;
      PoolWithTag->Parent = &Table->BalancedRoot;
      Table->DepthOfTree = 1;
    }
    memmove(&v15[1], Buffer, v5);
LABEL_18:
    if ( NewElement )
      *NewElement = v14 != 1;
    Table->WhichOrderedElement = 0;
    Table->OrderedPointer = 0LL;
    return &v15[1];
  }
  else if ( NewElement )
  {
    *NewElement = 0;
  }
  return v4;
}

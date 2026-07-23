/*
 * XREFs of RtlInsertElementGenericTableAvl @ 0x1403E40F0
 * Callers:
 *     PnpMapActivatingDeviceNodeToThread @ 0x1403E3DB4 (PnpMapActivatingDeviceNodeToThread.c)
 *     VfAvlInsertReservedTreeNode @ 0x1403E4050 (VfAvlInsertReservedTreeNode.c)
 *     DifObjTrkInsertItem @ 0x1406162B0 (DifObjTrkInsertItem.c)
 *     CarAddUniqueViolation @ 0x14061763C (CarAddUniqueViolation.c)
 *     IopSetFileObjectIosbRange @ 0x140710988 (IopSetFileObjectIosbRange.c)
 *     PiDmObjectManagerPopulate @ 0x140724CC8 (PiDmObjectManagerPopulate.c)
 *     PiDcInitUpdateProperties @ 0x14072526C (PiDcInitUpdateProperties.c)
 *     PopDirectedDripsUmDirectedFxAddTestDevice @ 0x140764184 (PopDirectedDripsUmDirectedFxAddTestDevice.c)
 *     EtwpEnumerateAutologgerPath @ 0x1407AF2E8 (EtwpEnumerateAutologgerPath.c)
 *     EtwpInitializeAutoLoggers @ 0x1407AF5E4 (EtwpInitializeAutoLoggers.c)
 *     PiSwIrpStartCreateWorker @ 0x1409F13D4 (PiSwIrpStartCreateWorker.c)
 *     PiSwBusRelationAdd @ 0x1409F2DD8 (PiSwBusRelationAdd.c)
 *     SleepstudyHelperBuildBlocker @ 0x140A18F20 (SleepstudyHelperBuildBlocker.c)
 *     PiDqQueryAddObjectToResultSet @ 0x140A3A584 (PiDqQueryAddObjectToResultSet.c)
 *     PopPowerRequestTableInsertEntry @ 0x140A5D440 (PopPowerRequestTableInsertEntry.c)
 *     PiUpdateDriverDBCache @ 0x140A6C434 (PiUpdateDriverDBCache.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x140A80A64 (PnpMapDeviceObjectToDeviceInstance.c)
 *     EtwpEnumerateKeyProviders @ 0x140A953C0 (EtwpEnumerateKeyProviders.c)
 *     VfPtAddStackInfoIfNotExist @ 0x140B8DD84 (VfPtAddStackInfoIfNotExist.c)
 *     VfPtProcessAllocPoolInfo @ 0x140B8E55C (VfPtProcessAllocPoolInfo.c)
 * Callees:
 *     RebalanceNode @ 0x1403E4A70 (RebalanceNode.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     PiDmCompareObjects @ 0x140987790 (PiDmCompareObjects.c)
 *     PnpCompareInstancePath @ 0x140994780 (PnpCompareInstancePath.c)
 *     PiPnpRtlObjectEventCompareObjects @ 0x1409F8800 (PiPnpRtlObjectEventCompareObjects.c)
 *     PiPnpRtlOperationAllocateGenericTableEntry @ 0x140A1B2D0 (PiPnpRtlOperationAllocateGenericTableEntry.c)
 *     SshpCacheDatabaseAllocate @ 0x140A5CB30 (SshpCacheDatabaseAllocate.c)
 *     ExAllocatePoolWithTag @ 0x140B74010 (ExAllocatePoolWithTag.c)
 */

PVOID __stdcall RtlInsertElementGenericTableAvl(
        PRTL_AVL_TABLE Table,
        PVOID Buffer,
        CLONG BufferSize,
        PBOOLEAN NewElement)
{
  void *v4; // rdi
  size_t v5; // r13
  _RTL_BALANCED_LINKS *i; // r14
  RTL_GENERIC_COMPARE_RESULTS (__cdecl *CompareRoutine)(_RTL_AVL_TABLE *, PVOID, PVOID); // rax
  _RTL_BALANCED_LINKS *v11; // r8
  RTL_GENERIC_COMPARE_RESULTS v12; // eax
  _RTL_BALANCED_LINKS *RightChild; // rax
  int v14; // ebp
  _RTL_BALANCED_LINKS *v15; // rsi
  SIZE_T v17; // rdx
  PVOID (__cdecl *AllocateRoutine)(_RTL_AVL_TABLE *, CLONG); // rax
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
      CompareRoutine = (RTL_GENERIC_COMPARE_RESULTS (__cdecl *)(_RTL_AVL_TABLE *, PVOID, PVOID))Table->CompareRoutine;
      v11 = i + 1;
      if ( CompareRoutine == PiDmCompareObjects )
      {
        v12 = PiDmCompareObjects(Table, Buffer, v11);
      }
      else if ( (char *)CompareRoutine == (char *)PnpCompareInstancePath )
      {
        v12 = (unsigned int)PnpCompareInstancePath(Table, Buffer, v11);
      }
      else if ( CompareRoutine == PiPnpRtlObjectEventCompareObjects )
      {
        v12 = PiPnpRtlObjectEventCompareObjects(Table, Buffer, v11);
      }
      else
      {
        v12 = (unsigned int)guard_dispatch_icall_no_overrides(Table, Buffer);
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
    && ((AllocateRoutine = (PVOID (__cdecl *)(_RTL_AVL_TABLE *, CLONG))Table->AllocateRoutine,
         AllocateRoutine != PiPnpRtlOperationAllocateGenericTableEntry)
      ? (AllocateRoutine != SshpCacheDatabaseAllocate
       ? ((char *)AllocateRoutine != (char *)ExAllocatePoolWithTag
        ? (PoolWithTag = (_RTL_BALANCED_LINKS *)guard_dispatch_icall_no_overrides(Table, v17))
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

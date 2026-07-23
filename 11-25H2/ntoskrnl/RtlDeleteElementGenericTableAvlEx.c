/*
 * XREFs of RtlDeleteElementGenericTableAvlEx @ 0x1403EADF0
 * Callers:
 *     DifObjTrkQeuryInvokeDeleteRange @ 0x14060BED0 (DifObjTrkQeuryInvokeDeleteRange.c)
 * Callees:
 *     RebalanceNode @ 0x1403EB210 (RebalanceNode.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PiPnpRtlOperationFreeGenericTableEntry @ 0x140A29470 (PiPnpRtlOperationFreeGenericTableEntry.c)
 *     SshpCacheDatabaseFree @ 0x140A60170 (SshpCacheDatabaseFree.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall RtlDeleteElementGenericTableAvlEx(_RTL_AVL_TABLE *a1, _RTL_BALANCED_LINKS *a2)
{
  _RTL_BALANCED_LINKS *LeftChild; // rax
  _RTL_BALANCED_LINKS *j; // rcx
  _RTL_BALANCED_LINKS *v6; // rax
  _RTL_BALANCED_LINKS *RightChild; // rdi
  _RTL_BALANCED_LINKS *Parent; // rax
  char v9; // dl
  _RTL_BALANCED_LINKS *v10; // rcx
  _RTL_BALANCED_LINKS *v11; // r8
  _RTL_BALANCED_LINKS *v12; // rcx
  _RTL_BALANCED_LINKS *v13; // rcx
  _RTL_BALANCED_LINKS *v14; // r14
  char Balance; // al
  void (__stdcall *FreeRoutine)(PVOID, ULONG); // rax
  bool v17; // zf
  _RTL_BALANCED_LINKS *i; // rcx
  _RTL_BALANCED_LINKS *v19; // rcx
  _RTL_BALANCED_LINKS *v20; // rax
  _RTL_BALANCED_LINKS *v21; // rax
  _RTL_BALANCED_LINKS *m; // rax
  _RTL_BALANCED_LINKS *k; // rax

  if ( a2 == a1->RestartKey )
  {
    LeftChild = a2->LeftChild;
    if ( LeftChild )
    {
      for ( i = LeftChild->RightChild; i; i = i->RightChild )
        LeftChild = i;
    }
    else
    {
      LeftChild = a2->Parent;
      for ( j = a2; LeftChild->LeftChild == j; LeftChild = LeftChild->Parent )
        j = LeftChild;
      if ( LeftChild->RightChild != j || LeftChild->Parent == LeftChild )
        LeftChild = 0LL;
    }
    a1->RestartKey = LeftChild;
  }
  ++a1->DeleteCount;
  v6 = a2->LeftChild;
  if ( v6 && (RightChild = a2->RightChild) != 0LL )
  {
    if ( a2->Balance < 0 )
    {
      RightChild = a2->LeftChild;
      for ( k = v6->RightChild; k; k = k->RightChild )
        RightChild = k;
    }
    else
    {
      for ( m = RightChild->LeftChild; m; m = m->LeftChild )
        RightChild = m;
    }
  }
  else
  {
    RightChild = a2;
  }
  Parent = RightChild->Parent;
  v9 = -1;
  v10 = RightChild->LeftChild;
  v11 = RightChild->Parent->LeftChild;
  if ( v10 )
  {
    if ( v11 == RightChild )
    {
      Parent->LeftChild = v10;
    }
    else
    {
      Parent->RightChild = v10;
      v9 = 1;
    }
    v13 = RightChild->LeftChild;
  }
  else
  {
    v12 = RightChild->RightChild;
    if ( v11 == RightChild )
    {
      Parent->LeftChild = v12;
    }
    else
    {
      Parent->RightChild = v12;
      v9 = 1;
    }
    v13 = RightChild->RightChild;
    if ( !v13 )
      goto LABEL_15;
  }
  v13->Parent = RightChild->Parent;
LABEL_15:
  a1->BalancedRoot.Balance = 0;
  v14 = RightChild->Parent;
  while ( 1 )
  {
    Balance = v14->Balance;
    if ( Balance == v9 )
    {
      v14->Balance = 0;
      goto LABEL_24;
    }
    if ( !Balance )
      break;
    if ( (unsigned int)RebalanceNode(v14) )
      goto LABEL_20;
    v14 = v14->Parent;
LABEL_24:
    v9 = 1;
    v17 = v14->Parent->RightChild == v14;
    v14 = v14->Parent;
    if ( !v17 )
      v9 = -1;
  }
  v14->Balance = -v9;
  if ( a1->BalancedRoot.Balance )
    --a1->DepthOfTree;
LABEL_20:
  if ( a2 != RightChild )
  {
    *(_OWORD *)&RightChild->Parent = *(_OWORD *)&a2->Parent;
    *(_OWORD *)&RightChild->RightChild = *(_OWORD *)&a2->RightChild;
    v19 = RightChild->Parent;
    if ( a2->Parent->LeftChild == a2 )
      v19->LeftChild = RightChild;
    else
      v19->RightChild = RightChild;
    v20 = RightChild->LeftChild;
    if ( v20 )
      v20->Parent = RightChild;
    v21 = RightChild->RightChild;
    if ( v21 )
      v21->Parent = RightChild;
  }
  --a1->NumberGenericTableElements;
  FreeRoutine = (void (__stdcall *)(PVOID, ULONG))a1->FreeRoutine;
  a1->WhichOrderedElement = 0;
  a1->OrderedPointer = 0LL;
  if ( (char *)FreeRoutine == (char *)PiPnpRtlOperationFreeGenericTableEntry )
  {
    PiPnpRtlOperationFreeGenericTableEntry(a1, a2);
  }
  else if ( (char *)FreeRoutine == (char *)SshpCacheDatabaseFree )
  {
    SshpCacheDatabaseFree(a1, a2);
  }
  else if ( FreeRoutine == ExFreePoolWithTag )
  {
    ExFreePoolWithTag(a1, (ULONG)a2);
  }
  else
  {
    guard_dispatch_icall_no_overrides(a1, a2);
  }
}

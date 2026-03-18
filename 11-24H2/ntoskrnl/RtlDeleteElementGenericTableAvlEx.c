/*
 * XREFs of RtlDeleteElementGenericTableAvlEx @ 0x1403F0930
 * Callers:
 *     DifObjTrkQeuryInvokeDeleteRange @ 0x140617E90 (DifObjTrkQeuryInvokeDeleteRange.c)
 * Callees:
 *     RebalanceNode @ 0x1403F0D50 (RebalanceNode.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PiPnpRtlOperationFreeGenericTableEntry @ 0x140A2EEF0 (PiPnpRtlOperationFreeGenericTableEntry.c)
 *     SshpCacheDatabaseFree @ 0x140A61420 (SshpCacheDatabaseFree.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall RtlDeleteElementGenericTableAvlEx(
        struct _RTL_AVL_TABLE *Table,
        _RTL_BALANCED_LINKS *Buffer,
        __int64 a3,
        __int64 a4)
{
  _RTL_BALANCED_LINKS *LeftChild; // rax
  _RTL_BALANCED_LINKS *j; // rcx
  _RTL_BALANCED_LINKS *v8; // rax
  _RTL_BALANCED_LINKS *RightChild; // rdi
  _RTL_BALANCED_LINKS *Parent; // rax
  char v11; // dl
  _RTL_BALANCED_LINKS *v12; // rcx
  _RTL_BALANCED_LINKS *v13; // r8
  _RTL_BALANCED_LINKS *v14; // rcx
  _RTL_BALANCED_LINKS *v15; // rcx
  _RTL_BALANCED_LINKS *v16; // r14
  char Balance; // al
  void (__stdcall *FreeRoutine)(PVOID, ULONG); // rax
  bool v19; // zf
  _RTL_BALANCED_LINKS *i; // rcx
  _RTL_BALANCED_LINKS *v21; // rcx
  _RTL_BALANCED_LINKS *v22; // rax
  _RTL_BALANCED_LINKS *v23; // rax
  _RTL_BALANCED_LINKS *m; // rax
  _RTL_BALANCED_LINKS *k; // rax

  if ( Buffer == Table->RestartKey )
  {
    LeftChild = Buffer->LeftChild;
    if ( LeftChild )
    {
      for ( i = LeftChild->RightChild; i; i = i->RightChild )
        LeftChild = i;
    }
    else
    {
      LeftChild = Buffer->Parent;
      for ( j = Buffer; LeftChild->LeftChild == j; LeftChild = LeftChild->Parent )
        j = LeftChild;
      if ( LeftChild->RightChild != j || LeftChild->Parent == LeftChild )
        LeftChild = 0LL;
    }
    Table->RestartKey = LeftChild;
  }
  ++Table->DeleteCount;
  v8 = Buffer->LeftChild;
  if ( v8 && (RightChild = Buffer->RightChild) != 0LL )
  {
    if ( Buffer->Balance < 0 )
    {
      RightChild = Buffer->LeftChild;
      for ( k = v8->RightChild; k; k = k->RightChild )
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
    RightChild = Buffer;
  }
  Parent = RightChild->Parent;
  v11 = -1;
  v12 = RightChild->LeftChild;
  v13 = RightChild->Parent->LeftChild;
  if ( v12 )
  {
    if ( v13 == RightChild )
    {
      Parent->LeftChild = v12;
    }
    else
    {
      Parent->RightChild = v12;
      v11 = 1;
    }
    v15 = RightChild->LeftChild;
  }
  else
  {
    v14 = RightChild->RightChild;
    if ( v13 == RightChild )
    {
      Parent->LeftChild = v14;
    }
    else
    {
      Parent->RightChild = v14;
      v11 = 1;
    }
    v15 = RightChild->RightChild;
    if ( !v15 )
      goto LABEL_15;
  }
  v15->Parent = RightChild->Parent;
LABEL_15:
  Table->BalancedRoot.Balance = 0;
  v16 = RightChild->Parent;
  while ( 1 )
  {
    Balance = v16->Balance;
    if ( Balance == v11 )
    {
      v16->Balance = 0;
      goto LABEL_24;
    }
    if ( !Balance )
      break;
    if ( (unsigned int)RebalanceNode(v16) )
      goto LABEL_20;
    v16 = v16->Parent;
LABEL_24:
    v11 = 1;
    v19 = v16->Parent->RightChild == v16;
    v16 = v16->Parent;
    if ( !v19 )
      v11 = -1;
  }
  v16->Balance = -v11;
  if ( Table->BalancedRoot.Balance )
    --Table->DepthOfTree;
LABEL_20:
  if ( Buffer != RightChild )
  {
    *(_OWORD *)&RightChild->Parent = *(_OWORD *)&Buffer->Parent;
    *(_OWORD *)&RightChild->RightChild = *(_OWORD *)&Buffer->RightChild;
    v21 = RightChild->Parent;
    if ( Buffer->Parent->LeftChild == Buffer )
      v21->LeftChild = RightChild;
    else
      v21->RightChild = RightChild;
    v22 = RightChild->LeftChild;
    if ( v22 )
      v22->Parent = RightChild;
    v23 = RightChild->RightChild;
    if ( v23 )
      v23->Parent = RightChild;
  }
  --Table->NumberGenericTableElements;
  FreeRoutine = (void (__stdcall *)(PVOID, ULONG))Table->FreeRoutine;
  Table->WhichOrderedElement = 0;
  Table->OrderedPointer = 0LL;
  if ( (char *)FreeRoutine == (char *)PiPnpRtlOperationFreeGenericTableEntry )
  {
    PiPnpRtlOperationFreeGenericTableEntry(Table, Buffer);
  }
  else if ( (char *)FreeRoutine == (char *)SshpCacheDatabaseFree )
  {
    SshpCacheDatabaseFree(Table, Buffer);
  }
  else if ( FreeRoutine == ExFreePoolWithTag )
  {
    ExFreePoolWithTag(Table, (ULONG)Buffer);
  }
  else
  {
    guard_dispatch_icall_no_overrides(Table, Buffer, v13, a4);
  }
}

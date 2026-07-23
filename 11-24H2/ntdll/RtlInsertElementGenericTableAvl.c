/*
 * XREFs of RtlInsertElementGenericTableAvl @ 0x18008E510
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlCompareUnicodeStrings @ 0x18008EE30 (RtlCompareUnicodeStrings.c)
 *     RebalanceNode @ 0x18008F1E0 (RebalanceNode.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// local variable allocation has failed, the output may be wrong!
PVOID __cdecl RtlInsertElementGenericTableAvl(
        PRTL_AVL_TABLE Table,
        PVOID Buffer,
        CLONG BufferSize,
        PBOOLEAN NewElement)
{
  _RTL_BALANCED_LINKS *i; // rbx
  size_t v5; // r13
  _RTL_BALANCED_LINKS **p_RightChild; // r15
  LONG (__cdecl *CompareRoutine)(PUNICODE_STRING, PUNICODE_STRING, BOOLEAN); // rax
  _RTL_BALANCED_LINKS *CaseInSensitive; // r8
  int v12; // eax
  _RTL_BALANCED_LINKS *v13; // rsi
  int v14; // r14d
  void *(__fastcall *AllocateRoutine)(_RTL_AVL_TABLE *, unsigned int); // rax
  _RTL_BALANCED_LINKS *Heap; // rax
  _RTL_BALANCED_LINKS *v18; // r8
  _RTL_BALANCED_LINKS *j; // rdx
  bool v20; // zf
  char v21; // al
  __int64 Balance; // rdx

  i = 0LL;
  v5 = BufferSize;
  p_RightChild = &Table->BalancedRoot.RightChild;
  if ( Table->NumberGenericTableElements )
  {
    for ( i = *p_RightChild; ; i = i->RightChild )
    {
      while ( 1 )
      {
        CompareRoutine = (LONG (__cdecl *)(PUNICODE_STRING, PUNICODE_STRING, BOOLEAN))Table->CompareRoutine;
        CaseInSensitive = i + 1;
        v12 = CompareRoutine == RtlCompareUnicodeString
            ? RtlCompareUnicodeStrings(
                (PCWCH)Table->BalancedRoot.LeftChild,
                (unsigned __int64)LOWORD(Table->BalancedRoot.Parent) >> 1,
                *((PCWCH *)Buffer + 1),
                (unsigned __int64)*(unsigned __int16 *)Buffer >> 1,
                (BOOLEAN)CaseInSensitive)
            : ((__int64 (__fastcall *)(PRTL_AVL_TABLE, PVOID, _RTL_BALANCED_LINKS *))CompareRoutine)(
                Table,
                Buffer,
                CaseInSensitive);
        if ( v12 )
          break;
        if ( !i->LeftChild )
        {
          v14 = 2;
          goto LABEL_16;
        }
        i = i->LeftChild;
      }
      if ( v12 != 1 )
      {
        v13 = i;
        v14 = 1;
        goto LABEL_12;
      }
      if ( !i->RightChild )
        break;
    }
    v14 = 3;
  }
  else
  {
    v14 = 0;
  }
LABEL_16:
  v13 = 0LL;
  if ( (int)v5 + 32 >= (unsigned int)v5 )
  {
    AllocateRoutine = Table->AllocateRoutine;
    if ( (char *)AllocateRoutine == (char *)RtlAllocateHeap )
    {
      Heap = (_RTL_BALANCED_LINKS *)RtlAllocateHeap(Table, (int)v5 + 32, *(SIZE_T *)&BufferSize);
      p_RightChild = &Table->BalancedRoot.RightChild;
    }
    else
    {
      Heap = (_RTL_BALANCED_LINKS *)((__int64 (__fastcall *)(PRTL_AVL_TABLE))AllocateRoutine)(Table);
    }
    v13 = Heap;
  }
  if ( v13 )
  {
    *(_OWORD *)&v13->Parent = 0LL;
    *(_OWORD *)&v13->RightChild = 0LL;
    ++Table->NumberGenericTableElements;
    if ( !v14 )
    {
      *p_RightChild = v13;
      v13->Parent = &Table->BalancedRoot;
      Table->DepthOfTree = 1;
      memmove(&v13[1], Buffer, v5);
      goto LABEL_12;
    }
    v18 = v13;
    if ( v14 == 2 )
      i->LeftChild = v13;
    else
      i->RightChild = v13;
    v13->Parent = i;
    Table->BalancedRoot.Balance = -1;
    for ( j = v13->Parent; ; i = j )
    {
      v20 = j->LeftChild == v18;
      v21 = -1;
      Balance = (unsigned __int8)i->Balance;
      if ( !v20 )
        v21 = 1;
      if ( (_BYTE)Balance )
        break;
      j = i->Parent;
      v18 = i;
      i->Balance = v21;
    }
    if ( (_BYTE)Balance == v21 )
    {
      RebalanceNode(i, Balance, v18, NewElement);
    }
    else
    {
      i->Balance = 0;
      if ( !Table->BalancedRoot.Balance )
      {
        ++Table->DepthOfTree;
        memmove(&v13[1], Buffer, v5);
        goto LABEL_12;
      }
    }
    memmove(&v13[1], Buffer, v5);
LABEL_12:
    if ( NewElement )
      *NewElement = v14 != 1;
    Table->WhichOrderedElement = 0;
    Table->OrderedPointer = 0LL;
    return &v13[1];
  }
  if ( NewElement )
    *NewElement = 0;
  return 0LL;
}

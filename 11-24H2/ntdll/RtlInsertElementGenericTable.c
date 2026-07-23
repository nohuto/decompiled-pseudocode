/*
 * XREFs of RtlInsertElementGenericTable @ 0x1800B7D00
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlSplay @ 0x1800B80F0 (RtlSplay.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// local variable allocation has failed, the output may be wrong!
PVOID __cdecl RtlInsertElementGenericTable(
        PRTL_GENERIC_TABLE Table,
        PVOID Buffer,
        CLONG BufferSize,
        PBOOLEAN NewElement)
{
  PRTL_SPLAY_LINKS TableRoot; // rax
  void *v5; // r15
  size_t v6; // r13
  PRTL_SPLAY_LINKS v10; // rbx
  int v11; // eax
  int v12; // ebp
  PVOID (__cdecl *AllocateRoutine)(PVOID, ULONG, SIZE_T); // rax
  _QWORD *v14; // rax
  _RTL_SPLAY_LINKS *v15; // r14
  _LIST_ENTRY *v16; // rax
  _LIST_ENTRY *Blink; // r8

  TableRoot = Table->TableRoot;
  v5 = 0LL;
  v6 = BufferSize;
  v10 = 0LL;
  if ( Table->TableRoot )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v10 = TableRoot;
        v11 = ((__int64 (__fastcall *)(PRTL_GENERIC_TABLE, PVOID, _RTL_SPLAY_LINKS **))Table->CompareRoutine)(
                Table,
                Buffer,
                &TableRoot[1].RightChild);
        if ( v11 )
          break;
        TableRoot = v10->LeftChild;
        if ( !TableRoot )
        {
          v12 = 2;
          goto LABEL_5;
        }
      }
      if ( v11 != 1 )
        break;
      TableRoot = v10->RightChild;
      if ( !TableRoot )
      {
        v12 = 3;
        goto LABEL_5;
      }
    }
    v15 = v10;
    v12 = 1;
    goto LABEL_15;
  }
  v12 = 0;
LABEL_5:
  if ( (int)v6 + 40 >= (unsigned int)v6 )
  {
    AllocateRoutine = (PVOID (__cdecl *)(PVOID, ULONG, SIZE_T))Table->AllocateRoutine;
    v14 = AllocateRoutine == RtlAllocateHeap
        ? RtlAllocateHeap(Table, (int)v6 + 40, *(SIZE_T *)&BufferSize)
        : (_QWORD *)((__int64 (__fastcall *)(PRTL_GENERIC_TABLE))AllocateRoutine)(Table);
    v15 = (_RTL_SPLAY_LINKS *)v14;
    if ( v14 )
    {
      *v14 = v14;
      v14[1] = 0LL;
      v14[2] = 0LL;
      v16 = (_LIST_ENTRY *)(v14 + 3);
      Blink = Table->InsertOrderList.Blink;
      if ( Blink->Flink != &Table->InsertOrderList )
        __fastfail(3u);
      v16->Flink = &Table->InsertOrderList;
      v16->Blink = Blink;
      Blink->Flink = v16;
      Table->InsertOrderList.Blink = v16;
      ++Table->NumberGenericTableElements;
      if ( v12 )
      {
        if ( v12 == 2 )
          v10->LeftChild = v15;
        else
          v10->RightChild = v15;
        v15->Parent = v10;
      }
      else
      {
        Table->TableRoot = v15;
      }
      memmove(&v15[1].RightChild, Buffer, v6);
LABEL_15:
      Table->TableRoot = RtlSplay(v15);
      if ( NewElement )
        *NewElement = v12 != 1;
      return &v15[1].RightChild;
    }
  }
  if ( NewElement )
    *NewElement = 0;
  return v5;
}

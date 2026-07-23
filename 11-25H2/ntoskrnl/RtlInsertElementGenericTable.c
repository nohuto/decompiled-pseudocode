/*
 * XREFs of RtlInsertElementGenericTable @ 0x140374DF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlSplay @ 0x1403751F0 (RtlSplay.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

PVOID __stdcall RtlInsertElementGenericTable(
        PRTL_GENERIC_TABLE Table,
        PVOID Buffer,
        CLONG BufferSize,
        PBOOLEAN NewElement)
{
  PRTL_SPLAY_LINKS TableRoot; // rax
  void *v5; // rdi
  size_t v6; // r13
  PRTL_SPLAY_LINKS v10; // rsi
  int v11; // eax
  int v12; // ebp
  __int64 v13; // rdx
  _QWORD *v14; // rax
  _RTL_SPLAY_LINKS *v15; // rbx
  struct _LIST_ENTRY *v16; // rax
  struct _LIST_ENTRY *Blink; // r8

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
        v11 = guard_dispatch_icall_no_overrides(Table, Buffer);
        if ( v11 )
          break;
        TableRoot = v10->LeftChild;
        if ( !TableRoot )
        {
          v12 = 2;
          goto LABEL_6;
        }
      }
      if ( v11 != 1 )
        break;
      TableRoot = v10->RightChild;
      if ( !TableRoot )
      {
        v12 = 3;
        goto LABEL_6;
      }
    }
    v15 = v10;
    v12 = 1;
    goto LABEL_15;
  }
  v12 = 0;
LABEL_6:
  v13 = (unsigned int)(v6 + 40);
  if ( (unsigned int)v13 >= (unsigned int)v6 )
  {
    v14 = (_QWORD *)((__int64 (__fastcall *)(ULONG_PTR))Table->AllocateRoutine == ExAllocatePool2
                   ? ExAllocatePool2((ULONG_PTR)Table)
                   : guard_dispatch_icall_no_overrides(Table, v13));
    v15 = (_RTL_SPLAY_LINKS *)v14;
    if ( v14 )
    {
      *v14 = v14;
      v14[1] = 0LL;
      v14[2] = 0LL;
      v16 = (struct _LIST_ENTRY *)(v14 + 3);
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

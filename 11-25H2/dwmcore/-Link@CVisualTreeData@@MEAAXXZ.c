/*
 * XREFs of ?Link@CVisualTreeData@@MEAAXXZ @ 0x18010C5F0
 * Callers:
 *     <none>
 * Callees:
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?ReserveSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@SAAEAT?$_Align_type@N$07@std@@PEAPEAV12@I@Z @ 0x1801082B4 (-ReserveSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@SAAEAT-$_Align_type@N$07@std@@PEAP.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18010C720 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x180170E90 (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 */

void __fastcall CVisualTreeData::Link(CVisualTreeData *this)
{
  __int64 v2; // rcx
  _QWORD *v3; // r8
  _QWORD *v4; // rdx
  __int64 **v5; // rbp
  struct _LIST_ENTRY **v6; // rdi
  struct _LIST_ENTRY *TreeDataListHead; // rbx
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v9; // rax
  unsigned int Slot; // eax
  __int64 v11; // r10

  v2 = *((_QWORD *)this + 47);
  v3 = *(_QWORD **)(v2 + 2616);
  v4 = (_QWORD *)((char *)this + 360);
  if ( *v3 != v2 + 2608 )
    goto LABEL_9;
  *v4 = v2 + 2608;
  *((_QWORD *)this + 46) = v3;
  *v3 = v4;
  *(_QWORD *)(v2 + 2616) = v4;
  ++*(_DWORD *)(v2 + 2624);
  v5 = (__int64 **)*((_QWORD *)this + 31);
  v6 = 0LL;
  TreeDataListHead = CVisual::GetTreeDataListHead((CVisual *)v5);
  if ( !TreeDataListHead )
  {
    TreeDataListHead = (struct _LIST_ENTRY *)MIDL_user_allocate(0x10uLL);
    if ( !TreeDataListHead )
      RaiseFailFastException(0LL, 0LL, 0);
    TreeDataListHead->Blink = TreeDataListHead;
    TreeDataListHead->Flink = TreeDataListHead;
    if ( *(int *)v5[29] < 0 )
    {
      Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v5[29], 1LL);
      if ( Slot < *(_DWORD *)(v11 + 4) )
        v6 = (struct _LIST_ENTRY **)(v11
                                   + *(unsigned int *)(v11 + 4)
                                   + 15LL
                                   + 8LL * Slot
                                   - (((unsigned __int8)*(_DWORD *)(v11 + 4) + 15) & 7));
      *v6 = TreeDataListHead;
    }
    else
    {
      *(_QWORD *)CSparseAlignedStorage<8,8>::AllocatedStorage::ReserveSlot(v5 + 29, 1) = TreeDataListHead;
    }
  }
  Blink = TreeDataListHead->Blink;
  v9 = (struct _LIST_ENTRY *)((char *)this + 344);
  if ( Blink->Flink != TreeDataListHead )
LABEL_9:
    __fastfail(3u);
  v9->Flink = TreeDataListHead;
  *((_QWORD *)this + 44) = Blink;
  Blink->Flink = v9;
  TreeDataListHead->Blink = v9;
  *((_BYTE *)this + 10) = 1;
}

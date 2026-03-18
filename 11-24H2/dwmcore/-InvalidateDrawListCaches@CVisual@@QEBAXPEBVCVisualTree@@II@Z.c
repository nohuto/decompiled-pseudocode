/*
 * XREFs of ?InvalidateDrawListCaches@CVisual@@QEBAXPEBVCVisualTree@@II@Z @ 0x1801E1C9C
 * Callers:
 *     ?ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z @ 0x180230200 (-ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z.c)
 * Callees:
 *     ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x18004FDB0 (-Invalidate@CDrawListCache@@QEAAXXZ.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x1800D6E60 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisual::InvalidateDrawListCaches(CVisual *this, const struct CVisualTree *a2)
{
  struct _LIST_ENTRY *v4; // rax
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY *Blink; // rdi
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v8; // r10
  struct _LIST_ENTRY *i; // rcx

  if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 184LL))(a2) )
  {
    v4 = (struct _LIST_ENTRY *)((char *)this + 328);
LABEL_3:
    if ( v4 )
    {
      Flink = v4[1].Flink;
      Blink = v4[1].Blink;
      while ( Flink != Blink )
      {
        if ( !LODWORD(Flink->Flink) && !HIDWORD(Flink->Flink) )
          CDrawListCache::Invalidate((CDrawListCache *)Flink->Blink);
        ++Flink;
      }
    }
  }
  else
  {
    TreeDataListHead = CVisual::GetTreeDataListHead(this);
    v8 = TreeDataListHead;
    if ( TreeDataListHead )
    {
      for ( i = TreeDataListHead->Flink; i != v8; i = i->Flink )
      {
        v4 = i - 22;
        if ( (const struct CVisualTree *)i[2].Flink == a2 )
          goto LABEL_3;
      }
    }
  }
}

/*
 * XREFs of ?SetNotificationMode@CCursorVisual@@QEAAXXZ @ 0x18025B494
 * Callers:
 *     ?EndUpdateCursors@CGlobalComposition@@UEAAXXZ @ 0x180031980 (-EndUpdateCursors@CGlobalComposition@@UEAAXXZ.c)
 * Callees:
 *     ?GetDesktopTree@CVisual@@QEBAPEAVCDesktopTree@@XZ @ 0x1801094B0 (-GetDesktopTree@CVisual@@QEBAPEAVCDesktopTree@@XZ.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18010C720 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?NeedsCursorPositionUpdates@CDesktopTree@@QEBA_NPEBVCCursorVisual@@@Z @ 0x180296460 (-NeedsCursorPositionUpdates@CDesktopTree@@QEBA_NPEBVCCursorVisual@@@Z.c)
 */

void __fastcall CCursorVisual::SetNotificationMode(CCursorVisual *this)
{
  struct _LIST_ENTRY *TreeDataListHead; // rax
  CDesktopTree *DesktopTree; // rax
  bool v4; // di
  __int64 v5; // rbx

  if ( *((_QWORD *)this + 87) )
  {
    v4 = *((_QWORD *)this + 88) == *(_QWORD *)(*((_QWORD *)this + 3) + 888LL)
      || (TreeDataListHead = CVisual::GetTreeDataListHead(this)) != 0LL && TreeDataListHead->Flink != TreeDataListHead
      || (DesktopTree = CVisual::GetDesktopTree(this)) != 0LL
      && CDesktopTree::NeedsCursorPositionUpdates(DesktopTree, this)
      || *(_QWORD *)(*((_QWORD *)this + 3) + 6184LL) != *(_QWORD *)(*((_QWORD *)this + 3) + 6192LL);
    v5 = *((_QWORD *)this + 87);
    EnterCriticalSection(&g_CursorManager);
    *(_BYTE *)(v5 + 82) = v4;
    LeaveCriticalSection(&g_CursorManager);
  }
}

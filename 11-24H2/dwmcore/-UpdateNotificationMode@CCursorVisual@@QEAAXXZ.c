/*
 * XREFs of ?UpdateNotificationMode@CCursorVisual@@QEAAXXZ @ 0x180290BB8
 * Callers:
 *     ?EndUpdateCursors@CGlobalComposition@@UEAAXXZ @ 0x1800F34C0 (-EndUpdateCursors@CGlobalComposition@@UEAAXXZ.c)
 * Callees:
 *     ?GetDesktopTree@CVisual@@QEBAPEAVCDesktopTree@@XZ @ 0x1800399A0 (-GetDesktopTree@CVisual@@QEBAPEAVCDesktopTree@@XZ.c)
 *     ?NeedsCursorPositionUpdates@CDesktopTree@@QEBA_NPEBVCCursorVisual@@@Z @ 0x18028B0A0 (-NeedsCursorPositionUpdates@CDesktopTree@@QEBA_NPEBVCCursorVisual@@@Z.c)
 */

void __fastcall CCursorVisual::UpdateNotificationMode(CCursorVisual *this)
{
  bool v1; // di
  _QWORD *v3; // rcx
  CDesktopTree *DesktopTree; // rax
  __int64 v5; // rbx

  v1 = 0;
  if ( *((_QWORD *)this + 88) )
  {
    v3 = (_QWORD *)*((_QWORD *)this + 3);
    if ( *((_QWORD *)this + 89) == v3[111] || v3[770] != v3[771] )
    {
      v1 = 1;
    }
    else
    {
      DesktopTree = CVisual::GetDesktopTree(this);
      if ( DesktopTree )
        v1 = CDesktopTree::NeedsCursorPositionUpdates(DesktopTree, this) != 0;
    }
    v5 = *((_QWORD *)this + 88);
    EnterCriticalSection(&g_CursorManager);
    *(_BYTE *)(v5 + 82) = v1;
    LeaveCriticalSection(&g_CursorManager);
  }
}

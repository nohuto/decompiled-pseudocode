/*
 * XREFs of ?_SnapshotWindows@CDesktopThumbnailBase@@IEAAJXZ @ 0x180012A04
 * Callers:
 *     ?UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ @ 0x180012928 (-UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ.c)
 * Callees:
 *     ?_AddWindow@CDesktopThumbnailBase@@IEAAJPEAVCWindowData@@@Z @ 0x180011DDC (-_AddWindow@CDesktopThumbnailBase@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x180012BB8 (-ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180043FD0 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDesktopThumbnailBase::_SnapshotWindows(CDesktopThumbnailBase *this)
{
  unsigned __int64 v1; // rdx
  unsigned int v2; // edi
  struct _LIST_ENTRY *WindowListForDesktop; // r14
  struct _LIST_ENTRY *i; // rbx
  unsigned __int8 Flink; // al
  int v8; // eax

  v1 = *((_QWORD *)this + 29);
  v2 = 0;
  if ( v1 != -1LL )
  {
    WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                             v1);
    for ( i = WindowListForDesktop->Flink; i != WindowListForDesktop; i = i->Flink )
    {
      if ( i )
      {
        if ( i[27].Blink )
        {
          Flink = (unsigned __int8)i[46].Flink;
          if ( (Flink & 1) != 0 && ((BYTE4(i[46].Flink) | Flink) & 4) == 0 && (BYTE6(i[46].Flink) & 0x10) == 0 )
          {
            if ( i[2].Blink )
            {
              if ( (*(unsigned __int8 (__fastcall **)(CDesktopThumbnailBase *, struct _LIST_ENTRY *))(*(_QWORD *)this + 208LL))(
                     this,
                     i) )
              {
                if ( CTransitionVisualController::ShouldCloneWindow((HWND)i[2].Blink) )
                {
                  v8 = CDesktopThumbnailBase::_AddWindow(this, (struct CWindowData *)i);
                  v2 = v8;
                  if ( v8 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x59u, 0LL);
                    return v2;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return v2;
}

/*
 * XREFs of ?_SnapshotWindows@CDesktopThumbnailBase@@IEAAJXZ @ 0x1800121D8
 * Callers:
 *     ?UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ @ 0x180005904 (-UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ.c)
 * Callees:
 *     ?_AddWindow@CDesktopThumbnailBase@@IEAAJPEAVCWindowData@@@Z @ 0x1800122C0 (-_AddWindow@CDesktopThumbnailBase@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x180012434 (-ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x18002B8A0 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopThumbnailBase::_SnapshotWindows(CDesktopThumbnailBase *this)
{
  unsigned __int64 v1; // rdx
  unsigned int v2; // edi
  struct _LIST_ENTRY *WindowListForDesktop; // r14
  struct _LIST_ENTRY *Flink; // rbx
  unsigned __int8 v6; // al
  int v8; // eax

  v1 = *((_QWORD *)this + 35);
  v2 = 0;
  if ( v1 != -1LL )
  {
    WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                             v1);
    Flink = WindowListForDesktop->Flink;
    if ( WindowListForDesktop->Flink != WindowListForDesktop )
    {
      while ( 1 )
      {
        if ( Flink )
        {
          if ( Flink[27].Blink )
          {
            v6 = (unsigned __int8)Flink[42].Flink;
            if ( (v6 & 1) != 0 && ((BYTE4(Flink[42].Flink) | v6) & 4) == 0 && (BYTE6(Flink[42].Flink) & 0x10) == 0 )
            {
              if ( Flink[2].Blink )
              {
                if ( (*(unsigned __int8 (__fastcall **)(CDesktopThumbnailBase *, struct _LIST_ENTRY *))(*(_QWORD *)this + 216LL))(
                       this,
                       Flink) )
                {
                  if ( CTransitionVisualController::ShouldCloneWindow((HWND)Flink[2].Blink) )
                  {
                    v8 = CDesktopThumbnailBase::_AddWindow(this, (struct CWindowData *)Flink);
                    v2 = v8;
                    if ( v8 < 0 )
                      break;
                  }
                }
              }
            }
          }
        }
        Flink = Flink->Flink;
        if ( Flink == WindowListForDesktop )
          return v2;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x60u, 0LL);
    }
  }
  return v2;
}

/*
 * XREFs of ?Initialize@CImmersiveState@@AEAAJ_K@Z @ 0x18001C4E8
 * Callers:
 *     ?Create@CImmersiveState@@SAJPEAPEAV1@_K@Z @ 0x18004087C (-Create@CImmersiveState@@SAJPEAPEAV1@_K@Z.c)
 * Callees:
 *     ?GetWindowBand@CWindowData@@QEBA?AW4ZBID@@XZ @ 0x18001C5F8 (-GetWindowBand@CWindowData@@QEBA-AW4ZBID@@XZ.c)
 *     ?UpdateInfoIfTaskbar@CImmersiveState@@AEAA_NPEBVCWindowData@@@Z @ 0x18001DBF8 (-UpdateInfoIfTaskbar@CImmersiveState@@AEAA_NPEBVCWindowData@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180025870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180043FD0 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 */

__int64 __fastcall CImmersiveState::Initialize(CImmersiveState *this, unsigned __int64 a2)
{
  struct _LIST_ENTRY *WindowListForDesktop; // rsi
  struct _LIST_ENTRY *i; // rbx
  int WindowBand; // eax

  *((_DWORD *)this + 10) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 16, 24LL);
  WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                           a2);
  for ( i = WindowListForDesktop->Blink; i != WindowListForDesktop; i = i->Blink )
  {
    WindowBand = CWindowData::GetWindowBand(i);
    if ( (HIDWORD(i[7].Flink) & 0x40000000) == 0 )
    {
      switch ( WindowBand )
      {
        case 6:
          if ( !CImmersiveState::UpdateInfoIfTaskbar(this, (const struct CWindowData *)i)
            && ((__int64)i[46].Blink & 0xFFF) == 9 )
          {
            if ( (BYTE4(i[46].Flink) & 1) == 0 )
              *((_BYTE *)this + 56) = 1;
            *(struct _LIST_ENTRY *)((char *)this + 72) = i[3];
          }
          break;
        case 12:
          if ( !*((_QWORD *)this + 6) )
            *((_QWORD *)this + 6) = i;
          break;
        case 1:
          CImmersiveState::UpdateInfoIfTaskbar(this, (const struct CWindowData *)i);
          break;
      }
    }
  }
  return 0LL;
}

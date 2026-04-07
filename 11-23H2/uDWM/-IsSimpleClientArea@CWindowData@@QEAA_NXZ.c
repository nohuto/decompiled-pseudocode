/*
 * XREFs of ?IsSimpleClientArea@CWindowData@@QEAA_NXZ @ 0x18001027C
 * Callers:
 *     ?Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x18000FE38 (-Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z.c)
 * Callees:
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x18001C934 (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 */

char __fastcall CWindowData::IsSimpleClientArea(CWindowData *this)
{
  char v1; // di

  v1 = 0;
  if ( (*((_BYTE *)this + 673) & 0x10) == 0
    && (*((_BYTE *)this + 675) & 0x20) == 0
    && !*((_DWORD *)this + 140)
    && (!*((_QWORD *)this + 53)
     || *((HWND *)this + 5) == CWindowList::GetShellWindowForDesktop(
                                 *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                                 *((_QWORD *)this + 17))) )
  {
    return 1;
  }
  return v1;
}

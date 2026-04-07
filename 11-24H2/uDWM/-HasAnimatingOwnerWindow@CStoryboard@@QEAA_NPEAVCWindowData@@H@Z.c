/*
 * XREFs of ?HasAnimatingOwnerWindow@CStoryboard@@QEAA_NPEAVCWindowData@@H@Z @ 0x1800D2B98
 * Callers:
 *     ?_FadeWindow@CFade@@IEAAJPEAVCWindowData@@_N@Z @ 0x180051E68 (-_FadeWindow@CFade@@IEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z @ 0x180012D24 (-IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z.c)
 */

char __fastcall CStoryboard::HasAnimatingOwnerWindow(CStoryboard *this, struct CWindowData *a2)
{
  CDesktopManager *v2; // rsi
  char v4; // bl
  HWND v5; // rdx

  v2 = CDesktopManager::s_pDesktopManagerInstance;
  v4 = 0;
  while ( a2 )
  {
    v5 = (HWND)*((_QWORD *)a2 + 5);
    if ( v5 && CAnimationScheduler::IsWindowCurrentlyAnimating(*((CAnimationScheduler **)v2 + 23), v5, 83, 0x10000000u) )
      return 1;
    a2 = (struct CWindowData *)*((_QWORD *)a2 + 75);
  }
  return v4;
}

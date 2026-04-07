/*
 * XREFs of ?RegisterGlobalTimer@CAcrylicSheet@@QEAAJXZ @ 0x180069040
 * Callers:
 *     ?StartRectAnimation@CAcrylicSheet@@QEAAJPEBUtagRECT@@0MUInterpolationParameters@@M@Z @ 0x180068EC4 (-StartRectAnimation@CAcrylicSheet@@QEAAJPEBUtagRECT@@0MUInterpolationParameters@@M@Z.c)
 *     ?StartAlphaAnimation@CAcrylicSheet@@QEAAJMMM@Z @ 0x1800A230C (-StartAlphaAnimation@CAcrylicSheet@@QEAAJMMM@Z.c)
 * Callees:
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x180015730 (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CAcrylicSheet::RegisterGlobalTimer(CAcrylicSheet *this)
{
  unsigned int v1; // ebx
  int v4; // eax

  v1 = 0;
  if ( !*((_BYTE *)this + 416) )
  {
    v4 = CDesktopManager::RegisterForGlobalTimeChangeNotification(this);
    v1 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x188u, 0LL);
    else
      *((_BYTE *)this + 416) = 1;
  }
  return v1;
}

/*
 * XREFs of ?ReadSystemMetrics@CTopLevelWindow@@SAJXZ @ 0x18000A9B0
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJPEAK@Z @ 0x180009A3C (-UpdateSettings@CDesktopManager@@QEAAJPEAK@Z.c)
 * Callees:
 *     ?EnsureWindowFrames@CTopLevelWindow@@CAJXZ @ 0x18000AA30 (-EnsureWindowFrames@CTopLevelWindow@@CAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 CTopLevelWindow::ReadSystemMetrics(void)
{
  int v0; // eax
  unsigned int v1; // ebx

  v0 = CTopLevelWindow::EnsureWindowFrames();
  v1 = v0;
  if ( v0 >= 0 )
  {
    CTopLevelWindow::s_marMinInflationThickness.cxLeftWidth = GetSystemMetrics(5);
    dword_1801269B8 = GetSystemMetrics(6);
    dword_1801269B4 = CTopLevelWindow::s_marMinInflationThickness.cxLeftWidth;
    dword_1801269BC = dword_1801269B8;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v0, 0x2AEu, 0LL);
  }
  return v1;
}

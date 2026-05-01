/*
 * XREFs of ?SHComputeDPI@@YAXPEAUHWND__@@PEAH1@Z @ 0x180684CB8
 * Callers:
 *     s_OnDrawItemHelper @ 0x1806857A0 (s_OnDrawItemHelper.c)
 *     ?_GetDpiForMonitorFromPoint@ImmersiveContextMenuHelper@@YAIPEAUtagPOINT@@@Z @ 0x180687268 (-_GetDpiForMonitorFromPoint@ImmersiveContextMenuHelper@@YAIPEAUtagPOINT@@@Z.c)
 *     ?ScaleByPPI@DPIToPPIHelpers@@YAHHPEAUHWND__@@W4ScaleModifier@1@@Z @ 0x1806879BC (-ScaleByPPI@DPIToPPIHelpers@@YAHHPEAUHWND__@@W4ScaleModifier@1@@Z.c)
 *     ?ScaleBySpecificDPI@DPIToPPIHelpers@@YAHHHW4ScaleModifier@1@@Z @ 0x180687A78 (-ScaleBySpecificDPI@DPIToPPIHelpers@@YAHHHW4ScaleModifier@1@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SHComputeDPI(HWND a1, int *a2, int *a3)
{
  HDC DC; // rax
  HDC v6; // r14
  int DeviceCaps; // ebx
  int v8; // ebp

  DC = GetDC(0LL);
  v6 = DC;
  if ( DC )
  {
    DeviceCaps = GetDeviceCaps(DC, 88);
    v8 = GetDeviceCaps(v6, 90);
    ReleaseDC(0LL, v6);
  }
  else
  {
    DeviceCaps = 96;
    v8 = 96;
  }
  if ( a2 )
    *a2 = DeviceCaps;
  if ( a3 )
    *a3 = v8;
}

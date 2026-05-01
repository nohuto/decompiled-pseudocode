/*
 * XREFs of ?s_ActivationFilterWndProc@CDesktopVisibilityChangeSource@CImmersiveMode@@CA_JPEAUHWND__@@I_K_J@Z @ 0x1801D8820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LRESULT __fastcall CImmersiveMode::CDesktopVisibilityChangeSource::s_ActivationFilterWndProc(
        HWND a1,
        UINT a2,
        WPARAM a3,
        LPARAM a4)
{
  if ( a2 == 16 )
    return 0LL;
  else
    return DefWindowProcW(a1, a2, a3, a4);
}

/*
 * XREFs of ?IsTsDisplay@CDWMDisplay@@QEBA_NXZ @ 0x1800833B4
 * Callers:
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18008D05C (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CDWMDisplay::IsTsDisplay(CDWMDisplay *this)
{
  char v1; // dl

  v1 = 0;
  if ( *((_BYTE *)this + 164) || *((int *)CDesktopManager::s_pDesktopManagerInstance + 8) >= 3 )
    return 1;
  return v1;
}

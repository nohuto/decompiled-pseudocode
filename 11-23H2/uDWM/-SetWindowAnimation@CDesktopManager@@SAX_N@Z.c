/*
 * XREFs of ?SetWindowAnimation@CDesktopManager@@SAX_N@Z @ 0x18002D424
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x1800264FC (-Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?UpdateSettings@CDesktopManager@@QEAAJPEAK@Z @ 0x18002FF48 (-UpdateSettings@CDesktopManager@@QEAAJPEAK@Z.c)
 *     ?AnimationChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYANIMATIONCHANGE@@@Z @ 0x180108DD8 (-AnimationChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYANIMATIONCHANGE@@@Z.c)
 * Callees:
 *     ?CheckAnyPolicy@CDesktopManager@@SA_NK@Z @ 0x18002DD24 (-CheckAnyPolicy@CDesktopManager@@SA_NK@Z.c)
 */

void __fastcall CDesktopManager::SetWindowAnimation(char a1)
{
  bool v2; // al
  char v3; // cl

  v2 = CDesktopManager::CheckAnyPolicy(1u);
  v3 = a1;
  if ( v2 )
    v3 = 0;
  *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 22) = v3;
}

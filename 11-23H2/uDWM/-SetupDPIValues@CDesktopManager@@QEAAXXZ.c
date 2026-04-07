/*
 * XREFs of ?SetupDPIValues@CDesktopManager@@QEAAXXZ @ 0x180025C58
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x1800264FC (-Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?UpdateSettings@CDesktopManager@@QEAAJPEAK@Z @ 0x18002FF48 (-UpdateSettings@CDesktopManager@@QEAAJPEAK@Z.c)
 * Callees:
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x180025CB4 (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 */

void __fastcall CDesktopManager::SetupDPIValues(CDesktopManager *this)
{
  *((_QWORD *)this + 53) = 0x3FF0000000000000LL;
  if ( CDesktopManager::CheckAnyPreference(1u) )
    *((double *)this + 53) = (double)(int)GetDpiForSystem() / 96.0;
}

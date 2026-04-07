/*
 * XREFs of ?GetAccentColor@CDesktopManager@@QEAA_N_NPEAK@Z @ 0x18006C808
 * Callers:
 *     ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x1800401B0 (-AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU-$TMILFlagsEnum@W4Flags.c)
 * Callees:
 *     ?LoadAccentColorSettings@CDesktopManager@@QEAA_NXZ @ 0x180020C8C (-LoadAccentColorSettings@CDesktopManager@@QEAA_NXZ.c)
 */

bool __fastcall CDesktopManager::GetAccentColor(CDesktopManager *this, char a2, unsigned int *a3)
{
  bool result; // al
  unsigned int v7; // ecx

  if ( !*((_BYTE *)this + 632) )
    CDesktopManager::LoadAccentColorSettings(this);
  if ( a2 )
  {
    result = *((_BYTE *)this + 633);
    v7 = *((_DWORD *)this + 160);
  }
  else
  {
    result = *((_BYTE *)this + 634);
    v7 = *((_DWORD *)this + 161);
  }
  if ( result )
    *a3 = v7;
  return result;
}

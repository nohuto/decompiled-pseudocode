/*
 * XREFs of ?HasAccentColor@CDesktopManager@@QEAA_N_N@Z @ 0x180075C8C
 * Callers:
 *     ?HasCaptionAreaColorOverride@CTopLevelWindow@@AEBA_NXZ @ 0x18002D090 (-HasCaptionAreaColorOverride@CTopLevelWindow@@AEBA_NXZ.c)
 * Callees:
 *     ?LoadAccentColorSettings@CDesktopManager@@QEAA_NXZ @ 0x18002CA60 (-LoadAccentColorSettings@CDesktopManager@@QEAA_NXZ.c)
 */

bool __fastcall CDesktopManager::HasAccentColor(CDesktopManager *this, char a2)
{
  if ( !*((_BYTE *)this + 1160) )
    CDesktopManager::LoadAccentColorSettings(this);
  if ( a2 )
    return *((_BYTE *)this + 1161);
  else
    return *((_BYTE *)this + 1162);
}

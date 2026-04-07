/*
 * XREFs of ?RefreshPresentationModeSettings@CContactManager@@QEAAJXZ @ 0x18002D5C4
 * Callers:
 *     ??0CContactManager@@QEAA@XZ @ 0x1800271D0 (--0CContactManager@@QEAA@XZ.c)
 *     ?DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z @ 0x18002D458 (-DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z.c)
 *     ?UpdateSettings@CDesktopManager@@QEAAJPEAK@Z @ 0x18002FF48 (-UpdateSettings@CDesktopManager@@QEAAJPEAK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CContactManager::RefreshPresentationModeSettings(CContactManager *this)
{
  BOOL v2; // eax
  bool v3; // dl
  bool v4; // zf
  int pvParam; // [rsp+38h] [rbp+10h] BYREF

  v2 = SystemParametersInfoW(0x2018u, 0, &pvParam, 0);
  v3 = 0;
  if ( v2 )
  {
    v4 = pvParam == 0;
    *((_BYTE *)this + 324) = pvParam == 2;
    v3 = v4;
  }
  else
  {
    *((_BYTE *)this + 324) = 0;
  }
  *((_BYTE *)this + 325) = v3;
  return 0LL;
}

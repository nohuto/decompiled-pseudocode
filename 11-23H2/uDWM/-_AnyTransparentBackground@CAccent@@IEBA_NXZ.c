/*
 * XREFs of ?_AnyTransparentBackground@CAccent@@IEBA_NXZ @ 0x180050824
 * Callers:
 *     ?_IsAnimationNeeded@CAccent@@IEAA_NXZ @ 0x18000AEFC (-_IsAnimationNeeded@CAccent@@IEAA_NXZ.c)
 *     ?_UpdateResources@CAccent@@IEAAJXZ @ 0x180011E18 (-_UpdateResources@CAccent@@IEAAJXZ.c)
 *     ?_GetSolidFillOpacity@CAccent@@IEBAMXZ @ 0x18001966C (-_GetSolidFillOpacity@CAccent@@IEBAMXZ.c)
 *     ?_UpdateAccentBackground@CAccent@@IEAAXK@Z @ 0x1800198D0 (-_UpdateAccentBackground@CAccent@@IEAAXK@Z.c)
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x18002D2A0 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x180050650 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CAccent::_AnyTransparentBackground(CAccent *this)
{
  int v1; // eax
  char v2; // dl

  v1 = *((_DWORD *)this + 72);
  if ( v1 == 2 )
    return 1;
  v2 = 0;
  if ( (unsigned int)(v1 - 3) <= 1 )
  {
    if ( *(_BYTE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 54) + 641LL) )
      return 1;
  }
  return v2;
}

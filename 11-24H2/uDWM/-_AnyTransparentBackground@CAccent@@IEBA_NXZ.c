/*
 * XREFs of ?_AnyTransparentBackground@CAccent@@IEBA_NXZ @ 0x180065C8C
 * Callers:
 *     ?_GetSolidFillOpacity@CAccent@@IEBAMXZ @ 0x180065B58 (-_GetSolidFillOpacity@CAccent@@IEBAMXZ.c)
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x180065BA0 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 *     ?_UpdateResources@CAccent@@IEAAJXZ @ 0x180065CF4 (-_UpdateResources@CAccent@@IEAAJXZ.c)
 *     ?_IsAnimationNeeded@CAccent@@IEAA_NXZ @ 0x180066834 (-_IsAnimationNeeded@CAccent@@IEAA_NXZ.c)
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x1800A1630 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CAccent::_AnyTransparentBackground(CAccent *this)
{
  int v1; // eax
  char v2; // dl

  v1 = *((_DWORD *)this + 60);
  if ( v1 == 2 )
    return 1;
  v2 = 0;
  if ( (unsigned int)(v1 - 3) <= 1 )
  {
    if ( *(_BYTE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 53) + 633LL) )
      return 1;
  }
  return v2;
}

/*
 * XREFs of ?vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z @ 0x14016AD54
 * Callers:
 *     DwmDestroyDeviceSpecificResources @ 0x1401348A0 (DwmDestroyDeviceSpecificResources.c)
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x14016B470 (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 * Callees:
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x14003040C (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 *     ?hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z @ 0x14016BBF8 (-hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z.c)
 */

void __fastcall vSpDwmDestroyCursorSprites(Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rdi
  HSPRITE v3; // rsi
  HSPRITE NeighborSprite; // rbx

  v2 = Gre::Base::Globals(a1);
  v3 = *(HSPRITE *)(*((_QWORD *)v2 + 17) + 144LL);
  if ( v3 )
  {
    do
    {
      NeighborSprite = hspGetNeighborSprite(v3, 1, 0);
      GreDeleteSpriteInternal(a1, 0LL, v3, 1);
      v3 = NeighborSprite;
    }
    while ( NeighborSprite );
  }
  *(_QWORD *)(*((_QWORD *)v2 + 17) + 136LL) = 0LL;
  *(_QWORD *)(*((_QWORD *)v2 + 17) + 144LL) = 0LL;
  *(_DWORD *)(*((_QWORD *)v2 + 17) + 160LL) = 0;
}

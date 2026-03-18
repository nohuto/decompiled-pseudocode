/*
 * XREFs of ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C000B2A0
 * Callers:
 *     GreAdjustSpriteDirtyAccum @ 0x1C000ABB0 (GreAdjustSpriteDirtyAccum.c)
 *     GreNotifyDirtySprite @ 0x1C000B1A0 (GreNotifyDirtySprite.c)
 *     GreAddBitmapD3DDirtyRgn @ 0x1C0158F7A (GreAddBitmapD3DDirtyRgn.c)
 *     GreSetLWContentOwner @ 0x1C02D4A44 (GreSetLWContentOwner.c)
 * Callees:
 *     ?hspLookupWindow@DWMALTSPRITEREF@@QEAAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x1C000B2D0 (-hspLookupWindow@DWMALTSPRITEREF@@QEAAPEAUHSPRITE__@@PEAUHWND__@@@Z.c)
 *     ?AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C008CDF0 (-AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 */

DWMALTSPRITEREF *__fastcall DWMALTSPRITEREF::DWMALTSPRITEREF(DWMALTSPRITEREF *this, HWND a2)
{
  HSPRITE v3; // rax

  *(_QWORD *)this = 0LL;
  v3 = DWMALTSPRITEREF::hspLookupWindow(this, a2);
  DWMALTSPRITEREF::AltLockSpriteObj(this, v3);
  return this;
}

/*
 * XREFs of ?vUnlockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1400D5DB8
 * Callers:
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x140023754 (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     GreDeleteSpriteOverlapPresent @ 0x1400D4DAC (GreDeleteSpriteOverlapPresent.c)
 *     ?bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETTE@@KK4@Z @ 0x1400DF03C (-bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETT.c)
 *     DxgkEngReleaseStableSprite @ 0x140171040 (DxgkEngReleaseStableSprite.c)
 *     ?InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z @ 0x140324BF8 (-InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z.c)
 *     ?GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z @ 0x140329200 (-GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x14032A050 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     GreUnlockDisplayArea @ 0x14032EDE0 (GreUnlockDisplayArea.c)
 * Callees:
 *     ??$GreReleaseSemaphoreExclusive@$08PEAUHSEMAPHORE__@@@@YAXPEAUHSEMAPHORE__@@@Z @ 0x1400D5DD8 (--$GreReleaseSemaphoreExclusive@$08PEAUHSEMAPHORE__@@@@YAXPEAUHSEMAPHORE__@@@Z.c)
 */

void __fastcall SPRITERANGELOCK::vUnlockExclusive(SPRITERANGELOCK *this)
{
  if ( !*((_BYTE *)this + 8) )
    GreReleaseSemaphoreExclusive<9,HSEMAPHORE__ *>(*(_QWORD *)this);
}

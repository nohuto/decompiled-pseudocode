/*
 * XREFs of ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1C006ADA8
 * Callers:
 *     ?vSpHook@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C006AC70 (-vSpHook@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     GreDeleteSpriteOverlapPresent @ 0x1C00F8024 (GreDeleteSpriteOverlapPresent.c)
 *     ?bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETTE@@KK4@Z @ 0x1C01361D4 (-bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETT.c)
 *     DxgkEngAcquireStableSprite @ 0x1C0159620 (DxgkEngAcquireStableSprite.c)
 *     ?InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z @ 0x1C026E360 (-InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x1C0279B38 (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     ?GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z @ 0x1C027A394 (-GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C027D220 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     GreLockDisplayArea @ 0x1C0283140 (GreLockDisplayArea.c)
 * Callees:
 *     <none>
 */

void __fastcall SPRITERANGELOCK::vLockExclusive(SPRITERANGELOCK *this)
{
  GreAcquireSemaphore(*(_QWORD *)this);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"hsem", *(_QWORD *)this, 8LL);
}

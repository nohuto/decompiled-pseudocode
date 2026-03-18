/*
 * XREFs of ??1RGNOBJAPI@@QEAA@XZ @ 0x140062DFC
 * Callers:
 *     ?GrepExtSelectClipRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@HH@Z @ 0x140016AF8 (-GrepExtSelectClipRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@HH@Z.c)
 *     NtGdiExtSelectClipRgn @ 0x140018FD0 (NtGdiExtSelectClipRgn.c)
 *     GreGetRandomRgn @ 0x140038FA0 (GreGetRandomRgn.c)
 *     ?CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x140043A80 (-CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     GreUpdateSpriteVisRgn @ 0x1400617E0 (GreUpdateSpriteVisRgn.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x140061FD0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     GreUpdateSpriteClipRgn @ 0x1400914A8 (GreUpdateSpriteClipRgn.c)
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1400D48D8 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1400D68D4 (-vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     GreFillRgn @ 0x1400E2680 (GreFillRgn.c)
 *     GreFrameRgn @ 0x1400E2CD4 (GreFrameRgn.c)
 *     ?GrepInvertRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@@Z @ 0x140202788 (-GrepInvertRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@@Z.c)
 *     ?GrepScaleRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@@Z @ 0x14020FEAC (-GrepScaleRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@@Z.c)
 *     GreScaleRgnToDestLogPixel @ 0x14026BAB4 (GreScaleRgnToDestLogPixel.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x1403007A8 (-vForceClientRgnUpdate@@YAXXZ.c)
 *     GreSetClientRgn @ 0x1403018D8 (GreSetClientRgn.c)
 *     ?InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z @ 0x140324BF8 (-InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z.c)
 *     ?GdiGetSpriteClipRgns@@YAHPEAUHDEV__@@PEAUHRGN__@@@Z @ 0x140328EE0 (-GdiGetSpriteClipRgns@@YAHPEAUHDEV__@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     ?InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x14001FD60 (-InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ.c)
 */

void __fastcall RGNOBJAPI::~RGNOBJAPI(RGNOBJAPI *this)
{
  if ( !*((_DWORD *)this + 12) )
    RGNOBJ::UpdateUserRgn(this);
  if ( *(_QWORD *)this )
    OBJECT::InterlockedDecrementExclusiveLockCount(*(OBJECT **)this);
  PopThreadGuardedObject((char *)this + 8);
}

/*
 * XREFs of ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1400D5534
 * Callers:
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x140023754 (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1400D48D8 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z @ 0x1400D50D4 (-vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1400DDAE4 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1400DE040 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@AEAVOPTAPIDCOBJ@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1400E01B8 (-bSpUpdateSprite@@YAHPEAVSPRITE@@AEAVOPTAPIDCOBJ@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTIO.c)
 *     ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x14016C338 (-GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z @ 0x14016C6E4 (-pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z.c)
 *     ?vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z @ 0x14016D018 (-vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z.c)
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1401D43DC (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 *     ?vSpHideSprites@@YAXPEAUHDEV__@@H@Z @ 0x140265D70 (-vSpHideSprites@@YAXPEAUHDEV__@@H@Z.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x14032A050 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?bSpPtInSprite@@YAHPEAVSPRITE@@HH@Z @ 0x14032AB18 (-bSpPtInSprite@@YAHPEAVSPRITE@@HH@Z.c)
 *     ?bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x14032AC5C (-bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 *     ?pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z @ 0x14032B1E0 (-pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z.c)
 *     ?pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z @ 0x14032B65C (-pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z.c)
 *     ?vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z @ 0x14032CB14 (-vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x14032DF7C (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 *     vSpUnTearDownSprites @ 0x14032F3B0 (vSpUnTearDownSprites.c)
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140060BD4 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1400D57BC (-vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 */

void __fastcall SPRITEDDIACCESS::~SPRITEDDIACCESS(struct _SPRITESTATE **this, __int64 a2)
{
  __int128 v3; // xmm0
  struct _SPRITESTATE *v4; // rax
  _OWORD *v5; // rcx
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  struct _SPRITESTATE *v8; // rax
  __int128 v9; // [rsp+20h] [rbp-B8h]
  __int128 v10; // [rsp+30h] [rbp-A8h]
  __int128 v11; // [rsp+40h] [rbp-98h]
  __int128 v12; // [rsp+50h] [rbp-88h]
  __int128 v13; // [rsp+60h] [rbp-78h]
  __int128 v14; // [rsp+70h] [rbp-68h]
  __int128 v15; // [rsp+80h] [rbp-58h]
  __int128 v16; // [rsp+90h] [rbp-48h]
  __int128 v17; // [rsp+A0h] [rbp-38h] BYREF
  __int128 v18; // [rsp+B0h] [rbp-28h]
  struct _SPRITESTATE *v19; // [rsp+C0h] [rbp-18h]

  if ( !*((_DWORD *)this + 2) )
    vSpDirectDriverAccess(*this, 0);
  if ( *((_DWORD *)this + 3) == 1 )
  {
    v9 = *((_OWORD *)this + 1);
    v10 = *((_OWORD *)this + 2);
    v11 = *((_OWORD *)this + 3);
    v12 = *((_OWORD *)this + 4);
    v13 = *((_OWORD *)this + 5);
    v14 = *((_OWORD *)this + 6);
    v15 = *((_OWORD *)this + 7);
    v16 = *((_OWORD *)this + 8);
    v3 = *((_OWORD *)this + 10);
    v4 = this[22];
    v17 = *((_OWORD *)this + 9);
    v18 = v3;
    v19 = v4;
    v5 = (_OWORD *)*((_QWORD *)GreGetCurrentThread((__int64)&v17, a2) + 34);
    *v5 = v9;
    v5[1] = v10;
    v5[2] = v11;
    v5[3] = v12;
    v5[4] = v13;
    v5[5] = v14;
    v5[6] = v15;
    v5 += 8;
    v6 = v17;
    *(v5 - 1) = v16;
    v7 = v18;
    v8 = v19;
    *v5 = v6;
    v5[1] = v7;
    *((_QWORD *)v5 + 4) = v8;
  }
}

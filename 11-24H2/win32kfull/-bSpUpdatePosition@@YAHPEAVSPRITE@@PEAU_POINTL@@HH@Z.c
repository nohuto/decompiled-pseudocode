/*
 * XREFs of ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1400D5F30
 * Callers:
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x140023754 (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1400D48D8 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1400D5F30 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1400DDAE4 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@AEAVOPTAPIDCOBJ@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1400E01B8 (-bSpUpdateSprite@@YAHPEAVSPRITE@@AEAVOPTAPIDCOBJ@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTIO.c)
 *     ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x14016C338 (-GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1401D43DC (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 *     ?pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z @ 0x140208B88 (-pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z.c)
 *     ?vSpHideSprites@@YAXPEAUHDEV__@@H@Z @ 0x140265D70 (-vSpHideSprites@@YAXPEAUHDEV__@@H@Z.c)
 *     ?pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z @ 0x14032B1E0 (-pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z.c)
 *     ?pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z @ 0x14032B65C (-pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z.c)
 *     ?pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z @ 0x14032BA70 (-pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z.c)
 * Callees:
 *     ??0ECLIPOBJ@@QEAA@XZ @ 0x140009EBC (--0ECLIPOBJ@@QEAA@XZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x14000FB40 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x14004EBFC (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x14004F094 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?SpBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x140056810 (-SpBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHO.c)
 *     GreClientRgnUpdated @ 0x140060F88 (GreClientRgnUpdated.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1400CB47C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400D3E30 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1400D57BC (-vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1400D5F30 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1400DDCD0 (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$08P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400E087C (--$GreReleaseSemaphoreCommon@$08P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z @ 0x14016D194 (-vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpOrderInY@@YAXPEAVSPRITE@@@Z @ 0x14016D620 (-vSpOrderInY@@YAXPEAVSPRITE@@@Z.c)
 *     GreClientRgnUpdatedStable @ 0x14016E4E4 (GreClientRgnUpdatedStable.c)
 *     ?psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z @ 0x1401FA614 (-psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z.c)
 *     ?vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@W4vSpComputeSpriteRangesOptions@@@Z @ 0x140263E0C (-vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@W4vSpComputeSpriteRangesOptions@@@Z.c)
 *     ?vSpUnhook@@YAXPEAU_SPRITESTATE@@@Z @ 0x1402672A4 (-vSpUnhook@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ??0?$SEMOBJ@$08@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x140328850 (--0-$SEMOBJ@$08@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x14032C37C (-vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z @ 0x14032C528 (-vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z.c)
 *     ?vSpHook@@YAXPEAU_SPRITESTATE@@@Z @ 0x14032D224 (-vSpHook@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z @ 0x14032DC70 (-vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall bSpUpdatePosition(struct SPRITE *a1, struct _POINTL *a2, int a3, int a4)
{
  struct _POINTL v4; // r14
  __int64 v5; // r12
  unsigned int v9; // r13d
  __int64 x; // rdx
  __int64 v11; // rcx
  __int64 y; // r8
  struct Gre::Base::SESSION_GLOBALS *v13; // rsi
  int v14; // ecx
  int v15; // ebx
  __int64 v16; // r8
  LONG v17; // eax
  int v18; // ecx
  struct REGION *v19; // rdx
  __int64 v20; // r10
  __int64 v21; // rax
  struct _XLATEOBJ *v22; // rsi
  __int64 v23; // r9
  __int64 v24; // rcx
  int v25; // r8d
  __int64 v26; // rdi
  __int64 v27; // rax
  int v28; // ecx
  __int64 v29; // rax
  __int64 v30; // rbx
  int v31; // ecx
  int v32; // esi
  int v33; // edi
  __int64 v34; // rax
  int v35; // ebx
  int v36; // r9d
  int v37; // r10d
  int v38; // eax
  int v39; // r11d
  int v40; // eax
  struct _SURFOBJ *v41; // r8
  int v42; // r9d
  int v43; // r8d
  struct _SURFOBJ *Surface; // rax
  struct _SURFOBJ *v45; // rbx
  LONG left; // ecx
  LONG top; // edx
  struct _POINTL v48; // rax
  struct _RECTL v49; // xmm0
  int v50; // r8d
  unsigned __int8 v51; // r9
  int v52; // ecx
  struct _POINTL v53; // rax
  bool v54; // si
  struct _POINTL v55; // rcx
  __int64 i; // rbx
  __int64 v57; // rdi
  int v58; // r14d
  int v59; // eax
  bool v60; // zf
  __int64 v61; // r9
  __int64 j; // r8
  struct SPRITE *v63; // rcx
  int v64; // ecx
  struct Gre::Base::SESSION_GLOBALS *v65; // rax
  int v66; // eax
  int v68; // [rsp+20h] [rbp-E0h]
  struct _POINTL v69; // [rsp+60h] [rbp-A0h] BYREF
  struct _CLIPOBJ *v70; // [rsp+68h] [rbp-98h] BYREF
  struct _POINTL v71; // [rsp+70h] [rbp-90h] BYREF
  struct _POINTL v72; // [rsp+78h] [rbp-88h] BYREF
  int v73; // [rsp+80h] [rbp-80h]
  struct _POINTL v74; // [rsp+88h] [rbp-78h]
  __int64 v75; // [rsp+90h] [rbp-70h] BYREF
  struct _POINTL v76[2]; // [rsp+98h] [rbp-68h] BYREF
  struct _POINTL *v77; // [rsp+A8h] [rbp-58h]
  __int64 v78; // [rsp+B0h] [rbp-50h] BYREF
  struct Gre::Base::SESSION_GLOBALS *v79; // [rsp+B8h] [rbp-48h]
  struct _RECTL si128; // [rsp+C0h] [rbp-40h] BYREF
  struct _RECTL v81; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v82[4]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v83[156]; // [rsp+E4h] [rbp-1Ch] BYREF

  v4 = (struct _POINTL)*((_QWORD *)a1 + 14);
  v5 = *((_QWORD *)a1 + 2);
  v81 = 0LL;
  v74 = v4;
  v73 = a4;
  v77 = a2;
  v9 = 1;
  v79 = Gre::Base::Globals(a1);
  v13 = v79;
  if ( a2 )
  {
    v14 = *((_DWORD *)a1 + 26) - *((_DWORD *)a1 + 24);
    *((_DWORD *)a1 + 28) = a2->x;
    *((_DWORD *)a1 + 29) = a2->y;
    x = (unsigned int)a2->x;
    y = (unsigned int)a2->y;
    si128.right = x + v14;
    v11 = (unsigned int)(y + *((_DWORD *)a1 + 27) - *((_DWORD *)a1 + 25));
    si128.left = x;
    si128.bottom = v11;
    si128.top = y;
  }
  else
  {
    si128.bottom = 0x80000000;
  }
  if ( (*(_DWORD *)a1 & 0x11) != 0 || !bIntersect((const struct _RECTL *)(v5 + 40), &si128, &si128) )
  {
    v15 = 0;
    si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
  }
  else
  {
    v15 = 32;
  }
  v16 = *(_QWORD *)(W32GetSessionState(v11, x, y) + 96);
  v17 = *(_DWORD *)a1;
  v18 = *(_DWORD *)a1 & 0x20;
  v75 = v16;
  v71.x = v17;
  if ( v15 == v18 )
  {
    if ( si128.left == *((_DWORD *)a1 + 20)
      && si128.top == *((_DWORD *)a1 + 21)
      && si128.right == *((_DWORD *)a1 + 22)
      && si128.bottom == *((_DWORD *)a1 + 23) )
    {
      if ( *((_DWORD *)a1 + 1) == 2 && *(_QWORD *)(v16 + 4824) )
        vSpCheckForWndobjOverlap((struct _SPRITESTATE *)v5, (struct _RECTL *)a1 + 5, (struct _RECTL *)a1 + 5);
      goto LABEL_127;
    }
    v17 = v71.x;
  }
  if ( v18 )
  {
    *(_DWORD *)a1 = v17 & 0xFFFFFFDF;
    --*(_DWORD *)(v5 + 56);
  }
  if ( *((_QWORD *)a1 + 20) )
  {
    if ( !a3 )
    {
      vSpRedrawUncoveredArea(a1, &si128);
      goto LABEL_51;
    }
  }
  else if ( !a3 )
  {
    goto LABEL_51;
  }
  ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v82);
  v19 = (struct REGION *)*((_QWORD *)a1 + 23);
  if ( !v19 )
  {
    v70 = 0LL;
LABEL_27:
    if ( !*((_QWORD *)a1 + 16) )
      goto LABEL_51;
    if ( *((_DWORD *)a1 + 56) == 3 && !*((_BYTE *)a1 + 231) || *((_DWORD *)a1 + 1) == 1 )
    {
      vSpRedrawArea((struct _SPRITESTATE *)v5, (struct _RECTL *)a1 + 5, 1);
LABEL_50:
      GreClientRgnUpdated(0LL);
      GreClientRgnUpdatedStable();
      goto LABEL_51;
    }
    vSpDirectDriverAccess((struct _SPRITESTATE *)v5, 0LL);
    v76[0] = 0LL;
    v20 = *(_QWORD *)(v5 + 32);
    v21 = *((_QWORD *)v13 + 471);
    v22 = 0LL;
    v23 = *((_QWORD *)a1 + 18);
    v24 = *(_QWORD *)(v20 + 104);
    v25 = *(_DWORD *)(*((_QWORD *)a1 + 16) + 72LL);
    v69 = 0LL;
    if ( *(_DWORD *)(v20 + 72) != v25 || (*(_DWORD *)a1 & 0x40) != 0 )
    {
      if ( !(unsigned int)EXLATEOBJ::bInitXlateObj((Gre::Base *)&v69, 0LL, 0, v23, v24, v21, v21, 0, 0, 0, 0) )
      {
LABEL_49:
        vSpDirectDriverAccess((struct _SPRITESTATE *)v5, 1LL);
        EXLATEOBJ::vAltUnlock((Gre::Base **)&v69);
        SURFREFVIEW::bUnMap((SURFREFVIEW *)v76);
        goto LABEL_50;
      }
      v22 = (struct _XLATEOBJ *)v69;
    }
    if ( SURFREFVIEW::bMap((SURFREFVIEW *)v76, *((struct _SURFOBJ **)a1 + 16)) )
    {
      v26 = 0LL;
      v72.x = *((_DWORD *)a1 + 20) - v4.x;
      v72.y = *((_DWORD *)a1 + 21) - v74.y;
      v27 = *(_QWORD *)(v5 + 32);
      if ( v27 )
      {
        v28 = *(_DWORD *)(v27 + 88);
        if ( (v28 & 0x80004000) != 0 && (v28 & 0x200) == 0 )
        {
          v26 = v27 - 24;
          GreLockDisplayDevice(*(_QWORD *)(v27 - 24 + 48));
        }
      }
      v29 = *((_QWORD *)a1 + 16);
      v30 = 0LL;
      if ( v29 )
      {
        v31 = *(_DWORD *)(v29 + 88);
        if ( (v31 & 0x80004000) != 0 && (v31 & 0x200) == 0 )
        {
          v30 = v29 - 24;
          GreLockDisplayDevice(*(_QWORD *)(v29 - 24 + 48));
        }
      }
      SpBitBlt(
        *(struct _SURFOBJ **)(v5 + 32),
        *((struct _SURFOBJ **)a1 + 16),
        0LL,
        v70,
        v22,
        (struct _RECTL *)a1 + 5,
        &v72,
        0LL,
        0LL,
        0LL,
        0xCCCCu);
      if ( v30 )
        GreUnlockDisplayDevice(*(_QWORD *)(v30 + 48));
      if ( v26 )
        GreUnlockDisplayDevice(*(_QWORD *)(v26 + 48));
    }
    goto LABEL_49;
  }
  XCLIPOBJ::vSetup((XCLIPOBJ *)v82, v19, (struct SPRITE *)((char *)a1 + 80), 0);
  v70 = (struct _CLIPOBJ *)v82;
  if ( !ERECTL::bEmpty((ERECTL *)v83) )
    goto LABEL_27;
LABEL_51:
  v32 = si128.bottom - si128.top;
  v33 = si128.right - si128.left;
  if ( si128.right == si128.left )
  {
    if ( v73 == 1 && *(_DWORD *)(v5 + 56) == v33 && *(_DWORD *)(v5 + 1088) != v33 )
      vSpUnhook((struct _SPRITESTATE *)v5);
  }
  else
  {
    *(_DWORD *)a1 |= 0x20u;
    ++*(_DWORD *)(v5 + 56);
    if ( v73 == 1 && !*(_DWORD *)(v5 + 1088) )
    {
      vSpHook((struct _SPRITESTATE *)v5);
      if ( !*(_DWORD *)(v5 + 116) )
      {
        SEMOBJ<9>::SEMOBJ<9>(&v69, *(_QWORD *)(v5 + 120));
        vSpComputeSpriteRanges(v5);
        if ( v69 )
          ((void (__fastcall *)(_QWORD, _QWORD))GreReleaseSemaphoreCommon<9,void (*)(HSEMAPHORE__ *)>)(
            GreReleaseSemaphoreExclusiveInternal,
            v69);
      }
    }
    v34 = *((_QWORD *)a1 + 20);
    if ( v34 && v33 <= *(_DWORD *)(v34 + 32) && v32 <= *(_DWORD *)(v34 + 36) )
    {
      if ( si128.left < *((_DWORD *)a1 + 20)
        || si128.top < *((_DWORD *)a1 + 21)
        || si128.right > *((_DWORD *)a1 + 22)
        || si128.bottom > *((_DWORD *)a1 + 23) )
      {
        v35 = *((_DWORD *)a1 + 52);
        v36 = 0;
        v37 = 0;
        if ( si128.left >= v35 )
        {
          v38 = *((_DWORD *)a1 + 54);
          if ( si128.right > v38 )
            v36 = si128.right - v38;
        }
        else
        {
          v36 = si128.left - v35;
        }
        v39 = *((_DWORD *)a1 + 53);
        if ( si128.top >= v39 )
        {
          v40 = *((_DWORD *)a1 + 55);
          if ( si128.bottom > v40 )
            v37 = si128.bottom - v40;
        }
        else
        {
          v37 = si128.top - v39;
        }
        *((_DWORD *)a1 + 54) += v36;
        v41 = (struct _SURFOBJ *)*((_QWORD *)a1 + 20);
        *((_DWORD *)a1 + 55) += v37;
        *((_DWORD *)a1 + 53) = v39 + v37;
        *((_DWORD *)a1 + 43) = -(v39 + v37);
        *((_DWORD *)a1 + 52) = v35 + v36;
        *((_DWORD *)a1 + 42) = -(v35 + v36);
        vSpSmallUnderlayCopy(
          a1,
          (struct _POINTL *)a1 + 21,
          v41,
          (struct _POINTL *)a1 + 21,
          v41,
          v36,
          v37,
          &si128,
          (struct _RECTL *)a1 + 5);
      }
    }
    else
    {
      v42 = *((_DWORD *)a1 + 45);
      v43 = *((_DWORD *)a1 + 44);
      if ( v32 > v42 )
        v42 = v32;
      if ( v33 > v43 )
        v43 = v33;
      Surface = psoSpCreateSurface((struct _SPRITESTATE *)v5, 0, v43, v42, v68);
      v45 = Surface;
      if ( !Surface )
      {
        v9 = 0;
        bSpUpdatePosition(a1, 0LL, 0, 0);
        goto LABEL_127;
      }
      Surface->fjBitmap |= 4u;
      v69.x = -si128.left;
      v69.y = -si128.top;
      if ( v33 > 128 || v32 > 128 )
        vSpBigUnderlayCopy((struct _SPRITESTATE *)v5, &v69, Surface, &si128);
      else
        vSpSmallUnderlayCopy(
          a1,
          &v69,
          Surface,
          (struct _POINTL *)a1 + 21,
          *((struct _SURFOBJ **)a1 + 20),
          0,
          0,
          &si128,
          (struct _RECTL *)a1 + 5);
      vSpDeleteSurface(*((struct _SURFOBJ **)a1 + 20));
      left = si128.left;
      top = si128.top;
      v48 = v69;
      *((_DWORD *)a1 + 52) = si128.left;
      *((struct _POINTL *)a1 + 21) = v48;
      *((_QWORD *)a1 + 20) = v45;
      *((_DWORD *)a1 + 53) = top;
      *((_DWORD *)a1 + 54) = v45->sizlBitmap.cx + left;
      *((_DWORD *)a1 + 55) = top + v45->sizlBitmap.cy;
    }
  }
  v49 = (struct _RECTL)*((_OWORD *)a1 + 5);
  v50 = *(_DWORD *)a1;
  v51 = v71.x;
  v52 = v71.x ^ *(_DWORD *)a1;
  v70 = 0LL;
  v53 = (struct _POINTL)*((_QWORD *)a1 + 24);
  v72 = v53;
  v81 = v49;
  *((struct _RECTL *)a1 + 5) = si128;
  if ( (v52 & 0x20) != 0 )
  {
    v54 = (v51 & 0x20) == 0 && (v50 & 0x20) != 0;
    if ( !*(_QWORD *)&v53 )
    {
      v55 = (struct _POINTL)*((_QWORD *)a1 + 1);
      v76[0] = v55;
      if ( *(_QWORD *)&v55 && v54 )
      {
        for ( i = 0LL; (unsigned int)i < *(_DWORD *)(*(_QWORD *)&v55 + 20LL); i = (unsigned int)(i + 1) )
        {
          v57 = *(_QWORD *)(*(_QWORD *)&v55 + 8 * i + 24);
          if ( (struct SPRITE *)v57 != a1 )
          {
            v78 = *(_QWORD *)(v57 + 192);
            if ( v78 )
            {
              RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v69);
              if ( *(_QWORD *)&v69 && RGNOBJ::bCopy((RGNOBJ *)&v69, (struct RGNOBJ *)&v78) )
              {
                v71.x = -*(_DWORD *)(v57 + 112);
                v71.y = -*(_DWORD *)(v57 + 116);
                RGNOBJ::bOffset((RGNOBJ *)&v69, &v71);
                v53 = v69;
                *((struct _POINTL *)a1 + 24) = v69;
                v72 = v53;
                goto LABEL_102;
              }
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v69);
              v55 = v76[0];
            }
          }
        }
        v53 = v72;
      }
LABEL_102:
      if ( !*(_QWORD *)&v53 )
        goto LABEL_122;
    }
    if ( v54 )
    {
      v58 = v77->x;
      v59 = v77->y;
    }
    else
    {
      v58 = -v4.x;
      v59 = -v74.y;
    }
    v70 = (struct _CLIPOBJ *)__PAIR64__(v59, v58);
    if ( v58 )
      goto LABEL_121;
    v60 = v59 == 0;
  }
  else
  {
    if ( !*(_QWORD *)&v53 || (v51 & (unsigned __int8)v50 & 0x20) == 0 )
      goto LABEL_122;
    v61 = *((_QWORD *)a1 + 1);
    if ( v61 )
    {
      for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v61 + 20); j = (unsigned int)(j + 1) )
      {
        v63 = *(struct SPRITE **)(v61 + 8 * j + 24);
        if ( v63 != a1 && (*(_DWORD *)v63 & 0x20) != 0 )
        {
          v76[0] = v4;
          RGNOBJ::vSet((RGNOBJ *)&v72, (const struct _RECTL *const)a1 + 6);
          RGNOBJ::bOffset((RGNOBJ *)&v72, v76);
          v53 = v72;
          break;
        }
      }
    }
    if ( !*(_QWORD *)&v53 )
      goto LABEL_122;
    v64 = v77->y - v74.y;
    LODWORD(v70) = v77->x - v4.x;
    HIDWORD(v70) = v64;
    if ( (_DWORD)v70 )
      goto LABEL_121;
    v60 = v64 == 0;
  }
  if ( !v60 )
LABEL_121:
    RGNOBJ::bOffset((RGNOBJ *)&v72, (const struct _POINTL *)&v70);
LABEL_122:
  v65 = v79;
  *(_DWORD *)(v5 + 116) = 0;
  ++*((_DWORD *)v65 + 1060);
  vSpOrderInY(a1);
  if ( *(_QWORD *)(v75 + 4824) )
    vSpCheckForWndobjOverlap((struct _SPRITESTATE *)v5, &si128, &v81);
  if ( !*(_DWORD *)(v5 + 116) )
    vSpComputeSpriteRanges(v5);
  vSpRemoveAllSpriteOverlapPresents(*(HDEV *)v5);
LABEL_127:
  if ( v73 == 1 )
  {
    v66 = *(_DWORD *)(v5 + 1088);
    if ( *(_DWORD *)(v5 + 56) )
    {
      if ( !v66 )
      {
        vSpHook((struct _SPRITESTATE *)v5);
        if ( !*(_DWORD *)(v5 + 116) )
        {
          SEMOBJ<9>::SEMOBJ<9>(&v75, *(_QWORD *)(v5 + 120));
          vSpComputeSpriteRanges(v5);
          if ( v75 )
            GreReleaseSemaphoreCommon<9,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal, v75);
        }
      }
    }
    else if ( v66 )
    {
      vSpUnhook((struct _SPRITESTATE *)v5);
    }
  }
  return v9;
}

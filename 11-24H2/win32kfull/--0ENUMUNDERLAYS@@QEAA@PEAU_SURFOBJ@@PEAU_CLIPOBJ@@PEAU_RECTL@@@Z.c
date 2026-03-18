/*
 * XREFs of ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1400579FC
 * Callers:
 *     ?SpStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x140050AC0 (-SpStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POIN.c)
 *     ?SpDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x140051D60 (-SpDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU.c)
 *     ?SpAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x140055BB0 (-SpAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?SpStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x140055FD0 (-SpStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_P.c)
 *     ?SpLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1400564D0 (-SpLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?SpBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x140056810 (-SpBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHO.c)
 *     ?SpTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1400573A0 (-SpTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ.c)
 *     ?SpTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x14011E800 (-SpTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     ?SpStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAU_BRUSHOBJ@@K@Z @ 0x140135570 (-SpStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_P.c)
 *     ?SpPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_POINTFIX@@PEAU_RECTL@@4K@Z @ 0x1401412F0 (-SpPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@.c)
 *     ?SpStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1401D2B60 (-SpStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@.c)
 *     ?SpGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1401DE470 (-SpGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@.c)
 *     ?SpFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x140329480 (-SpFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x14000A534 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x140016CFC (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??$GreAcquireSemaphoreShared@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140023F78 (--$GreAcquireSemaphoreShared@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z @ 0x14004EA34 (-pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z.c)
 *     ??0XCLIPOBJ@@QEAA@XZ @ 0x140059708 (--0XCLIPOBJ@@QEAA@XZ.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140060BD4 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??$GreAcquireSemaphore@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140060C00 (--$GreAcquireSemaphore@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0CFixPred@Prediction@@QEAA@XZ @ 0x1400BB03C (--0CFixPred@Prediction@@QEAA@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1400CDFD8 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400D3E30 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bCurrentTlDriverCall@@YAHAEAVPDEVOBJ@@@Z @ 0x1400D5A0C (-bCurrentTlDriverCall@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ?vSpTlSpriteStateDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1400D5A98 (-vSpTlSpriteStateDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?bRedo@UNDOGRETHREADPIDLOCKS@@QEAA_NXZ @ 0x1400DEA0C (-bRedo@UNDOGRETHREADPIDLOCKS@@QEAA_NXZ.c)
 *     ?vUndo@UNDOGRETHREADPIDLOCKS@@QEAAXXZ @ 0x1400DEB48 (-vUndo@UNDOGRETHREADPIDLOCKS@@QEAAXXZ.c)
 *     ?bInsideDriverCall@@YAHPEAU_SPRITESTATE@@@Z @ 0x1400DEC24 (-bInsideDriverCall@@YAHPEAU_SPRITESTATE@@@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1400DFA4C (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?vLockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1400E0798 (-vLockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0XDCOBJ@@QEAA@XZ @ 0x1401542B0 (--0XDCOBJ@@QEAA@XZ.c)
 *     ?bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z @ 0x140259240 (-bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

ENUMUNDERLAYS *__fastcall ENUMUNDERLAYS::ENUMUNDERLAYS(
        ENUMUNDERLAYS *this,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _RECTL *a4)
{
  char *v8; // r12
  int *v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rdx
  char *v12; // r14
  int v13; // esi
  __int64 v14; // r8
  __int64 v15; // rdx
  struct _GRETHREAD *CurrentThread; // rbx
  Gre::Base *v18; // rcx
  struct REGION *v19; // rdx
  _DWORD *v20; // rcx
  int v21; // ebx
  int v22; // ebx
  int v23; // ebx
  int v24; // ebx
  struct REGION *v25; // rdx
  const struct ERECTL *v26; // r8
  __int64 v27; // rax
  struct _RECTL *v28; // rbx
  const struct _RECTL *v29; // rdx
  struct _GRETHREAD *v30; // rax
  struct _GRETHREAD *v31; // rbx
  DC *v32; // rbx
  struct REGION *v33; // rdx
  __int128 *v34; // rcx
  __int128 v35; // xmm0
  __int128 v36; // xmm0
  struct _RECTL v37; // xmm0
  struct REGION *v38; // [rsp+20h] [rbp-49h] BYREF
  struct _POINTL v39; // [rsp+28h] [rbp-41h] BYREF
  struct REGION *v40; // [rsp+30h] [rbp-39h] BYREF
  __int64 v41; // [rsp+38h] [rbp-31h] BYREF
  struct REGION *v42; // [rsp+40h] [rbp-29h] BYREF
  DC *v43[2]; // [rsp+48h] [rbp-21h] BYREF
  __int16 v44; // [rsp+58h] [rbp-11h]
  int v45; // [rsp+70h] [rbp+7h] BYREF
  int v46; // [rsp+74h] [rbp+Bh]
  int v47; // [rsp+78h] [rbp+Fh]
  int v48; // [rsp+7Ch] [rbp+13h]

  v42 = (struct REGION *)a2;
  XCLIPOBJ::XCLIPOBJ((ENUMUNDERLAYS *)((char *)this + 288));
  v8 = (char *)this + 440;
  XCLIPOBJ::XCLIPOBJ((ENUMUNDERLAYS *)((char *)this + 440));
  XCLIPOBJ::XCLIPOBJ((ENUMUNDERLAYS *)((char *)this + 592));
  XCLIPOBJ::XCLIPOBJ((ENUMUNDERLAYS *)((char *)this + 744));
  v11 = *(_QWORD *)(v10 + 24);
  v12 = (char *)this + 64;
  v41 = v11;
  *((_QWORD *)this + 9) = 0LL;
  v13 = 1;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 112) = 0LL;
  *((_QWORD *)this + 1) = v14;
  *((_QWORD *)this + 8) = v14;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  if ( !v11 )
    return this;
  v15 = v11 + 80;
  *(_QWORD *)this = v15;
  if ( a2 == *(struct _SURFOBJ **)(v15 + 32) )
  {
    v45 = *v9;
    v46 = v9[1];
    v47 = v9[2];
    v48 = v9[3];
    ERECTL::operator*=(&v45, v15 + 40);
    if ( v45 == v47 || v46 == v48 )
      goto LABEL_18;
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v38);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v40);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v39);
    if ( !v38 || !v40 || !*(_QWORD *)&v39 )
    {
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v38);
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v40);
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v39);
      goto LABEL_18;
    }
    RGNOBJ::vSet((RGNOBJ *)&v40, (const struct _RECTL *const)(*(_QWORD *)this + 40LL));
    v25 = v40;
    v26 = (const struct ERECTL *)(*(_QWORD *)this + 40LL);
    *((_QWORD *)this + 32) = v38;
    *((struct _POINTL *)this + 34) = v39;
    *((_QWORD *)this + 33) = v25;
    XCLIPOBJ::vSetup((ENUMUNDERLAYS *)((char *)this + 440), v25, v26, 1);
  }
  if ( a2 != *(struct _SURFOBJ **)(*(_QWORD *)this + 32LL)
    || (unsigned int)bInsideDriverCall(*(struct _SPRITESTATE **)this) )
  {
    return this;
  }
  *((_DWORD *)this + 21) = bCurrentTlDriverCall((struct PDEVOBJ *)&v41);
  CurrentThread = GreGetCurrentThread();
  v38 = Gre::Base::Globals(v18);
  if ( CurrentThread
    && PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v41)
    && (*((_DWORD *)CurrentThread + 87) || *((_DWORD *)CurrentThread + 88)) )
  {
    v43[1] = 0LL;
    v43[0] = 0LL;
    v44 = 0;
    UNDOGRETHREADPIDLOCKS::vUndo((UNDOGRETHREADPIDLOCKS *)v43);
    GreAcquireSemaphoreShared<6,>(v38);
    SPRITERANGELOCK::vLockShared((SPRITERANGELOCK *)(*(_QWORD *)this + 120LL));
    if ( !UNDOGRETHREADPIDLOCKS::bRedo((UNDOGRETHREADPIDLOCKS *)v43) )
      goto LABEL_18;
    if ( *((_DWORD *)this + 21) == 1 )
    {
      v27 = *((_QWORD *)GreGetCurrentThread() + 34);
      *(_OWORD *)((char *)this + 88) = *(_OWORD *)v27;
      *(_OWORD *)((char *)this + 104) = *(_OWORD *)(v27 + 16);
      *(_OWORD *)((char *)this + 120) = *(_OWORD *)(v27 + 32);
      *(_OWORD *)((char *)this + 136) = *(_OWORD *)(v27 + 48);
      *(_OWORD *)((char *)this + 152) = *(_OWORD *)(v27 + 64);
      *(_OWORD *)((char *)this + 168) = *(_OWORD *)(v27 + 80);
      *(_OWORD *)((char *)this + 184) = *(_OWORD *)(v27 + 96);
      *(_OWORD *)((char *)this + 200) = *(_OWORD *)(v27 + 112);
      *(_OWORD *)((char *)this + 216) = *(_OWORD *)(v27 + 128);
      *(_OWORD *)((char *)this + 232) = *(_OWORD *)(v27 + 144);
      *((_QWORD *)this + 31) = *(_QWORD *)(v27 + 160);
    }
    v21 = *(_DWORD *)(*(_QWORD *)this + 92LL);
    *(_DWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 4LL) = v21;
    v22 = *(_DWORD *)(*(_QWORD *)this + 96LL);
    *(_DWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 8LL) = v22;
    v23 = *(_DWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 4LL);
    *(_DWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 20LL) = v23;
    v24 = *(_DWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 8LL);
    *(_DWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 24LL) = v24;
    vSpTlSpriteStateDirectDriverAccess(*(struct _SPRITESTATE **)this, 1);
    **((_DWORD **)GreGetCurrentThread() + 34) = 1;
  }
  else
  {
    if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v41) )
      GreAcquireSemaphore<6,>(v38);
    v19 = v42;
    *((_DWORD *)v42 + 22) = *(_DWORD *)(*(_QWORD *)this + 92LL);
    *((_WORD *)v19 + 38) = *(_WORD *)(*(_QWORD *)this + 96LL);
    *(_DWORD *)(*(_QWORD *)this + 88LL) = 1;
  }
  v40 = (struct REGION *)*((_QWORD *)this + 34);
  *((_DWORD *)this + 20) = 1;
  if ( a3 && a3->iDComplexity )
  {
    v20 = *(_DWORD **)this;
    *(_QWORD *)v12 = a3;
    if ( a3->rclBounds.left < v20[10]
      || a3->rclBounds.right > v20[12]
      || a3->rclBounds.top < v20[11]
      || a3->rclBounds.bottom > v20[13] )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v38);
      Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v39);
      RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v39, 0x70u);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v39);
      if ( !v38 || !*(_QWORD *)&v39 )
      {
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v38);
        *((_DWORD *)this + 19) = 1;
        RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v39);
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v39);
        return this;
      }
      RGNOBJ::vSet((RGNOBJ *)&v39, (const struct _RECTL *const)(*(_QWORD *)this + 40LL));
      if ( !RGNOBJ::bMerge((RGNOBJ *)&v38, (struct RGNOBJ *)(*(_QWORD *)v12 + 56LL), (struct RGNOBJ *)&v39, 8u)
        || (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v38) == 1 )
      {
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v38);
        *((_DWORD *)this + 19) = 1;
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v39);
        return this;
      }
      XCLIPOBJ::vSetup((ENUMUNDERLAYS *)((char *)this + 744), v38, (const struct ERECTL *)a4, 1);
      *((_QWORD *)this + 35) = v38;
      *(_QWORD *)v12 = (char *)this + 744;
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v39);
    }
    v28 = (struct _RECTL *)((char *)this + 32);
    if ( !(unsigned int)bSpUpdateDeviceSurface(
                          *((struct _SURFOBJ **)this + 2),
                          (struct _CLIPOBJ **)this + 8,
                          (struct RGNOBJ *)&v40,
                          (ENUMUNDERLAYS *)((char *)this + 592)) )
    {
      *((_QWORD *)this + 34) = v40;
      *v28 = (struct _RECTL)xmmword_140363110;
      return this;
    }
    v29 = (const struct _RECTL *)(*(_QWORD *)v12 + 4LL);
    *((struct _RECTL *)this + 3) = *v29;
    v13 = bIntersect(a4, v29, (struct _RECTL *)this + 2);
    goto LABEL_41;
  }
  v30 = GreGetCurrentThread();
  v31 = v30;
  if ( a3 || !v30 || !*((_QWORD *)v30 + 37) )
  {
    v36 = (__int128)*a4;
    v28 = (struct _RECTL *)((char *)this + 32);
    *(_QWORD *)v12 = v8;
    *((_OWORD *)this + 2) = v36;
    *(_OWORD *)((char *)this + 444) = v36;
    goto LABEL_54;
  }
  XDCOBJ::XDCOBJ((XDCOBJ *)v43);
  v32 = (DC *)*((_QWORD *)v31 + 37);
  v38 = (struct REGION *)*((_QWORD *)this + 33);
  v43[0] = v32;
  v42 = XDCOBJ::prgnEffRao(v43);
  if ( !RGNOBJ::bCopy((RGNOBJ *)&v38, (struct RGNOBJ *)&v42) )
    goto LABEL_18;
  v33 = v38;
  *((_QWORD *)this + 33) = v38;
  if ( (*(_DWORD *)(*((_QWORD *)v32 + 6) + 40LL) & 0x20000) != 0 )
  {
    v39.x = -*(_DWORD *)(v41 + 2576);
    v39.y = -*(_DWORD *)(v41 + 2580);
    RGNOBJ::bOffset((RGNOBJ *)&v38, &v39);
    v33 = v38;
  }
  XCLIPOBJ::vSetup((ENUMUNDERLAYS *)((char *)this + 440), v33, (const struct ERECTL *)&v45, 1);
  if ( (unsigned int)ERECTL::bEmpty((ENUMUNDERLAYS *)((char *)this + 444)) )
  {
LABEL_18:
    *((_DWORD *)this + 19) = 1;
    return this;
  }
  v35 = *v34;
  v28 = (struct _RECTL *)((char *)this + 32);
  *(_QWORD *)v12 = v8;
  *((_OWORD *)this + 2) = v35;
LABEL_54:
  if ( (unsigned int)bSpUpdateDeviceSurface(
                       *((struct _SURFOBJ **)this + 2),
                       (struct _CLIPOBJ **)this + 8,
                       (struct RGNOBJ *)&v40,
                       (ENUMUNDERLAYS *)((char *)this + 592))
    && *(char **)v12 != v8 )
  {
    v37 = *(struct _RECTL *)(*(_QWORD *)v12 + 4LL);
    *((_QWORD *)this + 34) = v40;
    *v28 = v37;
    *((struct _RECTL *)this + 3) = v37;
    goto LABEL_42;
  }
LABEL_41:
  *((_QWORD *)this + 34) = v40;
  if ( v13 )
LABEL_42:
    *((_QWORD *)this + 3) = pSpFindInZ(*(struct SPRITE **)(*(_QWORD *)this + 8LL), v28);
  return this;
}

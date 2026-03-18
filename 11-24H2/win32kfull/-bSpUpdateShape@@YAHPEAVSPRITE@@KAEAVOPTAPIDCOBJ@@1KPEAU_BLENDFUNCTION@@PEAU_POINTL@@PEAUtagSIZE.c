/*
 * XREFs of ?bSpUpdateShape@@YAHPEAVSPRITE@@KAEAVOPTAPIDCOBJ@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1400DFAB0
 * Callers:
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@AEAVOPTAPIDCOBJ@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1400E01B8 (-bSpUpdateSprite@@YAHPEAVSPRITE@@AEAVOPTAPIDCOBJ@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTIO.c)
 * Callees:
 *     ?bIsSourceBGRA@@YAHPEAVSURFACE@@@Z @ 0x14000A568 (-bIsSourceBGRA@@YAHPEAVSURFACE@@@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x14000FB40 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ??0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z @ 0x140015954 (--0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?bValid@OPTAPIDCOBJ@@QEAA_NXZ @ 0x14001F7E4 (-bValid@OPTAPIDCOBJ@@QEAA_NXZ.c)
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1400C55A0 (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1400CB47C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInFullScreen@DC@@QEBAHXZ @ 0x1400D243C (-bInFullScreen@DC@@QEBAHXZ.c)
 *     ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1400D57BC (-vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?vSpDeleteShape@@YAXPEAVSPRITE@@@Z @ 0x1400DDD0C (-vSpDeleteShape@@YAXPEAVSPRITE@@@Z.c)
 *     ?bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETTE@@KK4@Z @ 0x1400DF03C (-bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETT.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1400DFA4C (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?vLockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1400E0798 (-vLockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vUnlockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1400E0854 (-vUnlockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1400E08E8 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     XLATEOBJ_iXlate @ 0x14010DD20 (XLATEOBJ_iXlate.c)
 *     ?bSpUpdateAlpha@@YAHPEAVSPRITE@@PEAU_BLENDFUNCTION@@H@Z @ 0x1401FA4D8 (-bSpUpdateAlpha@@YAHPEAVSPRITE@@PEAU_BLENDFUNCTION@@H@Z.c)
 *     ?vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z @ 0x140206DC0 (-vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z.c)
 *     ?pConvertDfbSurfaceToDibPostNKAPC@@YAHPEAUHSURF__@@@Z @ 0x140211680 (-pConvertDfbSurfaceToDibPostNKAPC@@YAHPEAUHSURF__@@@Z.c)
 *     ?bConvertDfbDcToDib@@YA_NPEAVXDCOBJ@@@Z @ 0x14030FE90 (-bConvertDfbDcToDib@@YA_NPEAVXDCOBJ@@@Z.c)
 */

_BOOL8 __fastcall bSpUpdateShape(
        struct SPRITE *a1,
        int a2,
        struct OPTAPIDCOBJ *a3,
        struct Gre::Base::SESSION_GLOBALS **a4,
        unsigned int a5,
        struct _BLENDFUNCTION *a6,
        struct _POINTL *a7,
        struct tagSIZE *a8,
        struct _RECTL *a9)
{
  struct PALETTE *v13; // rax
  struct _SPRITESTATE *v14; // r8
  BOOL v15; // r12d
  struct _BLENDFUNCTION *v16; // rax
  struct _POINTL *v17; // r14
  struct SURFACE *v18; // rdx
  DC *v20; // r13
  struct _SPRITESTATE *v21; // rdi
  __int64 v22; // rcx
  int x; // ecx
  LONG y; // edx
  __int64 v25; // r13
  LONG v26; // r8d
  LONG v27; // r9d
  LONG v28; // eax
  SPRITERANGELOCK *v29; // r14
  _DWORD *v30; // rbx
  XLATEOBJ *v31; // r8
  __int64 v32; // rcx
  __int64 v33; // rdi
  __int64 v34; // rbx
  struct _BLENDFUNCTION *v35; // rcx
  ULONG NearestIndexFromColorref; // ebx
  __int64 v37; // rcx
  struct PALETTE *v38; // rax
  int updated; // eax
  __int64 v40; // rdx
  Gre::Base *v41; // rcx
  int v42; // r8d
  int v43; // edi
  int v44; // eax
  HSURF v45; // rcx
  int v46; // r15d
  bool v47; // zf
  struct _RECTL *v48; // rdi
  struct _SURFOBJ *v49; // rcx
  struct tagSIZE *v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rax
  int v53; // ecx
  struct _BLENDFUNCTION v54; // eax
  ULONG v55; // eax
  ULONG v56; // eax
  struct _BLENDFUNCTION v57; // [rsp+60h] [rbp-A0h] BYREF
  struct _BLENDFUNCTION *v58; // [rsp+68h] [rbp-98h]
  struct PALETTE *v59; // [rsp+70h] [rbp-90h]
  int v60; // [rsp+78h] [rbp-88h]
  unsigned int v61; // [rsp+7Ch] [rbp-84h]
  unsigned int v62; // [rsp+80h] [rbp-80h]
  __int64 v63; // [rsp+88h] [rbp-78h] BYREF
  XLATEOBJ *pxlo; // [rsp+90h] [rbp-70h] BYREF
  int v65; // [rsp+98h] [rbp-68h]
  int v66; // [rsp+9Ch] [rbp-64h]
  __int64 v67; // [rsp+A0h] [rbp-60h] BYREF
  int v68; // [rsp+A8h] [rbp-58h]
  LONG v69; // [rsp+ACh] [rbp-54h]
  struct _SPRITESTATE *v70; // [rsp+B0h] [rbp-50h]
  struct _RECTL v71; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v72; // [rsp+C8h] [rbp-38h]
  DC *v73[14]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v74[20]; // [rsp+140h] [rbp+40h] BYREF
  struct _POINTL v75; // [rsp+1F0h] [rbp+F0h] BYREF
  int v76; // [rsp+1F8h] [rbp+F8h]

  v13 = Gre::Base::Globals(a1);
  v14 = (struct _SPRITESTATE *)*((_QWORD *)a1 + 2);
  v59 = v13;
  v15 = 0;
  v71.bottom = 0;
  v57 = 0;
  v63 = *(_QWORD *)v14;
  v70 = v14;
  if ( a2 != 0x2000000 )
  {
    if ( a2 )
    {
      v16 = a6;
    }
    else
    {
      a2 = *((_DWORD *)a1 + 1);
      v16 = (struct _BLENDFUNCTION *)((char *)a1 + 200);
    }
    v17 = a7;
    v58 = v16;
    if ( a7 && a8 && (v16 || (a2 & 2) == 0) && OPTAPIDCOBJ::bValid((HDC *)a4) )
    {
      APIDCOBJ::APIDCOBJ((APIDCOBJ *)v73, a4);
      if ( *((_QWORD *)v73[0] + 62) )
      {
        if ( !DC::bInFullScreen(v73[0]) )
        {
          if ( (unsigned int)SrcSurfaceAccessCheck(v18, (__int64)v18) )
          {
            v20 = v73[0];
            v21 = v70;
            v22 = *((_QWORD *)v73[0] + 6);
            if ( v22 == *(_QWORD *)v70 || v22 == *(_QWORD *)(v63 + 24) )
            {
              if ( !*((_QWORD *)a3 + 13) )
              {
                v60 = 0xFFFFFF;
                v75.x = 0;
                v61 = 0;
                v72 = *((_QWORD *)v59 + 471);
LABEL_16:
                x = v17->x;
                y = v17->y;
                v25 = *((_QWORD *)v20 + 62);
                v26 = v17->x + a8->cx;
                v27 = y + a8->cy;
                v71.left = v17->x;
                v71.right = v26;
                v71.top = y;
                v71.bottom = v27;
                if ( !v25 )
                  goto LABEL_51;
                if ( x < 0 )
                  goto LABEL_51;
                if ( y < 0 )
                  goto LABEL_51;
                if ( x >= v26 )
                  goto LABEL_51;
                if ( y >= v27 )
                  goto LABEL_51;
                if ( v26 > *(_DWORD *)(v25 + 56) )
                  goto LABEL_51;
                v28 = *(_DWORD *)(v25 + 60);
                if ( v27 > v28 )
                  goto LABEL_51;
                if ( a9 )
                {
                  v68 = *(_DWORD *)(v25 + 56);
                  v67 = 0LL;
                  v69 = v28;
                  ERECTL::operator*=(&a9->left, (int *)&v67);
                }
                v29 = (struct _SPRITESTATE *)((char *)v21 + 120);
                SPRITERANGELOCK::vLockShared((struct _SPRITESTATE *)((char *)v21 + 120));
                v30 = (_DWORD *)*((_QWORD *)a1 + 16);
                v31 = 0LL;
                if ( v30 && (unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)(v30 - 6)) )
                {
                  W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v30 + 62));
                  if ( (*(_DWORD *)a1 & 0x200) != 0 )
                  {
                    pxlo = 0LL;
                    v65 = v30[8];
                    v66 = v30[9];
                    ERECTL::operator*=(&v71.left, (int *)&pxlo);
                  }
                  W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v30 + 62));
                  v31 = 0LL;
                }
                v32 = *(_QWORD *)(v25 + 128);
                pxlo = v31;
                v33 = *((_QWORD *)v73[0] + 11);
                v34 = *((_QWORD *)v59 + 472);
                v67 = v32;
                if ( v32 )
                  INC_SHARE_REF_CNT(v32);
                SPRITERANGELOCK::vUnlockShared(v29);
                v35 = v58;
                if ( a2 != 3 || v58->AlphaFormat )
                {
                  v76 = 0;
                  NearestIndexFromColorref = 0;
                  if ( a2 != 2 )
                  {
                    v76 = 0;
                    goto LABEL_35;
                  }
                }
                else
                {
                  v54 = *v58;
                  v58 = &v57;
                  a2 = 2;
                  v57 = v54;
                  v57.AlphaFormat = 1;
                  v76 = 1;
                  v55 = rgbFromColorref(v34, v33, a5);
                  v35 = &v57;
                  NearestIndexFromColorref = v55;
                }
                if ( (v35->AlphaFormat & 1) != 0 )
                {
                  v62 = 6;
                  v38 = (struct PALETTE *)*((_QWORD *)v59 + 472);
                  v37 = *((_QWORD *)v59 + 471);
LABEL_36:
                  v59 = v38;
                  if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                                        (Gre::Base *)&pxlo,
                                        0LL,
                                        v61,
                                        v67,
                                        (__int64)v38,
                                        v33,
                                        v37,
                                        v60,
                                        v75.x,
                                        0,
                                        0) )
                  {
LABEL_50:
                    XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v67);
                    EXLATEOBJ::vAltUnlock((Gre::Base **)&pxlo);
LABEL_51:
                    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v73);
                    return v15;
                  }
                  *((_DWORD *)a1 + 1) = a2;
                  v15 = 1;
                  *((struct _RECTL *)a1 + 6) = v71;
                  if ( a2 == 4 )
                  {
                    *(_DWORD *)a1 |= 8u;
                    v43 = 1;
                  }
                  else
                  {
                    if ( a2 == 1 )
                    {
                      NearestIndexFromColorref = ulGetNearestIndexFromColorref(v67, v33, a5, 1LL);
                      v56 = XLATEOBJ_iXlate(pxlo, NearestIndexFromColorref);
                      *(_DWORD *)a1 &= ~8u;
                      *((_DWORD *)a1 + 51) = v56;
                      v43 = *(_DWORD *)(v63 + 44) & 4;
                      LOWORD(v42) = 0;
                    }
                    else
                    {
                      if ( a2 != 2 )
                        goto LABEL_49;
                      updated = bSpUpdateAlpha(a1, v58, 0);
                      v42 = 0;
                      if ( updated )
                      {
                        if ( (*(_BYTE *)(v40 + 3) & 1) != 0 && !(unsigned int)bIsSourceBGRA((struct SURFACE *)v25) )
                        {
                          v41 = (Gre::Base *)(unsigned int)-(v76 != 0);
                          v15 = v76 != 0;
                        }
                      }
                      else
                      {
                        v15 = 0;
                      }
                      v43 = v42;
                      if ( !v15 )
                      {
LABEL_49:
                        vSpDeleteShape(a1);
                        *((_DWORD *)a1 + 1) = 4;
                        v15 = 0;
                        goto LABEL_50;
                      }
                    }
                    if ( !v43 && (*(_WORD *)(v25 + 100) != (_WORD)v42 || (*(_BYTE *)(v25 + 102) & 0x20) != 0) )
                    {
                      Gre::Base::Globals(v41);
                      if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v63) )
                      {
                        v44 = *(_DWORD *)(v25 + 116);
                        if ( (v44 & 0x20) == 0 )
                        {
                          v45 = *(HSURF *)(v25 + 32);
                          *(_DWORD *)(v25 + 116) = v44 | 0x20;
                          pConvertDfbSurfaceToDibPostNKAPC(v45);
                        }
                      }
                      else
                      {
                        bConvertDfbDcToDib((struct XDCOBJ *)v73);
                      }
                      v25 = *((_QWORD *)v73[0] + 62);
                    }
                  }
                  v46 = v76;
                  vSpDirectDriverAccess(v70, 0LL);
                  v75 = 0LL;
                  v47 = v43 == 0;
                  v48 = a9;
                  bSpCreateShape(
                    a1,
                    &v75,
                    (struct _SURFOBJ *)((v25 + 24) & -(__int64)(v25 != 0)),
                    pxlo,
                    &v71,
                    v59,
                    v62,
                    v47,
                    a9);
                  vSpDirectDriverAccess(v70, 1LL);
                  v49 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
                  if ( v49 )
                  {
                    if ( v46 )
                    {
                      if ( (*(_DWORD *)a1 & 0x40) != 0 )
                        *((_DWORD *)a1 + 51) = NearestIndexFromColorref;
                      else
                        vSpUpdatePerPixelAlphaFromColorKey(v49, NearestIndexFromColorref, v48, 0LL);
                    }
                    goto LABEL_50;
                  }
                  goto LABEL_49;
                }
LABEL_35:
                v37 = v72;
                v62 = 0;
                v38 = *(struct PALETTE **)(v63 + 1792);
                goto LABEL_36;
              }
              if ( OPTAPIDCOBJ::bValid((HDC *)a3) )
              {
                APIDCOBJ::APIDCOBJ((APIDCOBJ *)v74, (struct Gre::Base::SESSION_GLOBALS **)a3);
                v51 = *(_QWORD *)(v74[0] + 48LL);
                if ( v51 == *((_QWORD *)v73[0] + 6) && (v51 == *(_QWORD *)v70 || v51 == *(_QWORD *)(v63 + 24)) )
                {
                  v72 = *(_QWORD *)(v74[0] + 88LL);
                  v52 = *(_QWORD *)(v74[0] + 976LL);
                  v53 = *(_DWORD *)(v52 + 184);
                  v75.x = *(_DWORD *)(v52 + 176);
                  LODWORD(v52) = *(_DWORD *)(v74[0] + 120LL);
                  v60 = v53;
                  v61 = v52;
                  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v74);
                  v20 = v73[0];
                  goto LABEL_16;
                }
                APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v74);
              }
            }
          }
        }
      }
      APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v73);
    }
    return 0LL;
  }
  v50 = a8;
  *((_DWORD *)a1 + 1) = 0x2000000;
  *((_DWORD *)a1 + 24) = 0;
  *((_DWORD *)a1 + 26) = v50->cx;
  *((_DWORD *)a1 + 25) = 0;
  *((_DWORD *)a1 + 27) = v50->cy;
  *((_DWORD *)a1 + 38) = *((_DWORD *)v14 + 27);
  *((_DWORD *)a1 + 39) = *((_DWORD *)v14 + 28);
  return 1LL;
}

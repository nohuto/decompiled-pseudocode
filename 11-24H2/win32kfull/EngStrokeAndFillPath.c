/*
 * XREFs of EngStrokeAndFillPath @ 0x1401E6AC0
 * Callers:
 *     ?EPATHOBJ_bSimpleStrokeAndFill@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@5PEAU_POINTL@@KK@Z @ 0x1400E125C (-EPATHOBJ_bSimpleStrokeAndFill@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXF.c)
 *     ?MulStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1401D2870 (-MulStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ.c)
 *     OffStrokeAndFillPath @ 0x1401D3000 (OffStrokeAndFillPath.c)
 *     ?BmpDevStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1402FBD00 (-BmpDevStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSH.c)
 *     ?RedirStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1402FE1F0 (-RedirStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHO.c)
 *     ?PanStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x14030A1E0 (-PanStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ.c)
 *     NtGdiEngStrokeAndFillPath @ 0x14033A020 (NtGdiEngStrokeAndFillPath.c)
 * Callees:
 *     ??0BOUNDCLIPRGNTOSURFACE@@QEAA@PEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z @ 0x140009944 (--0BOUNDCLIPRGNTOSURFACE@@QEAA@PEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     EngStrokePath @ 0x140009AE0 (EngStrokePath.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x14000A534 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1400596DC (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ??0XCLIPOBJ@@QEAA@XZ @ 0x140059708 (--0XCLIPOBJ@@QEAA@XZ.c)
 *     ??0CFixPred@Prediction@@QEAA@XZ @ 0x1400BB03C (--0CFixPred@Prediction@@QEAA@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1400CDFD8 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400D3E30 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     EngFillPath @ 0x1400E1DC0 (EngFillPath.c)
 *     ?bWiden@pathwide@@YA_NAEAVEPATHOBJ@@0AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z @ 0x1400E254C (-bWiden@pathwide@@YA_NAEAVEPATHOBJ@@0AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z.c)
 *     ?bComputeWidenedBounds@pathwide@@YA_NAEAVEPATHOBJ@@AEBV2@AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z @ 0x1400E4570 (-bComputeWidenedBounds@pathwide@@YA_NAEAVEPATHOBJ@@AEBV2@AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z.c)
 *     EngPaint @ 0x1400E4A40 (EngPaint.c)
 *     ??0RGNMEMOBJ@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1400E7C5C (--0RGNMEMOBJ@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1401226C8 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ??1RGNMEMOBJTMPIFNEEDED@@QEAA@XZ @ 0x1401F52F0 (--1RGNMEMOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

BOOL __stdcall EngStrokeAndFillPath(
        SURFOBJ *pso,
        PATHOBJ *ppo,
        CLIPOBJ *pco,
        XFORMOBJ *pxo,
        BRUSHOBJ *pboStroke,
        LINEATTRS *plineattrs,
        BRUSHOBJ *pboFill,
        POINTL *pptlBrushOrg,
        MIX mixFill,
        FLONG flOptions)
{
  MIX v11; // r15d
  BOOL v12; // esi
  MIX mix; // edx
  BOOL v16; // ebx
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct EPATHOBJ *v20; // rdx
  CLIPOBJ *v21; // rax
  FLONG fl; // eax
  PATHOBJ v23; // rax
  struct _CLIPOBJ *v24; // rdi
  struct REGION *v25; // rdx
  BRUSHOBJ *v26; // r8
  __int64 p_iUniq; // rax
  POINTL *v28; // r15
  POINTL *v29; // r9
  BRUSHOBJ *v30; // r8
  __int64 v31; // rax
  MIX v32; // [rsp+20h] [rbp-E0h]
  struct REGION *v33; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v34; // [rsp+48h] [rbp-B8h] BYREF
  CLIPOBJ *pcoa; // [rsp+50h] [rbp-B0h] BYREF
  CLIPOBJ *v36; // [rsp+58h] [rbp-A8h] BYREF
  int v37; // [rsp+60h] [rbp-A0h]
  CLIPOBJ *v38; // [rsp+68h] [rbp-98h] BYREF
  int v39; // [rsp+70h] [rbp-90h]
  MIX v40; // [rsp+78h] [rbp-88h]
  POINTL *v41; // [rsp+80h] [rbp-80h]
  struct _CLIPOBJ *v42; // [rsp+88h] [rbp-78h] BYREF
  BRUSHOBJ *pbo; // [rsp+90h] [rbp-70h]
  BRUSHOBJ *v44; // [rsp+98h] [rbp-68h]
  _BYTE v45[8]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v46; // [rsp+A8h] [rbp-58h]
  __int128 v47; // [rsp+120h] [rbp+20h] BYREF
  CLIPOBJ v48; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v49[152]; // [rsp+1D0h] [rbp+D0h] BYREF
  CLIPOBJ *v50; // [rsp+268h] [rbp+168h]
  int v51; // [rsp+270h] [rbp+170h]

  v11 = mixFill;
  v12 = 0;
  mix = mixFill;
  pcoa = pco;
  v42 = pco;
  v44 = pboStroke;
  pbo = pboFill;
  v41 = pptlBrushOrg;
  LODWORD(v33) = flOptions;
  v40 = mixFill;
  if ( !_bittest((const signed __int32 *)&pboFill[5], 0xFu) )
  {
    mix = (unsigned __int8)mixFill | ((unsigned __int8)mixFill << 8);
    v40 = mix;
  }
  if ( !_bittest((const signed __int32 *)&pboStroke[5], 0xFu) )
    v11 = (unsigned __int8)mixFill | ((unsigned __int8)mixFill << 8);
  v16 = 1;
  if ( (plineattrs->fl & 1) != 0 && (unsigned __int8)mixFill != 13 )
  {
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v45);
    if ( ppo[5] )
      goto LABEL_61;
    if ( (unsigned int)bUMPDSecurityGateEx(v19, v18) && !pxo )
      goto LABEL_45;
    if ( v46
      && pathwide::bComputeWidenedBounds(
           (pathwide *)v45,
           (struct EPATHOBJ *)ppo,
           (const struct _RECTFX *)pxo,
           (const struct EXFORMOBJ *)plineattrs)
      && pathwide::bWiden((pathwide *)v45, (struct EPATHOBJ *)ppo, (struct EPATHOBJ *)pxo, plineattrs) )
    {
LABEL_61:
      if ( (ppo->fl & 1) == 0 || EPATHOBJ::bFlatten((EPATHOBJ *)ppo) )
      {
        Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v38);
        v21 = (CLIPOBJ *)*((_QWORD *)v20 + 5);
        v39 = 0;
        v38 = v21;
        if ( !v21 )
        {
          v39 = 1;
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&pcoa, v20, 2u, 0LL);
          v38 = pcoa;
          RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v38);
        }
        Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v36);
        fl = ppo->fl;
        v37 = 0;
        if ( (fl & 0x10) != 0 )
        {
          if ( (_DWORD)v33 == 2 )
            v23 = ppo[4];
          else
            v23 = ppo[3];
        }
        else
        {
          v23 = ppo[2];
        }
        v36 = (CLIPOBJ *)v23;
        if ( !*(_QWORD *)&v23 )
        {
          v37 = 1;
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&pcoa, (struct EPATHOBJ *)ppo, (unsigned int)v33, 0LL);
          v36 = pcoa;
          RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v36);
        }
        Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v34);
        RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v34, 0x70u);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v34);
        if ( !v36 || !v38 || !v34 || !RGNOBJ::bMerge((RGNOBJ *)&v34, (struct RGNOBJ *)&v36, (struct RGNOBJ *)&v38, 4u) )
          goto LABEL_20;
        BOUNDCLIPRGNTOSURFACE::BOUNDCLIPRGNTOSURFACE((BOUNDCLIPRGNTOSURFACE *)v49, pso, &v42);
        if ( v51 )
        {
          Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v33);
          RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v33, 0x70u);
          RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v33);
          if ( !v33 || (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v38) == 1 )
            goto LABEL_35;
          v24 = v42;
          if ( RGNOBJ::bMerge((RGNOBJ *)&v33, (struct RGNOBJ *)&v38, (struct RGNOBJ *)&v42[2].rclBounds.top, 8u) )
          {
            v47 = *(_OWORD *)((char *)v33 + 52);
            XCLIPOBJ::XCLIPOBJ((XCLIPOBJ *)&v48);
            XCLIPOBJ::vSetup((XCLIPOBJ *)&v48, v25, (const struct ERECTL *)&v47, 0);
            if ( ERECTL::bEmpty((ERECTL *)&v48.rclBounds) )
            {
              v28 = v41;
              v12 = 1;
            }
            else
            {
              v26 = v44;
              p_iUniq = (__int64)&pso->iUniq;
              v32 = v11;
              v28 = v41;
              if ( !pso )
                p_iUniq = 92LL;
              v29 = v41;
              ++*(_DWORD *)p_iUniq;
              v12 = EngPaint(pso, &v48, v26, v29, v32);
              if ( !v12 )
                goto LABEL_35;
            }
            if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v34) == 1 )
            {
LABEL_35:
              RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v33);
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v33);
              pcoa = v50;
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&pcoa);
LABEL_20:
              RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v34);
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v34);
              if ( v37 )
              {
                RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v36);
                RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v36);
              }
              if ( v39 )
              {
                RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v38);
                RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v38);
              }
              PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v45);
              return v12;
            }
            if ( RGNOBJ::bMerge((RGNOBJ *)&v33, (struct RGNOBJ *)&v34, (struct RGNOBJ *)&v24[2].rclBounds.top, 8u) )
            {
              v47 = *(_OWORD *)((char *)v33 + 52);
              ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)&v48, v33, (struct ERECTL *)&v47);
              if ( ERECTL::bEmpty((ERECTL *)&v48.rclBounds) )
              {
                v12 = 1;
              }
              else
              {
                v30 = pbo;
                v31 = (__int64)&pso->iUniq;
                if ( !pso )
                  v31 = 92LL;
                ++*(_DWORD *)v31;
                v12 = EngPaint(pso, &v48, v30, v28, v40);
              }
              goto LABEL_35;
            }
          }
          v12 = 0;
          goto LABEL_35;
        }
        pcoa = v50;
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&pcoa);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v34);
        RGNMEMOBJTMPIFNEEDED::~RGNMEMOBJTMPIFNEEDED((RGNMEMOBJTMPIFNEEDED *)&v36);
        RGNMEMOBJTMPIFNEEDED::~RGNMEMOBJTMPIFNEEDED((RGNMEMOBJTMPIFNEEDED *)&v38);
      }
    }
    else
    {
      EngSetLastError(8u);
    }
LABEL_45:
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v45);
    return 0;
  }
  if ( !EngFillPath(pso, ppo, pco, pbo, pptlBrushOrg, mix, flOptions)
    || !EngStrokePath(pso, ppo, pcoa, pxo, v44, v41, plineattrs, v11) )
  {
    return 0;
  }
  return v16;
}

/*
 * XREFs of EngAlphaBlend @ 0x14000A5C0
 * Callers:
 *     GrePtInSprite @ 0x1400226B0 (GrePtInSprite.c)
 *     ?MulAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x140051F70 (-MulAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?SpAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x140055BB0 (-SpAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z @ 0x14018D8A0 (-bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z.c)
 *     ?RedirAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1402FCAF0 (-RedirAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?PanAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x140309300 (-PanAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     NtGdiEngAlphaBlend @ 0x140338D50 (NtGdiEngAlphaBlend.c)
 * Callees:
 *     ?psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK@Z @ 0x14000AD3C (-psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK.c)
 *     ?bDetermineAlphaBlendFunction@@YAHPEAVSURFACE@@0PEAVXEPALOBJ@@1PEAVXLATE@@JPEAU_ALPHA_DISPATCH_FORMAT@@H@Z @ 0x14000B8D8 (-bDetermineAlphaBlendFunction@@YAHPEAVSURFACE@@0PEAVXEPALOBJ@@1PEAVXLATE@@JPEAU_ALPHA_DISPATCH_F.c)
 *     ?AlphaScanLineBlend@@YAHPEAEPEAU_RECTL@@J0JPEAU_POINTL@@PEAU_XLATEOBJ@@33VXEPALOBJ@@4PEAU_ALPHA_DISPATCH_FORMAT@@@Z @ 0x14000BE20 (-AlphaScanLineBlend@@YAHPEAEPEAU_RECTL@@J0JPEAU_POINTL@@PEAU_XLATEOBJ@@33VXEPALOBJ@@4PEAU_ALPHA_.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x14000C23C (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     EngHTBlt @ 0x14000C53C (EngHTBlt.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1400A315C (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

BOOL __stdcall EngAlphaBlend(
        SURFOBJ *psoDest,
        SURFOBJ *psoSrc,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        RECTL *prclDest,
        RECTL *prclSrc,
        BLENDOBJ *pBlendObj)
{
  RECTL v8; // xmm0
  RECTL v9; // xmm1
  BOOL v10; // r13d
  unsigned __int64 v11; // r14
  BOOL v12; // edi
  struct SURFACE *v13; // rdx
  LONG left; // r15d
  LONG right; // r12d
  struct _RECTL v16; // xmm6
  unsigned __int64 v17; // rsi
  int v18; // eax
  int v19; // ecx
  __int64 *v20; // rax
  __int64 v21; // rbx
  int v22; // ecx
  Gre::Base *v23; // rcx
  struct Gre::Base::SESSION_GLOBALS *v24; // rax
  BOOL (__stdcall *v25)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  ULONG *pulXlate; // rax
  __int64 v27; // rbx
  XCLIPOBJ *v29; // r13
  unsigned __int64 v30; // rcx
  LONG v31; // r8d
  LONG bottom; // r10d
  struct SURFACE *v33; // r14
  unsigned int v34; // eax
  unsigned int v35; // eax
  struct _XLATEOBJ *v36; // r13
  LONG v37; // edi
  LONG *v38; // rdx
  LONG v39; // ecx
  LONG v40; // r11d
  LONG v41; // eax
  LONG v42; // r9d
  __int64 v43; // r9
  int v44; // eax
  __int64 v45; // r8
  __int64 v46; // rcx
  int v47; // eax
  unsigned __int64 v48; // r14
  struct _RECTL v49; // xmm0
  __int64 v50; // rbx
  struct Gre::Base::SESSION_GLOBALS *v51; // rax
  int *v52; // [rsp+30h] [rbp-D8h]
  int v53; // [rsp+40h] [rbp-C8h]
  int v54; // [rsp+68h] [rbp-A0h]
  unsigned int v55; // [rsp+68h] [rbp-A0h]
  ULONG *v56; // [rsp+70h] [rbp-98h] BYREF
  struct SURFACE *v57; // [rsp+78h] [rbp-90h] BYREF
  XLATEOBJ *v58; // [rsp+80h] [rbp-88h]
  int v59; // [rsp+88h] [rbp-80h]
  void *hdev; // [rsp+90h] [rbp-78h] BYREF
  unsigned __int64 v61; // [rsp+98h] [rbp-70h] BYREF
  char v62; // [rsp+A0h] [rbp-68h]
  int v63; // [rsp+A4h] [rbp-64h]
  LONG v64; // [rsp+A8h] [rbp-60h]
  LONG top; // [rsp+ACh] [rbp-5Ch]
  struct _XLATEOBJ *v66; // [rsp+B0h] [rbp-58h]
  XCLIPOBJ *v67; // [rsp+B8h] [rbp-50h]
  int v68[2]; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v69; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v70; // [rsp+D0h] [rbp-38h] BYREF
  char v71; // [rsp+D8h] [rbp-30h]
  int v72; // [rsp+DCh] [rbp-2Ch]
  _DWORD v73[4]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v74; // [rsp+F0h] [rbp-18h]
  int v75; // [rsp+F8h] [rbp-10h]
  int v76; // [rsp+FCh] [rbp-Ch]
  __int64 v77; // [rsp+100h] [rbp-8h]
  __int64 v78; // [rsp+108h] [rbp+0h]
  XCLIPOBJ *v79; // [rsp+110h] [rbp+8h]
  unsigned __int64 v80; // [rsp+118h] [rbp+10h]
  _OWORD v81[2]; // [rsp+120h] [rbp+18h] BYREF
  __int128 v82; // [rsp+140h] [rbp+38h]
  struct _RECTL v83; // [rsp+158h] [rbp+50h] BYREF
  RECTL v84; // [rsp+168h] [rbp+60h] BYREF
  struct _RECTL v85; // [rsp+178h] [rbp+70h] BYREF
  struct _RECTL v86; // [rsp+188h] [rbp+80h] BYREF
  unsigned int v87; // [rsp+198h] [rbp+90h] BYREF
  struct _RECTL v88; // [rsp+19Ch] [rbp+94h] BYREF
  char v89[316]; // [rsp+1ACh] [rbp+A4h] BYREF

  v58 = pxlo;
  v8 = *prclDest;
  v67 = (XCLIPOBJ *)pco;
  hdev = prclSrc;
  v9 = *prclSrc;
  v10 = 1;
  v11 = (unsigned __int64)&psoDest[-1].pvScan0 & -(__int64)(psoDest != 0LL);
  v80 = v11;
  v66 = *(struct _XLATEOBJ **)&pBlendObj[2].BlendFunction.BlendOp;
  v78 = *(_QWORD *)&pBlendObj[4].BlendFunction.BlendOp;
  v12 = 0;
  v77 = *(_QWORD *)&pBlendObj[6].BlendFunction.BlendOp;
  v83 = v8;
  v84 = v9;
  memset(v81, 0, sizeof(v81));
  v82 = 0LL;
  if ( v11 )
  {
    DWORD2(v82) = *pBlendObj;
    v61 = 0LL;
    v62 = 0;
    v63 = 0;
    v70 = 0LL;
    v71 = 0;
    v72 = 0;
    if ( (pBlendObj->BlendFunction.BlendFlags & 1) != 0 )
    {
      v57 = 0LL;
      if ( v83.right - v83.left != v84.right - v84.left || v83.bottom - v83.top != v84.bottom - v84.top )
      {
        LOBYTE(v12) = (unsigned int)EngHTBlt(
                                      psoDest,
                                      psoSrc,
                                      0LL,
                                      v67,
                                      v58,
                                      0LL,
                                      &v57,
                                      prclDest,
                                      hdev,
                                      0LL,
                                      512,
                                      pBlendObj) == 1;
        SURFMEM::~SURFMEM((SURFMEM *)&v70);
        SURFMEM::~SURFMEM((SURFMEM *)&v61);
        return v12;
      }
    }
    hdev = psoDest->hdev;
    PDEVOBJ::vSync((PDEVOBJ *)&hdev, psoDest, 0LL, 0);
    v57 = (struct SURFACE *)psoSrc->hdev;
    PDEVOBJ::vSync((PDEVOBJ *)&v57, psoSrc, 0LL, 0);
    v57 = psSetupTransparentSrcSurface(
            (struct SURFACE *)((unsigned __int64)&psoSrc[-1].pvScan0 & -(__int64)(psoSrc != 0LL)),
            (struct SURFACE *)v11,
            &v83,
            v66,
            &v84,
            (struct SURFMEM *)&v70,
            0,
            0);
    v13 = v57;
    if ( !v57 )
      goto LABEL_24;
    left = v83.left;
    right = v83.right;
    if ( v83.left == v83.right )
      goto LABEL_24;
    v16 = v83;
    v64 = v84.left;
    top = v84.top;
    v17 = v11;
    v18 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v83, 4));
    v54 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v83, 12));
    v86 = v83;
    v19 = v54 - v18;
    v59 = v18;
    LODWORD(v56) = v54 - v18;
    hdev = EngCopyBits;
    if ( *(_WORD *)(v11 + 100) )
    {
      v20 = *(__int64 **)(v11 + 128);
      v21 = *(_QWORD *)(v11 + 48);
      v73[2] = v19;
      v73[0] = *(_DWORD *)(v11 + 96);
      v22 = *(_DWORD *)(v11 + 112) & 0x40000;
      v73[3] = 0;
      v76 = 0;
      v73[1] = v83.right - v83.left;
      v75 = v22;
      v74 = 0LL;
      if ( v20 )
        v74 = *v20;
      if ( !SURFMEM::bCreateDIB((SURFMEM *)&v61, (struct _DEVBITMAPINFO *)v73, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
        goto LABEL_23;
      v23 = *(Gre::Base **)(v11 + 48);
      *(_QWORD *)(v61 + 48) = v23;
      v85.bottom = (int)v56;
      v68[0] = v83.left;
      v68[1] = v83.top;
      *(_QWORD *)&v85.left = 0LL;
      v85.right = right - left;
      v24 = Gre::Base::Globals(v23);
      v25 = (*(_DWORD *)(v11 + 112) & 0x400) != 0
          ? *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v21 + 2832)
          : EngCopyBits;
      v52 = v68;
      if ( ((unsigned int (__fastcall *)(unsigned __int64, unsigned __int64, _QWORD, char *, struct _RECTL *))v25)(
             (v61 + 24) & -(__int64)(v61 != 0),
             v11 + 24,
             0LL,
             (char *)v24 + 4552,
             &v85) )
      {
        v16 = v85;
        v17 = v61;
        v83 = v85;
      }
      else
      {
        v16 = v83;
        v17 = 0LL;
      }
      if ( !v17 )
        goto LABEL_23;
      v13 = v57;
      v54 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v16, 12));
      left = v16.left;
      right = _mm_srli_si128((__m128i)v16, 8).m128i_u32[0];
      v59 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v16, 4));
    }
    pulXlate = (ULONG *)*((_QWORD *)v13 + 16);
    v27 = *(_QWORD *)(v17 + 128);
    v56 = pulXlate;
    v69 = v27;
    if ( !pulXlate )
    {
      if ( !v58 || (pulXlate = v58[1].pulXlate) == 0LL )
        pulXlate = *(ULONG **)(*((_QWORD *)v13 + 6) + 1792LL);
      v56 = pulXlate;
    }
    if ( !v27 )
    {
      v27 = *(_QWORD *)(*(_QWORD *)(v17 + 48) + 1792LL);
      v69 = v27;
    }
    if ( pulXlate && v27 )
    {
      v29 = 0LL;
      if ( v17 == v11 )
        v29 = v67;
      v79 = v29;
      LODWORD(v56) = bDetermineAlphaBlendFunction(
                       (struct SURFACE *)v17,
                       v13,
                       (struct XEPALOBJ *)&v69,
                       (struct XEPALOBJ *)&v56,
                       (struct XLATE *)v66,
                       (int)v52,
                       (struct _ALPHA_DISPATCH_FORMAT *)v81,
                       v53);
      if ( (_DWORD)v56 )
      {
        memset_0(v89, 0, 0x130uLL);
        v30 = 0LL;
        LODWORD(v58) = 0;
        v87 = 1;
        v88 = v16;
        if ( v29 )
        {
          if ( *((_BYTE *)v29 + 20) == 1 )
          {
            v49 = *(struct _RECTL *)((char *)v29 + 4);
            v30 = 0LL;
            LODWORD(v58) = 0;
            v88 = v49;
          }
          else
          {
            if ( *((_BYTE *)v29 + 20) == 3 )
            {
              LODWORD(v58) = 1;
              XCLIPOBJ::cEnumStart(v29, 0, 0, 1u, 0x14u);
              bottom = v83.bottom;
              v31 = v83.top;
              v30 = (unsigned int)v58;
              right = v83.right;
              left = v83.left;
              goto LABEL_34;
            }
            v30 = 0LL;
          }
        }
        v31 = v59;
        bottom = v54;
LABEL_34:
        v33 = v57;
        if ( !(_DWORD)v30 )
          goto LABEL_36;
        do
        {
          v34 = XCLIPOBJ::bEnum(v29, 0x144u, &v87, 0LL);
          bottom = v83.bottom;
          v30 = v34;
          v31 = v83.top;
          right = v83.right;
          left = v83.left;
          LODWORD(v58) = v34;
LABEL_36:
          v35 = 0;
          v55 = 0;
          if ( v87 )
          {
            v36 = v66;
            v37 = v64;
            do
            {
              v38 = &v88.left + 4 * v35;
              v39 = *v38;
              if ( *v38 < left )
              {
                *v38 = left;
                v39 = left;
              }
              v40 = v38[2];
              if ( v40 > right )
              {
                v38[2] = right;
                v40 = right;
              }
              v41 = v38[1];
              if ( v41 < v31 )
              {
                v38[1] = v31;
                v41 = v31;
              }
              v42 = v38[3];
              if ( v42 > bottom )
              {
                v38[3] = bottom;
                v42 = bottom;
              }
              if ( v41 < v42 && v39 < v40 )
              {
                v43 = *((_QWORD *)v33 + 10);
                v44 = top + v41 - v31;
                v45 = *(unsigned int *)(v17 + 88);
                LODWORD(v57) = v37 + v39 - left;
                v46 = *(_QWORD *)(v17 + 80);
                HIDWORD(v57) = v44;
                v47 = AlphaScanLineBlend(v46, v38, v45, v43, *((_DWORD *)v33 + 22), &v57, v36, v78, v77, v27);
                bottom = v83.bottom;
                v31 = v83.top;
                right = v83.right;
                left = v83.left;
                LODWORD(v56) = v47;
              }
              v35 = v55 + 1;
              v55 = v35;
            }
            while ( v35 < v87 );
            v29 = v79;
            v30 = (unsigned int)v58;
          }
        }
        while ( (_DWORD)v30 );
        v48 = v80;
        if ( v17 != v80 )
        {
          v50 = *(_QWORD *)(v80 + 48);
          v57 = 0LL;
          v51 = Gre::Base::Globals((Gre::Base *)v30);
          if ( (*(_DWORD *)(v48 + 112) & 0x400) != 0 )
            hdev = *(void **)(v50 + 2832);
          ((void (__fastcall *)(unsigned __int64, unsigned __int64, XCLIPOBJ *, char *, struct _RECTL *, struct SURFACE **))hdev)(
            v48 + 24,
            v17 + 24,
            v67,
            (char *)v51 + 4552,
            &v86,
            &v57);
        }
        v10 = (int)v56;
        goto LABEL_24;
      }
      v10 = 0;
LABEL_24:
      SURFMEM::~SURFMEM((SURFMEM *)&v70);
      SURFMEM::~SURFMEM((SURFMEM *)&v61);
      return v10;
    }
LABEL_23:
    v10 = 0;
    goto LABEL_24;
  }
  return 0;
}

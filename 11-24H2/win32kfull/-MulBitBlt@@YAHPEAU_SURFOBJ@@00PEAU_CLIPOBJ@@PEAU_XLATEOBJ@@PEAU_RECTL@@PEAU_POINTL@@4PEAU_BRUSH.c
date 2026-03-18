/*
 * XREFs of ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1400531D0
 * Callers:
 *     ?MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z @ 0x140051074 (-MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z.c)
 *     ?MulCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x140052EB0 (-MulCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z.c)
 * Callees:
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x14000FB40 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     EngBitBlt @ 0x1400179A0 (EngBitBlt.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x140053C44 (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     ?bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x140053DDC (-bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x140054418 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1400546F0 (--1MULTISURF@@QEAA@XZ.c)
 *     ?bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x14005474C (-bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PE.c)
 *     ?StoreElement@MULTIBRUSH@@QEAAXJ@Z @ 0x140054BCC (-StoreElement@MULTIBRUSH@@QEAAXJ@Z.c)
 *     ?LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z @ 0x140054C64 (-LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z.c)
 *     ?CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z @ 0x140054E20 (-CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z.c)
 *     ?vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x140054E74 (-vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x140054F2C (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     BRUSHOBJ_pvGetRbrush @ 0x14011EB60 (BRUSHOBJ_pvGetRbrush.c)
 *     ??0MULTISURF@@QEAA@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1401F7F78 (--0MULTISURF@@QEAA@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vRestore@MSURF@@QEAAXXZ @ 0x140209A8C (-vRestore@MSURF@@QEAAXXZ.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1403228B4 (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     ?bLoadSourceNotMetaDEVBITMAP@MULTISURF@@AEAAHPEAUHDEV__@@@Z @ 0x140331BBC (-bLoadSourceNotMetaDEVBITMAP@MULTISURF@@AEAAHPEAUHDEV__@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

int __fastcall MulBitBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *pxlo,
        struct _RECTL *a6,
        struct _POINTL *a7,
        struct _POINTL *a8,
        struct _BRUSHOBJ *a9,
        struct _POINTL *a10,
        ROP4 rop4)
{
  USHORT iType; // si
  int v15; // edi
  char v16; // bl
  DHPDEV dhpdev; // r15
  char v19; // al
  __int64 v20; // rdx
  int v21; // r14d
  int v22; // ecx
  int v23; // esi
  BRUSHOBJ *v24; // rbx
  LONG y; // ecx
  DHPDEV v26; // rax
  int v27; // r14d
  struct _DISPSURF *v28; // r9
  SURFOBJ *v29; // r14
  struct _RECTL *v30; // rbx
  struct _RECTL *v31; // r15
  int v32; // r8d
  __int64 v33; // r10
  struct _CLIPOBJ *v34; // rsi
  SURFOBJ *v35; // r11
  _DWORD *p_iUniq; // rdx
  LONG v37; // r15d
  LONG v38; // r14d
  int v39; // eax
  HDEV v40; // rcx
  LONG v41; // r14d
  LONG v42; // r15d
  int top; // eax
  BOOL (__stdcall *v44)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // r14
  POINTL *v45; // rsi
  int v46; // r8d
  LONG v47; // eax
  CLIPOBJ **p_pco; // rax
  void *v49; // rdx
  PVOID Rbrush; // rax
  _DWORD *v51; // rsi
  __int64 v52; // rdx
  int v53; // r8d
  struct Gre::Base::SESSION_GLOBALS *v54; // r11
  __int64 v55; // r15
  HDEV hdev; // rsi
  __int64 v57; // rdx
  struct PALETTE *v58; // rax
  int v59; // r8d
  FLONG flXlate; // r14d
  int v61; // r9d
  ULONG iUniq; // r10d
  __int64 v63; // rax
  ULONG *pulXlate; // r11
  int inited; // eax
  char v66; // [rsp+60h] [rbp-A0h]
  BOOL v67; // [rsp+64h] [rbp-9Ch]
  USHORT v68; // [rsp+68h] [rbp-98h]
  __int64 v69; // [rsp+68h] [rbp-98h]
  int v70; // [rsp+68h] [rbp-98h]
  SURFOBJ *v71; // [rsp+68h] [rbp-98h]
  int v72; // [rsp+70h] [rbp-90h]
  BOOL (__stdcall *v73)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // [rsp+70h] [rbp-90h]
  int v74; // [rsp+70h] [rbp-90h]
  struct _RECTL *v75; // [rsp+78h] [rbp-88h] BYREF
  struct _RECTL *v76; // [rsp+80h] [rbp-80h]
  struct _SURFOBJ *v77; // [rsp+88h] [rbp-78h]
  CLIPOBJ *pco; // [rsp+90h] [rbp-70h] BYREF
  POINTL *pptlBrush; // [rsp+98h] [rbp-68h]
  BRUSHOBJ *pbo; // [rsp+A0h] [rbp-60h]
  POINTL *pptlMask; // [rsp+A8h] [rbp-58h]
  SURFOBJ *psoMask; // [rsp+B0h] [rbp-50h]
  struct _POINTL *v83; // [rsp+B8h] [rbp-48h] BYREF
  struct _POINTL v84; // [rsp+C0h] [rbp-40h] BYREF
  struct _POINTL v85; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v86; // [rsp+D0h] [rbp-30h] BYREF
  struct _CLIPOBJ *v87; // [rsp+D8h] [rbp-28h]
  SURFOBJ *v88; // [rsp+E0h] [rbp-20h]
  struct Gre::Base::SESSION_GLOBALS *v89; // [rsp+E8h] [rbp-18h]
  int v90; // [rsp+F0h] [rbp-10h] BYREF
  int iSolidColor; // [rsp+F4h] [rbp-Ch]
  BRUSHOBJ *v92; // [rsp+F8h] [rbp-8h]
  __int64 v93; // [rsp+100h] [rbp+0h]
  __int64 v94; // [rsp+108h] [rbp+8h]
  PVOID v95; // [rsp+110h] [rbp+10h]
  __int64 v96; // [rsp+118h] [rbp+18h]
  __int64 v97; // [rsp+120h] [rbp+20h]
  struct _RECTL v98; // [rsp+128h] [rbp+28h] BYREF
  PVOID *p_pvScan0; // [rsp+140h] [rbp+40h] BYREF
  _DWORD v100[4]; // [rsp+148h] [rbp+48h] BYREF
  DHPDEV v101; // [rsp+158h] [rbp+58h]
  DHSURF dhsurf; // [rsp+160h] [rbp+60h]
  __int64 v103; // [rsp+168h] [rbp+68h]
  char v104; // [rsp+170h] [rbp+70h]
  int v105; // [rsp+174h] [rbp+74h]
  int v106; // [rsp+188h] [rbp+88h]
  int hsurf; // [rsp+18Ch] [rbp+8Ch]
  __int64 v108; // [rsp+190h] [rbp+90h]
  SURFOBJ *psoSrc; // [rsp+198h] [rbp+98h]
  POINTL *pptlSrc; // [rsp+1A0h] [rbp+A0h]
  _BYTE v111[56]; // [rsp+1B0h] [rbp+B0h] BYREF
  struct _DISPSURF *v112; // [rsp+1E8h] [rbp+E8h]
  __int64 v113; // [rsp+1F0h] [rbp+F0h]
  struct _CLIPOBJ *v114; // [rsp+1F8h] [rbp+F8h]
  LONG *v115; // [rsp+200h] [rbp+100h]
  _BYTE v116[88]; // [rsp+210h] [rbp+110h] BYREF
  SURFOBJ *psoTrg; // [rsp+268h] [rbp+168h]
  RECTL *prclTrg; // [rsp+270h] [rbp+170h]
  _DWORD v119[4]; // [rsp+280h] [rbp+180h] BYREF
  _DWORD v120[4]; // [rsp+290h] [rbp+190h] BYREF

  pbo = a9;
  v75 = a6;
  pptlMask = a8;
  psoMask = a3;
  v77 = a1;
  pptlBrush = a10;
  pco = a4;
  v83 = a7;
  memset_0(v111, 0, 0x60uLL);
  iType = a1->iType;
  v15 = 0;
  if ( iType != 3 || (v72 = 1, (HIDWORD(a1[1].hsurf) & 9) != 0) )
    v72 = 0;
  if ( !a2 || (v16 = 1, a2->iType != 1) )
    v16 = 0;
  v98 = *v75;
  v89 = Gre::Base::Globals((Gre::Base *)1);
  if ( !v16 )
  {
    v67 = 1;
    dhpdev = v77->dhpdev;
    v68 = v77->iType;
    if ( v68 && (unsigned int)MSURF::bFindSurface((MSURF *)v111, v77, pco, v75) )
    {
      v19 = 1;
      v20 = *((_QWORD *)dhpdev + 6);
      v21 = *((_DWORD *)dhpdev + 4);
      v22 = ((unsigned __int16)rop4 ^ (unsigned __int16)(rop4 >> 4)) & 0xF0F;
    }
    else
    {
      v19 = 0;
      v22 = 0;
      v20 = 0LL;
      dhpdev = 0LL;
      v21 = 0;
    }
    v66 = v19;
    v23 = 1;
    v94 = 0LL;
    v90 = 1;
    v24 = (BRUSHOBJ *)((unsigned __int64)pbo & -(__int64)(v19 != 0));
    v92 = v24;
    if ( v20 )
      v93 = v20 - 24;
    else
      v93 = 0LL;
    v96 = -1LL;
    v95 = 0LL;
    iSolidColor = -1;
    if ( v24 )
    {
      v49 = *(void **)(((unsigned __int64)pbo & -(__int64)(v19 != 0)) + 8);
      v95 = v49;
      if ( v22 && v24->iSolidColor == -1 )
      {
        v94 = *(_QWORD *)(((unsigned __int64)pbo & -(__int64)(v19 != 0)) + 0x58);
        if ( !v49 )
        {
          Rbrush = BRUSHOBJ_pvGetRbrush(v24);
          v24->pvRbrush = Rbrush;
          v51 = Rbrush;
          v95 = Rbrush;
          if ( Rbrush )
          {
            memset_0(Rbrush, 0, 16 * v21 + 8);
            *v51 = *((_DWORD *)dhpdev + 4);
            v23 = v90;
            *((_DWORD *)v24->pvRbrush - 2) = 1;
          }
          else
          {
            v23 = 0;
            v90 = 0;
          }
        }
      }
      else
      {
        iSolidColor = v24->iSolidColor;
      }
    }
    v103 = 0LL;
    v104 = 0;
    v105 = 0;
    if ( a2 )
    {
      psoSrc = a2;
      pptlSrc = (POINTL *)v100;
      v106 = 0;
      y = v83->y;
      v100[0] = v83->x;
      v100[1] = y;
      v100[2] = v98.right + v100[0] - v98.left;
      v26 = a2->dhpdev;
      v108 = 0LL;
      v100[3] = v98.bottom + y - v98.top;
      v101 = v26;
      if ( v26 )
      {
        p_pvScan0 = &a2[-1].pvScan0;
        dhsurf = a2->dhsurf;
        hsurf = (int)a2[1].hsurf;
        if ( (unsigned int)IsMetaDevBitmapForMirroring(a2) && ((_DWORD)a2->hdev[10] & 0x20000) != 0 )
        {
          v108 = v52;
          v106 = v53;
          a2->iType = 0;
          a2->dhsurf = 0LL;
          a2->dhpdev = 0LL;
          LODWORD(a2[1].hsurf) = 0;
        }
        else if ( a2->iType || (a2->fjBitmap & 0x20) != 0 )
        {
          v106 = 2;
        }
      }
    }
    else
    {
      MULTISURF::vInit((MULTISURF *)&p_pvScan0, 0LL, 0LL);
    }
    if ( v72 || !v68 )
    {
      MULTISURF::MULTISURF((MULTISURF *)v116, v77, v75);
      v67 = EngBitBlt(psoTrg, psoSrc, psoMask, pco, pxlo, prclTrg, pptlSrc, pptlMask, pbo, pptlBrush, rop4);
      v27 = v67;
      MULTISURF::~MULTISURF((MULTISURF *)v116);
    }
    else
    {
      v27 = 1;
    }
    if ( v66 )
    {
      if ( v23 )
      {
        while ( 1 )
        {
          if ( !v101 )
            goto LABEL_23;
          if ( !v108 )
            break;
          v28 = v112;
          psoSrc = *(SURFOBJ **)(*(_QWORD *)(v108 + 8) + 8LL * *((unsigned int *)v112 + 4));
          if ( !psoSrc )
            psoSrc = (SURFOBJ *)(p_pvScan0 + 3);
LABEL_24:
          v29 = psoSrc;
          v30 = 0LL;
          v75 = 0LL;
          v31 = (struct _RECTL *)pxlo;
          v76 = (struct _RECTL *)pxlo;
          if ( !psoSrc )
            goto LABEL_26;
          v32 = *((_DWORD *)v28 + 6);
          v76 = (struct _RECTL *)pxlo;
          if ( !v32 )
            goto LABEL_26;
          v40 = (HDEV)*((_QWORD *)v28 + 6);
          v54 = v89;
          v55 = v113;
          hdev = psoSrc[1].hdev;
          v57 = *((_QWORD *)v89 + 471);
          if ( ((_DWORD)v40[539] & 0x100) != 0 )
          {
            v58 = DrvRealizeHalftonePalette(v40, 0);
            v54 = v89;
            v57 = (__int64)v58;
          }
          else if ( v32 > 0 && pxlo && *(_QWORD *)&pxlo[2].iSrcType )
          {
            v57 = *(_QWORD *)&pxlo[2].iSrcType;
          }
          if ( hdev )
            goto LABEL_101;
          if ( !pxlo )
            goto LABEL_99;
          if ( !pxlo[1].pulXlate )
          {
            if ( (pxlo->flXlate & 1) != 0 )
            {
LABEL_99:
              if ( psoSrc == a2 )
                hdev = v77[1].hdev;
            }
            else
            {
              v57 = *(_QWORD *)&pxlo[2].iSrcType;
              if ( !v57 )
                goto LABEL_73;
              if ( v29->iBitmapFormat == v77->iBitmapFormat )
                hdev = v77[1].hdev;
            }
LABEL_101:
            v59 = 0;
            if ( !hdev )
              goto LABEL_105;
            goto LABEL_102;
          }
          hdev = (HDEV)pxlo[1].pulXlate;
          v59 = 0;
LABEL_102:
          if ( ((_DWORD)hdev[6] & 0x800) != 0 )
          {
            v59 = 0x2000;
            if ( v57 != *((_QWORD *)v54 + 471) )
              v59 = 0x4000;
          }
LABEL_105:
          if ( pxlo )
          {
            flXlate = pxlo[1].flXlate;
            v61 = *(_DWORD *)&pxlo[1].iSrcType;
            iUniq = pxlo[1].iUniq;
          }
          else
          {
            flXlate = 0;
            v61 = 0;
            iUniq = 0;
          }
          v63 = *((_QWORD *)v54 + 471);
          if ( pxlo )
          {
            pulXlate = pxlo[2].pulXlate;
            LODWORD(v30) = pxlo[3].iUniq;
          }
          else
          {
            pulXlate = 0LL;
          }
          inited = EXLATEOBJ::bInitXlateObj(
                     (Gre::Base *)&v75,
                     (__int64)pulXlate,
                     (unsigned int)v30,
                     (__int64)hdev,
                     *(_QWORD *)(v55 + 104),
                     v63,
                     v57,
                     flXlate,
                     v61,
                     iUniq,
                     v59);
          v30 = v75;
          if ( inited )
          {
            v28 = v112;
            v31 = v75;
            v76 = v75;
LABEL_26:
            if ( rop4 == 52428 )
            {
              v33 = v113;
              v69 = v113;
              if ( (*(_DWORD *)(v113 + 88) & 0x400) != 0 )
                v73 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*((_QWORD *)v28 + 7) + 2832LL);
              else
                v73 = EngCopyBits;
              v34 = v114;
              v35 = psoSrc;
              p_iUniq = pptlSrc;
              v37 = *v115;
              v38 = v115[1];
              v88 = psoSrc;
              v87 = (struct _CLIPOBJ *)pptlSrc;
              if ( v114 )
              {
                v84 = 0LL;
                if ( v37 || v38 )
                {
                  v114->rclBounds.left += v37;
                  v34->rclBounds.right += v37;
                  v34->rclBounds.top += v38;
                  v34->rclBounds.bottom += v38;
                  if ( v34->iDComplexity )
                  {
                    v84.x = v37;
                    v84.y = v38;
                    RGNOBJ::bOffset((RGNOBJ *)&v34[2].rclBounds.top, &v84);
                    v33 = v69;
                    p_iUniq = &v87->iUniq;
                    v35 = v88;
                  }
                }
              }
              LODWORD(v83) = *p_iUniq;
              v39 = p_iUniq[1];
              v119[0] = v37 + v98.left;
              HIDWORD(v83) = v39;
              v119[2] = v37 + v98.right;
              v70 = 0;
              v119[1] = v38 + v98.top;
              v40 = (HDEV)(unsigned int)(v38 + v98.bottom);
              v119[3] = v38 + v98.bottom;
              if ( v73 )
                v70 = ((__int64 (__fastcall *)(__int64, SURFOBJ *, struct _CLIPOBJ *, struct _RECTL *, _DWORD *, struct _POINTL **))v73)(
                        v33,
                        v35,
                        v34,
                        v76,
                        v119,
                        &v83);
              if ( v34 )
              {
                v41 = -v38;
                v85 = 0LL;
                v42 = -v37;
                if ( v42 || v41 )
                {
                  v34->rclBounds.left += v42;
                  v34->rclBounds.right += v42;
                  v34->rclBounds.top += v41;
                  v34->rclBounds.bottom += v41;
                  if ( v34->iDComplexity )
                  {
                    v85.x = v42;
                    v85.y = v41;
                    RGNOBJ::bOffset((RGNOBJ *)&v34[2].rclBounds.top, &v85);
                  }
                }
              }
            }
            else
            {
              MULTIBRUSH::LoadElement((MULTIBRUSH *)&v90, v28, (struct SURFACE *)(v113 - 24));
              v97 = v113;
              if ( (*(_DWORD *)(v113 + 88) & 1) != 0 )
                v44 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*((_QWORD *)v112 + 7) + 2824LL);
              else
                v44 = EngBitBlt;
              v45 = pptlSrc;
              v71 = psoSrc;
              v87 = v114;
              v46 = v115[1];
              LODWORD(v76) = *v115;
              v74 = v46;
              CLIPOBJ_vOffset(v114, (int)v76, v46);
              v86 = 0LL;
              v120[0] = (_DWORD)v76 + v98.left;
              v120[2] = (_DWORD)v76 + v98.right;
              v120[1] = v74 + v98.top;
              v120[3] = v74 + v98.bottom;
              if ( v45 )
              {
                LODWORD(v86) = v45->x;
                v47 = v45->y;
                v45 = (POINTL *)&v86;
                HIDWORD(v86) = v47;
              }
              pco = 0LL;
              if ( pptlBrush )
              {
                p_pco = &pco;
                LODWORD(pco) = (_DWORD)v76 + pptlBrush->x;
                HIDWORD(pco) = v74 + pptlBrush->y;
              }
              else
              {
                p_pco = 0LL;
              }
              v70 = ((__int64 (__fastcall *)(__int64, SURFOBJ *, SURFOBJ *, struct _CLIPOBJ *, struct _RECTL *, _DWORD *, POINTL *, POINTL *, BRUSHOBJ *, CLIPOBJ **, ROP4))v44)(
                      v97,
                      v71,
                      psoMask,
                      v87,
                      v31,
                      v120,
                      v45,
                      pptlMask,
                      pbo,
                      p_pco,
                      rop4);
              CLIPOBJ_vOffset(v87, -(int)v76, -v74);
              MULTIBRUSH::StoreElement((MULTIBRUSH *)&v90, *((_DWORD *)v112 + 4));
            }
            v27 = v70 & v67;
            goto LABEL_38;
          }
LABEL_73:
          v27 = 0;
LABEL_38:
          v67 = v27;
          if ( v30 )
          {
            top = v30[2].top;
            if ( top >= 0 )
            {
              _InterlockedDecrement((volatile signed __int32 *)Gre::Base::Globals((Gre::Base *)v40) + 8 * v30[2].top + 1072);
            }
            else if ( top == -1 )
            {
              FreeThreadBufferWithTag(v30);
            }
          }
          if ( !(unsigned int)MSURF::bNextSurface((MSURF *)v111) )
            goto LABEL_43;
        }
        if ( !(unsigned int)MULTISURF::bLoadSourceNotMetaDEVBITMAP((MULTISURF *)&p_pvScan0, *((HDEV *)v112 + 6)) )
        {
          v30 = 0LL;
          v75 = 0LL;
          goto LABEL_73;
        }
LABEL_23:
        v28 = v112;
        goto LABEL_24;
      }
      MSURF::vRestore((MSURF *)v111);
    }
    else
    {
LABEL_43:
      v15 = v27;
    }
    MULTISURF::~MULTISURF((MULTISURF *)&p_pvScan0);
    return v15;
  }
  if ( iType == 1 )
    return bBitBltScreenToScreen(v77, psoMask, a4, pxlo, &v98, a7, pptlMask, pbo, pptlBrush, rop4);
  else
    return bBitBltFromScreen(v77, a2, psoMask, a4, pxlo, &v98, a7, pptlMask, pbo, pptlBrush, rop4);
}

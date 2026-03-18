/*
 * XREFs of ?MulAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x140051F70
 * Callers:
 *     <none>
 * Callees:
 *     EngAlphaBlend @ 0x14000A5C0 (EngAlphaBlend.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x14000FB40 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z @ 0x140051074 (-MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z.c)
 *     ?bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z @ 0x14005269C (-bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x140053C44 (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x140054418 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1400546F0 (--1MULTISURF@@QEAA@XZ.c)
 *     ?vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x140054E74 (-vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     OffAlphaBlend @ 0x1400558D4 (OffAlphaBlend.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1400CB47C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ??0MULTISURF@@QEAA@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1401F7F78 (--0MULTISURF@@QEAA@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1403228B4 (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall MulAlphaBlend(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        BLENDOBJ *pBlendObj)
{
  BLENDOBJ *v7; // r14
  unsigned int v8; // edi
  struct _RECTL *v9; // rsi
  struct _RECTL *v12; // rcx
  int v14; // ebx
  struct _RECTL v15; // xmm0
  HDEV hdev; // rax
  int Surface; // eax
  int v18; // r15d
  Gre::Base *v19; // rcx
  int v20; // esi
  struct Gre::Base::SESSION_GLOBALS *v21; // r12
  __int64 v23; // rbx
  SURFOBJ *v24; // rdx
  struct _XLATEOBJ *v25; // r9
  struct _DISPSURF *v26; // rcx
  __int64 v27; // r8
  PVOID *p_pvScan0; // r10
  __int64 v29; // r15
  BOOL (__stdcall *v30)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *); // rcx
  HDEV v31; // rcx
  HDEV pulXlate; // rsi
  __int64 v33; // r14
  struct PALETTE *v34; // rax
  __int64 v35; // rcx
  int v36; // r8d
  ULONG iUniq; // r9d
  FLONG flXlate; // edx
  int v39; // r12d
  __int64 v40; // rcx
  ULONG *v41; // r10
  ULONG v42; // r11d
  int inited; // eax
  BOOL v44; // [rsp+60h] [rbp-A0h]
  int v45; // [rsp+64h] [rbp-9Ch]
  struct Gre::Base::SESSION_GLOBALS *v46; // [rsp+70h] [rbp-90h]
  int v47; // [rsp+78h] [rbp-88h]
  struct _SURFOBJ *v48; // [rsp+80h] [rbp-80h]
  PVOID *v49; // [rsp+88h] [rbp-78h]
  __int64 v51; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v52; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v53; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v54; // [rsp+B8h] [rbp-48h] BYREF
  __int64 *v55; // [rsp+C0h] [rbp-40h]
  __int64 v56; // [rsp+C8h] [rbp-38h] BYREF
  char v57; // [rsp+D0h] [rbp-30h]
  int v58; // [rsp+D4h] [rbp-2Ch]
  __int64 v59; // [rsp+D8h] [rbp-28h]
  __int64 v60; // [rsp+E0h] [rbp-20h]
  __int64 v61; // [rsp+E8h] [rbp-18h]
  _BYTE v62[40]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v63; // [rsp+118h] [rbp+18h]
  char v64; // [rsp+120h] [rbp+20h]
  int v65; // [rsp+124h] [rbp+24h]
  SURFOBJ *psoSrc; // [rsp+148h] [rbp+48h]
  RECTL *prclSrc; // [rsp+150h] [rbp+50h]
  _BYTE v68[56]; // [rsp+160h] [rbp+60h] BYREF
  struct _DISPSURF *v69; // [rsp+198h] [rbp+98h]
  int v70[2]; // [rsp+1A0h] [rbp+A0h]
  struct _CLIPOBJ *v71; // [rsp+1A8h] [rbp+A8h]
  int v72[4]; // [rsp+1B0h] [rbp+B0h]
  _BYTE v73[88]; // [rsp+1C0h] [rbp+C0h] BYREF
  SURFOBJ *psoDest; // [rsp+218h] [rbp+118h]
  RECTL *prclDest; // [rsp+220h] [rbp+120h]
  struct _RECTL v76; // [rsp+230h] [rbp+130h] BYREF

  v7 = pBlendObj;
  v8 = 0;
  v9 = a6;
  v12 = a5;
  v14 = 1;
  v59 = *(_QWORD *)&pBlendObj[4].BlendFunction.BlendOp;
  v15 = *a6;
  v60 = *(_QWORD *)&pBlendObj[6].BlendFunction.BlendOp;
  v61 = *(_QWORD *)&pBlendObj[2].BlendFunction.BlendOp;
  hdev = a2->hdev;
  v48 = a2;
  v56 = 0LL;
  v57 = 0;
  v58 = 0;
  v76 = v15;
  if ( a2->iType == 1 && hdev && ((_DWORD)hdev[10] & 0x20000) != 0 )
  {
    if ( !(unsigned int)MulCopyDeviceToDIB(a2, (struct SURFMEM *)&v56, &v76) )
      goto LABEL_9;
    if ( !v56 )
    {
      v8 = 1;
      goto LABEL_9;
    }
    v12 = a5;
    v9 = &v76;
    v48 = (struct _SURFOBJ *)(v56 + 24);
  }
  v44 = 1;
  if ( a1->iType != 3 || (HIDWORD(a1[1].hsurf) & 9) != 0 )
    v14 = 0;
  Surface = MSURF::bFindSurface((MSURF *)v68, a1, a3, v12);
  v63 = 0LL;
  v18 = Surface;
  v64 = 0;
  v65 = 0;
  MULTISURF::vInit((MULTISURF *)v62, v48, v9);
  if ( v14 )
  {
    MULTISURF::MULTISURF((MULTISURF *)v73, a1, a5);
    v44 = EngAlphaBlend(psoDest, psoSrc, a3, a4, prclDest, prclSrc, pBlendObj);
    v20 = v44;
    MULTISURF::~MULTISURF((MULTISURF *)v73);
  }
  else
  {
    v20 = 1;
  }
  v46 = Gre::Base::Globals(v19);
  v21 = v46;
  if ( v18 )
  {
    do
    {
      v23 = *((_QWORD *)v21 + 472);
      v54 = 0LL;
      v53 = 0LL;
      v52 = 0LL;
      v51 = 0LL;
      if ( !(unsigned int)MULTISURF::bLoadSource((MULTISURF *)v62, v69) )
        goto LABEL_62;
      v24 = psoSrc;
      v25 = a4;
      v26 = v69;
      v27 = *(_QWORD *)v70;
      p_pvScan0 = &psoSrc[-1].pvScan0;
      v49 = &psoSrc[-1].pvScan0;
      v29 = *(_QWORD *)v70 - 24LL;
      if ( !*((_DWORD *)v69 + 6) )
        goto LABEL_17;
      v31 = (HDEV)*((_QWORD *)v69 + 6);
      pulXlate = (HDEV)p_pvScan0[16];
      v33 = *((_QWORD *)v21 + 471);
      if ( ((_DWORD)v31[539] & 0x100) != 0 )
      {
        v34 = DrvRealizeHalftonePalette(v31, 0);
        v24 = psoSrc;
        v33 = (__int64)v34;
        p_pvScan0 = v49;
      }
      v35 = v29;
      if ( !pulXlate )
      {
        if ( !a4 )
          goto LABEL_37;
        if ( a4[1].pulXlate )
        {
          pulXlate = (HDEV)a4[1].pulXlate;
          v36 = 0;
LABEL_40:
          if ( ((_DWORD)pulXlate[6] & 0x800) != 0 )
          {
            v36 = 0x2000;
            if ( v33 != *((_QWORD *)v21 + 471) )
              v36 = 0x4000;
          }
          goto LABEL_43;
        }
        if ( (a4->flXlate & 1) != 0 )
        {
LABEL_37:
          v35 = v29;
          if ( v24 == v48 )
            pulXlate = a1[1].hdev;
        }
        else
        {
          v33 = *(_QWORD *)&a4[2].iSrcType;
          if ( !v33 )
            goto LABEL_61;
          if ( *((_DWORD *)p_pvScan0 + 24) == a1->iBitmapFormat )
            pulXlate = a1[1].hdev;
          v35 = v29;
        }
      }
      v36 = 0;
      if ( pulXlate )
        goto LABEL_40;
LABEL_43:
      v29 = v35;
      if ( a4 )
      {
        iUniq = a4[1].iUniq;
        flXlate = a4[1].flXlate;
        v39 = *(_DWORD *)&a4[1].iSrcType;
        v45 = iUniq;
      }
      else
      {
        flXlate = 0;
        v45 = 0;
        v39 = 0;
        iUniq = 0;
      }
      v55 = (__int64 *)(v35 + 128);
      v40 = *(_QWORD *)(v35 + 128);
      v47 = flXlate;
      if ( a4 )
      {
        v41 = a4[2].pulXlate;
        v42 = a4[3].iUniq;
      }
      else
      {
        v41 = 0LL;
        v47 = flXlate;
        v42 = 0;
      }
      if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                            (Gre::Base *)&v54,
                            (__int64)v41,
                            v42,
                            (__int64)pulXlate,
                            v40,
                            *((_QWORD *)v46 + 471),
                            v33,
                            flXlate,
                            v39,
                            iUniq,
                            v36)
        || (*(_QWORD *)&v76.left = v54,
            !(unsigned int)EXLATEOBJ::bInitXlateObj((Gre::Base *)&v53, 0LL, 0, *v55, v23, v33, v33, v47, v39, v45, 0))
        || (*(_QWORD *)&pBlendObj[4].BlendFunction.BlendOp = v53,
            !(unsigned int)EXLATEOBJ::bInitXlateObj((Gre::Base *)&v52, 0LL, 0, v23, *v55, v33, v33, v47, v39, v45, 0)) )
      {
        v21 = v46;
LABEL_61:
        v7 = pBlendObj;
        goto LABEL_62;
      }
      v24 = psoSrc;
      *(_QWORD *)&pBlendObj[6].BlendFunction.BlendOp = v52;
      if ( v24 == v48 )
      {
        v7 = pBlendObj;
        v21 = v46;
        goto LABEL_56;
      }
      inited = EXLATEOBJ::bInitXlateObj(
                 (Gre::Base *)&v51,
                 0LL,
                 0,
                 (__int64)v49[16],
                 v23,
                 *((_QWORD *)v46 + 471),
                 v33,
                 v47,
                 v39,
                 v45,
                 0);
      v7 = pBlendObj;
      v21 = v46;
      if ( inited )
      {
        v24 = psoSrc;
        *(_QWORD *)&pBlendObj[2].BlendFunction.BlendOp = v51;
LABEL_56:
        p_pvScan0 = v49;
        v25 = *(struct _XLATEOBJ **)&v76.left;
        v26 = v69;
        v27 = *(_QWORD *)v70;
LABEL_17:
        if ( (*(_DWORD *)(v27 + 88) & 0x10000) != 0 )
          v30 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(*((_QWORD *)v26 + 7) + 3248LL);
        else
          v30 = EngAlphaBlend;
        if ( v24->iType == 1 && p_pvScan0[6] != *(PVOID *)(v29 + 48) )
          v30 = EngAlphaBlend;
        *(_QWORD *)&v76.left = 0LL;
        v20 = OffAlphaBlend(
                (int)v30,
                v72[0],
                v27,
                (int)&v76,
                (__int64)v24,
                v71,
                (__int64)v25,
                (__int64)a5,
                (__int64)prclSrc,
                (__int64)v7) & v44;
        goto LABEL_21;
      }
LABEL_62:
      v20 = 0;
LABEL_21:
      *(_QWORD *)&v7[4].BlendFunction.BlendOp = v59;
      *(_QWORD *)&v7[6].BlendFunction.BlendOp = v60;
      *(_QWORD *)&v7[2].BlendFunction.BlendOp = v61;
      v44 = v20;
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v51);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v52);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v53);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v54);
    }
    while ( (unsigned int)MSURF::bNextSurface((MSURF *)v68) );
  }
  MULTISURF::~MULTISURF((MULTISURF *)v62);
  v8 = v20;
LABEL_9:
  SURFMEM::~SURFMEM((SURFMEM *)&v56);
  return v8;
}

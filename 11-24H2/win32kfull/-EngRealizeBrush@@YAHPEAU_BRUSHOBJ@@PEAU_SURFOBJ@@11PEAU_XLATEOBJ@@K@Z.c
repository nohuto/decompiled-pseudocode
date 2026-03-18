/*
 * XREFs of ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x140126DA0
 * Callers:
 *     <none>
 * Callees:
 *     EngHTBlt @ 0x14000C53C (EngHTBlt.c)
 *     EngCopyBits @ 0x14000DA80 (EngCopyBits.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x14000FB40 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1400CB47C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     PALLOCMEM @ 0x1400FEC9C (PALLOCMEM.c)
 *     ?vRelease@HTSEMOBJ@@QEAAXXZ @ 0x140127728 (-vRelease@HTSEMOBJ@@QEAAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$09P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140127760 (--$GreReleaseSemaphoreCommon@$09P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1401277C8 (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x140127884 (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 *     EngStretchBlt @ 0x140136200 (EngStretchBlt.c)
 *     ??$GreAcquireSemaphore@$09$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401A23F4 (--$GreAcquireSemaphore@$09$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall EngRealizeBrush(
        struct _BRUSHOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _SURFOBJ *a4,
        struct _XLATEOBJ *a5,
        unsigned int a6)
{
  __int64 p_sizlBitmap; // rbx
  __int64 v7; // r13
  unsigned __int64 v8; // r15
  __int64 p_iBitmapFormat; // rax
  __int64 v10; // rdi
  unsigned __int16 *v11; // r14
  unsigned int v12; // esi
  __int64 p_hdev; // rax
  __int64 v14; // rbx
  Gre::Base *v15; // rcx
  struct Gre::Base::SESSION_GLOBALS *v16; // rax
  unsigned __int64 v17; // rcx
  LONG v18; // esi
  __int64 v19; // rax
  unsigned __int64 v20; // r12
  unsigned int v21; // r12d
  unsigned __int64 v22; // rcx
  unsigned int v23; // ecx
  unsigned int v24; // r15d
  __int64 v25; // r14
  LONG v26; // eax
  LONG y; // r15d
  unsigned int v28; // eax
  Gre::Base *v29; // rcx
  struct _BRUSHOBJ *v30; // r12
  struct Gre::Base::SESSION_GLOBALS *v31; // rax
  unsigned __int64 v32; // rcx
  int v33; // edx
  SURFOBJ *v34; // rcx
  LONG v35; // eax
  struct Gre::Base::SESSION_GLOBALS *v36; // rax
  unsigned __int64 v37; // r13
  Gre::Base *v38; // rcx
  struct Gre::Base::SESSION_GLOBALS *v39; // rax
  struct Gre::Base::SESSION_GLOBALS *v41; // rax
  int v42; // eax
  int v43; // ebx
  LONG v44; // esi
  void *v45; // r8
  Gre::Base *v46; // rcx
  struct Gre::Base::SESSION_GLOBALS *v47; // rax
  unsigned __int64 v48; // rcx
  SURFOBJ *v49; // rcx
  LONG v50; // eax
  struct Gre::Base::SESSION_GLOBALS *v51; // rax
  int v52; // r14d
  unsigned __int64 v53; // rdx
  __int64 v54; // rcx
  char v55; // dl
  ULONG iSolidColor; // eax
  int v57; // ecx
  struct XLATE *v58; // r8
  __int64 v59; // rax
  __int64 v60; // rdx
  SURFOBJ *v61; // rcx
  XLATEOBJ *v62; // r15
  __int64 v63; // r12
  SURFOBJ *v64; // rcx
  LONG right; // eax
  LONG v66; // ecx
  __int64 v67; // rax
  int v68; // [rsp+60h] [rbp-A0h]
  Gre::Base *v69; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v70; // [rsp+70h] [rbp-90h]
  int v71; // [rsp+74h] [rbp-8Ch]
  XLATEOBJ *pxlo; // [rsp+78h] [rbp-88h]
  struct _BRUSHOBJ *v73; // [rsp+80h] [rbp-80h] BYREF
  POINTL pptlHTOrg; // [rsp+88h] [rbp-78h] BYREF
  __int64 v75; // [rsp+90h] [rbp-70h]
  int v76; // [rsp+98h] [rbp-68h]
  int v77; // [rsp+9Ch] [rbp-64h] BYREF
  __int64 v78; // [rsp+A0h] [rbp-60h] BYREF
  char v79; // [rsp+A8h] [rbp-58h]
  int v80; // [rsp+ACh] [rbp-54h]
  POINTL pptlSrc; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v82; // [rsp+B8h] [rbp-48h] BYREF
  char v83; // [rsp+C0h] [rbp-40h]
  int v84; // [rsp+C4h] [rbp-3Ch]
  __int64 v85; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v86; // [rsp+D0h] [rbp-30h]
  __int128 v87; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v88; // [rsp+E8h] [rbp-18h]
  __int64 v89; // [rsp+F8h] [rbp-8h] BYREF
  int v90; // [rsp+100h] [rbp+0h]
  __int64 *v91; // [rsp+108h] [rbp+8h]
  unsigned __int64 v92; // [rsp+110h] [rbp+10h]
  RECTL prclDest; // [rsp+120h] [rbp+20h] BYREF
  RECTL prclSrc; // [rsp+130h] [rbp+30h] BYREF

  p_sizlBitmap = (__int64)&a3->sizlBitmap;
  pxlo = a5;
  v73 = a1;
  v7 = (__int64)a3;
  v8 = (unsigned __int64)&a4[-1].pvScan0 & -(__int64)(a4 != 0LL);
  v76 = 0;
  v92 = v8;
  p_iBitmapFormat = (__int64)&a2->iBitmapFormat;
  v86 = 0LL;
  v71 = 0;
  if ( !a2 )
    p_iBitmapFormat = 96LL;
  pptlSrc = 0LL;
  v68 = 0;
  LODWORD(v10) = 0;
  v11 = 0LL;
  prclDest = 0LL;
  v12 = *(_DWORD *)p_iBitmapFormat;
  if ( !a3 )
    p_sizlBitmap = 56LL;
  v70 = *(_DWORD *)p_iBitmapFormat;
  p_hdev = (__int64)&a2->hdev;
  if ( !a2 )
    p_hdev = 48LL;
  v14 = *(_QWORD *)p_sizlBitmap;
  v91 = (__int64 *)p_hdev;
  v87 = 0LL;
  v85 = *(_QWORD *)p_hdev;
  v88 = 0LL;
  pptlHTOrg = (POINTL)v14;
  v69 = Gre::Base::Globals((Gre::Base *)0x30);
  v77 = 1;
  v16 = Gre::Base::Globals(v15);
  GreAcquireSemaphore<10,>(v16);
  if ( PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v85) || (unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v85, 0LL) )
    v11 = (unsigned __int16 *)PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v85);
  v17 = v12 - 1;
  if ( v12 == 1 )
  {
    if ( (((_DWORD)v14 - 8) & 0xFFFFFFE7) != 0 || (_DWORD)v14 == 24 )
    {
      v19 = 1LL;
      v18 = (v14 + 63) & 0xFFFFFFE0;
    }
    else
    {
      v18 = 32;
      v19 = 1LL;
      if ( !v11 )
        goto LABEL_72;
      v17 = v11[4];
      switch ( (_DWORD)v17 )
      {
        case 0xA:
          v18 = 160;
          break;
        case 0xC:
          v18 = 96;
          break;
        case 0xE:
          v18 = 224;
          break;
        default:
          goto LABEL_72;
      }
      v68 = 1;
    }
LABEL_72:
    if ( v18 < (int)v14 )
      goto LABEL_44;
    goto LABEL_15;
  }
  v17 = v12 - 2;
  if ( v12 == 2 )
  {
    if ( (_DWORD)v14 == 8 )
    {
      v18 = 8;
      v19 = 4LL;
      goto LABEL_15;
    }
    v19 = 4LL;
    v18 = (v14 + 15) & 0xFFFFFFF8;
    goto LABEL_72;
  }
  v17 = v12 - 3;
  if ( v12 == 3 )
  {
    v19 = 8LL;
    v18 = (v14 + 7) & 0xFFFFFFFC;
    goto LABEL_72;
  }
  v17 = v12 - 4;
  if ( v12 == 4 )
  {
    v19 = 16LL;
    v18 = (v14 + 7) & 0xFFFFFFFC;
    goto LABEL_72;
  }
  if ( v12 == 5 )
  {
    v19 = 24LL;
    v18 = (v14 + 7) & 0xFFFFFFFC;
    goto LABEL_72;
  }
  v18 = v14;
  v19 = 32LL;
LABEL_15:
  v20 = v19 * (unsigned int)v18;
  if ( v20 > 0xFFFFFFFF )
    goto LABEL_44;
  v21 = (unsigned int)v20 >> 3;
  v22 = v21 * (unsigned __int64)(unsigned int)pptlHTOrg.y;
  v82 = v22;
  if ( v22 > 0xFFFFFFFF )
    goto LABEL_45;
  v23 = v22 + 80;
  if ( v23 < 0x50 )
    goto LABEL_45;
  if ( v8 )
  {
    v10 = *(_QWORD *)(v8 + 56);
    v86 = v10;
    if ( (((_DWORD)v10 - 8) & 0xFFFFFFE7) != 0 || (_DWORD)v10 == 24 )
      v52 = (v10 + 63) & 0xFFFFFFE0;
    else
      v52 = 32;
    v71 = v52;
    if ( v52 < (int)v10 )
      goto LABEL_45;
    v53 = (unsigned int)(v52 >> 3) * (unsigned __int64)HIDWORD(v86);
    v76 = v52 >> 3;
    if ( v53 > 0xFFFFFFFF || (unsigned int)v53 + v23 < v23 )
      goto LABEL_45;
    v23 += v53;
  }
  v24 = v23 + 76;
  if ( v23 >= 0xFFFFFFB4 )
    goto LABEL_45;
  if ( *((_QWORD *)v69 + 4) )
  {
    v25 = _InterlockedExchange64((volatile __int64 *)v69 + 4, 0LL);
    if ( v25 )
    {
      if ( v24 > v23 && *(_DWORD *)(v25 + 4) >= v24 )
        goto LABEL_26;
      Win32FreePool((void *)v25);
    }
  }
  v25 = PALLOCMEM(v24, 1919051079LL);
  if ( !v25 )
  {
LABEL_45:
    HTSEMOBJ::vRelease((HTSEMOBJ *)&v77);
    return 0LL;
  }
LABEL_26:
  v73[1].pvRbrush = (PVOID)v25;
  v26 = v14;
  *(_DWORD *)(v25 + 4) = v24;
  if ( v68 )
    v26 = v18;
  y = pptlHTOrg.y;
  *(_DWORD *)(v25 + 20) = v26;
  *(_QWORD *)(v25 + 32) = v25 + 76;
  v28 = v70;
  *(_DWORD *)(v25 + 72) = v70;
  *(_DWORD *)(v25 + 28) = v21;
  *(_DWORD *)(v25 + 16) = v18;
  *(_DWORD *)(v25 + 24) = y;
  *(_QWORD *)&v88 = 0LL;
  v78 = 0LL;
  v79 = 0;
  v80 = 0;
  *(_QWORD *)&v87 = __PAIR64__(v18, v28);
  DWORD2(v87) = y;
  DWORD2(v88) = 1;
  SURFMEM::bCreateDIB(
    (SURFMEM *)&v78,
    (struct _DEVBITMAPINFO *)&v87,
    *(void **)(v25 + 32),
    0LL,
    0,
    0LL,
    0LL,
    0,
    1,
    0,
    0);
  if ( v78 )
  {
    v30 = v73;
    prclDest.right = v14;
    prclDest.bottom = y;
    LODWORD(v75) = v73[2].iSolidColor;
    LODWORD(v69) = *(&v73[2].iSolidColor + 1);
    v31 = Gre::Base::Globals(v29);
    GreReleaseSemaphoreCommon<10,void (*)(HSEMAPHORE__ *)>(
      GreReleaseSemaphoreExclusiveInternal,
      *(_QWORD *)v31 + 1352LL);
    if ( v70 == 1 )
    {
      if ( a6 < 0xC )
        goto LABEL_32;
      v32 = (unsigned int)v75;
      v33 = (int)v69;
      if ( (_DWORD)v75 != (_DWORD)v69 )
        goto LABEL_92;
    }
    else
    {
      v32 = (unsigned int)v75;
      v33 = (int)v69;
    }
    if ( v70 == 2
      && (v73[3].iSolidColor & 5) != 0
      && ((_DWORD)v32 != v33 || !_bittest((const signed __int32 *)&v73[5], 0x11u)) )
    {
LABEL_92:
      v90 = 0;
      v89 = 0LL;
      v54 = *v91;
      pptlHTOrg = 0LL;
      prclSrc = prclDest;
      *(_QWORD *)(v78 + 48) = v54;
      v69 = 0LL;
      v75 = 0LL;
      if ( a6 >= 6 )
      {
        v55 = 0;
        if ( !_bittest((const signed __int32 *)&v30[5], 0x11u) )
          goto LABEL_105;
      }
      else
      {
        v55 = 1;
      }
      iSolidColor = v30[3].iSolidColor;
      if ( (iSolidColor & 4) != 0 || (iSolidColor & 1) != 0 )
      {
        v57 = *(&v30[2].iSolidColor + 1);
        if ( v55 )
        {
          HIDWORD(v73) = v30[1].iSolidColor;
          LODWORD(v73) = v57;
        }
        else
        {
          LODWORD(v73) = v30[2].iSolidColor;
          HIDWORD(v73) = v57;
        }
        if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v89, 1u, 2u, (const unsigned int *)&v73, 0, 0, 0, 0x400u, 1)
          && (unsigned int)EXLATEOBJ::bInitXlateObj(
                             (Gre::Base *)&v69,
                             *(_QWORD *)&v30[2].flColorType,
                             v30[3].iSolidColor,
                             v89,
                             *((_QWORD *)v30[3].pvRbrush + 16),
                             *(_QWORD *)&v30[4].iSolidColor,
                             *(_QWORD *)&v30[4].iSolidColor,
                             v30[2].iSolidColor,
                             *(&v30[2].iSolidColor + 1),
                             0xFFFFFF,
                             0) )
        {
          v58 = v69;
          v59 = v7 + 104;
          pxlo = (XLATEOBJ *)v69;
          if ( !v7 )
            v59 = 128LL;
          v75 = *(_QWORD *)v59;
          *(_QWORD *)v59 = 0LL;
          goto LABEL_106;
        }
      }
LABEL_105:
      v58 = (struct XLATE *)pxlo;
LABEL_106:
      if ( v70 == 1 && v68 )
      {
        v60 = v7;
        prclDest.right = v18;
        if ( !v7 )
          v60 = 24LL;
        if ( v78 )
          v61 = (SURFOBJ *)(v78 + 24);
        else
          v61 = 0LL;
        EngHTBlt(v61, (SURFOBJ *)v60, 0LL, 0LL, v58, 0LL, (__int64 *)&pptlHTOrg, &prclDest, &prclSrc.left, 0LL, 64, 0LL);
      }
      else if ( prclDest.left != v18 )
      {
        v62 = pxlo;
        v63 = v7;
        if ( !v7 )
          v63 = 24LL;
        do
        {
          v64 = (SURFOBJ *)(v78 + 24);
          if ( !v78 )
            v64 = 0LL;
          EngStretchBlt(v64, (SURFOBJ *)v63, 0LL, 0LL, v62, 0LL, &pptlHTOrg, &prclDest, &prclSrc, 0LL, 4u);
          right = prclDest.right;
          prclDest.left = prclDest.right;
          v66 = v14 + prclDest.right;
          if ( (int)v14 + prclDest.right > v18 )
            v66 = v18;
          prclDest.right = v66;
        }
        while ( right != v18 );
      }
      if ( v75 )
      {
        v67 = v7 + 104;
        if ( !v7 )
          v67 = 128LL;
        *(_QWORD *)v67 = v75;
      }
      EXLATEOBJ::vAltUnlock(&v69);
      PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v89);
LABEL_40:
      v36 = Gre::Base::Globals((Gre::Base *)v32);
      GreAcquireSemaphore<10,>(v36);
      v37 = v92;
      if ( !v92 )
      {
        *(_QWORD *)(v25 + 56) = 0LL;
LABEL_42:
        SURFMEM::~SURFMEM((SURFMEM *)&v78);
        v39 = Gre::Base::Globals(v38);
        GreReleaseSemaphoreCommon<10,void (*)(HSEMAPHORE__ *)>(
          GreReleaseSemaphoreExclusiveInternal,
          *(_QWORD *)v39 + 1352LL);
        return 1LL;
      }
      v42 = v76;
      v43 = v71;
      v44 = HIDWORD(v86);
      *(_QWORD *)(v25 + 56) = v25 + (unsigned int)v82 + 76LL;
      *(_DWORD *)(v25 + 64) = v42;
      *(_DWORD *)(v25 + 40) = v43;
      *(_DWORD *)(v25 + 44) = v10;
      *(_DWORD *)(v25 + 48) = v44;
      LODWORD(v87) = 1;
      *(_QWORD *)((char *)&v87 + 4) = __PAIR64__(v44, v43);
      *(_QWORD *)&v88 = 0LL;
      DWORD2(v88) = 1;
      v45 = *(void **)(v25 + 56);
      v82 = 0LL;
      v83 = 0;
      v84 = 0;
      SURFMEM::bCreateDIB((SURFMEM *)&v82, (struct _DEVBITMAPINFO *)&v87, v45, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
      if ( v82 )
      {
        pptlSrc = 0LL;
        *(_QWORD *)&prclDest.left = 0LL;
        prclDest.right = v10;
        prclDest.bottom = v44;
        v47 = Gre::Base::Globals(v46);
        GreReleaseSemaphoreCommon<10,void (*)(HSEMAPHORE__ *)>(
          GreReleaseSemaphoreExclusiveInternal,
          *(_QWORD *)v47 + 1352LL);
        if ( prclDest.left != v43 )
        {
          do
          {
            v49 = (SURFOBJ *)(v82 + 24);
            if ( !v82 )
              v49 = 0LL;
            EngCopyBits(v49, (SURFOBJ *)(v37 + 24), 0LL, 0LL, &prclDest, &pptlSrc);
            v50 = prclDest.right;
            prclDest.left = prclDest.right;
            v48 = (unsigned int)(v10 + prclDest.right);
            if ( (int)v48 > v43 )
              v48 = (unsigned int)v43;
            prclDest.right = v48;
          }
          while ( v50 != v43 );
        }
        v51 = Gre::Base::Globals((Gre::Base *)v48);
        GreAcquireSemaphore<10,>(v51);
        SURFMEM::~SURFMEM((SURFMEM *)&v82);
        goto LABEL_42;
      }
      SURFMEM::~SURFMEM((SURFMEM *)&v82);
      SURFMEM::~SURFMEM((SURFMEM *)&v78);
      goto LABEL_45;
    }
LABEL_32:
    if ( prclDest.left != v18 )
    {
      if ( !v7 )
        v7 = 24LL;
      do
      {
        if ( v78 )
          v34 = (SURFOBJ *)(v78 + 24);
        else
          v34 = 0LL;
        EngCopyBits(v34, (SURFOBJ *)v7, 0LL, pxlo, &prclDest, &pptlSrc);
        v35 = prclDest.right;
        prclDest.left = prclDest.right;
        v32 = (unsigned int)(v14 + prclDest.right);
        if ( (int)v32 > v18 )
          v32 = (unsigned int)v18;
        prclDest.right = v32;
      }
      while ( v35 != v18 );
    }
    goto LABEL_40;
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v78);
LABEL_44:
  v41 = Gre::Base::Globals((Gre::Base *)v17);
  GreReleaseSemaphoreCommon<10,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal, *(_QWORD *)v41 + 1352LL);
  return 0LL;
}

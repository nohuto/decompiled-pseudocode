/*
 * XREFs of SimBitBlt @ 0x14021C234
 * Callers:
 *     EngBitBlt @ 0x1400179A0 (EngBitBlt.c)
 *     ?GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z @ 0x14001A5E0 (-GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z.c)
 * Callees:
 *     EngBitBlt @ 0x1400179A0 (EngBitBlt.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x140018520 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1401226C8 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?vUnLock@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1402FEE34 (-vUnLock@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

int __fastcall SimBitBlt(
        SURFOBJ *psoTrg,
        SURFOBJ *psoSrc,
        SURFOBJ *a3,
        CLIPOBJ *a4,
        XLATEOBJ *pxlo,
        RECTL *prclTrg,
        POINTL *pptlSrc,
        POINTL *pptlMask,
        BRUSHOBJ *a9,
        POINTL *pptlBrush,
        ROP4 rop4,
        DEVLOCKBLTOBJ *a12)
{
  SURFOBJ *v13; // r14
  char v14; // r10
  int v15; // r10d
  unsigned __int64 v16; // r15
  __int16 v17; // ax
  __int64 v18; // rbx
  __int64 p_iType; // rax
  SURFOBJ *v20; // rdx
  int (*v21)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  int v23; // edi
  int v24; // esi
  __int64 v25; // rcx
  RECTL v26; // xmm0
  POINTL v27; // rax
  int top; // r9d
  LONG v29; // eax
  int left; // r8d
  int v31; // eax
  int bottom; // edx
  int right; // ecx
  LONG v34; // ecx
  LONG v35; // edx
  POINTL *v36; // r12
  BOOL (__stdcall *v37)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rsi
  __int64 v38; // rax
  __int64 p_hdev; // rdi
  __int64 p_hsurf; // r12
  __int64 v41; // rdi
  int v42; // eax
  struct Gre::Base::SESSION_GLOBALS *v43; // rax
  int v44; // eax
  Gre::Base *v45; // rcx
  struct Gre::Base::SESSION_GLOBALS *v46; // rax
  struct Gre::Base::SESSION_GLOBALS *v47; // rdi
  BOOL (__stdcall *v48)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  SURFOBJ *v49; // r13
  bool v50; // zf
  int v51; // ebx
  POINTL v52; // [rsp+68h] [rbp-98h] BYREF
  SURFOBJ *psoMask; // [rsp+70h] [rbp-90h]
  int v54; // [rsp+78h] [rbp-88h]
  POINTL v55; // [rsp+80h] [rbp-80h] BYREF
  POINTL *v56; // [rsp+88h] [rbp-78h]
  XLATEOBJ *v57; // [rsp+90h] [rbp-70h]
  __int64 v58; // [rsp+98h] [rbp-68h] BYREF
  char v59; // [rsp+A0h] [rbp-60h]
  int v60; // [rsp+A4h] [rbp-5Ch]
  __int64 v61; // [rsp+A8h] [rbp-58h] BYREF
  char v62; // [rsp+B0h] [rbp-50h]
  int v63; // [rsp+B4h] [rbp-4Ch]
  __int64 v64; // [rsp+B8h] [rbp-48h] BYREF
  POINTL v65; // [rsp+C0h] [rbp-40h] BYREF
  BRUSHOBJ *pbo; // [rsp+C8h] [rbp-38h]
  __int64 v67; // [rsp+D0h] [rbp-30h] BYREF
  CLIPOBJ *v68; // [rsp+D8h] [rbp-28h]
  POINTL *v69; // [rsp+E0h] [rbp-20h]
  DEVLOCKBLTOBJ *v70; // [rsp+E8h] [rbp-18h]
  SURFOBJ *v71; // [rsp+F0h] [rbp-10h]
  __int64 v72; // [rsp+F8h] [rbp-8h] BYREF
  _DWORD v73[4]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v74; // [rsp+110h] [rbp+10h]
  int v75; // [rsp+118h] [rbp+18h]
  int v76; // [rsp+11Ch] [rbp+1Ch]
  _DWORD v77[4]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v78; // [rsp+130h] [rbp+30h]
  int v79; // [rsp+138h] [rbp+38h]
  int v80; // [rsp+13Ch] [rbp+3Ch]
  RECTL v81; // [rsp+140h] [rbp+40h] BYREF
  RECTL v82; // [rsp+150h] [rbp+50h] BYREF

  v13 = psoSrc;
  pbo = a9;
  v70 = a12;
  v71 = psoTrg;
  v68 = a4;
  psoMask = a3;
  v14 = gajRop3[(unsigned __int8)rop4] | gajRop3[BYTE1(rop4)];
  v57 = pxlo;
  v15 = v14 & 0xD4;
  v56 = pptlSrc;
  v69 = pptlBrush;
  LODWORD(v64) = v15;
  v16 = (unsigned __int64)&psoTrg[-1].pvScan0 & -(__int64)(psoTrg != 0LL);
  v17 = *(_WORD *)(v16 + 0x64);
  v18 = *(_QWORD *)(v16 + 0x30);
  if ( !v17 )
  {
    if ( !v15 )
      goto LABEL_6;
    p_iType = (__int64)&psoSrc->iType;
    if ( !psoSrc )
      p_iType = 100LL;
    if ( !*(_WORD *)p_iType )
    {
LABEL_6:
      v20 = psoMask;
      if ( !psoMask )
      {
        if ( (*(_DWORD *)(v18 + 40) & 0x8000) != 0 )
          return EngBitBlt(psoTrg, v13, 0LL, a4, pxlo, prclTrg, pptlSrc, pptlMask, pbo, pptlBrush, rop4);
        v21 = SURFACE::pfnBitBlt((SURFACE *)v16);
        return ((__int64 (__fastcall *)(SURFOBJ *, SURFOBJ *, _QWORD, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))v21)(
                 psoTrg,
                 v13,
                 0LL,
                 v68,
                 v57,
                 prclTrg,
                 v56,
                 pptlMask,
                 pbo,
                 pptlBrush,
                 rop4);
      }
      goto LABEL_15;
    }
    goto LABEL_14;
  }
  if ( v17 != 1 || !v18 )
  {
LABEL_14:
    v20 = psoMask;
    goto LABEL_15;
  }
  v20 = psoMask;
  if ( (*(_DWORD *)(v18 + 40) & 0x20000) != 0 )
  {
    v23 = *(_DWORD *)(v18 + 2576);
    v24 = *(_DWORD *)(v18 + 2580);
    LODWORD(v56) = v23 + *(_DWORD *)(((unsigned __int64)&psoTrg[-1].pvScan0 & -(__int64)(psoTrg != 0LL)) + 0x38);
    v25 = (unsigned int)(v24 + *(_DWORD *)(((unsigned __int64)&psoTrg[-1].pvScan0 & -(__int64)(psoTrg != 0LL)) + 0x3C));
    goto LABEL_16;
  }
LABEL_15:
  v23 = 0;
  v24 = 0;
  LODWORD(v56) = *(_DWORD *)(((unsigned __int64)&psoTrg[-1].pvScan0 & -(__int64)(psoTrg != 0LL)) + 0x38);
  v25 = *(unsigned int *)(((unsigned __int64)&psoTrg[-1].pvScan0 & -(__int64)(psoTrg != 0LL)) + 0x3C);
LABEL_16:
  v26 = *prclTrg;
  v54 = v25;
  v52 = 0LL;
  v27.y = 0;
  v55 = 0LL;
  v81 = v26;
  if ( v15 )
  {
    v25 = (__int64)*pptlSrc;
    v52 = *pptlSrc;
  }
  if ( v20 )
  {
    if ( (unsigned int)bUMPDSecurityGateEx(v25, (__int64)v20) && !pptlMask )
      return 0;
    v27 = *pptlMask;
    v15 = v64;
    v55 = *pptlMask;
  }
  top = v81.top;
  if ( v81.top < v24 )
  {
    v81.top = v24;
    v52.y += v24 - top;
    v29 = v24 + v27.y - top;
    top = v24;
    v55.y = v29;
  }
  left = v81.left;
  if ( v81.left < v23 )
  {
    v81.left = v23;
    v52.x += v23 - left;
    v31 = v23 - left;
    left = v23;
    v55.x += v31;
  }
  bottom = v81.bottom;
  right = v81.right;
  if ( v81.bottom > v54 )
    bottom = v54;
  v81.bottom = bottom;
  if ( v81.right > (int)v56 )
    right = (int)v56;
  v81.right = right;
  if ( top >= bottom || left >= right )
    return 1;
  v34 = right - left;
  *(_QWORD *)&v82.left = 0LL;
  v35 = bottom - top;
  v82.right = v34;
  v82.bottom = v35;
  v36 = &v52;
  if ( *(_DWORD *)(v16 + 96) != *(_DWORD *)(v18 + 2092) )
    return 0;
  v61 = 0LL;
  v37 = EngCopyBits;
  v62 = 0;
  v63 = 0;
  if ( v15 )
  {
    v38 = (__int64)&v13->iType;
    if ( !v13 )
      v38 = 100LL;
    if ( *(_WORD *)v38 )
    {
      p_hdev = (__int64)&v13->hdev;
      p_hsurf = (__int64)&v13[1].hsurf;
      v73[1] = v34;
      if ( !v13 )
        p_hdev = 48LL;
      v73[2] = v35;
      v73[0] = *(_DWORD *)(v18 + 2092);
      if ( !v13 )
        p_hsurf = 112LL;
      v41 = *(_QWORD *)p_hdev;
      v73[3] = 0;
      v42 = *(_DWORD *)p_hsurf & 0x40000;
      v76 = 0;
      v75 = v42;
      v74 = 0LL;
      if ( !SURFMEM::bCreateDIB((SURFMEM *)&v61, (struct _DEVBITMAPINFO *)v73, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
        goto LABEL_43;
      if ( (*(_DWORD *)p_hsurf & 0x400) != 0 )
        (*(void (__fastcall **)(__int64, SURFOBJ *, _QWORD, XLATEOBJ *, RECTL *, POINTL *))(v41 + 2832))(
          (v61 + 24) & -(__int64)(v61 != 0),
          v13,
          0LL,
          v57,
          &v82,
          &v52);
      else
        ((void (__fastcall *)(__int64, SURFOBJ *, _QWORD, XLATEOBJ *, RECTL *, POINTL *))EngCopyBits)(
          (v61 + 24) & -(__int64)(v61 != 0),
          v13,
          0LL,
          v57,
          &v82,
          &v52);
      v36 = (POINTL *)&v64;
      v64 = 0LL;
      v13 = (SURFOBJ *)((v61 + 24) & -(__int64)(v61 != 0));
      v43 = Gre::Base::Globals((Gre::Base *)(v61 + 24));
      v35 = v82.bottom;
      v34 = v82.right;
      v57 = (XLATEOBJ *)((char *)v43 + 4552);
    }
  }
  v77[3] = 0;
  v80 = 0;
  v77[0] = *(_DWORD *)(v18 + 2092);
  v44 = *(_DWORD *)(v16 + 112) & 0x40000;
  v77[1] = v34;
  v77[2] = v35;
  v79 = v44;
  v78 = 0LL;
  v58 = 0LL;
  v59 = 0;
  v60 = 0;
  SURFMEM::bCreateDIB((SURFMEM *)&v58, (struct _DEVBITMAPINFO *)v77, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
  if ( !v58 )
  {
    SURFMEM::~SURFMEM((SURFMEM *)&v58);
LABEL_43:
    SURFMEM::~SURFMEM((SURFMEM *)&v61);
    return 0;
  }
  v67 = *(_QWORD *)&v81.left;
  v65 = 0LL;
  if ( v69 )
  {
    v65.x = v69->x - v81.left;
    v65.y = v69->y - v81.top;
  }
  if ( (*(_DWORD *)(v18 + 40) & 0x80u) != 0 && v70 )
    DEVLOCKBLTOBJ::vUnLock(v70);
  v46 = Gre::Base::Globals(v45);
  v47 = v46;
  if ( (*(_DWORD *)(v16 + 112) & 0x400) != 0 )
    v48 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v18 + 2832);
  else
    v48 = EngCopyBits;
  v49 = v71;
  ((void (__fastcall *)(__int64, SURFOBJ *, _QWORD, char *, RECTL *, __int64 *))v48)(
    (v58 + 24) & -(__int64)(v58 != 0),
    v71,
    0LL,
    (char *)v46 + 4552,
    &v82,
    &v67);
  EngBitBlt((SURFOBJ *)((v58 + 24) & -(__int64)(v58 != 0)), v13, psoMask, 0LL, v57, &v82, v36, &v55, pbo, &v65, rop4);
  ++*(_DWORD *)(v16 + 92);
  v50 = (*(_DWORD *)(v16 + 112) & 0x400) == 0;
  v72 = 0LL;
  if ( !v50 )
    v37 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v18 + 2832);
  v51 = ((__int64 (__fastcall *)(SURFOBJ *, __int64, CLIPOBJ *, char *, RECTL *, __int64 *))v37)(
          v49,
          (v58 + 24) & -(__int64)(v58 != 0),
          v68,
          (char *)v47 + 4552,
          &v81,
          &v72);
  SURFMEM::~SURFMEM((SURFMEM *)&v58);
  SURFMEM::~SURFMEM((SURFMEM *)&v61);
  return v51;
}

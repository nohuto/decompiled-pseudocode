/*
 * XREFs of ?SpPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_POINTFIX@@PEAU_RECTL@@4K@Z @ 0x1401412F0
 * Callers:
 *     <none>
 * Callees:
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1400505D4 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1400579FC (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x140058164 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140060BD4 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     OffPlgBlt @ 0x140141770 (OffPlgBlt.c)
 *     EngPlgBlt @ 0x140141960 (EngPlgBlt.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

BOOL __fastcall SpPlgBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        XLATEOBJ *pxlo,
        COLORADJUSTMENT *pca,
        POINTL *pptlBrushOrg,
        POINTFIX *pptfx,
        struct _RECTL *a9,
        struct _POINTL *a10,
        ULONG iMode)
{
  int v11; // r12d
  int v14; // r13d
  FIX x; // ecx
  BOOL v16; // r10d
  bool v17; // zf
  bool v18; // sf
  bool v19; // of
  FIX y; // ecx
  __int64 v21; // r10
  BOOL v22; // eax
  __int64 v23; // r11
  HDEV hdev; // rax
  CLIPOBJ *v25; // r13
  BOOL (__stdcall *v26)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG); // rcx
  struct _SURFOBJ *v27; // rsi
  PVOID *p_pvScan0; // rbx
  int hsurf; // eax
  int v30; // eax
  PVOID *v31; // rdi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  int v51; // [rsp+70h] [rbp-90h]
  CLIPOBJ *ppco; // [rsp+78h] [rbp-88h] BYREF
  struct _POINTL v53; // [rsp+80h] [rbp-80h] BYREF
  struct _SURFOBJ *v54; // [rsp+88h] [rbp-78h] BYREF
  POINTL *pptl; // [rsp+90h] [rbp-70h]
  RECTL *prcl; // [rsp+98h] [rbp-68h]
  __int64 v57; // [rsp+A0h] [rbp-60h]
  __int64 v58; // [rsp+A8h] [rbp-58h]
  __int64 v59; // [rsp+B0h] [rbp-50h]
  __int64 v60; // [rsp+B8h] [rbp-48h]
  int v61[2]; // [rsp+C0h] [rbp-40h] BYREF
  struct _RECTL v62; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v63[912]; // [rsp+E0h] [rbp-20h] BYREF

  v11 = 0;
  prcl = a9;
  pptl = a10;
  v14 = 1;
  v54 = a1;
  x = pptfx[1].x;
  v16 = x <= pptfx[3].x;
  v51 = 1;
  ppco = a4;
  v19 = __OFSUB__(x, pptfx->x);
  v17 = x == pptfx->x;
  v18 = x - pptfx->x < 0;
  y = pptfx[1].y;
  v21 = !(v18 ^ v19 | v17) ^ (unsigned int)v16;
  v60 = (__int64)a3;
  v59 = (__int64)pxlo;
  v19 = __OFSUB__(y, pptfx[3].y);
  v17 = y == pptfx[3].y;
  v18 = y - pptfx[3].y < 0;
  v58 = (__int64)pca;
  v57 = (__int64)pptlBrushOrg;
  v22 = y <= pptfx->y;
  v53 = 0LL;
  v23 = v22 ^ (unsigned int)!(v18 ^ v19 | v17);
  hdev = a2->hdev;
  if ( !hdev || *((struct _SURFOBJ **)hdev + 14) != a2 )
  {
    if ( pptfx[v21].x > pptfx[(unsigned int)v21 ^ 3LL].x )
      v21 = (unsigned int)v21 ^ 3;
    if ( pptfx[v23].y > pptfx[(unsigned int)v23 ^ 3LL].y )
      v23 = (unsigned int)v23 ^ 3;
    v62.left = (pptfx[v21].x >> 4) - 1;
    v62.top = (pptfx[v23].y >> 4) - 1;
    v62.right = ((pptfx[(unsigned int)v21 ^ 3LL].x + 15) >> 4) + 1;
    v62.bottom = ((pptfx[(unsigned int)v23 ^ 3LL].y + 15) >> 4) + 1;
    ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v63, a1, a4, &v62);
    *(_QWORD *)v61 = 0LL;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !(unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v63, &v54, &v53, &ppco) )
          return v14;
        v27 = v54;
        p_pvScan0 = 0LL;
        if ( v54 )
        {
          hsurf = (int)v54[1].hsurf;
          if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
          {
            p_pvScan0 = &v54[-1].pvScan0;
            GreLockDisplayDevice(v54->hdev);
          }
        }
        v30 = (int)a2[1].hsurf;
        v31 = 0LL;
        if ( (v30 & 0x80004000) != 0 && (v30 & 0x200) == 0 )
        {
          v31 = &a2[-1].pvScan0;
          GreLockDisplayDevice(a2->hdev);
        }
        if ( !p_pvScan0 || *((_WORD *)p_pvScan0 + 50) != 1 || EngUpdateDeviceSurface((SURFOBJ *)(p_pvScan0 + 3), &ppco) )
          break;
        if ( v31 )
          GreUnlockDisplayDevice(v31[6]);
LABEL_32:
        GreUnlockDisplayDevice(p_pvScan0[6]);
      }
      v25 = ppco;
      if ( v27->iType == 1 )
      {
        if ( bAllowShareAccess(v27)
          && GreGetCurrentThread(v34, v33)
          && *((_QWORD *)GreGetCurrentThread(v36, v35) + 34)
          && (*((_DWORD *)GreGetCurrentThread(v38, v37) + 87) || *((_DWORD *)GreGetCurrentThread(v40, v39) + 88)) )
        {
          v42 = *((_QWORD *)GreGetCurrentThread(v40, v39) + 34);
          if ( (*(_DWORD *)(v42 + 20) & 4) != 0 )
          {
            v26 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG))(*((_QWORD *)GreGetCurrentThread(v42, v41) + 34) + 128LL);
            goto LABEL_13;
          }
        }
        if ( v27->iType == 1
          && bAllowShareAccess(v27)
          && GreGetCurrentThread(v44, v43)
          && *((_QWORD *)GreGetCurrentThread(v46, v45) + 34)
          && (*((_DWORD *)GreGetCurrentThread(v48, v47) + 87) || *((_DWORD *)GreGetCurrentThread(v50, v49) + 88)) )
        {
LABEL_46:
          v26 = EngPlgBlt;
          goto LABEL_13;
        }
      }
      if ( ((__int64)v27[1].hsurf & 4) == 0 )
        goto LABEL_46;
      v11 |= 1u;
      v26 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG))*((_QWORD *)v27->hdev + 171);
LABEL_13:
      v14 = OffPlgBlt(
              (int)v26,
              (int)&v53,
              (int)v27,
              (int)v61,
              (__int64)a2,
              v60,
              v25,
              v59,
              v58,
              v57,
              (__int64)pptfx,
              (__int64)prcl,
              (__int64)pptl,
              iMode) & v51;
      v51 = v14;
      if ( (v11 & 1) != 0 )
        v11 &= ~1u;
      if ( v31 )
        GreUnlockDisplayDevice(v31[6]);
      if ( p_pvScan0 )
        goto LABEL_32;
    }
  }
  return EngPlgBlt(a1, a2, a3, a4, pxlo, pca, pptlBrushOrg, pptfx, prcl, pptl, iMode);
}

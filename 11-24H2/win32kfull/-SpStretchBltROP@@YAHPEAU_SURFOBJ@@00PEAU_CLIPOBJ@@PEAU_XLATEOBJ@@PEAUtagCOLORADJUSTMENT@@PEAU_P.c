/*
 * XREFs of ?SpStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAU_BRUSHOBJ@@K@Z @ 0x140135570
 * Callers:
 *     <none>
 * Callees:
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1400505D4 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1400579FC (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x140058164 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140060BD4 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     OffStretchBltROP @ 0x140135990 (OffStretchBltROP.c)
 *     EngStretchBltROP @ 0x140135B60 (EngStretchBltROP.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

BOOL __fastcall SpStretchBltROP(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        XLATEOBJ *pxlo,
        COLORADJUSTMENT *pca,
        POINTL *pptlHTOrg,
        RECTL *prclDest,
        RECTL *prclSrc,
        POINTL *pptlMask,
        ULONG iMode,
        struct _BRUSHOBJ *pbo,
        DWORD rop4)
{
  int v13; // r13d
  int v16; // r12d
  HDEV hdev; // rax
  LONG left; // edx
  LONG right; // r8d
  LONG top; // eax
  LONG bottom; // ecx
  struct _SURFOBJ *v23; // rsi
  PVOID *p_pvScan0; // rbx
  int hsurf; // eax
  int v26; // eax
  PVOID *v27; // rdi
  CLIPOBJ *v28; // r12
  BOOL (__stdcall *v29)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD); // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  int v48; // [rsp+80h] [rbp-80h]
  CLIPOBJ *ppco; // [rsp+88h] [rbp-78h] BYREF
  struct _POINTL v50; // [rsp+90h] [rbp-70h] BYREF
  struct _SURFOBJ *v51; // [rsp+98h] [rbp-68h] BYREF
  __int64 v52; // [rsp+A0h] [rbp-60h]
  __int64 v53; // [rsp+A8h] [rbp-58h]
  __int64 v54; // [rsp+B0h] [rbp-50h]
  __int64 v55; // [rsp+B8h] [rbp-48h]
  __int64 v56; // [rsp+C0h] [rbp-40h]
  __int64 v57; // [rsp+C8h] [rbp-38h]
  __int64 v58; // [rsp+D0h] [rbp-30h]
  int v59[2]; // [rsp+D8h] [rbp-28h] BYREF
  struct _RECTL v60; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v61[912]; // [rsp+F0h] [rbp-10h] BYREF

  v13 = 0;
  v50 = 0LL;
  v16 = 1;
  v48 = 1;
  hdev = a2->hdev;
  v51 = a1;
  ppco = a4;
  v58 = (__int64)a3;
  v57 = (__int64)pxlo;
  v56 = (__int64)pca;
  v55 = (__int64)pptlHTOrg;
  v54 = (__int64)prclSrc;
  v53 = (__int64)pptlMask;
  v52 = (__int64)pbo;
  if ( !hdev || *((struct _SURFOBJ **)hdev + 14) != a2 )
  {
    left = prclDest->left;
    right = prclDest->right;
    top = prclDest->top;
    bottom = prclDest->bottom;
    v60.left = left;
    v60.top = top;
    v60.right = right;
    v60.bottom = bottom;
    if ( left > right )
    {
      v60.left = right;
      v60.right = left;
    }
    if ( top > bottom )
    {
      v60.top = bottom;
      v60.bottom = top;
    }
    ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v61, a1, a4, &v60);
    *(_QWORD *)v59 = 0LL;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !(unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v61, &v51, &v50, &ppco) )
          return v16;
        v23 = v51;
        p_pvScan0 = 0LL;
        if ( v51 )
        {
          hsurf = (int)v51[1].hsurf;
          if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
          {
            p_pvScan0 = &v51[-1].pvScan0;
            GreLockDisplayDevice(v51->hdev);
          }
        }
        v26 = (int)a2[1].hsurf;
        v27 = 0LL;
        if ( (v26 & 0x80004000) != 0 && (v26 & 0x200) == 0 )
        {
          v27 = &a2[-1].pvScan0;
          GreLockDisplayDevice(a2->hdev);
        }
        if ( !p_pvScan0 || *((_WORD *)p_pvScan0 + 50) != 1 || EngUpdateDeviceSurface((SURFOBJ *)(p_pvScan0 + 3), &ppco) )
          break;
        if ( v27 )
          GreUnlockDisplayDevice(v27[6]);
LABEL_28:
        GreUnlockDisplayDevice(p_pvScan0[6]);
      }
      v28 = ppco;
      if ( v23->iType == 1 )
      {
        if ( bAllowShareAccess(v23)
          && GreGetCurrentThread(v31, v30)
          && *((_QWORD *)GreGetCurrentThread(v33, v32) + 34)
          && (*((_DWORD *)GreGetCurrentThread(v35, v34) + 87) || *((_DWORD *)GreGetCurrentThread(v37, v36) + 88)) )
        {
          v39 = *((_QWORD *)GreGetCurrentThread(v37, v36) + 34);
          if ( (*(_DWORD *)(v39 + 20) & 0x2000) != 0 )
          {
            v29 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD))(*((_QWORD *)GreGetCurrentThread(v39, v38) + 34) + 152LL);
            goto LABEL_23;
          }
        }
        if ( v23->iType == 1
          && bAllowShareAccess(v23)
          && GreGetCurrentThread(v41, v40)
          && *((_QWORD *)GreGetCurrentThread(v43, v42) + 34)
          && (*((_DWORD *)GreGetCurrentThread(v45, v44) + 87) || *((_DWORD *)GreGetCurrentThread(v47, v46) + 88)) )
        {
LABEL_45:
          v29 = EngStretchBltROP;
          goto LABEL_23;
        }
      }
      if ( ((__int64)v23[1].hsurf & 0x2000) == 0 )
        goto LABEL_45;
      v13 |= 1u;
      v29 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD))*((_QWORD *)v23->hdev + 174);
LABEL_23:
      v16 = OffStretchBltROP(
              (int)v29,
              (int)&v50,
              (int)v23,
              (int)v59,
              (__int64)a2,
              v58,
              v28,
              v57,
              v56,
              v55,
              (__int64)prclDest,
              v54,
              v53,
              iMode,
              v52,
              rop4) & v48;
      v48 = v16;
      if ( (v13 & 1) != 0 )
        v13 &= ~1u;
      if ( v27 )
        GreUnlockDisplayDevice(v27[6]);
      if ( p_pvScan0 )
        goto LABEL_28;
    }
  }
  return EngStretchBltROP(a1, a2, a3, a4, pxlo, pca, pptlHTOrg, prclDest, prclSrc, pptlMask, iMode, pbo, rop4);
}

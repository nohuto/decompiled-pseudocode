/*
 * XREFs of ?SpBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x140056810
 * Callers:
 *     ?SpCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1400567C0 (-SpCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1400D5F30 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 * Callees:
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1400505D4 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1400579FC (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x140058164 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140060BD4 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     OffBitBlt @ 0x140180CC4 (OffBitBlt.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SpBitBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *a5,
        struct _RECTL *a6,
        struct _POINTL *a7,
        struct _POINTL *a8,
        struct _BRUSHOBJ *a9,
        struct _POINTL *a10,
        unsigned int a11)
{
  struct _SURFOBJ *v11; // r12
  unsigned int v12; // ebx
  unsigned int v13; // r15d
  HDEV v14; // rax
  int v15; // r14d
  struct _SURFOBJ *v17; // r13
  PVOID *p_pvScan0; // rdi
  int hsurf; // eax
  PVOID *v20; // rsi
  int v21; // eax
  CLIPOBJ *v22; // r15
  HDEV hdev; // rax
  int v24; // ebx
  BOOL (__stdcall *v25)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  struct _POINTL v26; // rbx
  LONG y; // r12d
  LONG x; // r13d
  LONG v29; // r12d
  LONG v30; // ebx
  HDEV v31; // rax
  BOOL (__stdcall *v32)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rax
  struct _POINTL *v33; // r9
  struct _POINTL *v34; // r10
  struct _POINTL *v35; // r8
  struct _POINTL v36; // rbx
  struct _POINTL *v37; // rdx
  LONG v38; // r12d
  int v39; // eax
  LONG v40; // r12d
  LONG v41; // ebx
  int v42; // r13d
  __int64 (__fastcall *v43)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // r10
  __int64 *v44; // r12
  int v45; // edx
  int v46; // r8d
  __int64 *v47; // r14
  HDEV v48; // rax
  BOOL (__stdcall *v49)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  int v50; // eax
  __int64 v51; // [rsp+48h] [rbp-B8h]
  HDEV v52; // [rsp+70h] [rbp-90h] BYREF
  int v53; // [rsp+78h] [rbp-88h]
  int v54; // [rsp+7Ch] [rbp-84h]
  CLIPOBJ *ppco; // [rsp+80h] [rbp-80h] BYREF
  struct _POINTL v56; // [rsp+88h] [rbp-78h] BYREF
  struct _SURFOBJ *v57; // [rsp+90h] [rbp-70h]
  __int64 v58; // [rsp+98h] [rbp-68h] BYREF
  struct _POINTL v59; // [rsp+A0h] [rbp-60h] BYREF
  struct _POINTL *v60; // [rsp+A8h] [rbp-58h]
  __int64 v61; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v62; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v63; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v64; // [rsp+C8h] [rbp-38h] BYREF
  struct _POINTL *v65; // [rsp+D0h] [rbp-30h]
  struct _XLATEOBJ *v66; // [rsp+D8h] [rbp-28h]
  struct _SURFOBJ *v67; // [rsp+E0h] [rbp-20h] BYREF
  struct _POINTL v68; // [rsp+E8h] [rbp-18h] BYREF
  _DWORD v69[2]; // [rsp+F0h] [rbp-10h] BYREF
  struct _POINTL *v70; // [rsp+F8h] [rbp-8h]
  struct _BRUSHOBJ *v71; // [rsp+100h] [rbp+0h]
  struct _SURFOBJ *v72; // [rsp+108h] [rbp+8h]
  struct _POINTL *v73; // [rsp+110h] [rbp+10h]
  struct _POINTL *v74; // [rsp+118h] [rbp+18h]
  struct _RECTL v75; // [rsp+120h] [rbp+20h] BYREF
  struct _RECTL v76; // [rsp+130h] [rbp+30h] BYREF
  _DWORD v77[4]; // [rsp+140h] [rbp+40h] BYREF
  _DWORD v78[4]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v79[912]; // [rsp+160h] [rbp+60h] BYREF

  v11 = a2;
  v72 = a3;
  v12 = 0;
  v57 = a2;
  ppco = a4;
  v13 = 1;
  v54 = 1;
  v67 = a1;
  v66 = a5;
  v60 = a7;
  v70 = a8;
  v71 = a9;
  v65 = a10;
  v53 = 0;
  v56 = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  v75 = 0LL;
  v76 = 0LL;
  if ( !a2 || (v14 = a2->hdev) == 0LL || a2 != *((struct _SURFOBJ **)v14 + 14) )
  {
    v75 = *a6;
    ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v79, a1, a4, a6);
    v15 = 0;
    v58 = 0LL;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !(unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v79, &v67, &v56, &ppco) )
          return v13;
        v17 = v67;
        p_pvScan0 = 0LL;
        if ( v67 )
        {
          hsurf = (int)v67[1].hsurf;
          if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
          {
            p_pvScan0 = &v67[-1].pvScan0;
            GreLockDisplayDevice(v67->hdev);
          }
        }
        v20 = 0LL;
        if ( v11 )
        {
          v21 = (int)v11[1].hsurf;
          if ( (v21 & 0x80004000) != 0 && (v21 & 0x200) == 0 )
          {
            v20 = &v11[-1].pvScan0;
            GreLockDisplayDevice(v11->hdev);
          }
        }
        if ( !p_pvScan0 || *((_WORD *)p_pvScan0 + 50) != 1 || EngUpdateDeviceSurface((SURFOBJ *)(p_pvScan0 + 3), &ppco) )
          break;
        if ( v20 )
          GreUnlockDisplayDevice(v20[6]);
LABEL_41:
        GreUnlockDisplayDevice(p_pvScan0[6]);
      }
      v22 = ppco;
      if ( a11 == 52428 )
      {
        if ( ((__int64)v17[1].hsurf & 0x400) != 0 || !v11->hdev )
        {
          if ( v17->iType == 1
            && bAllowShareAccess(v17)
            && GreGetCurrentThread()
            && *((_QWORD *)GreGetCurrentThread() + 34)
            && (*((_DWORD *)GreGetCurrentThread() + 87) || *((_DWORD *)GreGetCurrentThread() + 88))
            && (*(_DWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 20LL) & 0x400) != 0 )
          {
            goto LABEL_85;
          }
          if ( (v17->iType != 1
             || !bAllowShareAccess(v17)
             || !GreGetCurrentThread()
             || !*((_QWORD *)GreGetCurrentThread() + 34)
             || !*((_DWORD *)GreGetCurrentThread() + 87) && !*((_DWORD *)GreGetCurrentThread() + 88))
            && ((__int64)v17[1].hsurf & 0x400) != 0 )
          {
            hdev = v17->hdev;
            v24 = v12 | 8;
            goto LABEL_24;
          }
        }
        else
        {
          if ( v11->iType != 1 )
            goto LABEL_63;
          if ( bAllowShareAccess(v11)
            && GreGetCurrentThread()
            && *((_QWORD *)GreGetCurrentThread() + 34)
            && (*((_DWORD *)GreGetCurrentThread() + 87) || *((_DWORD *)GreGetCurrentThread() + 88))
            && (*(_DWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 20LL) & 0x400) != 0 )
          {
LABEL_85:
            v25 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*((_QWORD *)GreGetCurrentThread() + 34) + 80LL);
            goto LABEL_25;
          }
          if ( v11->iType != 1
            || !bAllowShareAccess(v11)
            || !GreGetCurrentThread()
            || !*((_QWORD *)GreGetCurrentThread() + 34)
            || !*((_DWORD *)GreGetCurrentThread() + 87) && !*((_DWORD *)GreGetCurrentThread() + 88) )
          {
LABEL_63:
            if ( ((__int64)v11[1].hsurf & 0x400) != 0 )
            {
              hdev = v11->hdev;
              v24 = v12 | 4;
LABEL_24:
              v25 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)hdev + 165);
              v53 = v24;
LABEL_25:
              v26 = v56;
              y = v56.y;
              v52 = (HDEV)v25;
              if ( v22 )
              {
                v68 = 0LL;
                if ( v56.x || v56.y )
                {
                  v22->rclBounds.left += v56.x;
                  v22->rclBounds.right += v26.x;
                  v22->rclBounds.top += y;
                  v22->rclBounds.bottom += y;
                  if ( v22->iDComplexity )
                  {
                    v68 = v26;
                    RGNOBJ::bOffset((RGNOBJ *)&v22[2].rclBounds.top, &v68);
                  }
                }
              }
              v59.x = 0;
              v77[0] = v26.x + v75.left;
              v77[2] = v26.x + v75.right;
              v77[1] = y + v75.top;
              v77[3] = y + v75.bottom;
              v69[0] = v15 + v60->x;
              v69[1] = v60->y + HIDWORD(v58);
              if ( v52 )
                x = ((__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, CLIPOBJ *, struct _XLATEOBJ *, _DWORD *, _DWORD *))v52)(
                      v17,
                      v57,
                      v22,
                      v66,
                      v77,
                      v69);
              else
                x = v59.x;
              if ( v22 )
              {
                v29 = -y;
                v52 = 0LL;
                v30 = -v26.x;
                if ( v30 || v29 )
                {
                  v22->rclBounds.left += v30;
                  v22->rclBounds.right += v30;
                  v22->rclBounds.top += v29;
                  v22->rclBounds.bottom += v29;
                  if ( v22->iDComplexity )
                  {
                    LODWORD(v52) = v30;
                    HIDWORD(v52) = v29;
                    RGNOBJ::bOffset((RGNOBJ *)&v22[2].rclBounds.top, (const struct _POINTL *)&v52);
                  }
                }
              }
              v12 = v53;
              if ( (v53 & 8) != 0 )
              {
                v12 = v53 & 0xFFFFFFF7;
                v53 &= ~8u;
              }
              if ( (v12 & 4) != 0 )
              {
                v12 &= ~4u;
                v53 = v12;
              }
              v11 = v57;
              v13 = x & v54;
              v54 &= x;
              goto LABEL_38;
            }
          }
        }
        v25 = EngCopyBits;
        goto LABEL_25;
      }
      if ( (unsigned __int8)a11 != a11 >> 8 )
        break;
      if ( v17->iType == 1
        && (v52 = v17->hdev, PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v52))
        && GreGetCurrentThread()
        && *((_QWORD *)GreGetCurrentThread() + 34)
        && (*((_DWORD *)GreGetCurrentThread() + 87) || *((_DWORD *)GreGetCurrentThread() + 88))
        && (*(_DWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 20LL) & 1) != 0 )
      {
        v32 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*((_QWORD *)GreGetCurrentThread() + 34) + 72LL);
      }
      else if ( v17->iType == 1
             && (v52 = v17->hdev, PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v52))
             && GreGetCurrentThread()
             && *((_QWORD *)GreGetCurrentThread() + 34)
             && (*((_DWORD *)GreGetCurrentThread() + 87) || *((_DWORD *)GreGetCurrentThread() + 88))
             || ((__int64)v17[1].hsurf & 1) == 0 )
      {
        v32 = EngBitBlt;
      }
      else
      {
        v31 = v17->hdev;
        v53 = v12 | 1;
        v32 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)v31 + 164);
      }
      v33 = v60;
      v34 = v65;
      v35 = v60;
      v36 = v56;
      v37 = v65;
      v59 = 0LL;
      v38 = v56.y;
      v73 = v65;
      v52 = (HDEV)v32;
      v74 = v60;
      if ( v22 && (v56.x || v56.y) )
      {
        v22->rclBounds.left += v56.x;
        v22->rclBounds.right += v36.x;
        v22->rclBounds.top += v38;
        v22->rclBounds.bottom += v38;
        if ( v22->iDComplexity )
        {
          v59 = v36;
          RGNOBJ::bOffset((RGNOBJ *)&v22[2].rclBounds.top, &v59);
          v37 = v73;
          v35 = v74;
          v34 = v73;
          v33 = v74;
        }
      }
      v61 = 0LL;
      v78[0] = v36.x + v75.left;
      v78[2] = v36.x + v75.right;
      v78[1] = v38 + v75.top;
      v78[3] = v38 + v75.bottom;
      if ( v33 )
      {
        v35 = (struct _POINTL *)&v61;
        LODWORD(v61) = v15 + v33->x;
        HIDWORD(v61) = HIDWORD(v58) + v33->y;
      }
      v62 = 0LL;
      if ( v34 )
      {
        v37 = (struct _POINTL *)&v62;
        LODWORD(v62) = v36.x + v34->x;
        HIDWORD(v62) = v38 + v34->y;
      }
      v39 = ((__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, CLIPOBJ *, struct _XLATEOBJ *, _DWORD *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int))v52)(
              v17,
              v57,
              v72,
              v22,
              v66,
              v78,
              v35,
              v70,
              v71,
              v37,
              a11);
      v52 = 0LL;
      v40 = -v38;
      v41 = -v36.x;
      v42 = v39;
      if ( v22 && (v41 || v40) )
      {
        v22->rclBounds.left += v41;
        v22->rclBounds.right += v41;
        v22->rclBounds.top += v40;
        v22->rclBounds.bottom += v40;
        if ( v22->iDComplexity )
        {
          LODWORD(v52) = v41;
          HIDWORD(v52) = v40;
          RGNOBJ::bOffset((RGNOBJ *)&v22[2].rclBounds.top, (const struct _POINTL *)&v52);
        }
      }
      v12 = v53;
      v13 = v42 & v54;
      v11 = v57;
      v54 &= v42;
      if ( (v53 & 1) == 0 )
        goto LABEL_38;
      v12 = v53 & 0xFFFFFFFE;
LABEL_59:
      v53 = v12;
LABEL_38:
      if ( v20 )
        GreUnlockDisplayDevice(v20[6]);
      if ( p_pvScan0 )
        goto LABEL_41;
    }
    v76 = v75;
    if ( ppco )
    {
      if ( !bIntersect(&ppco->rclBounds, &v75, &v76) )
      {
        v13 = v54;
        goto LABEL_38;
      }
      v22 = ppco;
    }
    v44 = 0LL;
    v45 = v76.left - v75.left;
    v46 = v76.top - v75.top;
    if ( v60 )
    {
      v44 = &v63;
      LODWORD(v63) = v45 + v60->x;
      HIDWORD(v63) = v46 + v60->y;
    }
    v47 = 0LL;
    if ( v70 )
    {
      v47 = &v64;
      LODWORD(v64) = v45 + v70->x;
      HIDWORD(v64) = v46 + v70->y;
    }
    if ( v17->iType != 1 )
      goto LABEL_76;
    if ( bAllowShareAccess(v17)
      && GreGetCurrentThread()
      && *((_QWORD *)GreGetCurrentThread() + 34)
      && (*((_DWORD *)GreGetCurrentThread() + 87) || *((_DWORD *)GreGetCurrentThread() + 88))
      && (*(_DWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 20LL) & 1) != 0 )
    {
      v49 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*((_QWORD *)GreGetCurrentThread() + 34) + 72LL);
      goto LABEL_78;
    }
    if ( v17->iType != 1
      || !bAllowShareAccess(v17)
      || !GreGetCurrentThread()
      || !*((_QWORD *)GreGetCurrentThread() + 34)
      || !*((_DWORD *)GreGetCurrentThread() + 87) && !*((_DWORD *)GreGetCurrentThread() + 88) )
    {
LABEL_76:
      if ( ((__int64)v17[1].hsurf & 1) != 0 )
      {
        v48 = v17->hdev;
        v12 |= 2u;
        v53 = v12;
        v49 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)v48 + 164);
LABEL_78:
        v51 = (__int64)v44;
        v11 = v57;
        v50 = OffBitBlt(
                (_DWORD)v49,
                (unsigned int)&v56,
                (_DWORD)v17,
                (unsigned int)&v58,
                (__int64)v57,
                (__int64)v72,
                (__int64)v22,
                (__int64)v66,
                (__int64)&v76,
                v51,
                (__int64)v47,
                (__int64)v71,
                (__int64)v65,
                a11);
        v15 = v58;
        v13 = v50 & v54;
        v54 &= v50;
        if ( (v12 & 2) == 0 )
          goto LABEL_38;
        v12 &= ~2u;
        goto LABEL_59;
      }
    }
    v49 = EngBitBlt;
    goto LABEL_78;
  }
  v43 = (__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int))bSpBltFromScreen;
  if ( a1 == a2 )
    v43 = bSpBltScreenToScreen;
  return (unsigned int)v43(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}

/*
 * XREFs of ?SpStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1401D2B60
 * Callers:
 *     <none>
 * Callees:
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1400505D4 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z @ 0x140054E20 (-CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z.c)
 *     ?PATHOBJ_vOffset@@YAXPEAU_PATHOBJ@@JJ@Z @ 0x14005589C (-PATHOBJ_vOffset@@YAXPEAU_PATHOBJ@@JJ@Z.c)
 *     ??1PRECOMPUTE@@QEAA@XZ @ 0x140055AAC (--1PRECOMPUTE@@QEAA@XZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@XZ @ 0x140055EF4 (--0PATHSTACKOBJ@@QEAA@XZ.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1400579FC (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x140058164 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140060BD4 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1PATHSTACKOBJ@@QEAA@XZ @ 0x1400D2E5C (--1PATHSTACKOBJ@@QEAA@XZ.c)
 *     ?vUnguard@CAutoTGO@@QEAAXXZ @ 0x1400D373C (-vUnguard@CAutoTGO@@QEAAXXZ.c)
 *     ?bPreComputedFill@EPATHOBJ@@QEBAHXZ @ 0x1400E0194 (-bPreComputedFill@EPATHOBJ@@QEBAHXZ.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1400E08E8 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAUHDEV__@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEBU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1400E09A4 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAUHDEV__@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEBU.c)
 *     OffStrokeAndFillPath @ 0x1401D3000 (OffStrokeAndFillPath.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall SpStrokeAndFillPath(
        struct _SURFOBJ *a1,
        struct _PATHOBJ *this,
        struct _CLIPOBJ *a3,
        struct EXFORMOBJ *a4,
        struct _BRUSHOBJ *a5,
        struct _LINEATTRS *a6,
        struct _BRUSHOBJ *a7,
        struct _POINTL *a8,
        unsigned int a9,
        unsigned int a10)
{
  int v10; // r12d
  unsigned int v12; // r13d
  PVOID *v13; // rbx
  CLIPOBJ *v14; // r15
  BOOL (__stdcall *v15)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, POINTL *, MIX, FLONG); // rcx
  int v16; // eax
  struct _PATHOBJ *v17; // rdi
  struct _SURFOBJ *v18; // rsi
  PVOID *p_pvScan0; // r15
  int hsurf; // eax
  PVOID v22; // rcx
  LONG x; // ebx
  LONG y; // edi
  LONG v25; // edi
  LONG v26; // ebx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
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
  CLIPOBJ *ppco; // [rsp+60h] [rbp-A0h] BYREF
  struct _POINTL v46; // [rsp+68h] [rbp-98h] BYREF
  struct _SURFOBJ *v47; // [rsp+70h] [rbp-90h] BYREF
  struct EXFORMOBJ *v48; // [rsp+78h] [rbp-88h]
  struct EPATHOBJ *v49; // [rsp+80h] [rbp-80h]
  struct _POINTL *v50; // [rsp+88h] [rbp-78h]
  struct _BRUSHOBJ *v51; // [rsp+90h] [rbp-70h]
  struct _BRUSHOBJ *v52; // [rsp+98h] [rbp-68h]
  _OWORD v53[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v54; // [rsp+C0h] [rbp-40h]
  struct _PATHOBJ v55; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v56; // [rsp+D8h] [rbp-28h]
  char v57[64]; // [rsp+120h] [rbp+20h] BYREF
  char v58[560]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v59[72]; // [rsp+390h] [rbp+290h] BYREF
  int v60; // [rsp+3D8h] [rbp+2D8h]

  v10 = 0;
  v52 = a5;
  v48 = (struct EXFORMOBJ *)a6;
  v51 = a7;
  v12 = 1;
  v49 = a4;
  v47 = a1;
  v46 = 0LL;
  v50 = a8;
  ppco = a3;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v59, a1, a3, &a3->rclBounds);
  while ( (unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v59, &v47, &v46, &ppco) )
  {
    v17 = 0LL;
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v55);
    v18 = v47;
    v54 = 0LL;
    memset(v53, 0, sizeof(v53));
    p_pvScan0 = &v47[-1].pvScan0;
    if ( v60 == 1
      && (*(_QWORD *)&this[5] || (unsigned int)EPATHOBJ::bPreComputedFill((EPATHOBJ *)this))
      && !(unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)p_pvScan0) )
    {
      if ( v56 )
      {
        if ( EPATHOBJ::bClone((EPATHOBJ *)&v55, (const struct EPATHOBJ *)this) )
        {
          x = v46.x;
          y = v46.y;
          CLIPOBJ_vOffset(ppco, v46.x, v46.y);
          PATHOBJ_vOffset(&v55, x, y);
          PRECOMPUTE::vInit(
            (const struct _LINEATTRS **)v53,
            (SURFACE *)p_pvScan0,
            (__int64)v18->hdev,
            (const struct EPATHOBJ *)&v55,
            (__int64)ppco,
            v49,
            v48,
            a9,
            a10,
            2);
          v25 = -y;
          v26 = -x;
          CLIPOBJ_vOffset(ppco, v26, v25);
          PATHOBJ_vOffset(&v55, v26, v25);
          if ( v54 )
          {
            v17 = this;
            this = &v55;
            goto LABEL_17;
          }
        }
      }
      PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v53);
      PATHSTACKOBJ::~PATHSTACKOBJ((PATHSTACKOBJ *)&v55);
    }
    else
    {
LABEL_17:
      PATHOBJ_vEnumStart(this);
      v13 = 0LL;
      if ( !v18
        || (hsurf = (int)v18[1].hsurf, (hsurf & 0x80004000) == 0)
        || (hsurf & 0x200) != 0
        || (v13 = p_pvScan0, GreLockDisplayDevice(p_pvScan0[6]), *((_WORD *)p_pvScan0 + 50) != 1)
        || (v13 = p_pvScan0,
            EngUpdateDeviceSurface((SURFOBJ *)((unsigned __int64)(p_pvScan0 + 3) & -(__int64)(p_pvScan0 != 0LL)), &ppco)) )
      {
        v14 = ppco;
        if ( v18->iType != 1 )
          goto LABEL_5;
        if ( bAllowShareAccess(v18)
          && GreGetCurrentThread(v28, v27)
          && *((_QWORD *)GreGetCurrentThread(v30, v29) + 34)
          && (*((_DWORD *)GreGetCurrentThread(v32, v31) + 87) || *((_DWORD *)GreGetCurrentThread(v34, v33) + 88))
          && (v36 = *((_QWORD *)GreGetCurrentThread(v34, v33) + 34), (*(_DWORD *)(v36 + 20) & 0x80u) != 0) )
        {
          v15 = *(BOOL (__stdcall **)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, POINTL *, MIX, FLONG))(*((_QWORD *)GreGetCurrentThread(v36, v35) + 34) + 40LL);
        }
        else
        {
          if ( v18->iType != 1
            || !bAllowShareAccess(v18)
            || !GreGetCurrentThread(v38, v37)
            || !*((_QWORD *)GreGetCurrentThread(v40, v39) + 34)
            || !*((_DWORD *)GreGetCurrentThread(v42, v41) + 87) && !*((_DWORD *)GreGetCurrentThread(v44, v43) + 88) )
          {
LABEL_5:
            if ( (LODWORD(v18[1].hsurf) & 0x80u) != 0 )
            {
              v10 |= 1u;
              v15 = (BOOL (__stdcall *)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, POINTL *, MIX, FLONG))*((_QWORD *)v18->hdev + 160);
              goto LABEL_7;
            }
          }
          v15 = EngStrokeAndFillPath;
        }
LABEL_7:
        v16 = OffStrokeAndFillPath(v15, &v46, v18, this, v14, v49, v52, v48, v51, v50, a9, a10);
        if ( (v10 & 1) != 0 )
          v10 &= ~1u;
        if ( !v16 )
          v12 = -1;
        if ( !v17 )
          v17 = this;
        this = v17;
        if ( v13 )
        {
          v22 = v13[6];
          goto LABEL_50;
        }
        goto LABEL_14;
      }
      if ( !v17 )
        v17 = this;
      this = v17;
      if ( p_pvScan0 )
      {
        v22 = p_pvScan0[6];
LABEL_50:
        GreUnlockDisplayDevice(v22);
      }
LABEL_14:
      PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v53);
      EPATHOBJ::vUnlock((EPATHOBJ *)&v55);
      PATH_CORE::~PATH_CORE((PATH_CORE *)v58);
      CAutoTGO::vUnguard((CAutoTGO *)v57);
    }
  }
  return v12;
}

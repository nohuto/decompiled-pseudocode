/*
 * XREFs of ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAUHDEV__@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEBU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1400E09A4
 * Callers:
 *     ?SpStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x140055FD0 (-SpStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_P.c)
 *     ??0PRECOMPUTE@@QEAA@PEAVSURFACE@@PEAUHDEV__@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEBU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1400E0928 (--0PRECOMPUTE@@QEAA@PEAVSURFACE@@PEAUHDEV__@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEBU_LIN.c)
 *     ?EPATHOBJ_bSimpleStrokeAndFill@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@5PEAU_POINTL@@KK@Z @ 0x1400E125C (-EPATHOBJ_bSimpleStrokeAndFill@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXF.c)
 *     ?EPATHOBJ_bSimpleFill@@YA?AV?$ReturnValueTracer@H@@PEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1400E16A0 (-EPATHOBJ_bSimpleFill@@YA-AV-$ReturnValueTracer@H@@PEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_.c)
 *     ?EPATHOBJ_bSimpleStroke@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1400E19D4 (-EPATHOBJ_bSimpleStroke@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@.c)
 *     ?SpStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1401D2B60 (-SpStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@.c)
 *     ?SpFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x140329480 (-SpFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 * Callees:
 *     ??0PATHSTACKOBJ@@QEAA@XZ @ 0x140055EF4 (--0PATHSTACKOBJ@@QEAA@XZ.c)
 *     ??1PATHSTACKOBJ@@QEAA@XZ @ 0x1400D2E5C (--1PATHSTACKOBJ@@QEAA@XZ.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1400E08E8 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?bWiden@pathwide@@YA_NAEAVEPATHOBJ@@0AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z @ 0x1400E254C (-bWiden@pathwide@@YA_NAEAVEPATHOBJ@@0AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z.c)
 *     ?bComputeWidenedBounds@pathwide@@YA_NAEAVEPATHOBJ@@AEBV2@AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z @ 0x1400E4570 (-bComputeWidenedBounds@pathwide@@YA_NAEAVEPATHOBJ@@AEBV2@AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1400E7C5C (--0RGNMEMOBJ@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     ?bPreComputeFast@PRECOMPUTE@@SAHAEAVEPATHOBJ@@0PEAU_RECTL@@K@Z @ 0x1403196F4 (-bPreComputeFast@PRECOMPUTE@@SAHAEAVEPATHOBJ@@0PEAU_RECTL@@K@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall PRECOMPUTE::vInit(
        const struct _LINEATTRS **a1,
        SURFACE *a2,
        __int64 a3,
        const struct EPATHOBJ *a4,
        __int64 a5,
        struct EPATHOBJ *a6,
        struct EXFORMOBJ *a7,
        char a8,
        unsigned int a9,
        int a10)
{
  int v13; // eax
  struct _RECTL *v14; // r12
  int v15; // r8d
  int v16; // r9d
  const struct _LINEATTRS *v17; // rax
  int *v18; // rcx
  void *v19; // rcx
  void *v20; // rcx
  void *v21; // rcx
  const struct _LINEATTRS *v22; // rax
  void *v23; // rcx
  void *v24; // rcx
  struct _RECTL *v25; // r9
  int *v26; // rcx
  struct _RECTL *v27; // r15
  struct _RECTL *v28; // rsi
  const struct _LINEATTRS *v29; // rcx
  const struct _LINEATTRS *v30; // [rsp+20h] [rbp-E0h] BYREF
  const struct _LINEATTRS *v31; // [rsp+28h] [rbp-D8h] BYREF
  const struct _LINEATTRS *v32; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v33; // [rsp+38h] [rbp-C8h] BYREF
  char v34[8]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v35; // [rsp+48h] [rbp-B8h]
  struct _RECTL v36; // [rsp+C0h] [rbp-40h] BYREF
  char v37[8]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v38; // [rsp+D8h] [rbp-28h]

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  a1[4] = 0LL;
  *((_QWORD *)a4 + 2) = 0LL;
  *((_QWORD *)a4 + 4) = 0LL;
  *((_QWORD *)a4 + 3) = 0LL;
  *((_QWORD *)a4 + 5) = 0LL;
  *((_QWORD *)a4 + 7) = 0LL;
  *((_QWORD *)a4 + 6) = 0LL;
  *((_QWORD *)a4 + 8) = 0LL;
  v33 = a3;
  v36 = 0LL;
  if ( (*(_DWORD *)(a3 + 40) & 0x8000) != 0
    || !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v33)
    || (v13 = SURFACE::bRedirectionBitmap(a2), v14 = 0LL, v13) )
  {
    a1[4] = (const struct _LINEATTRS *)a4;
    return;
  }
  if ( a10 )
  {
    if ( a10 == 1 )
    {
      if ( *(_BYTE *)(a5 + 20) == 3 || (*(_DWORD *)a4 & 0x4000) != 0 )
      {
        PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v37);
        if ( v38
          && EPATHOBJ::bClone((EPATHOBJ *)v37, a4)
          && ((v37[0] & 1) == 0 || EPATHOBJ::bFlatten((EPATHOBJ *)v37))
          && (!a7 || pathwide::bWiden((pathwide *)v37, (struct EPATHOBJ *)v37, a6, a7, v30)) )
        {
          v36.top = 16 * *(_DWORD *)(a5 + 8);
          v36.bottom = 16 * *(_DWORD *)(a5 + 16);
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v31, (struct EPATHOBJ *)v37, a9, &v36);
          if ( v31 )
          {
            *a1 = v31;
            goto LABEL_112;
          }
        }
      }
      else
      {
        v26 = (int *)*((_QWORD *)a4 + 1);
        v27 = 0LL;
        if ( *(_DWORD *)(a5 + 4) > v26[12] >> 4
          || *(_DWORD *)(a5 + 12) < (v26[14] + 15) >> 4
          || *(_DWORD *)(a5 + 8) > v26[13] >> 4
          || *(_DWORD *)(a5 + 16) < (v26[15] + 15) >> 4 )
        {
          v27 = (struct _RECTL *)(a5 + 4);
        }
        PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v37);
        if ( v38
          && EPATHOBJ::bClone((EPATHOBJ *)v37, a4)
          && ((v37[0] & 1) == 0 || EPATHOBJ::bFlatten((EPATHOBJ *)v37))
          && (!a7 || pathwide::bWiden((pathwide *)v37, (struct EPATHOBJ *)v37, a6, a7, v30))
          && (unsigned int)PRECOMPUTE::bPreComputeFast((struct EPATHOBJ *)v37, a4, v27, 1u) )
        {
          goto LABEL_112;
        }
      }
      goto LABEL_23;
    }
    if ( a10 != 2 )
      goto LABEL_114;
    v15 = *(_DWORD *)(a5 + 8);
    v16 = *(_DWORD *)(a5 + 16);
    v36.top = 16 * v15;
    v36.bottom = 16 * v16;
    if ( (*(_DWORD *)a7 & 1) != 0 && a8 != 13 )
    {
      PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v37);
      if ( v38 && EPATHOBJ::bClone((EPATHOBJ *)v37, a4) )
      {
        PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v34);
        if ( v35
          && pathwide::bComputeWidenedBounds((pathwide *)v34, (struct EPATHOBJ *)v37, a6, a7, v30)
          && pathwide::bWiden((pathwide *)v34, (struct EPATHOBJ *)v37, a6, a7, v30)
          && ((v37[0] & 1) == 0 || EPATHOBJ::bFlatten((EPATHOBJ *)v37)) )
        {
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v32, (struct EPATHOBJ *)v34, 2u, 0LL);
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v30, (struct EPATHOBJ *)v37, a9, 0LL);
          if ( v32 )
          {
            v17 = v30;
            if ( v30 )
            {
              a1[3] = v32;
              *a1 = v17;
              PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v34);
LABEL_112:
              PATHSTACKOBJ::~PATHSTACKOBJ((PATHSTACKOBJ *)v37);
              goto LABEL_113;
            }
          }
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v32);
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v30);
        }
        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v34);
      }
LABEL_23:
      PATHSTACKOBJ::~PATHSTACKOBJ((PATHSTACKOBJ *)v37);
      return;
    }
    if ( *(_BYTE *)(a5 + 20) != 3 && (*(_DWORD *)a4 & 0x4000) == 0 )
    {
      v18 = (int *)*((_QWORD *)a4 + 1);
      if ( *(_DWORD *)(a5 + 4) > v18[12] >> 4
        || *(_DWORD *)(a5 + 12) < (v18[14] + 15) >> 4
        || v15 > v18[13] >> 4
        || v16 < (v18[15] + 15) >> 4 )
      {
        v14 = (struct _RECTL *)(a5 + 4);
      }
      PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v37);
      if ( !v38 || !EPATHOBJ::bClone((EPATHOBJ *)v37, a4) )
        goto LABEL_23;
      if ( (v37[0] & 1) != 0 )
      {
        if ( !EPATHOBJ::bFlatten((EPATHOBJ *)v37) )
          goto LABEL_23;
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v30, (struct EPATHOBJ *)v37, a9, &v36);
        if ( !v30 )
          goto LABEL_23;
        *a1 = v30;
      }
      if ( !(unsigned int)PRECOMPUTE::bPreComputeFast((struct EPATHOBJ *)v37, a4, v14, 1u) )
      {
        if ( *a1 )
        {
          v30 = *a1;
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v30);
          *a1 = 0LL;
        }
        goto LABEL_23;
      }
      if ( (*(_DWORD *)a7 & 1) != 0 && !pathwide::bWiden((pathwide *)v37, (struct EPATHOBJ *)v37, a6, a7, v30)
        || !(unsigned int)PRECOMPUTE::bPreComputeFast((struct EPATHOBJ *)v37, a4, v14, 2u) )
      {
        v19 = (void *)*((_QWORD *)a4 + 6);
        if ( v19 )
          Win32FreePool(v19);
        if ( *a1 )
        {
          v30 = *a1;
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v30);
          *a1 = 0LL;
        }
        *((_QWORD *)a4 + 6) = 0LL;
        *((_DWORD *)a4 + 14) = 0;
        goto LABEL_23;
      }
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v32, (struct EPATHOBJ *)v37, a9, &v36);
      if ( !v32 )
      {
        v20 = (void *)*((_QWORD *)a4 + 6);
        if ( v20 )
          Win32FreePool(v20);
        v21 = (void *)*((_QWORD *)a4 + 8);
        if ( v21 )
          Win32FreePool(v21);
        if ( *a1 )
        {
          v30 = *a1;
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v30);
          *a1 = 0LL;
        }
LABEL_56:
        *((_QWORD *)a4 + 6) = 0LL;
        *((_QWORD *)a4 + 7) = 0LL;
        *((_QWORD *)a4 + 8) = 0LL;
        goto LABEL_23;
      }
      a1[1] = v32;
      if ( a9 == 2 )
        goto LABEL_112;
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v30, (struct EPATHOBJ *)v37, 2u, &v36);
      v22 = v30;
      if ( !v30 )
      {
        v23 = (void *)*((_QWORD *)a4 + 6);
        if ( v23 )
          Win32FreePool(v23);
        v24 = (void *)*((_QWORD *)a4 + 8);
        if ( v24 )
          Win32FreePool(v24);
        if ( *a1 )
        {
          v31 = *a1;
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v31);
          *a1 = 0LL;
        }
        v31 = a1[1];
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v31);
        a1[1] = 0LL;
        goto LABEL_56;
      }
LABEL_111:
      a1[2] = v22;
      goto LABEL_112;
    }
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v37);
    if ( !v38 || !EPATHOBJ::bClone((EPATHOBJ *)v37, a4) || (v37[0] & 1) != 0 && !EPATHOBJ::bFlatten((EPATHOBJ *)v37) )
      goto LABEL_23;
    if ( (*(_DWORD *)a7 & 1) != 0 && !pathwide::bWiden((pathwide *)v37, (struct EPATHOBJ *)v37, a6, a7, v30) )
      goto LABEL_23;
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v31, (struct EPATHOBJ *)v37, a9, &v36);
    if ( !v31 )
      goto LABEL_23;
    a1[1] = v31;
    if ( a9 == 2 )
      goto LABEL_112;
    v25 = &v36;
LABEL_109:
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v30, (struct EPATHOBJ *)v37, 2u, v25);
    v22 = v30;
    if ( !v30 )
    {
      v32 = a1[1];
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v32);
      a1[1] = 0LL;
      goto LABEL_23;
    }
    goto LABEL_111;
  }
  if ( (*(_DWORD *)a7 & 1) != 0 )
  {
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v37);
    if ( !v38 || !EPATHOBJ::bClone((EPATHOBJ *)v37, a4) || (v37[0] & 1) != 0 && !EPATHOBJ::bFlatten((EPATHOBJ *)v37) )
      goto LABEL_23;
    if ( !pathwide::bWiden((pathwide *)v37, (struct EPATHOBJ *)v37, a6, a7, v30) )
      goto LABEL_23;
    if ( *(_BYTE *)(a5 + 20) )
    {
      v36.top = 16 * *(_DWORD *)(a5 + 8);
      v28 = &v36;
      v36.bottom = 16 * *(_DWORD *)(a5 + 16);
    }
    else
    {
      v28 = 0LL;
    }
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v31, (struct EPATHOBJ *)v37, a9, v28);
    if ( !v31 )
      goto LABEL_23;
    a1[1] = v31;
    if ( a9 == 2 )
      goto LABEL_112;
    v25 = v28;
    goto LABEL_109;
  }
LABEL_113:
  a1[4] = (const struct _LINEATTRS *)a4;
LABEL_114:
  v29 = a1[4];
  if ( v29 )
  {
    *(_QWORD *)&v29->eMiterLimit = *a1;
    a1[4]->pstyle = (PFLOAT_LONG)a1[1];
    *(_QWORD *)&a1[4]->elStyleState.e = a1[2];
    *(_QWORD *)&a1[4][1].fl = a1[3];
  }
}

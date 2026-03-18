/*
 * XREFs of ?EPATHOBJ_bSimpleStrokeAndFill@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@5PEAU_POINTL@@KK@Z @ 0x1400E125C
 * Callers:
 *     ?EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1400D3F84 (-EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 * Callees:
 *     ??1PRECOMPUTE@@QEAA@XZ @ 0x140055AAC (--1PRECOMPUTE@@QEAA@XZ.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAUHDEV__@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEBU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1400E09A4 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAUHDEV__@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEBU.c)
 *     ?EPATHOBJ_bSimpleFill@@YA?AV?$ReturnValueTracer@H@@PEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1400E16A0 (-EPATHOBJ_bSimpleFill@@YA-AV-$ReturnValueTracer@H@@PEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_.c)
 *     ?EPATHOBJ_bSimpleStroke@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1400E19D4 (-EPATHOBJ_bSimpleStroke@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@.c)
 *     IsPathBoundsInRange @ 0x1400E1D44 (IsPathBoundsInRange.c)
 *     EngStrokeAndFillPath @ 0x1401E6AC0 (EngStrokeAndFillPath.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

BOOL __fastcall EPATHOBJ_bSimpleStrokeAndFill(
        struct EPATHOBJ *a1,
        unsigned int a2,
        HDEV a3,
        struct SURFACE *a4,
        CLIPOBJ *pco,
        XFORMOBJ *pxo,
        BRUSHOBJ *pboStroke,
        LINEATTRS *a8,
        BRUSHOBJ *pboFill,
        struct _POINTL *pptlBrushOrg,
        MIX a11,
        FLONG flOptions)
{
  int mixFill; // r15d
  __int64 v14; // rcx
  char v16; // r12
  HDEV v17; // r11
  int v18; // edi
  int v19; // eax
  int v20; // ebx
  LINEATTRS *plineattrs; // r13
  CLIPOBJ *v22; // r12
  int v24; // r12d
  __int64 (__fastcall *v25)(unsigned __int64, struct EPATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, struct _POINTL *, int, FLONG); // r10
  __int64 (__fastcall *v26)(unsigned __int64, struct EPATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, struct _POINTL *, int, FLONG); // r10
  _OWORD v27[2]; // [rsp+68h] [rbp-49h] BYREF
  _OWORD v28[2]; // [rsp+88h] [rbp-29h] BYREF
  __int64 v29; // [rsp+A8h] [rbp-9h]
  char v30; // [rsp+F8h] [rbp+47h] BYREF
  unsigned int v31; // [rsp+100h] [rbp+4Fh]
  HDEV v32; // [rsp+108h] [rbp+57h]

  v32 = a3;
  v31 = a2;
  mixFill = a11;
  v14 = *((_QWORD *)a1 + 1) + 48LL;
  v16 = a2;
  memset(v27, 0, sizeof(v27));
  v18 = 0;
  if ( !(unsigned __int8)IsPathBoundsInRange(v14) )
    return 0;
  if ( !*((_DWORD *)a1 + 1) )
    return 1;
  v19 = *((_DWORD *)a4 + 28);
  v20 = 1;
  ++*((_DWORD *)a4 + 23);
  plineattrs = a8;
  if ( (v19 & 0x80u) != 0 )
  {
    memset(v28, 0, sizeof(v28));
    v29 = 0LL;
    PRECOMPUTE::vInit(
      (const struct _LINEATTRS **)v28,
      a4,
      (__int64)v17,
      a1,
      (__int64)pco,
      (struct EPATHOBJ *)pxo,
      (struct EXFORMOBJ *)a8,
      mixFill,
      flOptions,
      2);
    if ( !v29 )
    {
      EngSetLastError(8u);
      goto LABEL_26;
    }
    if ( (plineattrs->fl & 1) == 0 || (v16 & 2) != 0 )
    {
      v24 = -1;
      if ( (*(_BYTE *)a1 & 1) != 0 )
      {
        if ( (v31 & 1) != 0 )
        {
          if ( (*(_DWORD *)(*((_QWORD *)a1 + 1) + 88LL) & 1) != 0 )
            PushThreadGuardedObject(v27, a1, vCleanupPathStackObj);
          v25 = (__int64 (__fastcall *)(unsigned __int64, struct EPATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, struct _POINTL *, int, FLONG))*((_QWORD *)v32 + 351);
          if ( v25 )
            v24 = v25(
                    ((unsigned __int64)a4 + 24) & -(__int64)(a4 != 0LL),
                    a1,
                    pco,
                    pxo,
                    pboStroke,
                    plineattrs,
                    pboFill,
                    pptlBrushOrg,
                    mixFill,
                    flOptions);
          if ( (*(_DWORD *)(*((_QWORD *)a1 + 1) + 88LL) & 1) != 0 )
            PopThreadGuardedObject(v27);
          if ( v24 == 1 )
            goto LABEL_25;
          if ( v24 == -1 )
            goto LABEL_26;
          v24 = -1;
        }
        if ( !EPATHOBJ::bFlatten(a1) )
          goto LABEL_26;
      }
      if ( (*(_DWORD *)(*((_QWORD *)a1 + 1) + 88LL) & 1) != 0 )
        PushThreadGuardedObject(v27, a1, vCleanupPathStackObj);
      v26 = (__int64 (__fastcall *)(unsigned __int64, struct EPATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, struct _POINTL *, int, FLONG))*((_QWORD *)v32 + 351);
      if ( v26 )
        v24 = v26(
                ((unsigned __int64)a4 + 24) & -(__int64)(a4 != 0LL),
                a1,
                pco,
                pxo,
                pboStroke,
                plineattrs,
                pboFill,
                pptlBrushOrg,
                mixFill,
                flOptions);
      if ( (*(_DWORD *)(*((_QWORD *)a1 + 1) + 88LL) & 1) != 0 )
        PopThreadGuardedObject(v27);
      if ( v24 == 1 )
      {
LABEL_25:
        v18 = 1;
LABEL_26:
        PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v28);
        return v18;
      }
      if ( v24 == -1 )
        goto LABEL_26;
    }
    PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v28);
    v17 = v32;
  }
  if ( (plineattrs->fl & 1) != 0
    && ((unsigned __int8)mixFill != 13 || (unsigned int)(*(_DWORD *)(*((_QWORD *)a4 + 6) + 2124LL) - 1) > 1) )
  {
    return EngStrokeAndFillPath(
             (SURFOBJ *)(((unsigned __int64)a4 + 24) & -(__int64)(a4 != 0LL)),
             (PATHOBJ *)a1,
             pco,
             pxo,
             pboStroke,
             plineattrs,
             pboFill,
             pptlBrushOrg,
             mixFill,
             flOptions);
  }
  pboFill[5].iSolidColor = pboFill[5].iSolidColor;
  if ( !_bittest((const signed __int32 *)&pboStroke[5], 0xFu) )
    mixFill = ((unsigned __int8)mixFill << 8) | (unsigned __int8)mixFill;
  v22 = pco;
  if ( !*(_DWORD *)EPATHOBJ_bSimpleFill(&v30, a1, v31, v17, a4)
    || !(unsigned int)EPATHOBJ_bSimpleStroke(a1, v31, v32, a4, v22, pxo, pboStroke, pptlBrushOrg, plineattrs, mixFill) )
  {
    return 0;
  }
  return v20;
}

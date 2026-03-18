/*
 * XREFs of ?EPATHOBJ_bSimpleFill@@YA?AV?$ReturnValueTracer@H@@PEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1400E16A0
 * Callers:
 *     ?bProxyDrvTextOut@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAUHDEV__@@K4@Z @ 0x1400AA738 (-bProxyDrvTextOut@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOB.c)
 *     ?EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1400D3F84 (-EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?EPATHOBJ_bSimpleStrokeAndFill@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@5PEAU_POINTL@@KK@Z @ 0x1400E125C (-EPATHOBJ_bSimpleStrokeAndFill@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXF.c)
 *     ?EPATHOBJ_bSimpleStroke@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1400E19D4 (-EPATHOBJ_bSimpleStroke@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@.c)
 *     ?EPATHOBJ_bTextOutSimpleFill@@YA?AV?$ReturnValueTracer@H@@PEAVEPATHOBJ@@AEAVXDCOBJ@@AEAVRFONTOBJ@@PEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x140300244 (-EPATHOBJ_bTextOutSimpleFill@@YA-AV-$ReturnValueTracer@H@@PEAVEPATHOBJ@@AEAVXDCOBJ@@AEAVRFONTOBJ.c)
 * Callees:
 *     ??1PRECOMPUTE@@QEAA@XZ @ 0x140055AAC (--1PRECOMPUTE@@QEAA@XZ.c)
 *     ??0?$ReturnValueTracer@K@@QEAA@K@Z @ 0x14005C3CC (--0-$ReturnValueTracer@K@@QEAA@K@Z.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAUHDEV__@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEBU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1400E09A4 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAUHDEV__@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEBU.c)
 *     IsPathBoundsInRange @ 0x1400E1D44 (IsPathBoundsInRange.c)
 *     EngFillPath @ 0x1400E1DC0 (EngFillPath.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

_DWORD *__fastcall EPATHOBJ_bSimpleFill(
        _DWORD *a1,
        __int64 a2,
        char a3,
        __int64 a4,
        SURFACE *a5,
        CLIPOBJ *pco,
        BRUSHOBJ *pbo,
        POINTL *pptlBrushOrg,
        MIX mix,
        FLONG flOptions)
{
  __int64 v11; // rcx
  __int64 v14; // r11
  BOOL v15; // edx
  int v17; // r12d
  __int64 (__fastcall *v18)(unsigned __int64, __int64, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG); // rax
  int v19; // r15d
  int v20; // edx
  __int64 (__fastcall *v21)(unsigned __int64, __int64, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG); // rax
  _OWORD v22[2]; // [rsp+58h] [rbp-49h] BYREF
  _OWORD v23[2]; // [rsp+78h] [rbp-29h] BYREF
  __int64 v24; // [rsp+98h] [rbp-9h]

  v11 = *(_QWORD *)(a2 + 8) + 48LL;
  memset(v22, 0, sizeof(v22));
  if ( !(unsigned __int8)IsPathBoundsInRange(v11) )
  {
    v15 = 0;
    goto LABEL_5;
  }
  if ( !*(_DWORD *)(a2 + 4) )
  {
    v15 = 1;
    goto LABEL_5;
  }
  if ( (*((_DWORD *)a5 + 28) & 0x40) != 0
    && ((a3 & 8) != 0 && (flOptions & 2) != 0 || (flOptions & 2) == 0 && (a3 & 4) != 0) )
  {
    memset(v23, 0, sizeof(v23));
    v24 = 0LL;
    PRECOMPUTE::vInit(
      (const struct _LINEATTRS **)v23,
      a5,
      v14,
      (const struct EPATHOBJ *)a2,
      (__int64)pco,
      0LL,
      0LL,
      mix,
      flOptions,
      1);
    if ( v24 )
    {
      v17 = -1;
      if ( (*(_BYTE *)a2 & 1) == 0 )
        goto LABEL_33;
      if ( (a3 & 1) == 0 )
        goto LABEL_40;
      ++*((_DWORD *)a5 + 23);
      if ( (*(_DWORD *)(*(_QWORD *)(a2 + 8) + 88LL) & 1) != 0 )
        PushThreadGuardedObject(v22, a2, vCleanupPathStackObj);
      v18 = *(__int64 (__fastcall **)(unsigned __int64, __int64, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG))(a4 + 2800);
      if ( v18 )
        v19 = v18(((unsigned __int64)a5 + 24) & -(__int64)(a5 != 0LL), a2, pco, pbo, pptlBrushOrg, mix, flOptions);
      else
        v19 = -1;
      if ( (*(_DWORD *)(*(_QWORD *)(a2 + 8) + 88LL) & 1) != 0 )
        PopThreadGuardedObject(v22);
      if ( v19 == 1 )
        goto LABEL_20;
      if ( v19 != -1 )
      {
LABEL_40:
        if ( EPATHOBJ::bFlatten((EPATHOBJ *)a2) )
        {
LABEL_33:
          ++*((_DWORD *)a5 + 23);
          if ( (*(_DWORD *)(*(_QWORD *)(a2 + 8) + 88LL) & 1) != 0 )
            PushThreadGuardedObject(v22, a2, vCleanupPathStackObj);
          v21 = *(__int64 (__fastcall **)(unsigned __int64, __int64, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG))(a4 + 2800);
          if ( v21 )
            v17 = v21(((unsigned __int64)a5 + 24) & -(__int64)(a5 != 0LL), a2, pco, pbo, pptlBrushOrg, mix, flOptions);
          if ( (*(_DWORD *)(*(_QWORD *)(a2 + 8) + 88LL) & 1) != 0 )
            PopThreadGuardedObject(v22);
          if ( v17 == 1 )
          {
LABEL_20:
            v20 = 1;
LABEL_21:
            ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(a1, v20);
            PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v23);
            return a1;
          }
          if ( v17 != -1 )
          {
            PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v23);
            goto LABEL_4;
          }
        }
      }
    }
    else
    {
      EngSetLastError(8u);
    }
    v20 = 0;
    goto LABEL_21;
  }
LABEL_4:
  ++*((_DWORD *)a5 + 23);
  v15 = EngFillPath(
          (SURFOBJ *)(((unsigned __int64)a5 + 24) & -(__int64)(a5 != 0LL)),
          (PATHOBJ *)a2,
          pco,
          pbo,
          pptlBrushOrg,
          mix,
          flOptions);
LABEL_5:
  ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(a1, v15);
  return a1;
}

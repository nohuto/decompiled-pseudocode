/*
 * XREFs of ?TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1400AB140
 * Callers:
 *     ?GrepExtTextOutWLocked@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXKAEBUTag@RFONTOBJ@@@Z @ 0x140059DF0 (-GrepExtTextOutWLocked@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXKA.c)
 *     ?EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1400A9F28 (-EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PE.c)
 *     ?bProxyDrvTextOut@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAUHDEV__@@K4@Z @ 0x1400AA738 (-bProxyDrvTextOut@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOB.c)
 * Callees:
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x140018520 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1400D6BD4 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1400D7450 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

void __fastcall TextOutBitBlt(
        struct SURFACE *this,
        struct RFONTOBJ *a2,
        struct _SURFOBJ *a3,
        struct _SURFOBJ *a4,
        struct _CLIPOBJ *a5,
        struct _XLATEOBJ *a6,
        struct _RECTL *a7,
        struct _POINTL *a8,
        struct _POINTL *a9,
        struct _BRUSHOBJ *a10,
        struct _POINTL *a11)
{
  int *v11; // rbx
  unsigned int v13; // esi
  unsigned int v14; // r14d
  int v15; // r12d
  __int64 v17; // rax
  int (*v18)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  int v19; // eax
  unsigned int v20; // [rsp+60h] [rbp-59h] BYREF
  unsigned int v21; // [rsp+64h] [rbp-55h] BYREF
  int *v22; // [rsp+68h] [rbp-51h] BYREF
  struct _POINTL *v23; // [rsp+70h] [rbp-49h]
  struct _BRUSHOBJ *v24; // [rsp+78h] [rbp-41h]
  struct _RECTL *v25; // [rsp+80h] [rbp-39h]
  int v26[10]; // [rsp+88h] [rbp-31h] BYREF

  v11 = v26;
  v25 = a7;
  v13 = 0;
  v14 = 0;
  v24 = a10;
  v15 = 0;
  v23 = a11;
  v17 = *((_QWORD *)this + 6);
  v20 = 0;
  v21 = 0;
  v22 = v26;
  if ( (*(_DWORD *)(v17 + 40) & 0x8080) == 0x8080 && *(_QWORD *)a2 )
  {
    v19 = UMPDReleaseRFONTSem(a2, 0LL, &v20, &v21, &v22);
    v13 = v20;
    v15 = v19;
    v14 = v21;
    v11 = v22;
  }
  v18 = SURFACE::pfnBitBlt(this);
  ((void (__fastcall *)(unsigned __int64, _QWORD, _QWORD, struct _CLIPOBJ *, _QWORD, struct _RECTL *, _QWORD, _QWORD, struct _BRUSHOBJ *, struct _POINTL *, int))v18)(
    ((unsigned __int64)this + 24) & -(__int64)(this != 0LL),
    0LL,
    0LL,
    a5,
    0LL,
    v25,
    0LL,
    0LL,
    v24,
    v23,
    61680);
  if ( v15 )
  {
    UMPDAcquireRFONTSem(a2, 0LL, v13, v14, v11);
    if ( v11 )
    {
      if ( v11 != v26 )
        Win32FreePool(v11);
    }
  }
}

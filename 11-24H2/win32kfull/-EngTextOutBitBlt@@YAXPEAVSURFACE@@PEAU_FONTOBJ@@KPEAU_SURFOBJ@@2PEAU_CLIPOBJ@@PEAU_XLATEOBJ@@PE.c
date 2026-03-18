/*
 * XREFs of ?EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1400A9F28
 * Callers:
 *     EngTextOut @ 0x140058790 (EngTextOut.c)
 * Callees:
 *     EngBitBlt @ 0x1400179A0 (EngBitBlt.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14005CE04 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1400AB140 (-TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_R.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1400D6BD4 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ??0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z @ 0x140122468 (--0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z.c)
 *     ??1UMPDReleaseAcquireRFONTSem@@QEAA@XZ @ 0x1401224D8 (--1UMPDReleaseAcquireRFONTSem@@QEAA@XZ.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1401226C8 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall EngTextOutBitBlt(
        struct SURFACE *this,
        struct _FONTOBJ *a2,
        char a3,
        struct _SURFOBJ *a4,
        struct _SURFOBJ *a5,
        CLIPOBJ *pco,
        struct _XLATEOBJ *a7,
        RECTL *a8,
        struct _POINTL *a9,
        struct _POINTL *a10,
        struct _BRUSHOBJ *a11,
        struct _POINTL *pptlBrush)
{
  int v14; // eax
  struct _SURFOBJ *v15; // r8
  struct _SURFOBJ *v16; // r9
  __int64 v17; // rax
  RECTL *prclTrg; // [rsp+28h] [rbp-A1h]
  struct _POINTL *v19; // [rsp+38h] [rbp-91h]
  struct _POINTL *pbo; // [rsp+40h] [rbp-89h]
  unsigned int v21; // [rsp+58h] [rbp-71h]
  _QWORD v22[2]; // [rsp+60h] [rbp-69h] BYREF
  int v23; // [rsp+70h] [rbp-59h] BYREF
  unsigned int v24; // [rsp+74h] [rbp-55h] BYREF
  unsigned int v25; // [rsp+78h] [rbp-51h] BYREF
  char v26; // [rsp+7Ch] [rbp-4Dh] BYREF
  XLATEOBJ v27; // [rsp+A8h] [rbp-21h] BYREF

  if ( (a3 & 0x10) != 0 )
  {
    v22[0] = a2;
    v14 = bUMPDSecurityGateEx();
    UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)&v23, this, a2, v14);
    TextOutBitBlt(
      this,
      (struct RFONTOBJ *)v22,
      v15,
      v16,
      pco,
      (struct _XLATEOBJ *)prclTrg,
      a8,
      v19,
      pbo,
      a11,
      pptlBrush,
      v21);
    UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)&v23);
    v22[0] = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v22);
  }
  else
  {
    v23 = 0;
    v24 = 0;
    v25 = 0;
    *(_QWORD *)&v27.iUniq = &v26;
    v17 = *((_QWORD *)this + 6);
    *(_QWORD *)&v27.iSrcType = a2;
    if ( v17 )
    {
      if ( (*(_DWORD *)(v17 + 40) & 0x8000) != 0 )
        v23 = UMPDReleaseRFONTSem((struct RFONTOBJ *)&v27.iSrcType, 0LL, &v24, &v25, (int **)&v27);
    }
    EngBitBlt(
      (SURFOBJ *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL)),
      0LL,
      0LL,
      pco,
      0LL,
      a8,
      0LL,
      0LL,
      a11,
      pptlBrush,
      0xF0F0u);
    UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)&v23);
  }
}

/*
 * XREFs of ??1FRINGERECT@@QEAA@XZ @ 0x140180A64
 * Callers:
 *     EngTextOut @ 0x140058790 (EngTextOut.c)
 * Callees:
 *     ?vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z @ 0x140018168 (-vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x140018520 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ??0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z @ 0x140122468 (--0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z.c)
 *     ??1UMPDReleaseAcquireRFONTSem@@QEAA@XZ @ 0x1401224D8 (--1UMPDReleaseAcquireRFONTSem@@QEAA@XZ.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1401226C8 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

void __fastcall FRINGERECT::~FRINGERECT(FRINGERECT *this, __int64 a2)
{
  int v3; // eax
  int v4; // eax
  SURFACE *v5; // rcx
  __int64 v6; // rsi
  char *v7; // rdi
  int (*i)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rbp
  _DWORD v9[4]; // [rsp+60h] [rbp-78h] BYREF
  _BYTE v10[80]; // [rsp+70h] [rbp-68h] BYREF

  if ( *((_QWORD *)this + 1) )
  {
    v3 = *((_DWORD *)this + 8) - 1;
    for ( *((_DWORD *)this + 8) = v3; v3 >= 0; *((_DWORD *)this + 8) = v3 )
    {
      vDIBSolidBlt(
        *(struct SURFACE **)this,
        (struct _RECTL *)((char *)this + 16 * v3 + 36),
        *((struct _CLIPOBJ **)this + 2),
        **((_DWORD **)this + 3),
        0);
      v3 = *((_DWORD *)this + 8) - 1;
    }
  }
  else
  {
    v4 = bUMPDSecurityGateEx((__int64)this, a2);
    UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem(
      (UMPDReleaseAcquireRFONTSem *)v10,
      *(struct SURFACE **)this,
      *((struct _FONTOBJ **)this + 13),
      v4);
    v5 = *(SURFACE **)this;
    v9[0] = 0;
    v9[1] = 0;
    v6 = ((unsigned __int64)v5 + 24) & -(__int64)(v5 != 0LL);
    v7 = (char *)this + 36;
    for ( i = SURFACE::pfnBitBlt(v5); v7 < (char *)this + 16 * *((int *)this + 8) + 36; v7 += 16 )
      ((void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, char *, _QWORD, _QWORD, _QWORD, _DWORD *, int))i)(
        v6,
        0LL,
        0LL,
        *((_QWORD *)this + 2),
        0LL,
        v7,
        0LL,
        0LL,
        *((_QWORD *)this + 3),
        v9,
        61680);
    UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v10);
  }
}

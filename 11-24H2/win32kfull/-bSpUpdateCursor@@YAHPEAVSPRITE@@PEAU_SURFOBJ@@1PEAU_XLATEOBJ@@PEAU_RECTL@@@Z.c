/*
 * XREFs of ?bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z @ 0x14032AF64
 * Callers:
 *     ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x14016C338 (-GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 * Callees:
 *     EngCopyBits @ 0x14000DA80 (EngCopyBits.c)
 *     ?vSpDeleteShape@@YAXPEAVSPRITE@@@Z @ 0x1400DDD0C (-vSpDeleteShape@@YAXPEAVSPRITE@@@Z.c)
 *     ?bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETTE@@KK4@Z @ 0x1400DF03C (-bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETT.c)
 *     ?vSetPID@SURFMEM@@QEAAXK@Z @ 0x1401FE464 (-vSetPID@SURFMEM@@QEAAXK@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall bSpUpdateCursor(
        struct SPRITE *a1,
        SURFOBJ *psoSrc,
        struct _SURFOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5)
{
  _QWORD *v5; // rax
  unsigned int v6; // edi
  struct _RECTL v8; // xmm0
  __int64 v11; // rbx
  struct Gre::Base::SESSION_GLOBALS *v12; // rax
  SURFOBJ *v13; // r14
  LONG cy; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rcx
  _QWORD *v18; // rdx
  __int64 v20; // [rsp+60h] [rbp-51h] BYREF
  char v21; // [rsp+68h] [rbp-49h]
  int v22; // [rsp+6Ch] [rbp-45h]
  struct _POINTL v23; // [rsp+78h] [rbp-39h] BYREF
  struct _SURFOBJ *v24; // [rsp+80h] [rbp-31h]
  struct _XLATEOBJ *v25; // [rsp+88h] [rbp-29h]
  _QWORD *v26; // [rsp+90h] [rbp-21h]
  __int128 v27; // [rsp+98h] [rbp-19h] BYREF
  __int128 v28; // [rsp+A8h] [rbp-9h]
  RECTL prclDest; // [rsp+B8h] [rbp+7h] BYREF

  v5 = (_QWORD *)*((_QWORD *)a1 + 2);
  prclDest = 0LL;
  v6 = 0;
  v25 = a4;
  v27 = 0LL;
  v20 = 0LL;
  v8 = *a5;
  v21 = 0;
  v28 = 0LL;
  v22 = 0;
  v11 = *v5;
  *((struct _RECTL *)a1 + 6) = v8;
  v24 = a3;
  v26 = v5;
  v12 = Gre::Base::Globals(a1);
  v23 = 0LL;
  if ( !psoSrc )
  {
    *((_DWORD *)a1 + 1) = 2;
    *((_DWORD *)a1 + 50) = 33488896;
    bSpCreateShape(a1, &v23, a3, 0LL, a5, *((struct PALETTE **)v12 + 472), 6u, 1u, 0LL);
    LOBYTE(v6) = *((_QWORD *)a1 + 16) != 0LL;
    goto LABEL_15;
  }
  v13 = (SURFOBJ *)*((_QWORD *)a1 + 15);
  if ( !v13 )
    goto LABEL_7;
  if ( v13->sizlBitmap.cx != psoSrc->sizlBitmap.cx || v13->sizlBitmap.cy != psoSrc->sizlBitmap.cy )
  {
    bDeleteSurface(v13->hsurf);
    v13 = 0LL;
LABEL_7:
    DWORD1(v27) = psoSrc->sizlBitmap.cx;
    cy = psoSrc->sizlBitmap.cy;
    LODWORD(v27) = 1;
    DWORD2(v27) = cy;
    DWORD2(v28) = 1;
    *(_QWORD *)&v28 = 0LL;
    if ( SURFMEM::bCreateDIB((SURFMEM *)&v20, (struct _DEVBITMAPINFO *)&v27, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
    {
      v21 |= 1u;
      v13 = (SURFOBJ *)((v20 + 24) & -(__int64)(v20 != 0));
      SURFMEM::vSetPID((SURFMEM *)&v20, v15, v16);
    }
  }
  *((_QWORD *)a1 + 15) = v13;
  if ( v13 )
  {
    v17 = HIDWORD(*(_QWORD *)&a5->right);
    prclDest = *a5;
    prclDest.bottom = (v13->sizlBitmap.cy >> 1) + v17;
    EngCopyBits(v13, psoSrc, 0LL, 0LL, &prclDest, (POINTL *)&prclDest);
  }
  if ( v24 )
  {
    bSpCreateShape(a1, &v23, v24, v25, a5, *(struct PALETTE **)(v11 + 1792), 0, 0, 0LL);
    LOBYTE(v6) = *((_QWORD *)a1 + 16) != 0LL;
  }
  else
  {
    vSpDeleteShape(a1);
    v6 = 1;
  }
  v18 = v26;
  *((_DWORD *)a1 + 1) = 0x1000000;
  *((_DWORD *)a1 + 39) = *((_DWORD *)v18 + 28);
  *((_DWORD *)a1 + 38) = *((_DWORD *)v18 + 27);
LABEL_15:
  SURFMEM::~SURFMEM((SURFMEM *)&v20);
  return v6;
}

/*
 * XREFs of ?UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1400D9600
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14005CE04 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1400D6BD4 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1400D7450 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D8298 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D8380 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1400D875C (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1400D89F0 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1400D8D1C (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D9ADC (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z @ 0x1400DA544 (-pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z.c)
 *     ?pstro@UMPDOBJ@@QEAAHPEAPEAU_STROBJ@@@Z @ 0x1400DAD6C (-pstro@UMPDOBJ@@QEAAHPEAPEAU_STROBJ@@@Z.c)
 *     ?RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z @ 0x1401C06FC (-RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z.c)
 *     ?ulGetMaxSize@UMPDOBJ@@QEBAKXZ @ 0x1401C117C (-ulGetMaxSize@UMPDOBJ@@QEBAKXZ.c)
 *     ?bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z @ 0x140335914 (-bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall UMPDDrvTextOut(
        struct _SURFOBJ *a1,
        struct _STROBJ *a2,
        struct _FONTOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        struct _BRUSHOBJ *a7,
        struct _BRUSHOBJ *a8,
        struct _POINTL *a9,
        unsigned int a10)
{
  unsigned int v11; // edi
  int v12; // esi
  UMPDOBJ *v14; // rbx
  unsigned int v15; // r10d
  unsigned int v16; // r14d
  int v17; // r12d
  unsigned int v18; // eax
  unsigned int v20; // ecx
  __int64 cGlyphs; // rax
  unsigned int v22; // edx
  unsigned int v23; // ecx
  unsigned int v24; // eax
  unsigned int v25; // edx
  unsigned int v26; // eax
  BOOL v27; // edx
  PVOID pvScan0; // rax
  unsigned int MaxSize; // eax
  int v30; // edx
  int v31; // r11d
  int v32; // r8d
  unsigned int v33; // r8d
  unsigned int v34; // r9d
  ULONG cjBits; // eax
  unsigned int v36; // ecx
  int v37; // r14d
  struct _RECTL *i; // rcx
  int Size; // [rsp+20h] [rbp-E0h]
  size_t Sizea; // [rsp+20h] [rbp-E0h]
  int v41[2]; // [rsp+30h] [rbp-D0h] BYREF
  int v42; // [rsp+38h] [rbp-C8h] BYREF
  struct _FONTOBJ *v43; // [rsp+40h] [rbp-C0h]
  void *v44; // [rsp+48h] [rbp-B8h]
  void *pvBits; // [rsp+50h] [rbp-B0h]
  UMPDOBJ *v46; // [rsp+58h] [rbp-A8h] BYREF
  struct _CLIPOBJ *v47; // [rsp+60h] [rbp-A0h]
  struct _RECTL *v48; // [rsp+68h] [rbp-98h]
  struct _BRUSHOBJ *v49; // [rsp+70h] [rbp-90h]
  struct _BRUSHOBJ *v50; // [rsp+78h] [rbp-88h]
  struct _POINTL *v51; // [rsp+80h] [rbp-80h]
  char v52; // [rsp+90h] [rbp-70h] BYREF
  __int16 v53; // [rsp+91h] [rbp-6Fh]
  char v54; // [rsp+93h] [rbp-6Dh]
  int v55; // [rsp+94h] [rbp-6Ch]
  __int64 v56; // [rsp+98h] [rbp-68h]
  __int64 v57; // [rsp+A0h] [rbp-60h]
  struct _SURFOBJ *v58; // [rsp+A8h] [rbp-58h] BYREF
  struct _STROBJ *v59; // [rsp+B0h] [rbp-50h] BYREF
  struct _FONTOBJ *v60; // [rsp+B8h] [rbp-48h] BYREF
  void *v61; // [rsp+C0h] [rbp-40h] BYREF
  void *v62; // [rsp+C8h] [rbp-38h] BYREF
  void *v63; // [rsp+D0h] [rbp-30h] BYREF
  void *v64; // [rsp+D8h] [rbp-28h] BYREF
  void *v65; // [rsp+E0h] [rbp-20h] BYREF
  void *v66; // [rsp+E8h] [rbp-18h] BYREF
  unsigned int v67; // [rsp+F0h] [rbp-10h]
  int v68; // [rsp+F4h] [rbp-Ch]

  v48 = a6;
  v11 = 1;
  v12 = 0;
  v41[0] = 0;
  v49 = a7;
  v50 = a8;
  v51 = a9;
  v47 = a4;
  v43 = a3;
  v42 = 1;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v46);
  v14 = v46;
  LOBYTE(v15) = 0;
  v53 = 0;
  pvBits = 0LL;
  v44 = 0LL;
  v54 = 0;
  v56 = 0LL;
  v68 = 0;
  if ( !v46 )
    goto LABEL_20;
  if ( a5 )
  {
    v37 = 1;
    for ( i = a5; i->left != i->right; ++v37 )
      ++i;
    v16 = 16 * v37;
  }
  else
  {
    v16 = 0;
  }
  if ( !*((_BYTE *)v46 + 456) )
    goto LABEL_5;
  v20 = 272;
  if ( a2 )
  {
    cGlyphs = a2->cGlyphs;
    v22 = 2 * cGlyphs;
    if ( (unsigned __int64)(2 * cGlyphs) > 0xFFFFFFFF )
      goto LABEL_20;
    v23 = 24 * cGlyphs;
    if ( (unsigned __int64)(24 * cGlyphs) > 0xFFFFFFFF )
      goto LABEL_20;
    if ( v22 + 7 < v22 )
      goto LABEL_20;
    v24 = (v22 + 7) & 0xFFFFFFF8;
    if ( v23 + 7 < v23 )
      goto LABEL_20;
    v25 = (v23 + 7) & 0xFFFFFFF8;
    v26 = v24 + 320;
    if ( v26 < 0x140 )
      goto LABEL_20;
    v20 = v25 + v26;
    if ( v25 + v26 < v26 )
      goto LABEL_20;
  }
  if ( v16 + 7 < v16 || ((v16 + 7) & 0xFFFFFFF8) + v20 < v20 )
  {
LABEL_20:
    v11 = 0;
    goto LABEL_21;
  }
  if ( a1 && a1->pvBits )
  {
    v27 = 0;
    if ( !a1->iType )
      v27 = SLOBYTE(a1->fjBitmap) < 0;
    pvScan0 = a1->pvScan0;
    pvBits = a1->pvBits;
    v12 = !v27;
    v44 = pvScan0;
    MaxSize = UMPDOBJ::ulGetMaxSize(v46);
    v33 = v32 + 80;
    v34 = MaxSize;
    if ( v33 < 0x50 || (cjBits = a1->cjBits, cjBits + 7 < cjBits) || (v36 = v31 & (cjBits + 7), v36 + v33 < v36) )
    {
      v11 = v15;
    }
    else if ( v36 + v33 > v34 && !v30 )
    {
      v11 = UMPDOBJ::bSendLargeBitmap(v14, a1, v41);
      LOBYTE(v15) = 0;
    }
  }
  v42 = v11;
LABEL_5:
  v55 = 23;
  v52 = v15;
  v57 = *(_QWORD *)v14;
  v60 = v43;
  v61 = v47;
  v63 = v48;
  v64 = v49;
  v65 = v50;
  v62 = a5;
  v66 = v51;
  v59 = a2;
  v17 = v41[0];
  v67 = a10;
  v58 = a1;
  if ( v11
    && (unsigned int)UMPDOBJ::pso(v14, (UMPDOBJ *)((char *)v14 + 80), &v58, (unsigned int)v41[0])
    && (unsigned int)UMPDOBJ::pstro(v14, &v59)
    && (unsigned int)UMPDOBJ::pfo(v14, &v60)
    && (unsigned int)UMPDOBJ::ThunkDDIOBJ(v14, (UMPDOBJ *)((char *)v14 + 128), (const void **)&v61, 0x18u, 0LL)
    && (unsigned int)UMPDOBJ::ThunkMemBlock(v14, (const void **)&v62, v16)
    && (unsigned int)UMPDOBJ::ThunkMemBlock(v14, (const void **)&v63, 0x10u)
    && (unsigned int)UMPDOBJ::ThunkDDIOBJ(v14, (UMPDOBJ *)((char *)v14 + 160), (const void **)&v64, 0x18u, 0LL)
    && (unsigned int)UMPDOBJ::ThunkDDIOBJ(v14, (UMPDOBJ *)((char *)v14 + 176), (const void **)&v65, 0x18u, 0LL)
    && (unsigned int)UMPDOBJ::ThunkMemBlock(v14, (const void **)&v66, 8u) )
  {
    *(_QWORD *)v41 = v43;
    UMPDReleaseRFONTSem((struct RFONTOBJ *)v41, v14, 0LL, 0LL, 0LL);
    LODWORD(Sizea) = 4;
    v18 = UMPDOBJ::Thunk(v14, &v52, 0x68u, &v42, Sizea);
    v11 = v42;
    if ( v18 == -1 )
      v11 = 0;
    UMPDAcquireRFONTSem((struct RFONTOBJ *)v41, v14, 0, 0, 0LL);
    *(_QWORD *)v41 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v41);
  }
  if ( v12 )
    UMPDOBJ::RestoreBitmap(v14, a1, pvBits, v44, Size, v17);
LABEL_21:
  XUMPDOBJ::~XUMPDOBJ(&v46);
  return v11;
}

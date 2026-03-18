/*
 * XREFs of ?ExtTextOutRect@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAUtagRECT@@AEBUTag@RFONTOBJ@@@Z @ 0x1400C47DC
 * Callers:
 *     ?GreExtTextOutRect@@YA?AV?$ReturnValueTracer@H@@PEAUHDC__@@PEAUtagRECT@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1400C4500 (-GreExtTextOutRect@@YA-AV-$ReturnValueTracer@H@@PEAUHDC__@@PEAUtagRECT@@W4EntryPoint@RFONTOBJ@@@.c)
 *     ?GrepBatchTextOutRect@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUTRECT@@KAEBUTag@RFONTOBJ@@@Z @ 0x1400C45F4 (-GrepBatchTextOutRect@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUTRECT@@KAEBUTag@RFONTOBJ@@@Z.c)
 * Callees:
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x140013568 (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x140016CFC (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x140018520 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ?GrepExtTextOutWLocked@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXKAEBUTag@RFONTOBJ@@@Z @ 0x140059DF0 (-GrepExtTextOutWLocked@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXKA.c)
 *     ??0?$ReturnValueTracer@K@@QEAA@K@Z @ 0x14005C3CC (--0-$ReturnValueTracer@K@@QEAA@K@Z.c)
 *     bCvtPts1 @ 0x1400C5774 (bCvtPts1.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1400C71EC (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     bFToL @ 0x1400E8DB0 (bFToL.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

_DWORD *__fastcall ExtTextOutRect(_DWORD *a1, DC **a2, unsigned int *a3, struct RFONTOBJ::Tag *a4)
{
  _DWORD *v4; // r15
  DC *v5; // rcx
  char *v6; // r12
  int v10; // ebx
  unsigned int v11; // eax
  signed int v12; // r8d
  __int64 v13; // r9
  __int32 v14; // edx
  DC *v15; // rdi
  __int32 v16; // r10d
  DC *v17; // rax
  int v18; // ecx
  __int64 v19; // r13
  DC *v20; // rdi
  __int64 v21; // r8
  __int64 v22; // r14
  int v23; // edx
  BOOL v25; // r14d
  __int64 v26; // rcx
  __int32 v27; // r9d
  __int32 v28; // edx
  int v29; // eax
  __m128i v30; // xmm1
  __int64 v31; // r8
  __int64 v32; // rdi
  struct ECLIPOBJ *v33; // rdx
  int (*v34)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  int v35; // eax
  DC *v36; // rcx
  __int32 v37; // eax
  struct REGION *v38; // rax
  __int64 v39; // r11
  __int64 v40; // r15
  __m128i *v41; // r12
  _DWORD *v42; // [rsp+78h] [rbp-31h] BYREF
  __int64 v43; // [rsp+80h] [rbp-29h] BYREF
  __m128i v44; // [rsp+90h] [rbp-19h] BYREF
  __m128i v45; // [rsp+A0h] [rbp-9h] BYREF

  v4 = a1;
  v42 = a1;
  v5 = *a2;
  v6 = 0LL;
  if ( !*a2 || (*((_DWORD *)v5 + 9) & 0x10000) != 0 )
    goto LABEL_20;
  DC::QuickInitXform(v5, &v43, 2147484164LL);
  v10 = 1;
  if ( (*(_BYTE *)(v43 + 32) & 1) == 0 )
  {
    v10 = *(_DWORD *)GrepExtTextOutWLocked(
                       (__int64)&v42,
                       a2,
                       0,
                       0,
                       2,
                       a3,
                       0LL,
                       0,
                       0LL,
                       *(unsigned __int8 *)(*((_QWORD *)*a2 + 122) + 213LL),
                       0LL,
                       0,
                       a4);
    goto LABEL_32;
  }
  v11 = a3[3];
  v12 = *a3;
  v13 = a3[1];
  v14 = a3[2];
  v15 = *a2;
  v45.m128i_i64[0] = __PAIR64__(v13, v12);
  v45.m128i_i64[1] = __PAIR64__(v11, v14);
  if ( (*(_BYTE *)(v43 + 32) & 0x43) == 0x43
    || (v35 = bCvtPts1(v43, &v45, 2LL, v13),
        v14 = v45.m128i_i32[2],
        LODWORD(v13) = v45.m128i_i32[1],
        v12 = v45.m128i_i32[0],
        v35) )
  {
    if ( (*(_BYTE *)(*((_QWORD *)v15 + 122) + 108LL) & 1) != 0 )
    {
      ++v12;
      ++v14;
      v45.m128i_i32[0] = v12;
      v45.m128i_i32[2] = v14;
    }
  }
  if ( v12 > v14 )
  {
    v37 = v12;
    v45.m128i_i32[0] = v14;
    v12 = v14;
    v45.m128i_i32[2] = v37;
    v14 = v37;
  }
  v16 = v45.m128i_i32[3];
  if ( (int)v13 > v45.m128i_i32[3] )
  {
    v45.m128i_i32[1] = v45.m128i_i32[3];
    v45.m128i_i32[3] = v13;
    LODWORD(v13) = v16;
  }
  if ( (_DWORD)v13 == v45.m128i_i32[3] || v12 == v14 )
    goto LABEL_32;
  v17 = *a2;
  v18 = *((_DWORD *)*a2 + 9);
  if ( (v18 & 0xE0) != 0 )
  {
    if ( (v18 & 0x20) != 0 )
    {
      if ( v12 < *((_DWORD *)v17 + 266) )
      {
        *((_DWORD *)v17 + 266) = v12;
        v14 = v45.m128i_i32[2];
        LODWORD(v13) = v45.m128i_i32[1];
        v12 = v45.m128i_i32[0];
      }
      if ( (int)v13 < *((_DWORD *)v17 + 267) )
      {
        *((_DWORD *)v17 + 267) = v13;
        v14 = v45.m128i_i32[2];
        LODWORD(v13) = v45.m128i_i32[1];
        v12 = v45.m128i_i32[0];
      }
      if ( v14 > *((_DWORD *)v17 + 268) )
      {
        *((_DWORD *)v17 + 268) = v14;
        v14 = v45.m128i_i32[2];
        LODWORD(v13) = v45.m128i_i32[1];
        v12 = v45.m128i_i32[0];
      }
      if ( v45.m128i_i32[3] > *((_DWORD *)v17 + 269) )
      {
        *((_DWORD *)v17 + 269) = v45.m128i_i32[3];
        v14 = v45.m128i_i32[2];
        LODWORD(v13) = v45.m128i_i32[1];
        v12 = v45.m128i_i32[0];
      }
    }
    v36 = *a2;
    if ( (*((_DWORD *)*a2 + 9) & 0x80u) != 0 )
    {
      if ( v12 < *((_DWORD *)v36 + 274) )
      {
        *((_DWORD *)v36 + 274) = v12;
        v14 = v45.m128i_i32[2];
        LODWORD(v13) = v45.m128i_i32[1];
      }
      if ( (int)v13 < *((_DWORD *)v36 + 275) )
      {
        *((_DWORD *)v36 + 275) = v13;
        v14 = v45.m128i_i32[2];
      }
      if ( v14 > *((_DWORD *)v36 + 276) )
        *((_DWORD *)v36 + 276) = v14;
      if ( v45.m128i_i32[3] > *((_DWORD *)v36 + 277) )
        *((_DWORD *)v36 + 277) = v45.m128i_i32[3];
    }
  }
  v19 = *((_QWORD *)*a2 + 62);
  if ( !v19 )
    goto LABEL_32;
  if ( !(unsigned int)DestSurfaceAccessCheck(*((struct SURFACE **)*a2 + 62)) )
  {
    EngSetLastError(5u);
LABEL_20:
    v10 = 0;
    goto LABEL_32;
  }
  v20 = *a2;
  v21 = *((_DWORD *)*a2 + 10) & 1LL;
  v22 = *((int *)*a2 + 2 * v21 + 254);
  if ( (unsigned __int64)(v22 + v45.m128i_i32[0] + 0x80000000LL) <= 0xFFFFFFFF
    && (unsigned __int64)(v22 + v45.m128i_i32[2] + 0x80000000LL) <= 0xFFFFFFFF )
  {
    v39 = *((int *)v20 + 2 * v21 + 255);
    if ( (unsigned __int64)(v39 + v45.m128i_i32[1] + 0x80000000LL) <= 0xFFFFFFFF
      && (unsigned __int64)(v39 + v45.m128i_i32[3] + 0x80000000LL) <= 0xFFFFFFFF )
    {
      v44.m128i_i64[0] = 0LL;
      v45.m128i_i32[0] += v22;
      v25 = 0;
      v26 = (unsigned int)(*((_DWORD *)v20 + 2 * v21 + 254) + v45.m128i_i32[2]);
      v45.m128i_i32[2] += *((_DWORD *)v20 + 2 * v21 + 254);
      v27 = *((_DWORD *)v20 + 2 * v21 + 255) + v45.m128i_i32[1];
      v45.m128i_i32[1] = v27;
      v28 = *((_DWORD *)v20 + 2 * v21 + 255) + v45.m128i_i32[3];
      v45.m128i_i32[3] = v28;
      if ( v45.m128i_i32[0] >= *((_DWORD *)v20 + 250)
        && (int)v26 <= *((_DWORD *)v20 + 252)
        && v27 >= *((_DWORD *)v20 + 251) )
      {
        v25 = v28 <= *((_DWORD *)v20 + 253);
      }
      v29 = *((_DWORD *)v20 + 130);
      if ( (v29 & 1) != 0 && (v29 & 2) == 0 )
      {
        v40 = 0LL;
        v41 = &v45;
        do
        {
          if ( !(unsigned int)bFToL(v26, (char *)&v45 + 4 * v40, 6LL) )
            break;
          v40 = (unsigned int)(v40 + 1);
          v41 = (__m128i *)((char *)v41 + 4);
        }
        while ( (unsigned int)v40 < 4 );
        v4 = v42;
        v6 = (char *)v44.m128i_i64[0];
      }
      if ( v25 )
      {
        v30 = v45;
LABEL_28:
        v31 = *((_QWORD *)*a2 + 122);
        v32 = (__int64)*a2 + 1608;
        v33 = (struct ECLIPOBJ *)*(unsigned int *)(v31 + 152);
        if ( ((*((_BYTE *)*a2 + 316) | *(_BYTE *)(v31 + 152)) & 8) != 0 )
        {
          *(_DWORD *)(v31 + 152) = (unsigned int)v33 & 0xFFFFFFF7;
          *((_DWORD *)*a2 + 79) &= ~8u;
          EBRUSHOBJ::vInitBrush(
            v32,
            *a2,
            *((_QWORD *)a2[2] + 10),
            *((_QWORD *)*a2 + 11),
            *(_QWORD *)(v19 + 128),
            v19,
            (*((_DWORD *)*a2 + 18) >> 15) & 1);
          v30 = v45;
        }
        if ( (*((_DWORD *)*a2 + 9) & 0xE0) != 0 && (*(_DWORD *)(v32 + 120) & 0x100) == 0 )
        {
          v44 = v30;
          XDCOBJ::vAccumulateTight((XDCOBJ *)a2, v33, (struct ERECTL *)&v44);
        }
        ++*(_DWORD *)(v19 + 92);
        v34 = SURFACE::pfnBitBlt((SURFACE *)v19);
        v10 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, char *, _QWORD, __m128i *, _QWORD, _QWORD, __int64, char *, int))v34)(
                v19 + 24,
                0LL,
                0LL,
                v6,
                0LL,
                &v45,
                0LL,
                0LL,
                v32,
                (char *)*a2 + 1192,
                61680);
        goto LABEL_32;
      }
      v6 = (char *)v20 + 1768;
      v38 = XDCOBJ::prgnEffRao(a2);
      XCLIPOBJ::vSetup((DC *)((char *)v20 + 1768), v38, (const struct ERECTL *)&v45, 2);
      v45 = *(__m128i *)((char *)v20 + 1772);
      v30 = v45;
      if ( _mm_cvtsi128_si32(v30) != _mm_cvtsi128_si32(_mm_srli_si128(v30, 8))
        && v45.m128i_i32[1] != _mm_srli_si128(v45, 8).m128i_i32[1] )
      {
        goto LABEL_28;
      }
LABEL_32:
      v23 = v10;
      goto LABEL_18;
    }
  }
  v23 = 0;
LABEL_18:
  ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(v4, v23);
  return v4;
}

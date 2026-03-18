/*
 * XREFs of DxgkEngBltViaGDI @ 0x1401A2AE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14001487C (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140015800 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140018F7C (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x14001980C (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z @ 0x14001A5E0 (-GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140028C7C (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     IntersectRect @ 0x140035778 (IntersectRect.c)
 *     UserGetRedirectedWindowOrigin @ 0x140075480 (UserGetRedirectedWindowOrigin.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1400CDCC4 (--0SURFREF@@QEAA@XZ.c)
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x1400D0DEC (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x14015763C (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     ?DxEngSetPaletteState@@YAHPEAUHPALETTE__@@K_K@Z @ 0x1401A35CC (-DxEngSetPaletteState@@YAHPEAUHPALETTE__@@K_K@Z.c)
 *     ?DxEngSelectPaletteToSurface@@YAPEAUHPALETTE__@@PEAU_SURFOBJ@@PEAU1@@Z @ 0x1401A3610 (-DxEngSelectPaletteToSurface@@YAPEAUHPALETTE__@@PEAU_SURFOBJ@@PEAU1@@Z.c)
 *     ?GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z @ 0x1401A37F4 (-GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgkEngBltViaGDI(
        __int64 a1,
        HDC a2,
        int *a3,
        __int64 a4,
        PVOID pvBits,
        LONG lWidth,
        int a7,
        int a8,
        char a9,
        char a10,
        unsigned int a11,
        __int64 a12,
        __int64 a13)
{
  unsigned int v16; // r15d
  HPALETTE v17; // rax
  HPALETTE v18; // r14
  HBITMAP Bitmap; // r12
  unsigned int v20; // edx
  unsigned __int64 v21; // r8
  Gre::Base *v22; // rcx
  struct Gre::Base::SESSION_GLOBALS *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  char v26; // bl
  HDC DisplayDC; // rax
  HDC v28; // r14
  __int64 v29; // rbx
  __int64 v30; // r9
  DC *v31; // rcx
  int v32; // ebx
  __int64 v33; // rax
  __m128i v34; // xmm2
  int v35; // r11d
  int v36; // eax
  int v37; // r10d
  int v38; // edx
  __int32 v39; // rax^4
  int v41; // r9d
  __int32 v42; // r8d
  __int32 v43; // r14d
  __int32 v44; // esi
  int v45; // edi
  __int32 v46; // r8d
  int v47; // r11d
  int v48; // ebx
  int v49; // r10d
  int v50; // edx
  unsigned int v51; // eax
  int v52; // r12d
  int *v53; // rcx
  int v54; // r15d
  int v55; // ebx
  int v56; // r13d
  int v57; // edi
  int v58; // esi
  __m128i v59; // xmm0
  int v60; // eax
  int v61; // r12d
  __int32 v62; // r9d
  int v63; // r14d
  int v64; // r12d
  __int64 v65; // rcx
  unsigned int v66; // edi
  void (__fastcall *v67)(int *, __m128i *, int *, int *, int, int); // rbx
  char v68; // [rsp+70h] [rbp-90h]
  SIZEL sizl; // [rsp+78h] [rbp-88h] BYREF
  struct _POINTL v70; // [rsp+80h] [rbp-80h] BYREF
  struct _POINTL v71; // [rsp+88h] [rbp-78h] BYREF
  HDC v72; // [rsp+90h] [rbp-70h]
  __int128 v73; // [rsp+98h] [rbp-68h] BYREF
  __int128 v74; // [rsp+A8h] [rbp-58h] BYREF
  HPALETTE hpal; // [rsp+B8h] [rbp-48h]
  unsigned int v76; // [rsp+C0h] [rbp-40h]
  unsigned int v77; // [rsp+C4h] [rbp-3Ch]
  __int64 v78; // [rsp+C8h] [rbp-38h]
  HBITMAP v79; // [rsp+D0h] [rbp-30h]
  _BYTE v80[32]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v81; // [rsp+F8h] [rbp-8h]
  struct Gre::Base::SESSION_GLOBALS *v82[16]; // [rsp+100h] [rbp+0h] BYREF
  DC *v83[14]; // [rsp+180h] [rbp+80h] BYREF
  __m128i v84; // [rsp+1F0h] [rbp+F0h] BYREF
  int v85; // [rsp+200h] [rbp+100h] BYREF
  int v86; // [rsp+204h] [rbp+104h]
  int v87; // [rsp+208h] [rbp+108h]
  int v88; // [rsp+20Ch] [rbp+10Ch]
  int v89[4]; // [rsp+210h] [rbp+110h] BYREF
  int v90[4]; // [rsp+220h] [rbp+120h] BYREF
  _BYTE v91[96]; // [rsp+230h] [rbp+130h] BYREF

  *(_QWORD *)&v73 = a12;
  *(_QWORD *)v89 = a1;
  *(_QWORD *)v90 = a13;
  v78 = a4;
  ThreadRestrictNewHandlesRegion::ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v91);
  v16 = 0;
  if ( a2 )
  {
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)v83, a2);
    if ( !v83[0] )
      goto LABEL_27;
    v17 = a9
        ? EngCreatePalette(2u, 0, 0LL, 0xF800u, 0x7E0u, 0x1Fu)
        : EngCreatePalette(2u, 0, 0LL, 0xFF0000u, 0xFF00u, 0xFFu);
    hpal = v17;
    if ( !v17 )
      goto LABEL_27;
    sizl = (SIZEL)__PAIR64__(a8, a7);
    v18 = hpal;
    Bitmap = EngCreateBitmap((SIZEL)__PAIR64__(a8, a7), lWidth, a9 != 0 ? 4 : 6, 1u, pvBits);
    v79 = Bitmap;
    DxEngSetPaletteState(hpal, v20, v21);
    if ( !Bitmap )
    {
LABEL_26:
      EngDeletePalette(v18);
LABEL_27:
      APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v83);
      goto LABEL_28;
    }
    v23 = Gre::Base::Globals(v22);
    SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&sizl, v23);
    SURFREF::SURFREF((SURFREF *)v80);
    LOBYTE(v24) = 5;
    v25 = HmgShareLockCheckIgnoreStockBit(Bitmap, v24);
    v81 = v25;
    if ( v25 )
    {
      v26 = 1;
      DxEngSelectPaletteToSurface((struct _SURFOBJ *)(v25 + 24), v18);
      *(_DWORD *)(v81 + 112) |= 0x100000u;
      *(_DWORD *)(v81 + 112) |= 0x4000u;
      *(_DWORD *)(v81 + 112) |= 0x200u;
    }
    else
    {
      v26 = 0;
    }
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v80);
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      *(_QWORD *)&sizl);
    if ( !v26 )
    {
LABEL_25:
      EngDeleteSurface((HSURF)Bitmap);
      goto LABEL_26;
    }
    DisplayDC = (HDC)GreCreateDisplayDC(*((_QWORD *)v83[0] + 6), 1LL, 0LL);
    v72 = DisplayDC;
    v28 = DisplayDC;
    if ( !DisplayDC )
    {
LABEL_24:
      v18 = hpal;
      goto LABEL_25;
    }
    v29 = 0LL;
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)v82, DisplayDC);
    if ( v82[0] )
    {
      LOBYTE(v30) = 7;
      v29 = *(_QWORD *)GrepSelectBitmap(&v74, v82, Bitmap, v30);
    }
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v82);
    if ( !v29 )
    {
LABEL_23:
      GrepDeleteDC(v28, 20971520LL);
      goto LABEL_24;
    }
    v31 = v83[0];
    sizl = 0LL;
    v32 = 0;
    v84 = 0LL;
    v33 = *((_QWORD *)v83[0] + 122);
    v74 = 0LL;
    v77 = *(_DWORD *)(v33 + 108);
    v76 = v77 & 7;
    if ( (v77 & 7) != 0 )
    {
      DC::dwSetLayout(v83[0], -1, 0);
      v31 = v83[0];
    }
    GreLockVisRgnShared(*((_QWORD *)v31 + 6));
    if ( !a3 )
    {
      v34 = *(__m128i *)((char *)v83[0] + 1032);
      v35 = _mm_cvtsi128_si32(_mm_srli_si128(v34, 8));
LABEL_18:
      v36 = _mm_cvtsi128_si32(v34);
      v37 = _mm_cvtsi128_si32(_mm_srli_si128(v34, 12));
      v84 = v34;
      goto LABEL_19;
    }
    if ( *(_QWORD *)(a1 + 8) )
    {
      if ( (*((_DWORD *)v83[0] + 9) & 0x4000) != 0 )
      {
        v32 = 1;
        goto LABEL_63;
      }
      if ( *(_QWORD *)(a1 + 8) )
      {
LABEL_63:
        v59 = *(__m128i *)((char *)v83[0] + 1032);
        v70 = 0LL;
        v84 = v59;
        if ( (*((_DWORD *)v83[0] + 9) & 0x4000) != 0 )
        {
          v71 = 0LL;
          if ( (unsigned int)UserGetRedirectedWindowOrigin((__int64)a2, (__int64)&v71) )
            ERECTL::bOffsetAdd((ERECTL *)&v84, &v71, 0);
        }
        if ( v32 && (unsigned int)UserGetRedirectedWindowOrigin((__int64)a2, (__int64)&v70) )
          ERECTL::bOffsetAdd((ERECTL *)&v84, &v70, 0);
        IntersectRect(&v74, v84.m128i_i32, a3);
        v36 = v84.m128i_i32[0];
        v37 = v84.m128i_i32[3];
        v35 = v84.m128i_i32[2];
        if ( v84.m128i_i32[0] != (_DWORD)v74
          || *(__int64 *)((char *)v84.m128i_i64 + 4) != *(_QWORD *)((char *)&v74 + 4)
          || v84.m128i_i32[3] != HIDWORD(v74) )
        {
          sizl = (SIZEL)a3;
          LODWORD(v74) = v74 - v84.m128i_i32[0];
          DWORD2(v74) -= v84.m128i_i32[0];
          DWORD1(v74) -= v84.m128i_i32[1];
          HIDWORD(v74) -= v84.m128i_i32[1];
        }
LABEL_19:
        v38 = *(_DWORD *)(a1 + 88);
        v86 = 0;
        v39 = v84.m128i_i32[1];
        v84.m128i_i64[0] = 0LL;
        v85 = 0;
        v84.m128i_i32[2] = v35 - v36;
        v87 = a7;
        v88 = a8;
        v84.m128i_i32[3] = v37 - v39;
        if ( (*(unsigned int (__fastcall **)(int *, __m128i *, __int64, __int64))v90)(
               &v85,
               &v84,
               (a1 + 48) & -(__int64)((v38 & 0x80u) != 0),
               (a1 + 32) & -(__int64)((v38 & 0x40) != 0))
          && (v41 = v84.m128i_i32[2]) != 0
          && (v42 = v84.m128i_i32[3]) != 0 )
        {
          if ( !a3 || *(_QWORD *)(a1 + 8) )
          {
            v43 = v84.m128i_i32[1];
            v44 = v84.m128i_i32[0];
          }
          else
          {
            v41 = *a3 + v84.m128i_i32[2];
            v44 = *a3 + v84.m128i_i32[0];
            v60 = a3[1];
            v43 = v60 + v84.m128i_i32[1];
            v42 = v60 + v84.m128i_i32[3];
            v84.m128i_i32[0] = v44;
            v84.m128i_i32[3] += v60;
            v84.m128i_i32[2] = v41;
            v84.m128i_i32[1] += v60;
          }
          v45 = v88;
          v46 = v42 - v43;
          v47 = v86;
          v48 = v87;
          v49 = v88 - v86;
          v50 = v85;
          if ( v46 == v88 - v86 && v41 - v44 == v87 - v85 )
          {
            v51 = 0;
            v70.x = 0;
            if ( *(_DWORD *)(a1 + 64) )
            {
              while ( 1 )
              {
                v52 = v50;
                v53 = (int *)(v78 + 16LL * v51);
                v73 = 0LL;
                if ( *v53 > v50 )
                  v52 = *v53;
                if ( v53[2] < v48 )
                  v48 = v53[2];
                if ( v52 >= v48 )
                  goto LABEL_47;
                v54 = v47;
                if ( v53[1] > v47 )
                  v54 = v53[1];
                if ( v53[3] < v45 )
                  v45 = v53[3];
                if ( v54 >= v45 )
                {
LABEL_47:
                  v45 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12));
                  v54 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4));
                  v73 = 0LL;
                  v48 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8));
                  v52 = _mm_cvtsi128_si32((__m128i)0LL);
                }
                v55 = v44 - v50 + v48;
                v56 = v52 + v44 - v50;
                LODWORD(v73) = v56;
                v57 = v43 - v47 + v45;
                HIDWORD(v73) = v57;
                v71.x = v43 + v54 - v47;
                *(_QWORD *)((char *)&v73 + 4) = __PAIR64__(v55, v71.x);
                if ( sizl )
                {
                  IntersectRect(&v73, (int *)&v73, (int *)&v74);
                  v56 = v73;
                  v57 = HIDWORD(v73);
                  v61 = v73 - v44;
                  v58 = DWORD1(v73);
                  v52 = v85 + v61;
                  v54 = v86 + DWORD1(v73) - v43;
                  v55 = DWORD2(v73);
                }
                else
                {
                  v58 = v43 + v54 - v47;
                }
                v28 = v72;
                if ( a10 )
                {
                  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v82, v72);
                  v16 = v82[0]
                      ? GrepTransparentBlt(
                          (struct XDCOBJ *)v83,
                          v56,
                          v58,
                          v55 - v56,
                          v57 - v58,
                          (struct XDCOBJ *)v82,
                          v52,
                          v54,
                          v55 - v56,
                          v57 - v58,
                          a11)
                      : 0;
                  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v82);
                }
                else
                {
                  OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v82, v72);
                  v16 = GrepBitBltImpl(
                          v83,
                          v56,
                          v58,
                          v55 - v56,
                          v57 - v58,
                          (struct OPTAPIDCOBJ *)v82,
                          v52,
                          v54,
                          0x80CC0020,
                          0,
                          0);
                  OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v82);
                }
                v51 = v70.x + 1;
                v70.x = v51;
                if ( v51 >= *(_DWORD *)(*(_QWORD *)v89 + 64LL) )
                  break;
                v45 = v88;
                v48 = v87;
                v43 = v84.m128i_i32[1];
                v44 = v84.m128i_i32[0];
                v50 = v85;
                v47 = v86;
              }
              Bitmap = v79;
              goto LABEL_21;
            }
          }
          else
          {
            v62 = v41 - v44;
            v63 = 0;
            v64 = 0;
            v65 = *((_QWORD *)v83[0] + 122);
            v68 = *(_BYTE *)(v65 + 215);
            v70.x = (v62 << 16) / (v87 - v85);
            v71.x = (v46 << 16) / v49;
            if ( sizl )
            {
              v63 = ((v87 - v85) << 16) / v62;
              v64 = (v49 << 16) / v46;
            }
            v66 = 0;
            for ( *(_BYTE *)(v65 + 215) = 3; v66 < *(_DWORD *)(a1 + 64); ++v66 )
            {
              *(_OWORD *)v89 = 0LL;
              *(_OWORD *)v90 = 0LL;
              IntersectRect(v90, (int *)(v78 + 16LL * v66), &v85);
              v67 = (void (__fastcall *)(int *, __m128i *, int *, int *, int, int))v73;
              ((void (__fastcall *)(__m128i *, int *, int *, int *, LONG, LONG))v73)(&v84, &v85, v89, v90, v70.x, v71.x);
              v16 = 0;
              if ( *(_QWORD *)&sizl && (unsigned int)IntersectRect(v89, v89, (int *)&v74) )
                v67(&v85, &v84, v90, v89, v63, v64);
              if ( a10 )
              {
                APIDCOBJ::APIDCOBJ((APIDCOBJ *)v82, v72);
                if ( v82[0] )
                  v16 = GrepTransparentBlt(
                          (struct XDCOBJ *)v83,
                          v89[0],
                          v89[1],
                          v89[2] - v89[0],
                          v89[3] - v89[1],
                          (struct XDCOBJ *)v82,
                          v90[0],
                          v90[1],
                          v90[2] - v90[0],
                          v90[3] - v90[1],
                          a11);
                APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v82);
              }
              else
              {
                OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v82, v72);
                v16 = GrepStretchBlt(
                        v83,
                        v89[0],
                        v89[1],
                        v89[2] - v89[0],
                        v89[3] - v89[1],
                        v82,
                        v90[0],
                        v90[1],
                        v90[2] - v90[0],
                        v90[3] - v90[1],
                        -2134114272,
                        0,
                        0);
                OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v82);
              }
            }
            Bitmap = v79;
            *(_BYTE *)(*((_QWORD *)v83[0] + 122) + 215LL) = v68;
          }
          v28 = v72;
        }
        else
        {
          v16 = 1;
        }
LABEL_21:
        GreUnlockVisRgn(*((_QWORD *)v83[0] + 6));
        if ( v76 )
          DC::dwSetLayout(v83[0], -1, v77);
        goto LABEL_23;
      }
    }
    v34 = *(__m128i *)a3;
    v35 = a3[2];
    goto LABEL_18;
  }
LABEL_28:
  ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v91);
  return v16;
}

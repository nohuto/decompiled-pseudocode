/*
 * XREFs of ?NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@4JPEADPEAU_DRAWSTREAMINFO@@@Z @ 0x140015184
 * Callers:
 *     GreDrawStream @ 0x14025D364 (GreDrawStream.c)
 * Callees:
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x140013568 (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ??$GrepReleaseLockValidate@$00@@YAXXZ @ 0x140014258 (--$GrepReleaseLockValidate@$00@@YAXXZ.c)
 *     ??$GrepAcquireLockValidate@$00@@YAXXZ @ 0x14001505C (--$GrepAcquireLockValidate@$00@@YAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140015800 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x140016CFC (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bXform@DC@@QEBA_NAEBVEXFORMOBJ@@AEAVERECTL@@@Z @ 0x1400C5718 (-bXform@DC@@QEBA_NAEBVEXFORMOBJ@@AEAVERECTL@@@Z.c)
 *     bCvtPts1 @ 0x1400C5774 (bCvtPts1.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1400C71EC (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1401482C8 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtGdiDrawStreamInternal(
        DC **a1,
        struct EXFORMOBJ *a2,
        struct SURFACE *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        int a7,
        char *a8,
        struct _DRAWSTREAMINFO *a9)
{
  DC **v9; // r13
  unsigned int v10; // ebx
  struct EXFORMOBJ *v11; // r12
  LONG left; // esi
  LONG top; // r15d
  LONG right; // edi
  LONG bottom; // r14d
  DC *v16; // rax
  struct SURFACE *v17; // rcx
  __int64 v18; // r9
  Gre::Base *v19; // rcx
  int v20; // eax
  Gre::Base *v21; // rcx
  HSEMAPHORE v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r11
  __int64 v25; // r8
  unsigned __int64 v27; // r12
  _DWORD *i; // r13
  int v29; // eax
  LONG v30; // eax
  LONG v31; // eax
  __int64 v32; // r12
  int v33; // r9d
  __int32 v34; // ecx
  __int32 v35; // r10d
  __int64 v36; // r11
  __int64 v37; // r12
  __int64 v38; // r11
  int v39; // esi
  __int32 v40; // edi
  __int32 v41; // r15d
  int v42; // r14d
  HSEMAPHORE v43; // r12
  struct REGION *v44; // rax
  int v45; // r10d
  __m128i v46; // xmm1
  unsigned __int64 v47; // r15
  __int64 (__fastcall *v48)(int, int, int, int, int, __int64, int, __int64, __int64); // rsi
  __int64 v49; // rax
  char v50; // al
  __int64 v51; // r13
  struct _SURFOBJ *v52; // rdx
  __int64 v53; // r14
  int v54; // eax
  bool v55; // zf
  __int64 v57; // [rsp+60h] [rbp-81h] BYREF
  int v58; // [rsp+68h] [rbp-79h]
  int v59; // [rsp+6Ch] [rbp-75h]
  struct EXFORMOBJ *v60[2]; // [rsp+70h] [rbp-71h] BYREF
  DC *v61; // [rsp+80h] [rbp-61h]
  char *v62; // [rsp+88h] [rbp-59h]
  _QWORD v63[2]; // [rsp+90h] [rbp-51h] BYREF
  struct _DRAWSTREAMINFO *v64; // [rsp+A0h] [rbp-41h]
  struct _XLATEOBJ *v65; // [rsp+A8h] [rbp-39h]
  __m128i v66; // [rsp+B0h] [rbp-31h] BYREF
  unsigned __int64 v67; // [rsp+C0h] [rbp-21h] BYREF
  LONG v68; // [rsp+C8h] [rbp-19h]
  LONG v69; // [rsp+CCh] [rbp-15h]

  v9 = a1;
  v10 = 0;
  v58 = a7;
  v11 = a2;
  left = a6->left;
  top = a6->top;
  right = a6->right;
  bottom = a6->bottom;
  v62 = a8;
  v64 = a9;
  v65 = a4;
  v57 = 0LL;
  v63[0] = a3;
  v66 = *(__m128i *)a5;
  v16 = *a1;
  v60[0] = a2;
  v67 = __PAIR64__(top, left);
  v17 = (struct SURFACE *)*((_QWORD *)v16 + 62);
  v68 = right;
  v69 = bottom;
  if ( (unsigned int)DestSurfaceAccessCheck(v17) )
  {
    v19 = *(Gre::Base **)v11;
    if ( (*(_BYTE *)(*(_QWORD *)v11 + 32LL) & 1) != 0 )
    {
      v20 = *((_DWORD *)v19 + 8);
      if ( (v20 & 2) != 0 )
      {
        if ( (v20 & 0x43) != 0x43 )
          bCvtPts1(v19, &v57, 1LL, v18);
      }
      else
      {
        v27 = (unsigned __int64)&v62[v58];
        for ( i = v62 + 36; (unsigned __int64)(i - 9) < v27; i += 15 )
        {
          if ( *(i - 9) != 9 )
            return v10;
          DC::bXform(*a1, v60[0], (struct ERECTL *)(i - 8));
          if ( (unsigned int)DC::bDpiScaledSurface(*a1) )
            *i &= ~0x20u;
        }
        v9 = a1;
        v11 = v60[0];
      }
      v21 = *(Gre::Base **)v11;
      v61 = *v9;
      if ( (*((_BYTE *)v21 + 32) & 0x43) == 0x43
        || (v29 = bCvtPts1(v21, &v67, 2LL, v18), bottom = v69, right = v68, top = HIDWORD(v67), left = v67, v29) )
      {
        if ( (*(_BYTE *)(*((_QWORD *)v61 + 122) + 108LL) & 1) != 0 )
        {
          ++left;
          ++right;
        }
      }
      if ( left > right )
      {
        v31 = left;
        left = right;
        right = v31;
      }
      if ( top > bottom )
      {
        v30 = top;
        top = bottom;
        bottom = v30;
      }
      if ( v66.m128i_i32[0] != v66.m128i_i32[2] && v66.m128i_i32[1] != v66.m128i_i32[3] )
      {
        v61 = (DC *)(*(_QWORD *)Gre::Base::Globals(v21) + 624LL);
        GreAcquireSemaphoreSharedInternal((HSEMAPHORE)v61);
        GrepAcquireLockValidate<1>();
        v22 = (HSEMAPHORE)*v9;
        v23 = *((_DWORD *)*v9 + 10) & 1;
        v67 = *((_QWORD *)*v9 + 62);
        LODWORD(v57) = *((_DWORD *)v22 + 2 * v23 + 254) + v57;
        HIDWORD(v57) += *((_DWORD *)v22 + 2 * v23 + 255);
        v24 = (_DWORD)v22[10] & 1;
        v59 = *((_DWORD *)v22 + 2 * v24 + 254);
        v25 = v59;
        if ( (unsigned __int64)(v66.m128i_i32[0] + (__int64)v59 + 0x80000000LL) <= 0xFFFFFFFF
          && (unsigned __int64)(v59 + (__int64)v66.m128i_i32[2] + 0x80000000LL) <= 0xFFFFFFFF )
        {
          v32 = *((int *)v22 + 2 * v24 + 255);
          v25 = 0xFFFFFFFFLL;
          if ( (unsigned __int64)(v32 + v66.m128i_i32[1] + 0x80000000LL) <= 0xFFFFFFFF )
          {
            v25 = v66.m128i_i32[3];
            if ( (unsigned __int64)(v32 + v66.m128i_i32[3] + 0x80000000LL) <= 0xFFFFFFFF )
            {
              v33 = v59 + v66.m128i_i32[0];
              v66.m128i_i32[0] += v59;
              v34 = *((_DWORD *)v22 + 2 * v24 + 254) + v66.m128i_i32[2];
              v35 = *((_DWORD *)v22 + 2 * v24 + 255) + v66.m128i_i32[1];
              *(__int64 *)((char *)v66.m128i_i64 + 4) = __PAIR64__(v34, v35);
              v25 = (unsigned int)(*((_DWORD *)v22 + 2 * v24 + 255) + v66.m128i_i32[3]);
              v66.m128i_i32[3] += *((_DWORD *)v22 + 2 * v24 + 255);
              v36 = (_DWORD)v22[10] & 1;
              v37 = *((int *)v22 + 2 * v36 + 254);
              if ( (unsigned __int64)(v37 + left + 0x80000000LL) <= 0xFFFFFFFF
                && (unsigned __int64)(v37 + right + 0x80000000LL) <= 0xFFFFFFFF )
              {
                v38 = *((int *)v22 + 2 * v36 + 255);
                if ( (unsigned __int64)(v38 + top + 0x80000000LL) <= 0xFFFFFFFF
                  && (unsigned __int64)(v38 + bottom + 0x80000000LL) <= 0xFFFFFFFF )
                {
                  v39 = v37 + left;
                  v40 = v37 + right;
                  v41 = v38 + top;
                  v42 = v38 + bottom;
                  v43 = 0LL;
                  if ( (int)v25 >= v42
                    && v33 <= v39
                    && v34 >= v40
                    && v35 <= v41
                    && (v54 = *((_DWORD *)v22 + 250), v54 <= v39)
                    && *((_DWORD *)v22 + 252) >= v40
                    && *((_DWORD *)v22 + 251) <= v41
                    && *((_DWORD *)v22 + 253) >= v42 )
                  {
                    if ( v54 > v33 )
                      v33 = *((_DWORD *)v22 + 250);
                    v66.m128i_i32[0] = v33;
                    if ( *((_DWORD *)v22 + 251) > v35 )
                      v35 = *((_DWORD *)v22 + 251);
                    v66.m128i_i32[1] = v35;
                    if ( *((_DWORD *)v22 + 252) < v34 )
                      v34 = *((_DWORD *)v22 + 252);
                    v66.m128i_i32[2] = v34;
                    if ( *((_DWORD *)v22 + 253) < (int)v25 )
                      LODWORD(v25) = v22[253];
                    v66.m128i_i32[3] = v25;
                    if ( v34 < v33 )
                    {
                      v66.m128i_i32[0] = v34;
                      goto LABEL_82;
                    }
                    if ( (int)v25 < v35 )
                      v66.m128i_i32[1] = v25;
                    v46 = v66;
                  }
                  else
                  {
                    v43 = v22 + 442;
                    v44 = XDCOBJ::prgnEffRao((XDCOBJ *)a1);
                    XCLIPOBJ::vSetup((XCLIPOBJ *)v43, v44, (const struct ERECTL *)&v66, v45);
                    v66 = *(__m128i *)(v43 + 1);
                    v46 = v66;
                    v34 = _mm_cvtsi128_si32(_mm_srli_si128(v66, 8));
                    v33 = _mm_cvtsi128_si32(v66);
                  }
                  if ( v33 != v34 && v46.m128i_i32[1] != _mm_srli_si128(v46, 8).m128i_i32[1] )
                  {
                    if ( (*((_DWORD *)*a1 + 9) & 0xE0) != 0 )
                    {
                      *(__m128i *)v60 = v46;
                      XDCOBJ::vAccumulateTight((XDCOBJ *)a1, (struct ECLIPOBJ *)v22, (struct ERECTL *)v60);
                    }
                    v47 = v67;
                    v48 = EngDrawStream;
                    ++*(_DWORD *)(v67 + 92);
                    v49 = *(_QWORD *)(v47 + 48);
                    if ( *(_QWORD *)(v49 + 3400) )
                      v48 = *(__int64 (__fastcall **)(int, int, int, int, int, __int64, int, __int64, __int64))(v49 + 3400);
                    if ( (*((_DWORD *)*a1 + 9) & 0x200) == 0
                      || !v49
                      || (v55 = (*(_DWORD *)(v49 + 40) & 0x20000) == 0, v50 = 1, v55) )
                    {
                      v50 = 0;
                    }
                    if ( *(int *)(v47 + 112) >= 0 && (!v50 || *(_WORD *)(v47 + 100) != 3) )
                      v48 = EngDrawStream;
                    v51 = v63[0];
                    if ( v63[0] )
                    {
                      v52 = (struct _SURFOBJ *)(v63[0] + 24LL);
                      v53 = v63[0] + 24LL;
                    }
                    else
                    {
                      v52 = 0LL;
                      v53 = 24LL;
                    }
                    v63[0] = 0LL;
                    SURFREFVIEW::bMap((SURFREFVIEW *)v63, v52);
                    if ( v63[0]
                      && (unsigned int)v48(
                                         v47 + 24,
                                         v53 & -(__int64)(v51 != 0),
                                         (int)v43,
                                         (int)v65,
                                         (int)&v66,
                                         (__int64)&v57,
                                         v58,
                                         (__int64)v62,
                                         (__int64)v64) )
                    {
                      v10 = 1;
                    }
                    SURFREFVIEW::bUnMap((SURFREFVIEW *)v63);
                    goto LABEL_53;
                  }
LABEL_82:
                  v10 = 1;
LABEL_53:
                  EtwTraceGreLockReleaseSemaphore(L"DynamicModeChange", v61);
                  GrepReleaseLockValidate<1>();
                  GreReleaseSemaphoreSharedInternal((HSEMAPHORE)v61);
                  return v10;
                }
              }
            }
          }
        }
        GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v61, v25);
      }
    }
  }
  else
  {
    EngSetLastError(5u);
  }
  return v10;
}

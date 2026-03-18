/*
 * XREFs of ?GrepInvertRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@@Z @ 0x140202788
 * Callers:
 *     NtGdiInvertRgn @ 0x140202670 (NtGdiInvertRgn.c)
 * Callees:
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x14001666C (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x140016CFC (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x14001D188 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14001FDF0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1400596DC (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x140062DFC (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1400C71EC (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1400CDFD8 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEBAHXZ @ 0x1400CE708 (-bFullScreen@XDCOBJ@@QEBAHXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1400D245C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400D3E30 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     EngPaint @ 0x1400E4A40 (EngPaint.c)
 *     ??0RGNMEMOBJ@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1400E7C5C (--0RGNMEMOBJ@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     ?GrepScaleValues@@YAHAEAVXDCOBJ@@PEAJI@Z @ 0x1400E8B38 (-GrepScaleValues@@YAHAEAVXDCOBJ@@PEAJI@Z.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x14015763C (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall GrepInvertRgn(struct XDCOBJ *a1, HRGN a2)
{
  __int64 v3; // r15
  __int64 v4; // rcx
  unsigned int v5; // esi
  int v7; // ebx
  __int64 v8; // rax
  int v9; // r14d
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  struct REGION *v15; // rax
  struct ECLIPOBJ *v16; // rdx
  __int64 v18; // rcx
  __int64 v19; // [rsp+30h] [rbp-D0h] BYREF
  bool v20; // [rsp+38h] [rbp-C8h]
  _QWORD v21[7]; // [rsp+40h] [rbp-C0h] BYREF
  __m128i rclBounds; // [rsp+78h] [rbp-88h] BYREF
  HDC v23[18]; // [rsp+90h] [rbp-70h] BYREF
  int v24[4]; // [rsp+120h] [rbp+20h] BYREF
  CLIPOBJ pco; // [rsp+130h] [rbp+30h] BYREF

  v3 = 0LL;
  v4 = *(_QWORD *)a1;
  v5 = 0;
  if ( (*(_DWORD *)(v4 + 36) & 0x10000) != 0 )
    return v5;
  v7 = *(_DWORD *)(*(_QWORD *)(v4 + 976) + 208LL);
  DC::QuickInitXform(v4, v24, 2147484164LL);
  v19 = *(_QWORD *)v24;
  v8 = *(_QWORD *)a1;
  v20 = v7 != 2;
  v9 = *(_DWORD *)(*(_QWORD *)(v8 + 976) + 340LL) & 0x802;
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v21, a2, 1, 0);
  if ( v21[0] )
  {
    if ( v9 == 2050 )
      goto LABEL_9;
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v23);
    if ( v23[1] )
    {
      if ( !v19 || !RGNOBJ::bCreate((RGNOBJ *)v21, (struct EPATHOBJ *)v23, (const struct EXFORMOBJR *)&v19) )
        goto LABEL_23;
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v24, (struct EPATHOBJ *)v23, 1u, 0LL);
      if ( *(_QWORD *)v24 )
      {
        v3 = v21[0];
        v21[0] = *(_QWORD *)v24;
        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v23);
LABEL_9:
        if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v21) == 1 )
          goto LABEL_26;
        v10 = *(_QWORD *)a1;
        *(_OWORD *)v24 = *(_OWORD *)(v21[0] + 52LL);
        if ( (*(_DWORD *)(v10 + 36) & 0xE0) != 0 )
          XDCOBJ::vAccumulate(a1, (struct ERECTL *)v24);
        if ( !*(_QWORD *)(*(_QWORD *)a1 + 496LL) )
        {
LABEL_26:
          v5 = 1;
        }
        else
        {
          DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v23);
          v11 = DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v23, a1, 0);
          v12 = v21[0];
          v13 = *(_QWORD *)a1;
          if ( !v21[0] )
            *(_DWORD *)(v13 + 36) |= 0x10u;
          *(_QWORD *)(v13 + 1128) = v12;
          v14 = *(_QWORD *)(*(_QWORD *)a1 + 496LL);
          if ( v11 && DC::bTightenRao(*(DC **)a1) )
          {
            ERECTL::bOffsetAdd(
              (ERECTL *)v24,
              (const struct _POINTL *)(*(_QWORD *)a1 + 8 * ((*(_DWORD *)(*(_QWORD *)a1 + 40LL) & 1) + 127LL)),
              0);
            GrepScaleValues(a1, v24, 4u);
            v15 = XDCOBJ::prgnEffRao((DC **)a1);
            ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)&pco, v15, (struct ERECTL *)v24);
            if ( !ERECTL::bEmpty((ERECTL *)&pco.rclBounds) )
            {
              if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0xE0) != 0 )
              {
                rclBounds = (__m128i)pco.rclBounds;
                XDCOBJ::vAccumulateTight(a1, v16, &rclBounds);
              }
              ++*(_DWORD *)(v14 + 92);
              EngPaint((SURFOBJ *)(v14 + 24), &pco, 0LL, 0LL, 0x606u);
            }
            v5 = 1;
          }
          else
          {
            v5 = XDCOBJ::bFullScreen(a1);
          }
          v18 = *(_QWORD *)a1;
          *(_DWORD *)(v18 + 36) |= 0x10u;
          *(_QWORD *)(v18 + 1128) = 0LL;
          DEVLOCKOBJ::~DEVLOCKOBJ(v23);
        }
        if ( v9 != 2050 )
        {
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v21);
          v21[0] = v3;
        }
        goto LABEL_29;
      }
    }
    EngSetLastError(8u);
LABEL_23:
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v23);
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v21);
    return 0LL;
  }
LABEL_29:
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v21);
  return v5;
}

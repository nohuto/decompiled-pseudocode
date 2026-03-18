/*
 * XREFs of GreFrameRgn @ 0x1400E2CD4
 * Callers:
 *     ?DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z @ 0x1400E4B00 (-DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z.c)
 *     NtGdiFrameRgn @ 0x14021E240 (NtGdiFrameRgn.c)
 * Callees:
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x14001666C (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x140016CFC (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x14001C920 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x14001D188 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14001FDF0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0XCLIPOBJ@@QEAA@XZ @ 0x140059708 (--0XCLIPOBJ@@QEAA@XZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x140062DFC (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0CFixPred@Prediction@@QEAA@XZ @ 0x1400BB03C (--0CFixPred@Prediction@@QEAA@XZ.c)
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x1400C71CC (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1400C71EC (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1400CDFD8 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?bInFullScreen@DC@@QEBAHXZ @ 0x1400D243C (-bInFullScreen@DC@@QEBAHXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1400D245C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400D3E30 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bWiden@pathwide@@YA_NAEAVEPATHOBJ@@0AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z @ 0x1400E254C (-bWiden@pathwide@@YA_NAEAVEPATHOBJ@@0AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1400E3FF0 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1400E4080 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ?bSyncBrushObj@@YAHPEAVBRUSH@@@Z @ 0x1400E4420 (-bSyncBrushObj@@YAHPEAVBRUSH@@@Z.c)
 *     ?vWidenSetupForFrameRgn@pathwide@@YAXAEAVXDCOBJ@@JJPEAVEXFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1400E447C (-vWidenSetupForFrameRgn@pathwide@@YAXAEAVXDCOBJ@@JJPEAVEXFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?bComputeWidenedBounds@pathwide@@YA_NAEAU_RECTFX@@AEBU2@AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z @ 0x1400E45B8 (-bComputeWidenedBounds@pathwide@@YA_NAEAU_RECTFX@@AEBU2@AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z.c)
 *     ?RestoreAttributes@XEBRUSHOBJ@@IEAAXXZ @ 0x1400E49C4 (-RestoreAttributes@XEBRUSHOBJ@@IEAAXXZ.c)
 *     EngPaint @ 0x1400E4A40 (EngPaint.c)
 *     bFToL @ 0x1400E8DB0 (bFToL.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall GreFrameRgn(HDC a1, HRGN a2, HBRUSH a3, int a4, int a5)
{
  unsigned int v8; // esi
  int v9; // r12d
  int v10; // r14d
  int v11; // edi
  int v12; // ebx
  __m128i v13; // xmm1
  LONG v14; // edx
  int v15; // r9d
  DC *v16; // rcx
  int v17; // eax
  __int64 v18; // rdx
  DC *v19; // rcx
  DC *v20; // rcx
  __int64 v21; // r15
  __int64 v22; // rcx
  __int64 v23; // rcx
  struct REGION *v24; // rdx
  __int64 v25; // rbx
  __int64 v26; // rdi
  struct ECLIPOBJ *v27; // rdx
  __int64 v28; // r14
  DC *v29; // rcx
  __int64 v30; // rax
  unsigned __int8 v31; // cl
  MIX v32; // edx
  DC *v33; // rax
  __int64 v34; // rcx
  DC *v36; // rax
  unsigned int v37; // edi
  __m128i *v38; // r14
  DC *v39; // rax
  __int64 v40; // rax
  const struct _LINEATTRS *mix; // [rsp+20h] [rbp-E0h]
  struct _LINEATTRS *v42; // [rsp+28h] [rbp-D8h]
  __int64 v43; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v44; // [rsp+48h] [rbp-B8h] BYREF
  struct _RECTFX v45[4]; // [rsp+50h] [rbp-B0h] BYREF
  DC *v46[14]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v47; // [rsp+100h] [rbp+0h] BYREF
  bool v48; // [rsp+108h] [rbp+8h]
  __m128i rclBounds; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v50[8]; // [rsp+120h] [rbp+20h] BYREF
  BRUSHOBJ pbo; // [rsp+160h] [rbp+60h] BYREF
  int v52; // [rsp+17Ch] [rbp+7Ch]
  __int64 v53; // [rsp+180h] [rbp+80h]
  __int64 v54; // [rsp+188h] [rbp+88h]
  char *v55; // [rsp+198h] [rbp+98h]
  __int64 v56; // [rsp+1B8h] [rbp+B8h]
  __int128 v57; // [rsp+1C0h] [rbp+C0h]
  int v58; // [rsp+1D8h] [rbp+D8h]
  char v59[8]; // [rsp+1F0h] [rbp+F0h] BYREF
  struct _RECTFX *v60; // [rsp+1F8h] [rbp+F8h]
  char v61[8]; // [rsp+270h] [rbp+170h] BYREF
  __m128i *v62; // [rsp+278h] [rbp+178h]
  HDC v63[18]; // [rsp+2F0h] [rbp+1F0h] BYREF
  __m128i v64; // [rsp+380h] [rbp+280h] BYREF
  _OWORD v65[2]; // [rsp+390h] [rbp+290h] BYREF
  int v66; // [rsp+3B0h] [rbp+2B0h]
  CLIPOBJ pco; // [rsp+3C0h] [rbp+2C0h] BYREF

  v8 = 0;
  v9 = 0;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v46, a1);
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v50, a2, 1, 0);
  v10 = -a4;
  if ( a4 > 0 )
    v10 = a4;
  v11 = -a5;
  if ( a5 > 0 )
    v11 = a5;
  if ( v46[0] && (*((_DWORD *)v46[0] + 9) & 0x10000) == 0 && v50[0] && v10 > 0 && v11 > 0 )
  {
    if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v50) == 1 )
    {
      v8 = 1;
      goto LABEL_49;
    }
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v59);
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v61);
    v12 = *(_DWORD *)(*((_QWORD *)v46[0] + 122) + 208LL);
    DC::QuickInitXform(v46[0], v45, 2147484164LL);
    v47 = *(_QWORD *)&v45[0].xLeft;
    v48 = v12 != 2;
    if ( !v60 )
      goto LABEL_47;
    if ( !v62 )
      goto LABEL_47;
    if ( !RGNOBJ::bCreate((RGNOBJ *)v50, (struct EPATHOBJ *)v59, (const struct EXFORMOBJR *)&v47) )
      goto LABEL_47;
    v66 = 0;
    *(_QWORD *)&v45[0].xLeft = v65;
    memset(&v45[0].xRight, 0, 40);
    memset(v65, 0, sizeof(v65));
    pathwide::vWidenSetupForFrameRgn(
      (pathwide *)v46,
      (struct XDCOBJ *)(unsigned int)v10,
      v11,
      (int)v45,
      (struct EXFORMOBJ *)&v45[0].xRight,
      v42);
    v64 = 0LL;
    if ( !pathwide::bComputeWidenedBounds((pathwide *)&v64, v60 + 3, v45, (const struct EXFORMOBJ *)&v45[0].xRight, mix) )
      goto LABEL_47;
    v62[3] = v64;
    if ( !pathwide::bWiden(
            (pathwide *)v61,
            (struct EPATHOBJ *)v59,
            (struct EPATHOBJ *)v45,
            (const struct _LINEATTRS *)&v45[0].xRight) )
      goto LABEL_47;
    Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v44);
    RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v44, (struct EPATHOBJ *)v61, 2u, 0LL);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v44);
    Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v43);
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v43, 0x70u);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v43);
    if ( !v44 || !v43 )
      goto LABEL_46;
    if ( (*(_DWORD *)(*((_QWORD *)v46[0] + 122) + 340LL) & 0x802) == 0x802 )
    {
      v8 = RGNOBJ::bMerge((RGNOBJ *)&v43, (struct RGNOBJ *)&v44, (struct RGNOBJ *)v50, 8u);
    }
    else
    {
      Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v64);
      RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v64, (struct EPATHOBJ *)v59, 1u, 0LL);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v64);
      if ( v64.m128i_i64[0] && RGNOBJ::bMerge((RGNOBJ *)&v43, (struct RGNOBJ *)&v44, (struct RGNOBJ *)&v64, 8u) )
        v8 = 1;
      RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v64);
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v64);
    }
    if ( !v8 )
    {
LABEL_46:
      RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v43);
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v43);
      RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v44);
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v44);
LABEL_47:
      PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v61);
      PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v59);
      if ( v9 )
      {
        v40 = UserReferenceDwmApiPort(v34);
        DwmSyncFlushAndWaitForBatch(v40);
      }
      goto LABEL_49;
    }
    v64 = 0LL;
    v13 = *(__m128i *)(v43 + 52);
    v14 = _mm_cvtsi128_si32(v13);
    v64 = v13;
    v15 = _mm_cvtsi128_si32(_mm_srli_si128(v13, 8));
    if ( v14 != v15 && v64.m128i_i32[1] != v64.m128i_i32[3] )
    {
      v16 = v46[0];
      if ( !v46[0] )
        goto LABEL_26;
      v9 = bSpDwmValidateSurface(
             (struct XDCOBJ *)v46,
             v14,
             v64.m128i_i32[1],
             v15 - v14,
             v64.m128i_i32[3] - v64.m128i_i32[1]);
    }
    v16 = v46[0];
LABEL_26:
    if ( (*((_DWORD *)v16 + 9) & 0xE0) != 0 )
    {
      XDCOBJ::vAccumulate((XDCOBJ *)v46, (struct ERECTL *)&v64);
      v16 = v46[0];
    }
    if ( !*((_QWORD *)v16 + 62) || DC::bInFullScreen(v16) )
      goto LABEL_46;
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v63);
    v17 = DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v63, (struct XDCOBJ *)v46, 0);
    v18 = v43;
    v19 = v46[0];
    if ( !v43 )
      *((_DWORD *)v46[0] + 9) |= 0x10u;
    *((_QWORD *)v19 + 141) = v18;
    v20 = v46[0];
    v21 = *((_QWORD *)v46[0] + 62);
    if ( v17 )
    {
      if ( DC::bTightenRao(v46[0]) )
      {
        v22 = *((_DWORD *)v46[0] + 10) & 1;
        v64.m128i_i32[0] += *((_DWORD *)v46[0] + 2 * v22 + 254);
        v64.m128i_i32[2] += *((_DWORD *)v46[0] + 2 * v22 + 254);
        v64.m128i_i32[1] += *((_DWORD *)v46[0] + 2 * v22 + 255);
        v64.m128i_i32[3] += *((_DWORD *)v46[0] + 2 * v22 + 255);
        if ( (unsigned int)DC::bDpiScaleTransform(v46[0]) )
        {
          v37 = 0;
          v38 = &v64;
          do
          {
            if ( !(unsigned int)bFToL(v23, (char *)&v64 + 4 * v37, 6LL) )
              break;
            ++v37;
            v38 = (__m128i *)((char *)v38 + 4);
          }
          while ( v37 < 4 );
        }
        XDCOBJ::prgnEffRao(v46);
        XCLIPOBJ::XCLIPOBJ((XCLIPOBJ *)&pco);
        XCLIPOBJ::vSetup((XCLIPOBJ *)&pco, v24, (const struct ERECTL *)&v64, 0);
        if ( ERECTL::bEmpty((ERECTL *)&pco.rclBounds) )
        {
          v39 = v46[0];
          *((_DWORD *)v46[0] + 9) |= 0x10u;
          *((_QWORD *)v39 + 141) = 0LL;
        }
        else
        {
          v25 = *(_QWORD *)(v21 + 128);
          v26 = *((_QWORD *)v46[0] + 11);
          v52 = -1;
          v54 = 0LL;
          v56 = 0LL;
          v57 = 0LL;
          pbo.pvRbrush = 0LL;
          pbo.flColorType = 0;
          v53 = 0LL;
          v58 = 0;
          BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)&v45[0].xRight, a3);
          v8 = 0;
          v28 = *(_QWORD *)&v45[0].xRight;
          if ( *(_QWORD *)&v45[0].xRight )
          {
            if ( (*((_DWORD *)v46[0] + 9) & 0xE0) != 0 && (*(_DWORD *)(*(_QWORD *)&v45[0].xRight + 40LL) & 0x100) == 0 )
            {
              rclBounds = (__m128i)pco.rclBounds;
              XDCOBJ::vAccumulateTight((XDCOBJ *)v46, v27, &rclBounds);
            }
            bSyncBrushObj((struct BRUSH *)v28);
            EBRUSHOBJ::vInitBrush(&pbo, v46[0], v28, v26, v25, v21, 1);
            v29 = v46[0];
            v55 = (char *)v46[0] + 176;
            if ( (*(_DWORD *)(v28 + 40) & 0x100) != 0 )
            {
              *((_DWORD *)v46[0] + 9) |= 0x10u;
              *((_QWORD *)v29 + 141) = 0LL;
            }
            else
            {
              v30 = *((_QWORD *)v46[0] + 122);
              v31 = ((*(_BYTE *)(v30 + 212) - 1) & 0xF) + 1;
              if ( *(_BYTE *)(v30 + 213) == 1 && (v58 & 0x8000) != 0 )
                v32 = v31 | 0xB00;
              else
                v32 = v31 | (v31 << 8);
              ++*(_DWORD *)(v21 + 92);
              EngPaint((SURFOBJ *)(v21 + 24), &pco, &pbo, (POINTL *)v46[0] + 149, v32);
              v33 = v46[0];
              v8 = 1;
              *((_DWORD *)v46[0] + 9) |= 0x10u;
              *((_QWORD *)v33 + 141) = 0LL;
            }
            if ( *(_QWORD *)&v45[0].xRight )
            {
              XEBRUSHOBJ::RestoreAttributes((XEBRUSHOBJ *)&v45[0].xRight);
              DEC_SHARE_REF_CNT_LAZY0(*(struct BRUSH **)&v45[0].xRight);
              *(_QWORD *)&v45[0].xRight = 0LL;
            }
          }
          else
          {
            v36 = v46[0];
            *((_DWORD *)v46[0] + 9) |= 0x10u;
            *((_QWORD *)v36 + 141) = 0LL;
          }
          BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)&v45[0].xRight);
          EBRUSHOBJ::vDelete((EBRUSHOBJ *)&pbo);
        }
LABEL_45:
        DEVLOCKOBJ::~DEVLOCKOBJ(v63);
        goto LABEL_46;
      }
      v20 = v46[0];
    }
    *((_DWORD *)v20 + 9) |= 0x10u;
    *((_QWORD *)v20 + 141) = 0LL;
    if ( !*((_QWORD *)v46[0] + 62) || (v8 = 0, DC::bInFullScreen(v46[0])) )
      v8 = 1;
    goto LABEL_45;
  }
LABEL_49:
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v50);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v46);
  return v8;
}

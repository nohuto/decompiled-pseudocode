/*
 * XREFs of GreFillRgn @ 0x1400E2680
 * Callers:
 *     NtGdiFillRgn @ 0x1400E0910 (NtGdiFillRgn.c)
 *     ?DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z @ 0x1400E4B00 (-DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z.c)
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
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x1400C71CC (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1400C71EC (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1400CDFD8 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?bInFullScreen@DC@@QEBAHXZ @ 0x1400D243C (-bInFullScreen@DC@@QEBAHXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1400D245C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400D3E30 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1400E3FF0 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1400E4080 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ?bSyncBrushObj@@YAHPEAVBRUSH@@@Z @ 0x1400E4420 (-bSyncBrushObj@@YAHPEAVBRUSH@@@Z.c)
 *     ?RestoreAttributes@XEBRUSHOBJ@@IEAAXXZ @ 0x1400E49C4 (-RestoreAttributes@XEBRUSHOBJ@@IEAAXXZ.c)
 *     EngPaint @ 0x1400E4A40 (EngPaint.c)
 *     ??0RGNMEMOBJ@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1400E7C5C (--0RGNMEMOBJ@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     bFToL @ 0x1400E8DB0 (bFToL.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall GreFillRgn(HDC a1, HRGN a2, HBRUSH a3)
{
  unsigned int v3; // esi
  int v5; // r14d
  struct BRUSH *v6; // r15
  int v7; // ebx
  int v8; // r12d
  DC *v9; // rcx
  DC *v10; // rax
  __int64 v11; // rcx
  DC *v12; // rcx
  __int64 v13; // r13
  __int64 v14; // rcx
  __int64 v15; // rcx
  struct REGION *v16; // rdx
  __int64 v17; // rbx
  __int64 v18; // rdi
  struct ECLIPOBJ *v19; // rdx
  __int64 v20; // rax
  unsigned __int8 v21; // cl
  MIX mix; // edx
  __int64 v23; // rcx
  __int64 v24; // rax
  unsigned int v26; // ebx
  int *v27; // r14
  int v28; // [rsp+40h] [rbp-C0h]
  __int64 v29; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+50h] [rbp-B0h]
  HBRUSH v31[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v32; // [rsp+68h] [rbp-98h] BYREF
  bool v33; // [rsp+70h] [rbp-90h]
  _QWORD v34[7]; // [rsp+78h] [rbp-88h] BYREF
  DC *v35[14]; // [rsp+B0h] [rbp-50h] BYREF
  struct BRUSH *v36[6]; // [rsp+120h] [rbp+20h] BYREF
  BRUSHOBJ pbo; // [rsp+150h] [rbp+50h] BYREF
  int v38; // [rsp+16Ch] [rbp+6Ch]
  __int64 v39; // [rsp+170h] [rbp+70h]
  __int64 v40; // [rsp+178h] [rbp+78h]
  char *v41; // [rsp+188h] [rbp+88h]
  __int64 v42; // [rsp+1A8h] [rbp+A8h]
  __int128 v43; // [rsp+1B0h] [rbp+B0h]
  int v44; // [rsp+1C8h] [rbp+C8h]
  _BYTE v45[8]; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v46; // [rsp+1E8h] [rbp+E8h]
  HDC v47[3]; // [rsp+260h] [rbp+160h] BYREF
  char v48; // [rsp+278h] [rbp+178h]
  int v49[4]; // [rsp+2F0h] [rbp+1F0h] BYREF
  CLIPOBJ pco; // [rsp+300h] [rbp+200h] BYREF

  v3 = 0;
  v31[0] = a3;
  v28 = 0;
  v5 = 0;
  v6 = 0LL;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v35, a1);
  v30 = 0LL;
  if ( !v35[0] || (*((_DWORD *)v35[0] + 9) & 0x10000) != 0 )
    goto LABEL_40;
  v7 = *(_DWORD *)(*((_QWORD *)v35[0] + 122) + 208LL);
  DC::QuickInitXform(v35[0], &v29, 2147484164LL);
  v32 = v29;
  v33 = v7 != 2;
  v8 = *(_DWORD *)(*((_QWORD *)v35[0] + 122) + 340LL) & 0x802;
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v34, a2, 0, 0);
  if ( !v34[0] )
  {
LABEL_38:
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v34);
    if ( (_DWORD)v6 )
    {
      v24 = UserReferenceDwmApiPort(v23);
      DwmSyncFlushAndWaitForBatch(v24);
    }
LABEL_40:
    v3 = v5;
LABEL_41:
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v35);
    return v3;
  }
  if ( v8 == 2050 )
  {
LABEL_5:
    if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v34) == 1 )
    {
      v5 = 1;
LABEL_36:
      if ( v8 != 2050 )
      {
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v34);
        v34[0] = v30;
      }
      goto LABEL_38;
    }
    v9 = v35[0];
    *(_OWORD *)v49 = 0LL;
    *(_OWORD *)v49 = *(_OWORD *)(v34[0] + 52LL);
    if ( (*((_DWORD *)v35[0] + 9) & 0xE0) != 0 )
    {
      XDCOBJ::vAccumulate((XDCOBJ *)v35, (struct ERECTL *)v49);
      v9 = v35[0];
    }
    if ( v49[0] != v49[2] && v49[1] != v49[3] )
    {
      v28 = 0;
      if ( v9 )
        v28 = bSpDwmValidateSurface((struct XDCOBJ *)v35, v49[0], v49[1], v49[2] - v49[0], v49[3] - v49[1]);
    }
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v47);
    if ( !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v47, (struct XDCOBJ *)v35, 0) )
    {
LABEL_35:
      DEVLOCKOBJ::~DEVLOCKOBJ(v47);
      LODWORD(v6) = v28;
      goto LABEL_36;
    }
    v10 = v35[0];
    if ( !*((_QWORD *)v35[0] + 62) )
    {
      v5 = 1;
      goto LABEL_35;
    }
    v11 = v34[0];
    if ( !v34[0] )
      *((_DWORD *)v35[0] + 9) |= 0x10u;
    *((_QWORD *)v10 + 141) = v11;
    v12 = v35[0];
    v13 = *((_QWORD *)v35[0] + 62);
    if ( (v48 & 1) != 0 )
    {
      if ( DC::bTightenRao(v35[0]) )
      {
        v14 = *((_DWORD *)v35[0] + 10) & 1;
        v49[0] += *((_DWORD *)v35[0] + 2 * v14 + 254);
        v49[2] += *((_DWORD *)v35[0] + 2 * v14 + 254);
        v49[1] += *((_DWORD *)v35[0] + 2 * v14 + 255);
        v49[3] += *((_DWORD *)v35[0] + 2 * v14 + 255);
        if ( (unsigned int)DC::bDpiScaleTransform(v35[0]) )
        {
          v26 = 0;
          v27 = v49;
          do
          {
            if ( !(unsigned int)bFToL(v15, &v49[v26], 6LL) )
              break;
            ++v26;
            ++v27;
          }
          while ( v26 < 4 );
        }
        XDCOBJ::prgnEffRao(v35);
        XCLIPOBJ::XCLIPOBJ((XCLIPOBJ *)&pco);
        XCLIPOBJ::vSetup((XCLIPOBJ *)&pco, v16, (const struct ERECTL *)v49, 0);
        if ( !ERECTL::bEmpty((ERECTL *)&pco.rclBounds) )
        {
          v17 = *(_QWORD *)(v13 + 128);
          v18 = *((_QWORD *)v35[0] + 11);
          v38 = -1;
          v42 = 0LL;
          v43 = 0LL;
          pbo.pvRbrush = 0LL;
          pbo.flColorType = 0;
          v39 = 0LL;
          v40 = 0LL;
          v44 = 0;
          BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v36, v31[0]);
          v5 = 0;
          if ( v36[0] )
            v6 = v36[0];
          if ( v6 )
          {
            if ( (*((_DWORD *)v35[0] + 9) & 0xE0) != 0 && (*((_DWORD *)v6 + 10) & 0x100) == 0 )
            {
              *(RECTL *)v31 = pco.rclBounds;
              XDCOBJ::vAccumulateTight((XDCOBJ *)v35, v19, (__m128i *)v31);
            }
            bSyncBrushObj(v6);
            EBRUSHOBJ::vInitBrush(&pbo, v35[0], v6, v18, v17, v13, 1);
            v41 = (char *)v35[0] + 176;
            if ( (*((_DWORD *)v6 + 10) & 0x100) == 0 )
            {
              v20 = *((_QWORD *)v35[0] + 122);
              v21 = ((*(_BYTE *)(v20 + 212) - 1) & 0xF) + 1;
              if ( *(_BYTE *)(v20 + 213) == 1 && (v44 & 0x8000) != 0 )
                mix = v21 | 0xB00;
              else
                mix = v21 | (v21 << 8);
              ++*(_DWORD *)(v13 + 92);
              EngPaint((SURFOBJ *)(v13 + 24), &pco, &pbo, (POINTL *)v35[0] + 149, mix);
              v5 = 1;
            }
            if ( v36[0] )
            {
              XEBRUSHOBJ::RestoreAttributes((XEBRUSHOBJ *)v36);
              DEC_SHARE_REF_CNT_LAZY0(v36[0]);
              v36[0] = 0LL;
            }
          }
          BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v36);
          EBRUSHOBJ::vDelete((EBRUSHOBJ *)&pbo);
          v12 = v35[0];
          goto LABEL_34;
        }
        v12 = v35[0];
LABEL_54:
        v5 = 1;
LABEL_34:
        *((_DWORD *)v12 + 9) |= 0x10u;
        *((_QWORD *)v12 + 141) = 0LL;
        goto LABEL_35;
      }
      v12 = v35[0];
    }
    if ( *((_QWORD *)v12 + 62) && !DC::bInFullScreen(v12) )
      goto LABEL_34;
    goto LABEL_54;
  }
  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v45);
  if ( !v46 )
  {
LABEL_49:
    EngSetLastError(8u);
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v45);
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v34);
    goto LABEL_41;
  }
  if ( v32 && RGNOBJ::bCreate((RGNOBJ *)v34, (struct EPATHOBJ *)v45, (const struct EXFORMOBJR *)&v32) )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v29, (struct EPATHOBJ *)v45, 1u, 0LL);
    if ( v29 )
    {
      v30 = v34[0];
      v34[0] = v29;
      PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v45);
      goto LABEL_5;
    }
    goto LABEL_49;
  }
  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v45);
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v34);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v35);
  return 0LL;
}

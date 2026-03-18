/*
 * XREFs of NtGdiFastPolyPolyline @ 0x1400C7B70
 * Callers:
 *     <none>
 * Callees:
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x140016CFC (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x14001D188 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14001FDF0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1400596DC (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1400C71EC (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?bMakePathRecords@@YAHPEAUPATHRECORD@@PEBKJPEAU_POINTL@@KJJPEAU_RECTFX@@PEAPEAU1@@Z @ 0x1400C7750 (-bMakePathRecords@@YAHPEAUPATHRECORD@@PEBKJPEAU_POINTL@@KJJPEAU_RECTFX@@PEAPEAU1@@Z.c)
 *     ??0PATH@@QEAA@XZ @ 0x1400C78EC (--0PATH@@QEAA@XZ.c)
 *     ??1PATH@@QEAA@XZ @ 0x1400C7920 (--1PATH@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C8FBC (--0APIDCOBJ@@QEAA@PEAUHDC__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bInFullScreen@DC@@QEBAHXZ @ 0x1400D243C (-bInFullScreen@DC@@QEBAHXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400D3E30 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1400D3E50 (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall NtGdiFastPolyPolyline(Gre::Base *a1, struct _POINTL *a2, unsigned int *a3, unsigned int a4)
{
  __int64 v4; // r15
  int v8; // edi
  unsigned int v9; // r14d
  int v10; // ebx
  DC *v11; // rcx
  char *v12; // r13
  __int64 v13; // rdx
  int v14; // ebx
  __int64 v15; // rax
  _QWORD *v16; // r9
  unsigned int v17; // edx
  int v18; // r10d
  unsigned int *v19; // r8
  int v20; // eax
  __int64 v21; // rax
  struct PATHRECORD *v22; // rsi
  __int64 v23; // r13
  char *v24; // rcx
  int v25; // r8d
  int v26; // r9d
  BOOL v27; // r12d
  const struct _VECTORL *v28; // rdx
  int v29; // r8d
  int v30; // r9d
  struct _POINTL *v31; // r13
  unsigned int *v32; // rdx
  int v33; // r12d
  FIX xRight; // edx
  FIX yBottom; // ecx
  DC *v36; // rdx
  __int64 v37; // r14
  __int64 v38; // rax
  __int64 v39; // r9
  char *v40; // r13
  __int64 v41; // r10
  int v42; // r15d
  struct REGION *v43; // rax
  struct ECLIPOBJ *v44; // rdx
  unsigned int v45; // eax
  unsigned int v47; // [rsp+50h] [rbp-488h]
  int v48; // [rsp+64h] [rbp-474h]
  int v49; // [rsp+80h] [rbp-458h]
  int v50; // [rsp+84h] [rbp-454h]
  char *v51; // [rsp+90h] [rbp-448h] BYREF
  struct _POINTL *v52; // [rsp+98h] [rbp-440h]
  unsigned int *v53; // [rsp+A0h] [rbp-438h]
  struct _POINTL *v54; // [rsp+A8h] [rbp-430h]
  unsigned int *v55; // [rsp+B0h] [rbp-428h]
  unsigned int *v56; // [rsp+B8h] [rbp-420h]
  char *v57; // [rsp+C0h] [rbp-418h] BYREF
  bool v58; // [rsp+C8h] [rbp-410h]
  __m128i v59; // [rsp+D0h] [rbp-408h] BYREF
  DC *v60[14]; // [rsp+E0h] [rbp-3F8h] BYREF
  _DWORD v61[2]; // [rsp+150h] [rbp-388h] BYREF
  _BYTE *v62; // [rsp+158h] [rbp-380h]
  __int128 v63; // [rsp+160h] [rbp-378h]
  __int128 v64; // [rsp+170h] [rbp-368h]
  __int64 v65; // [rsp+180h] [rbp-358h]
  __int64 v66; // [rsp+188h] [rbp-350h]
  __int64 v67; // [rsp+190h] [rbp-348h]
  __int64 v68; // [rsp+198h] [rbp-340h]
  HDC v69[18]; // [rsp+1A0h] [rbp-338h] BYREF
  _BYTE v70[32]; // [rsp+230h] [rbp-2A8h] BYREF
  struct PATHRECORD *v71; // [rsp+250h] [rbp-288h]
  struct PATHRECORD *v72; // [rsp+258h] [rbp-280h] BYREF
  struct _RECTFX v73; // [rsp+260h] [rbp-278h] BYREF
  int v74; // [rsp+278h] [rbp-260h]
  __int64 v75; // [rsp+280h] [rbp-258h]
  struct _RECTFX v76; // [rsp+370h] [rbp-168h] BYREF
  _BYTE v77[112]; // [rsp+380h] [rbp-158h] BYREF
  _BYTE v78[4]; // [rsp+3F0h] [rbp-E8h] BYREF
  __m128i v79[9]; // [rsp+3F4h] [rbp-E4h] BYREF

  v4 = a4;
  v53 = a3;
  v52 = a2;
  v56 = a3;
  v8 = 0;
  v9 = 0;
  v47 = 0;
  v59.m128i_i64[0] = (__int64)Gre::Base::Globals(a1);
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v60, (HDC)a1, (struct Gre::Base::SESSION_GLOBALS *)v59.m128i_i64[0]);
  if ( !v60[0] || (*((_DWORD *)v60[0] + 9) & 0x10000) != 0 )
    goto LABEL_57;
  v10 = *(_DWORD *)(*((_QWORD *)v60[0] + 122) + 208LL);
  DC::QuickInitXform(v60[0], &v51, 516LL);
  v57 = v51;
  v58 = v10 != 2;
  v11 = v60[0];
  v12 = (char *)v60[0] + 208;
  v51 = (char *)v60[0] + 208;
  v13 = *((_QWORD *)v60[0] + 122);
  v14 = *(_DWORD *)(v13 + 152);
  if ( (v14 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v60[0], *(_QWORD *)(v13 + 160));
    v11 = v60[0];
  }
  if ( (v14 & 0x2000) != 0 )
  {
    GreDCSelectPen(v11, *(_QWORD *)(*((_QWORD *)v11 + 122) + 168LL));
    v11 = v60[0];
  }
  if ( !(_DWORD)v4 )
  {
    v47 = 1;
LABEL_57:
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v60);
    return v47;
  }
  v55 = 0LL;
  if ( (unsigned int)v4 <= 0x3FFFFFFF )
  {
    v15 = v4;
    v16 = (_QWORD *)MmUserProbeAddress;
    if ( 4 * v4 && ((unsigned __int64)&a3[v15] > MmUserProbeAddress || &a3[v15] < a3) )
    {
      v9 = 0;
      v11 = v60[0];
      v16 = (_QWORD *)MmUserProbeAddress;
    }
    v17 = 0;
    v18 = v4;
    v19 = a3;
    v55 = a3;
    do
    {
      v20 = *v19++;
      v55 = v19;
      v17 += v20;
      --v18;
    }
    while ( v18 );
    if ( v17 <= 0x1FFFFFFF )
    {
      v21 = v17;
      if ( v21 * 8 && ((unsigned __int64)&a2[v21] > *v16 || &a2[v21] < a2) )
        v11 = v60[0];
      v9 = v17;
    }
  }
  if ( !v9
    || (unsigned int)v4 >= 0x8000000
    || v9 >= 0x8000000
    || (*((_DWORD *)v11 + 62) & 1) != 0
    || (*(_DWORD *)v12 & 3) != 0
    || *((_QWORD *)v12 + 3) )
  {
    goto LABEL_57;
  }
  v68 = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  v65 = 0LL;
  PATH::PATH((PATH *)v70);
  v22 = 0LL;
  memset_0(v77, 0, 0x68uLL);
  v23 = 8 * ((unsigned int)v4 + v9 + 2 * (_DWORD)v4);
  if ( (unsigned int)v23 > 0x64 )
  {
    if ( (unsigned int)v23 <= 0x2710000 )
      v22 = (struct PATHRECORD *)AllocFreeTmpBuffer((unsigned int)v23);
    if ( !v22 )
      goto LABEL_79;
  }
  else
  {
    v22 = (struct PATHRECORD *)v77;
  }
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v69);
  if ( !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v69, (struct XDCOBJ *)v60, 0) )
  {
    if ( !*((_QWORD *)v60[0] + 62) || (unsigned int)DC::bInFullScreen(v60[0]) )
      v8 = 1;
    v47 = v8;
    goto LABEL_54;
  }
  v24 = (char *)v60[0] + 1024;
  if ( (*((_DWORD *)v60[0] + 10) & 1) == 0 )
    v24 = (char *)v60[0] + 1016;
  v25 = *(_DWORD *)v24;
  v49 = *(_DWORD *)v24;
  v26 = *((_DWORD *)v60[0] + 2 * (*((_DWORD *)v60[0] + 10) & 1) + 255);
  v50 = v26;
  v27 = 1;
  v48 = 1;
  v28 = (const struct _VECTORL *)v52;
  v54 = v52;
  if ( (*((_DWORD *)v57 + 8) & 2) == 0 )
    goto LABEL_58;
  if ( *(_DWORD *)(*((_QWORD *)v60[0] + 122) + 208LL) != 1
    && (((unsigned __int8)v57[24] | (unsigned __int8)v57[28]) & 0xF) != 0 )
  {
    v28 = (const struct _VECTORL *)v52;
LABEL_58:
    v31 = (struct _POINTL *)((char *)v22 + v23 - 8LL * v9);
    v54 = v31;
    if ( *(_DWORD *)(*((_QWORD *)v60[0] + 122) + 208LL) == 2 )
    {
      v48 = 0;
      v27 = EXFORMOBJ::bXform((EXFORMOBJ *)&v57, v28, (struct _VECTORFX *)v31, v9, 0);
      v29 = *((_DWORD *)v57 + 6) + 16 * v49;
      v30 = *((_DWORD *)v57 + 7) + 16 * v50;
    }
    else
    {
      v48 = 1;
      v27 = EXFORMOBJ::bXform((EXFORMOBJ *)&v57, (const struct _POINTL *)v28, v31, v9);
      v29 = v49;
      v30 = v50;
    }
    v32 = v53;
    goto LABEL_35;
  }
  v29 = (*((int *)v57 + 6) >> 4) + v25;
  v30 = (*((int *)v57 + 7) >> 4) + v26;
  v31 = v54;
  v32 = v53;
LABEL_35:
  v61[0] = v48 != 0 ? 4 : 0;
  v33 = bMakePathRecords(v22, v32, v9, v31, v4, v29, v30, &v73, &v72) & v27;
  if ( v48 )
  {
    v76 = v73;
    xRight = v73.xRight;
    yBottom = v73.yBottom;
    v73.xLeft *= 16;
    v73.xRight *= 16;
    v73.yTop *= 16;
    v73.yBottom *= 16;
  }
  else
  {
    v76.xLeft = v73.xLeft >> 4;
    v76.yTop = v73.yTop >> 4;
    xRight = (v73.xRight + 15) >> 4;
    v76.xRight = xRight;
    yBottom = (v73.yBottom + 15) >> 4;
    v76.yBottom = yBottom;
  }
  if ( yBottom != 0x7FFFFFFF && xRight != 0x7FFFFFFF )
  {
    v76.yBottom = yBottom + 1;
    v76.xRight = xRight + 1;
  }
  if ( v33 )
  {
    v71 = v22;
    v74 = 0;
    v75 = 0LL;
    v61[1] = v9 - v4;
    v62 = v70;
    v36 = v60[0];
    if ( (*((_DWORD *)v60[0] + 9) & 0xE0) != 0 )
    {
      XDCOBJ::vAccumulate((XDCOBJ *)v60, v60[0], (struct ERECTL *)&v76);
      v36 = v60[0];
    }
    if ( *((_QWORD *)v36 + 18) == *(_QWORD *)(v59.m128i_i64[0] + 88) )
      goto LABEL_82;
    v37 = *((_QWORD *)v36 + 62);
    if ( !v37 )
      goto LABEL_82;
    v38 = *(_QWORD *)(v37 + 128);
    v39 = *((_QWORD *)v36 + 11);
    v40 = (char *)v36 + 1336;
    if ( *((_DWORD *)v36 + 334) == -1 )
    {
      *(_DWORD *)(*((_QWORD *)v36 + 122) + 152LL) |= 2u;
      v36 = v60[0];
    }
    v41 = *((_QWORD *)v36 + 122);
    if ( ((*((_BYTE *)v36 + 316) | *(_BYTE *)(v41 + 152)) & 2) != 0 )
    {
      *(_DWORD *)(v41 + 152) &= ~2u;
      *((_DWORD *)v60[0] + 79) &= ~2u;
      EBRUSHOBJ::vInitBrush(v40, v60[0], *((_QWORD *)v60[0] + 18), v39, v38, v37, 0);
      v36 = v60[0];
    }
    v42 = ((((*(_BYTE *)(*((_QWORD *)v36 + 122) + 212LL) - 1) & 0xF) + 1) << 8) | (((*(_BYTE *)(*((_QWORD *)v36 + 122)
                                                                                              + 212LL)
                                                                                   - 1) & 0xF)
                                                                                 + 1);
    v43 = XDCOBJ::prgnEffRao(v60);
    ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v78, v43, (struct ERECTL *)&v76);
    if ( (unsigned int)ERECTL::bEmpty((ERECTL *)v79) )
    {
LABEL_82:
      v47 = 1;
    }
    else
    {
      if ( (*((_DWORD *)v60[0] + 9) & 0xE0) != 0 && (*((_DWORD *)v40 + 30) & 0x100) == 0 )
      {
        v59 = v79[0];
        XDCOBJ::vAccumulateTight((XDCOBJ *)v60, v44, &v59);
      }
      ++*(_DWORD *)(v37 + 92);
      if ( (*(_DWORD *)(v37 + 112) & 0x20) != 0 )
        v45 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _BYTE *, _QWORD, char *, _QWORD, char *, int))(*(_QWORD *)(v37 + 48) + 2792LL))(
                v37 + 24,
                v61,
                v78,
                0LL,
                v40,
                0LL,
                v51,
                v42);
      else
        v45 = ((__int64 (__fastcall *)(__int64, _DWORD *, _BYTE *, _QWORD, char *, _QWORD, char *, int))EngStrokePath)(
                v37 + 24,
                v61,
                v78,
                0LL,
                v40,
                0LL,
                v51,
                v42);
      v47 = v45;
    }
LABEL_54:
    if ( v22 != (struct PATHRECORD *)v77 )
      FreeTmpBuffer(v22);
    DEVLOCKOBJ::~DEVLOCKOBJ(v69);
    PATH::~PATH((PATH *)v70);
    goto LABEL_57;
  }
  if ( v22 != (struct PATHRECORD *)v77 )
    FreeTmpBuffer(v22);
  DEVLOCKOBJ::~DEVLOCKOBJ(v69);
LABEL_79:
  PATH::~PATH((PATH *)v70);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v60);
  return 0LL;
}

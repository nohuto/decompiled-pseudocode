/*
 * XREFs of ?GrepLineTo@@YAHAEAVXDCOBJ@@HH@Z @ 0x1400D2E9C
 * Callers:
 *     NtGdiLineTo @ 0x14001A120 (NtGdiLineTo.c)
 * Callees:
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x140016CFC (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x14001D1D8 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14001FDF0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     bCvtPts1 @ 0x1400C5774 (bCvtPts1.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1400C71EC (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEBAHXZ @ 0x1400CE708 (-bFullScreen@XDCOBJ@@QEBAHXZ.c)
 *     ?vUnguard@CAutoTGO@@QEAAXXZ @ 0x1400D373C (-vUnguard@CAutoTGO@@QEAAXXZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1400D3A58 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400D3E30 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1400D3E50 (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1400D3F84 (-EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GrepLineTo(struct XDCOBJ *a1, unsigned int a2, unsigned int a3)
{
  __int64 v4; // rcx
  unsigned int v5; // r15d
  unsigned int v6; // r14d
  unsigned int v7; // esi
  int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rdx
  LINEATTRS *v11; // r13
  int v12; // ebx
  unsigned int v13; // ebx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 *v18; // rax
  __int64 v19; // rax
  int v20; // ecx
  BOOL (__stdcall *v21)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX); // r12
  int v22; // edx
  int v23; // edx
  int v24; // r10d
  __int32 v25; // r13d
  __int64 v26; // r14
  __int32 v27; // r9d
  int v28; // r15d
  int v29; // r14d
  __int64 v30; // rdx
  unsigned int v31; // ecx
  struct ECLIPOBJ *v32; // rdx
  int v33; // eax
  __int32 v34; // r15d
  Gre::Base *v35; // rcx
  __int32 v36; // r13d
  __int32 v37; // r9d
  int v38; // r14d
  __int32 v39; // eax
  __int32 v40; // eax
  struct Gre::Base::SESSION_GLOBALS *v41; // rax
  _DWORD *v42; // rcx
  int v43; // eax
  __int64 v44; // rax
  _DWORD *v45; // r10
  bool v46; // zf
  __int64 v47; // r8
  struct ECLIPOBJ *v48; // rdx
  __int64 v49; // rdx
  _DWORD *v50; // r8
  char v52; // dl
  _DWORD *v53; // r14
  __int64 v54; // rcx
  struct REGION *v55; // rax
  XCLIPOBJ *v56; // r10
  __int64 v57; // rcx
  int v58; // r15d
  int v59; // r14d
  __int64 v60; // rcx
  int v61; // edx
  __m128i v62; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v63; // [rsp+60h] [rbp-A0h]
  unsigned int v64; // [rsp+64h] [rbp-9Ch]
  _DWORD *v65; // [rsp+68h] [rbp-98h]
  unsigned int v66; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v67; // [rsp+74h] [rbp-8Ch]
  __int64 v68; // [rsp+78h] [rbp-88h] BYREF
  __int32 v69; // [rsp+80h] [rbp-80h]
  int v70; // [rsp+84h] [rbp-7Ch]
  int v71; // [rsp+88h] [rbp-78h]
  struct _RECTFX v72; // [rsp+90h] [rbp-70h] BYREF
  LINEATTRS *v73; // [rsp+A0h] [rbp-60h]
  __m128i v74; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v75; // [rsp+C0h] [rbp-40h]
  __int16 v76; // [rsp+C8h] [rbp-38h]
  __m128i v77; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v78; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v79; // [rsp+F0h] [rbp-10h]
  int v80; // [rsp+F8h] [rbp-8h]
  __int64 v81[6]; // [rsp+100h] [rbp+0h] BYREF
  char v82[32]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v83; // [rsp+150h] [rbp+50h]
  __int64 v84; // [rsp+158h] [rbp+58h]
  __int64 v85; // [rsp+160h] [rbp+60h]
  char v86[560]; // [rsp+170h] [rbp+70h] BYREF

  v64 = a3;
  v4 = *(_QWORD *)a1;
  v5 = a3;
  v6 = a2;
  v63 = a2;
  v7 = 1;
  if ( (*(_DWORD *)(v4 + 36) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    return 0;
  }
  v8 = *(_DWORD *)(*(_QWORD *)(v4 + 976) + 208LL);
  DC::QuickInitXform(v4, &v68, 516LL);
  v9 = *(_QWORD *)a1;
  LOBYTE(v72.xRight) = v8 != 2;
  *(_QWORD *)&v72.xLeft = v68;
  v10 = *(_QWORD *)(v9 + 976);
  v11 = (LINEATTRS *)(v9 + 208);
  v73 = (LINEATTRS *)(v9 + 208);
  v12 = *(_DWORD *)(v10 + 152);
  if ( (v12 & 0x1000) != 0 )
    GreDCSelectBrush(v9, *(_QWORD *)(v10 + 160));
  if ( (v12 & 0x2000) != 0 )
    GreDCSelectPen(*(_QWORD *)a1, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 168LL));
  v13 = 0;
  if ( (v11->fl & 0xB) != 0
    || (*(_DWORD *)(*(_QWORD *)a1 + 248LL) & 1) != 0
    || (*(_DWORD *)(*(_QWORD *)&v72.xLeft + 32LL) & 2) == 0
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 208LL) == 2 )
  {
LABEL_13:
    v66 = v6;
    v67 = v5;
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v78, a1, 1);
    if ( *((_QWORD *)&v78 + 1) )
    {
      v74.m128i_i64[1] = 1LL;
      v76 = 0;
      v74.m128i_i64[0] = (__int64)&v66;
      v75 = 0LL;
      if ( (unsigned __int8)EPATHOBJ::bPolyLineTo(&v78, &v72, &v74, 1LL) )
      {
        v17 = *(_QWORD *)a1;
        if ( (*(_DWORD *)(*((_QWORD *)&v78 + 1) + 72LL) & 1) != 0 )
          v18 = (__int64 *)(*((_QWORD *)&v78 + 1) + 64LL);
        else
          v18 = (__int64 *)(*(_QWORD *)(*((_QWORD *)&v78 + 1) + 40LL)
                          + 8
                          * ((unsigned int)(*(_DWORD *)(*(_QWORD *)(*((_QWORD *)&v78 + 1) + 40LL) + 20LL) - 1) + 3LL));
        v19 = *v18;
        *(_DWORD *)(*(_QWORD *)(v17 + 976) + 152LL) &= 0xFFFFFCFF;
        *(_DWORD *)(*(_QWORD *)(v17 + 976) + 216LL) = v66;
        *(_DWORD *)(*(_QWORD *)(v17 + 976) + 220LL) = v67;
        *(_QWORD *)(*(_QWORD *)(v17 + 976) + 8LL) = v19;
        if ( (*(_DWORD *)(*(_QWORD *)a1 + 248LL) & 1) == 0
          && !(unsigned int)EPATHOBJ_bStrokeAndOrFill((struct EPATHOBJ *)&v78, a1, v11, &v72, 1u) )
        {
          v7 = 0;
        }
      }
    }
    else
    {
      EngSetLastError(8u);
    }
    EPATHOBJ::vUnlock((EPATHOBJ *)&v78);
    PATH_CORE::~PATH_CORE((PATH_CORE *)v86);
    CAutoTGO::vUnguard((CAutoTGO *)v82);
    return v7;
  }
  DLODCOBJ::DLODCOBJ((DLODCOBJ *)v81);
  v79 = 0LL;
  v78 = 0LL;
  v80 = 0;
  v81[0] = 0LL;
  v85 = 0LL;
  v84 = 0LL;
  v83 = 0LL;
  if ( !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v78, a1, 0) )
  {
    v7 = XDCOBJ::bFullScreen(a1);
    goto LABEL_51;
  }
  v14 = *(_QWORD *)a1;
  v15 = *(_QWORD *)(*(_QWORD *)a1 + 496LL);
  v16 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  v68 = v15;
  if ( !v15 )
  {
LABEL_12:
    DEVLOCKOBJ::~DEVLOCKOBJ((HDC *)&v78);
    goto LABEL_13;
  }
  v20 = *(_DWORD *)(v15 + 112);
  if ( (v20 & 0x100) != 0 )
  {
    v21 = *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX))(v16 + 2928);
    if ( !v21 )
      goto LABEL_12;
  }
  else
  {
    if ( *(_WORD *)(v15 + 100) || (v20 & 0x20) != 0 )
      goto LABEL_12;
    v21 = EngLineTo;
  }
  v22 = *(_DWORD *)(*(_QWORD *)&v72.xLeft + 32LL);
  if ( (v22 & 2) != 0 )
  {
    v23 = *(int *)(*(_QWORD *)&v72.xLeft + 24LL) >> 4;
    v24 = *(int *)(*(_QWORD *)&v72.xLeft + 28LL) >> 4;
    v25 = v6 + v23;
    v26 = *(_QWORD *)(v14 + 976);
    v27 = v5 + v24;
    if ( _bittest((const signed __int32 *)(v26 + 152), 8u) )
    {
      v28 = *(int *)(v26 + 8) >> 4;
      v29 = *(int *)(v26 + 12) >> 4;
    }
    else
    {
      v28 = v23 + *(_DWORD *)(v26 + 216);
      v29 = v24 + *(_DWORD *)(v26 + 220);
    }
  }
  else
  {
    v62.m128i_i64[0] = __PAIR64__(v5, v6);
    v52 = v22 & 0x43;
    v53 = *(_DWORD **)(v14 + 976);
    if ( (v53[38] & 0x200) != 0 )
    {
      v28 = v53[54];
      v29 = v53[55];
      v62.m128i_i64[1] = __PAIR64__(v29, v28);
      if ( v52 != 67 )
      {
        bCvtPts1(*(__int64 *)&v72.xLeft, (__int64)&v62, 2LL);
        v29 = v62.m128i_i32[3];
        v28 = v62.m128i_i32[2];
      }
    }
    else
    {
      if ( v52 != 67 )
        bCvtPts1(*(__int64 *)&v72.xLeft, (__int64)&v62, 1LL);
      v54 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
      v28 = *(int *)(v54 + 8) >> 4;
      v29 = *(int *)(v54 + 12) >> 4;
    }
    v25 = v62.m128i_i32[0];
    v27 = v62.m128i_i32[1];
  }
  v62.m128i_i32[0] = v29;
  LODWORD(v65) = v28;
  if ( (unsigned int)(v25 + 134217726) <= 0xFFFFFFC && (unsigned int)(v27 + 134217726) <= 0xFFFFFFC )
  {
    v30 = *(_QWORD *)a1;
    v31 = v63;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) &= 0xFFFFFCFF;
    *(_DWORD *)(*(_QWORD *)(v30 + 976) + 216LL) = v31;
    *(_DWORD *)(*(_QWORD *)(v30 + 976) + 220LL) = v64;
    *(_DWORD *)(*(_QWORD *)(v30 + 976) + 8LL) = 16 * v25;
    *(_DWORD *)(*(_QWORD *)(v30 + 976) + 12LL) = 16 * v27;
    v32 = *(struct ECLIPOBJ **)a1;
    v33 = *(_DWORD *)(*(_QWORD *)a1 + 8LL * (*(_DWORD *)(*(_QWORD *)a1 + 40LL) & 1) + 1016);
    v34 = v33 + v28;
    v35 = (Gre::Base *)*(unsigned int *)(*(_QWORD *)a1 + 8LL * (*(_DWORD *)(*(_QWORD *)a1 + 40LL) & 1) + 1020);
    v36 = v33 + v25;
    v37 = (_DWORD)v35 + v27;
    v70 = v33;
    v38 = (_DWORD)v35 + v29;
    v71 = (int)v35;
    v69 = v37;
    if ( (unsigned int)(v34 + 134217726) > 0xFFFFFFC
      || (unsigned int)(v38 + 134217726) > 0xFFFFFFC
      || (unsigned int)(v36 + 134217726) > 0xFFFFFFC
      || (unsigned int)(v37 + 134217726) > 0xFFFFFFC )
    {
      EngSetLastError(0x57u);
      v60 = *(_QWORD *)a1;
      v61 = 16 * (_DWORD)v65;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) &= ~0x200u;
      *(_DWORD *)(*(_QWORD *)(v60 + 976) + 152LL) |= 0x100u;
      *(_DWORD *)(*(_QWORD *)(v60 + 976) + 8LL) = v61;
      *(_DWORD *)(*(_QWORD *)(v60 + 976) + 12LL) = 16 * v62.m128i_i32[0];
      goto LABEL_52;
    }
    if ( v34 > v36 )
    {
      v77.m128i_i32[0] = v36;
      v39 = v34 + 1;
    }
    else
    {
      v77.m128i_i32[0] = v34;
      v39 = v36 + 1;
    }
    v77.m128i_i32[2] = v39;
    if ( v38 > v37 )
    {
      v77.m128i_i32[1] = v37;
      v40 = v38 + 1;
    }
    else
    {
      v77.m128i_i32[1] = v38;
      v40 = v37 + 1;
    }
    v77.m128i_i32[3] = v40;
    if ( (*((_DWORD *)v32 + 9) & 0xE0) != 0 )
    {
      v62 = v77;
      XDCOBJ::vAccumulate(a1, v32, (struct ERECTL *)&v62);
    }
    v41 = Gre::Base::Globals(v35);
    v42 = *(_DWORD **)a1;
    if ( *(_QWORD *)(*(_QWORD *)a1 + 144LL) != *((_QWORD *)v41 + 11) )
    {
      if ( (v43 = v42[250], v62.m128i_i64[0] = 0LL, v77.m128i_i32[0] >= v43)
        && v77.m128i_i32[2] <= v42[252]
        && v77.m128i_i32[1] >= v42[251]
        && v77.m128i_i32[3] <= v42[253]
        || (v62.m128i_i64[0] = (__int64)(v42 + 442),
            v55 = XDCOBJ::prgnEffRao((DC **)a1),
            XCLIPOBJ::vSetup(v56, v55, (const struct ERECTL *)&v77, 0),
            !(unsigned int)ERECTL::bEmpty((ERECTL *)(v62.m128i_i64[0] + 4))) )
      {
        v44 = *(_QWORD *)a1;
        v45 = (_DWORD *)(*(_QWORD *)a1 + 1336LL);
        v46 = *v45 == -1;
        v65 = v45;
        if ( v46 )
          *(_DWORD *)(*(_QWORD *)(v44 + 976) + 152LL) |= 2u;
        v47 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
        v48 = (struct ECLIPOBJ *)*(unsigned int *)(v47 + 152);
        if ( ((*(_BYTE *)(*(_QWORD *)a1 + 316LL) | *(_BYTE *)(v47 + 152)) & 2) != 0 )
        {
          *(_DWORD *)(v47 + 152) = (unsigned int)v48 & 0xFFFFFFFD;
          *(_DWORD *)(*(_QWORD *)a1 + 316LL) &= ~2u;
          EBRUSHOBJ::vInitBrush(
            v45,
            *(_QWORD *)a1,
            *(_QWORD *)(*(_QWORD *)a1 + 144LL),
            *(_QWORD *)(*(_QWORD *)a1 + 88LL),
            *(_QWORD *)(v68 + 128),
            v68,
            0);
          v45 = v65;
        }
        if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0xE0) != 0 && (v45[30] & 0x100) == 0 )
        {
          v74 = v77;
          XDCOBJ::vAccumulateTight(a1, v48, &v74);
        }
        v49 = v68;
        v50 = v65;
        ++*(_DWORD *)(v68 + 92);
        if ( !((unsigned int (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, int, __int32, __int32, __m128i *, int))v21)(
                v49 + 24,
                v62.m128i_i64[0],
                v50,
                (unsigned int)v34,
                v38,
                v36,
                v69,
                &v77,
                ((((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 212LL) - 1) & 0xF) + 1) << 8) | (((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 212LL) - 1) & 0xF) + 1)) )
        {
          v57 = *(_QWORD *)a1;
          v58 = 16 * (v34 - v70);
          v59 = 16 * (v38 - v71);
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) &= ~0x200u;
          *(_DWORD *)(*(_QWORD *)(v57 + 976) + 152LL) |= 0x100u;
          *(_DWORD *)(*(_QWORD *)(v57 + 976) + 8LL) = v58;
          *(_DWORD *)(*(_QWORD *)(v57 + 976) + 12LL) = v59;
          DEVLOCKOBJ::~DEVLOCKOBJ((HDC *)&v78);
          v6 = v63;
          v5 = v64;
          v11 = v73;
          goto LABEL_13;
        }
      }
    }
LABEL_51:
    v13 = v7;
LABEL_52:
    DEVLOCKOBJ::~DEVLOCKOBJ((HDC *)&v78);
    return v13;
  }
  EngSetLastError(0x57u);
  DEVLOCKOBJ::~DEVLOCKOBJ((HDC *)&v78);
  return 0LL;
}

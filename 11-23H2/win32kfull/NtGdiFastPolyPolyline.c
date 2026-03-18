/*
 * XREFs of NtGdiFastPolyPolyline @ 0x1C000C9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?bMakePathRecords@@YAHPEAU_PATHRECORD@@PEBKJPEAU_POINTL@@KJJPEAU_RECTFX@@PEAPEAU1@@Z @ 0x1C000D140 (-bMakePathRecords@@YAHPEAU_PATHRECORD@@PEBKJPEAU_POINTL@@KJJPEAU_RECTFX@@PEAPEAU1@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C004DD9C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0076170 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C008C210 (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00BB318 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00C2470 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00C3A9C (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011C090 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C011C674 (--0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011C700 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C011C834 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C013E550 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 */

__int64 __fastcall NtGdiFastPolyPolyline(HDC a1, struct _VECTORL *a2, unsigned int *a3, unsigned int a4)
{
  __int64 v4; // r12
  unsigned int v7; // r15d
  unsigned int v8; // edi
  __int64 v9; // rcx
  __int64 v10; // rdx
  int v11; // esi
  ULONG64 v12; // rdx
  unsigned int v13; // edx
  int v14; // r9d
  unsigned int *v15; // r8
  int v16; // eax
  __int64 v17; // rax
  struct _PATHRECORD *v18; // r14
  __int64 v19; // rdi
  int *v20; // rcx
  int v21; // r13d
  int v22; // r8d
  int v23; // edx
  struct _VECTORFX *v24; // rdi
  unsigned int *v25; // r10
  int v26; // r13d
  unsigned __int64 v27; // rdx
  __int64 v28; // r8
  Gre::Base *v29; // rcx
  struct Gre::Base::SESSION_GLOBALS *v30; // rax
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rdi
  __int64 v34; // rax
  __int64 v35; // r9
  __int64 v36; // r13
  __int64 v37; // r10
  int v38; // r15d
  struct REGION *v39; // rax
  unsigned int v40; // eax
  int v42; // eax
  BOOL v43; // [rsp+54h] [rbp-414h]
  int v44; // [rsp+64h] [rbp-404h]
  int v46; // [rsp+88h] [rbp-3E0h]
  int v47; // [rsp+8Ch] [rbp-3DCh]
  _QWORD v48[6]; // [rsp+98h] [rbp-3D0h] BYREF
  unsigned int *v49; // [rsp+C8h] [rbp-3A0h]
  unsigned int *v50; // [rsp+D0h] [rbp-398h]
  __int64 v51; // [rsp+D8h] [rbp-390h]
  __int128 v52; // [rsp+E0h] [rbp-388h] BYREF
  _QWORD v53[2]; // [rsp+F0h] [rbp-378h] BYREF
  _DWORD v54[2]; // [rsp+100h] [rbp-368h] BYREF
  char *v55; // [rsp+108h] [rbp-360h]
  __int128 v56; // [rsp+110h] [rbp-358h]
  __int128 v57; // [rsp+120h] [rbp-348h]
  __int64 v58; // [rsp+130h] [rbp-338h]
  __int64 v59; // [rsp+138h] [rbp-330h]
  __int64 v60; // [rsp+140h] [rbp-328h]
  __int64 v61; // [rsp+148h] [rbp-320h]
  _BYTE v62[112]; // [rsp+150h] [rbp-318h] BYREF
  char v63; // [rsp+1C0h] [rbp-2A8h] BYREF
  struct _PATHRECORD *v64; // [rsp+1E0h] [rbp-288h]
  struct _PATHRECORD *v65; // [rsp+1E8h] [rbp-280h] BYREF
  __int64 plResult; // [rsp+1F0h] [rbp-278h] BYREF
  unsigned int v67; // [rsp+1F8h] [rbp-270h]
  unsigned int v68; // [rsp+1FCh] [rbp-26Ch]
  __int64 v69; // [rsp+208h] [rbp-260h]
  int v70; // [rsp+210h] [rbp-258h]
  __int64 v71; // [rsp+300h] [rbp-168h] BYREF
  int v72; // [rsp+308h] [rbp-160h]
  int v73; // [rsp+30Ch] [rbp-15Ch]
  _BYTE v74[112]; // [rsp+310h] [rbp-158h] BYREF
  _BYTE v75[4]; // [rsp+380h] [rbp-E8h] BYREF
  _OWORD v76[9]; // [rsp+384h] [rbp-E4h] BYREF

  v4 = a4;
  v49 = a3;
  *(_QWORD *)&v52 = a3;
  v7 = 0;
  v8 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v48, a1);
  if ( !v48[0] || (*(_DWORD *)(v48[0] + 36LL) & 0x10000) != 0 )
    goto LABEL_61;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v53, (struct XDCOBJ *)v48, 0x204u);
  v9 = v48[0];
  v51 = v48[0] + 208LL;
  v10 = *(_QWORD *)(v48[0] + 976LL);
  v11 = *(_DWORD *)(v10 + 152);
  if ( (v11 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v48[0], *(_QWORD *)(v10 + 160));
    v9 = v48[0];
  }
  if ( (v11 & 0x2000) != 0 )
  {
    GreDCSelectPen(v9, *(_QWORD *)(*(_QWORD *)(v9 + 976) + 168LL));
    v9 = v48[0];
  }
  if ( !(_DWORD)v4 )
  {
    v8 = 1;
LABEL_61:
    DCOBJ::~DCOBJ((DCOBJ *)v48);
    return v8;
  }
  v50 = 0LL;
  if ( (unsigned int)v4 <= 0x3FFFFFFF )
  {
    if ( 4 * v4 )
    {
      v12 = (ULONG64)&a3[v4];
      if ( v12 > MmUserProbeAddress || v12 < (unsigned __int64)a3 )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
        v9 = v48[0];
      }
    }
    v13 = 0;
    v14 = v4;
    v15 = a3;
    v50 = a3;
    do
    {
      v16 = *v15++;
      v50 = v15;
      v13 += v16;
      --v14;
    }
    while ( v14 );
    if ( v13 <= 0x1FFFFFFF )
    {
      v17 = 8LL * v13;
      if ( v17 && ((unsigned __int64)a2 + v17 > MmUserProbeAddress || (struct _VECTORL *)((char *)a2 + v17) < a2) )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
        v9 = v48[0];
      }
      v7 = v13;
    }
  }
  if ( !v7
    || (unsigned int)v4 >= 0x8000000
    || v7 >= 0x8000000
    || (*(_DWORD *)(v9 + 248) & 1) != 0
    || (*(_DWORD *)v51 & 3) != 0
    || *(_QWORD *)(v51 + 24) )
  {
    goto LABEL_61;
  }
  v61 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  v59 = 0LL;
  v60 = 0LL;
  v58 = 0LL;
  v18 = 0LL;
  memset_0(v74, 0, 0x68uLL);
  v19 = 8 * ((unsigned int)v4 + v7 + 2 * (_DWORD)v4);
  if ( (unsigned int)v19 > 0x64 )
  {
    if ( (unsigned int)v19 <= 0x2710000 )
      v18 = (struct _PATHRECORD *)AllocFreeTmpBuffer((unsigned int)v19);
    if ( !v18 )
      goto LABEL_67;
  }
  else
  {
    v18 = (struct _PATHRECORD *)v74;
  }
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v62, (struct XDCOBJ *)v48, 0);
  if ( (v62[24] & 1) == 0 )
  {
    v40 = XDCOBJ::bFullScreen((XDCOBJ *)v48);
    goto LABEL_57;
  }
  v20 = (int *)(v48[0] + 1024LL);
  if ( (*(_DWORD *)(v48[0] + 40LL) & 1) == 0 )
    v20 = (int *)(v48[0] + 1016LL);
  v46 = *v20;
  v47 = *(_DWORD *)(v48[0] + 8LL * (*(_DWORD *)(v48[0] + 40LL) & 1) + 1020);
  v21 = 1;
  v44 = 1;
  v43 = 0;
  if ( (*(_DWORD *)(v53[0] + 32LL) & 2) != 0
    && (*(_DWORD *)(*(_QWORD *)(v48[0] + 976LL) + 208LL) == 1
     || ((*(_BYTE *)(v53[0] + 24LL) | *(_BYTE *)(v53[0] + 28LL)) & 0xF) == 0) )
  {
    v22 = (*(int *)(v53[0] + 24LL) >> 4) + *v20;
    v23 = (*(int *)(v53[0] + 28LL) >> 4) + *(_DWORD *)(v48[0] + 8LL * (*(_DWORD *)(v48[0] + 40LL) & 1) + 1020);
    v24 = a2;
    v25 = v49;
  }
  else
  {
    v24 = (struct _PATHRECORD *)((char *)v18 + v19 - 8LL * v7);
    if ( *(_DWORD *)(*(_QWORD *)(v48[0] + 976LL) + 208LL) == 2 )
    {
      v44 = 0;
      v42 = EXFORMOBJ::bXform((EXFORMOBJ *)v53, a2, v24, v7, 0);
      v22 = *(_DWORD *)(v53[0] + 24LL) + 16 * v46;
      v23 = *(_DWORD *)(v53[0] + 28LL) + 16 * v47;
    }
    else
    {
      v44 = 1;
      v42 = EXFORMOBJ::bXform((EXFORMOBJ *)v53, (struct _POINTL *)a2, (struct _POINTL *)v24, v7);
      v22 = v46;
      v23 = v47;
    }
    v21 = v42;
    v25 = v49;
  }
  v54[0] = v44 != 0 ? 4 : 0;
  v26 = bMakePathRecords(v18, v25, v7, (struct _POINTL *)v24, v4, v22, v23, (LONG *)&plResult, &v65) & v21;
  if ( v44 )
  {
    v71 = plResult;
    v27 = v67;
    v72 = v67;
    v28 = v68;
    v73 = v68;
    if ( (plResult & 0xF8000000) != 0
      || (v67 & 0xF8000000) != 0
      || (plResult & 0xF800000000000000uLL) != 0
      || (v68 & 0xF8000000) != 0 )
    {
      v43 = 1;
    }
    LODWORD(plResult) = 16 * plResult;
    v67 *= 16;
    HIDWORD(plResult) *= 16;
    v68 *= 16;
  }
  else
  {
    LODWORD(v71) = (int)plResult >> 4;
    HIDWORD(v71) = SHIDWORD(plResult) >> 4;
    v27 = (unsigned int)((int)(v67 + 15) >> 4);
    v72 = (int)(v67 + 15) >> 4;
    v28 = (unsigned int)((int)(v68 + 15) >> 4);
    v73 = (int)(v68 + 15) >> 4;
    v43 = ((v27 ^ v67 | v28 ^ v68) & 0x80000000) != 0LL;
  }
  if ( (_DWORD)v28 == 0x7FFFFFFF || (_DWORD)v27 == 0x7FFFFFFF )
  {
    v43 = 1;
  }
  else
  {
    v28 = (unsigned int)(v28 + 1);
    v73 = v28;
    v27 = (unsigned int)(v27 + 1);
    v72 = v27;
  }
  if ( v26 )
  {
    v64 = v18;
    v70 = 0;
    v69 = 0LL;
    v54[1] = v7 - v4;
    v55 = &v63;
    v29 = (Gre::Base *)*(unsigned int *)(v48[0] + 36LL);
    if ( ((unsigned __int8)v29 & 0xE0) != 0 )
      XDCOBJ::vAccumulate((XDCOBJ *)v48, (struct ECLIPOBJ *)v27, (struct ERECTL *)&v71);
    v30 = Gre::Base::Globals(v29);
    v32 = v48[0];
    if ( *(_QWORD *)(v48[0] + 144LL) == *((_QWORD *)v30 + 32) )
      goto LABEL_81;
    v33 = *(_QWORD *)(v48[0] + 496LL);
    if ( !v33 )
      goto LABEL_81;
    v34 = *(_QWORD *)(v33 + 128);
    v35 = *(_QWORD *)(v48[0] + 88LL);
    v36 = v48[0] + 1336LL;
    if ( *(_DWORD *)(v48[0] + 1336LL) == -1 )
    {
      *(_DWORD *)(*(_QWORD *)(v48[0] + 976LL) + 152LL) |= 2u;
      v32 = v48[0];
    }
    v37 = *(_QWORD *)(v32 + 976);
    if ( ((*(_BYTE *)(v32 + 316) | *(_BYTE *)(v37 + 152)) & 2) != 0 )
    {
      *(_DWORD *)(v37 + 152) &= ~2u;
      *(_DWORD *)(v48[0] + 316LL) &= ~2u;
      EBRUSHOBJ::vInitBrush(v36, v48[0], *(_QWORD *)(v48[0] + 144LL), v35, v34, v33, 0);
      v32 = v48[0];
    }
    v38 = ((((*(_BYTE *)(*(_QWORD *)(v32 + 976) + 212LL) - 1) & 0xF) + 1) << 8) | (((*(_BYTE *)(*(_QWORD *)(v32 + 976)
                                                                                              + 212LL)
                                                                                   - 1) & 0xF)
                                                                                 + 1);
    v39 = XDCOBJ::prgnEffRao((XDCOBJ *)v48);
    ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v75, v39, (struct ERECTL *)&v71, v43);
    if ( (unsigned int)ERECTL::bEmpty((ERECTL *)v76) )
    {
LABEL_81:
      v8 = 1;
      goto LABEL_58;
    }
    if ( (*(_DWORD *)(v48[0] + 36LL) & 0xE0) != 0 && (*(_DWORD *)(v36 + 120) & 0x100) == 0 )
    {
      v52 = v76[0];
      XDCOBJ::vAccumulateTight((XDCOBJ *)v48, (struct ECLIPOBJ *)v32, (struct ERECTL *)&v52);
    }
    ++*(_DWORD *)(v33 + 92);
    if ( (*(_DWORD *)(v33 + 112) & 0x20) != 0 )
      v40 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _BYTE *, _QWORD, __int64, _QWORD, __int64, int))(*(_QWORD *)(v33 + 48) + 2776LL))(
              v33 + 24,
              v54,
              v75,
              0LL,
              v36,
              0LL,
              v51,
              v38);
    else
      v40 = ((__int64 (__fastcall *)(__int64, _DWORD *, _BYTE *, _QWORD, __int64, _QWORD, __int64, int))EngStrokePath)(
              v33 + 24,
              v54,
              v75,
              0LL,
              v36,
              0LL,
              v51,
              v38);
LABEL_57:
    v8 = v40;
LABEL_58:
    if ( v18 != (struct _PATHRECORD *)v74 )
      FreeTmpBuffer(v18, v32, v31);
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v62);
    goto LABEL_61;
  }
  if ( v18 != (struct _PATHRECORD *)v74 )
    FreeTmpBuffer(v18, v27, v28);
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v62);
LABEL_67:
  DCOBJ::~DCOBJ((DCOBJ *)v48);
  return 0LL;
}

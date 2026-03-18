/*
 * XREFs of ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C00CD6B0
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z @ 0x1C010D900 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C015BDFE (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z @ 0x1C02B6418 (-bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z.c)
 * Callees:
 *     bFToL @ 0x1C0078740 (bFToL.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C007E1D0 (--$FreeIsolatedType@V-$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?ulSimpleDeviceOrientation@@YAKAEAVRFONTOBJ@@@Z @ 0x1C009ECC8 (-ulSimpleDeviceOrientation@@YAKAEAVRFONTOBJ@@@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1C00C9E28 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C00CA424 (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x1C00CA528 (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 *     ?vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C00CE118 (-vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C00CE188 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ??$AllocateIsolatedType@V?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@YAPEAXXZ @ 0x1C00CE1A8 (--$AllocateIsolatedType@V-$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@YAPEAXXZ.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C00CE1E0 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?bGetNtoWScales@@YAHPEAVEPOINTFL@@AEAVXDCOBJ@@PEAU_FD_XFORM@@AEAVPFEOBJ@@PEAH@Z @ 0x1C00CE208 (-bGetNtoWScales@@YAHPEAVEPOINTFL@@AEAVXDCOBJ@@PEAU_FD_XFORM@@AEAVPFEOBJ@@PEAH@Z.c)
 *     ?bCalcLayoutUnits@RFONTOBJ@@QEAAHPEAVXDCOBJ@@@Z @ 0x1C00CE534 (-bCalcLayoutUnits@RFONTOBJ@@QEAAHPEAVXDCOBJ@@@Z.c)
 *     UmfdQueryFontCapsEx @ 0x1C00CE62C (UmfdQueryFontCapsEx.c)
 *     ?bInitCache@RFONTOBJ@@QEAAHK@Z @ 0x1C00CE65C (-bInitCache@RFONTOBJ@@QEAAHK@Z.c)
 *     ?bGetDEVICEMETRICS@RFONTOBJ@@QEAAHPEAU_FD_DEVICEMETRICS@@@Z @ 0x1C00CE874 (-bGetDEVICEMETRICS@RFONTOBJ@@QEAAHPEAU_FD_DEVICEMETRICS@@@Z.c)
 *     ?vSetNotionalToDevice@RFONTOBJ@@QEAAXAEAVEXFORMOBJ@@@Z @ 0x1C00CEB30 (-vSetNotionalToDevice@RFONTOBJ@@QEAAXAEAVEXFORMOBJ@@@Z.c)
 *     ?ulSimpleOrientation@RFONTOBJ@@QEAAKPEAVXDCOBJ@@@Z @ 0x1C00D06C8 (-ulSimpleOrientation@RFONTOBJ@@QEAAKPEAVXDCOBJ@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FB6CC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C0114ADC (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C0114B20 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     ?flFontType@PFEOBJ@@QEAAKXZ @ 0x1C01174E0 (-flFontType@PFEOBJ@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 *     ?vDestroyFont@RFONTOBJ@@QEAAXH@Z @ 0x1C02B6B78 (-vDestroyFont@RFONTOBJ@@QEAAXH@Z.c)
 */

__int64 __fastcall RFONTOBJ::bRealizeFont(
        RFONTOBJ *this,
        struct XDCOBJ *a2,
        struct PDEVOBJ *a3,
        struct tagENUMLOGFONTEXDVW *a4,
        struct PFE *a5,
        struct _FD_XFORM *a6,
        struct _POINTL *const a7,
        unsigned int a8,
        unsigned int a9,
        unsigned int a10,
        int a11,
        unsigned int a12)
{
  struct RFONT *v12; // r15
  __int64 v17; // rsi
  struct _FD_GLYPHSET *v18; // rbx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  int v25; // ecx
  __int128 v26; // xmm1
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rbx
  __int64 v30; // rbx
  __int64 v31; // rbx
  int v32; // eax
  __int64 v33; // rcx
  int v34; // eax
  char v35; // r14
  __int64 v36; // rbx
  __int64 v37; // rdx
  unsigned int (__fastcall *v38)(__int64, _BYTE *); // rax
  __int64 v39; // rcx
  int v40; // eax
  unsigned int v41; // ebx
  __int64 v42; // rdx
  __int64 v43; // r15
  bool v44; // zf
  _DWORD *v45; // rdx
  __int64 v46; // rbx
  int v47; // ecx
  int inited; // eax
  Gre::Base *v49; // rcx
  int v50; // ecx
  int v51; // ecx
  __int64 v52; // r14
  int v53; // ecx
  unsigned int v54; // ecx
  int v55; // ecx
  __int64 v56; // rcx
  char v57; // dl
  __int64 v58; // rcx
  const wchar_t *v59; // rbx
  __int64 v60; // rcx
  _BYTE *v61; // rdx
  float v62; // xmm0_4
  unsigned int v63; // ecx
  unsigned __int8 *v64; // r8
  unsigned int v65[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct RFONT *v66; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int16 v67; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v68[4]; // [rsp+48h] [rbp-B8h] BYREF
  int v69; // [rsp+4Ch] [rbp-B4h]
  __int64 v70; // [rsp+50h] [rbp-B0h]
  __int64 v71; // [rsp+58h] [rbp-A8h]
  __int128 v72; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v73; // [rsp+70h] [rbp-90h]
  _FD_DEVICEMETRICS v74; // [rsp+80h] [rbp-80h] BYREF

  v12 = a5;
  v66 = a5;
  v17 = 0LL;
  v18 = PFEOBJ::pfdg((PFEOBJ *)&v66);
  if ( !v18 )
    goto LABEL_2;
  v20 = AllocateIsolatedType<NSInstrumentation::CTypeIsolation<233472,912>>();
  *(_QWORD *)this = v20;
  if ( !v20 )
  {
    PFEOBJ::vFreepfdg((__int64 **)&v66);
LABEL_2:
    *(_QWORD *)this = 0LL;
    return 0LL;
  }
  v70 = *(_QWORD *)a5;
  *(_DWORD *)(*(_QWORD *)this + 32LL) = PDEVOBJ::ulLogPixelsX(a3);
  *(_DWORD *)(*(_QWORD *)this + 36LL) = PDEVOBJ::ulLogPixelsY(a3);
  *(_DWORD *)(*(_QWORD *)this + 40LL) = a9;
  *(_DWORD *)(*(_QWORD *)this + 12LL) = a8 | PFEOBJ::flFontType((PFEOBJ *)&v66);
  *(_QWORD *)(*(_QWORD *)this + 48LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 56LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)this + 4LL) = *((_DWORD *)a5 + 2);
  *(_QWORD *)(*(_QWORD *)this + 24LL) = *(_QWORD *)(v70 + 80);
  if ( (*(_DWORD *)(*(_QWORD *)this + 12LL) & 4) != 0 )
    v21 = *((unsigned int *)a5 + 20);
  else
    v21 = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 16LL) = v21;
  *(struct _FD_XFORM *)(*(_QWORD *)this + 136LL) = *a6;
  *(struct _FD_XFORM *)(*(_QWORD *)this + 152LL) = *a6;
  *(struct _FD_XFORM *)(*(_QWORD *)this + 360LL) = *a6;
  *(struct _POINTL *)(*(_QWORD *)this + 648LL) = *a7;
  *(_QWORD *)(*(_QWORD *)this + 224LL) = *(_QWORD *)this + 240LL;
  RFONTOBJ::vSetNotionalToDevice(this, (struct EXFORMOBJ *)(*(_QWORD *)this + 224LL));
  *(_QWORD *)(*(_QWORD *)this + 120LL) = a5;
  *(_QWORD *)(*(_QWORD *)this + 128LL) = *(_QWORD *)a5;
  *(_QWORD *)(*(_QWORD *)this + 720LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 728LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 736LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 744LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)this + 832LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 712LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 840LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 836LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 844LL) = *((_DWORD *)a5 + 3) & 0x100;
  v22 = *(_QWORD *)this;
  if ( a3 )
  {
    *(_QWORD *)(v22 + 104) = *(_QWORD *)a3;
    *(_QWORD *)(*(_QWORD *)this + 112LL) = *(_QWORD *)(*(_QWORD *)a3 + 1768LL);
  }
  else
  {
    *(_QWORD *)(v22 + 104) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 112LL) = 0LL;
  }
  v23 = *(_QWORD *)this;
  v65[0] = 0;
  *(_DWORD *)(v23 + 168) = 1;
  *(_DWORD *)(*(_QWORD *)this + 716LL) = *(_DWORD *)(*((_QWORD *)a5 + 4) + 48LL);
  *(_QWORD *)(*(_QWORD *)this + 472LL) = v18;
  v71 = *((_QWORD *)a5 + 4);
  v67 = *(_WORD *)(v71 + 116);
  RFONTOBJ::vXlatGlyphArray(this, &v67, 1, v65, 2u, 0);
  *(_DWORD *)(*(_QWORD *)this + 460LL) = v65[0];
  *(_DWORD *)(*(_QWORD *)this + 712LL) &= ~0x40u;
  memset_0(&v74, 0, sizeof(v74));
  *(_QWORD *)(*(_QWORD *)this + 96LL) = *(_QWORD *)(v70 + 88);
  if ( !(unsigned int)RFONTOBJ::bGetDEVICEMETRICS(this, &v74) )
    goto LABEL_12;
  if ( a2 )
  {
    *(POINTE *)(*(_QWORD *)this + 396LL) = v74.pteBase;
    *(POINTE *)(*(_QWORD *)this + 416LL) = v74.pteSide;
    v25 = *(_DWORD *)(*(_QWORD *)a2 + 352LL);
    v26 = *(_OWORD *)(*(_QWORD *)a2 + 336LL);
    v27 = *(_QWORD *)this;
    *(_OWORD *)(v27 + 172) = *(_OWORD *)(*(_QWORD *)a2 + 320LL);
    *(_OWORD *)(v27 + 188) = v26;
    *(_DWORD *)(v27 + 204) = v25;
    if ( !RFONTOBJ::bCalcLayoutUnits(this, a2)
      || !bGetNtoWScales(
            (struct EPOINTFL *)(*(_QWORD *)this + 212LL),
            a2,
            (struct _FD_XFORM *)(*(_QWORD *)this + 360LL),
            (struct PFEOBJ *)&v66,
            (int *)(*(_QWORD *)this + 220LL)) )
    {
LABEL_12:
      v24 = *(_QWORD *)this;
LABEL_13:
      v72 = 0LL;
      v73 = 0LL;
      PushThreadGuardedObject(&v72, v24, Win32FreePool);
      RFONTOBJ::vDestroyFont(this, 1);
      PopThreadGuardedObject(&v72);
      FreeIsolatedType<NSInstrumentation::CTypeIsolation<233472,912>>(*(Gre::Base **)this);
      goto LABEL_2;
    }
    v28 = *(_QWORD *)this;
    v65[0] = 0;
    bFToL((float)*(int *)(v28 + 316) * *(float *)(v28 + 416), (int *)v65, 0);
    *(_DWORD *)(v28 + 328) = v65[0];
    v29 = *(_QWORD *)this;
    v65[0] = 0;
    bFToL((float)*(int *)(v29 + 316) * *(float *)(v29 + 420), (int *)v65, 0);
    *(_DWORD *)(v29 + 332) = v65[0];
    v30 = *(_QWORD *)this;
    v65[0] = 0;
    bFToL((float)*(int *)(v30 + 320) * *(float *)(v30 + 416), (int *)v65, 0);
    *(_DWORD *)(v30 + 336) = v65[0];
    v31 = *(_QWORD *)this;
    v65[0] = 0;
    bFToL((float)*(int *)(v31 + 320) * *(float *)(v31 + 420), (int *)v65, 0);
    *(_DWORD *)(v31 + 340) = v65[0];
    *(_DWORD *)(*(_QWORD *)this + 432LL) = -1;
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 208LL) == 1 )
    {
      v32 = *(_DWORD *)(v71 + 48);
      if ( (v32 & 4) == 0 )
      {
        if ( (v32 & 0x10) == 0 )
        {
          v34 = ulSimpleDeviceOrientation(this);
LABEL_22:
          *(_DWORD *)(*(_QWORD *)this + 392LL) = v34;
          goto LABEL_23;
        }
        v33 = (unsigned int)(3600 - a4->elfEnumLogfontEx.elfLogFont.lfEscapement);
LABEL_29:
        v34 = lNormAngle(v33);
        goto LABEL_22;
      }
LABEL_28:
      v33 = (unsigned int)(3600 - a4->elfEnumLogfontEx.elfLogFont.lfOrientation);
      goto LABEL_29;
    }
    *(_DWORD *)(*(_QWORD *)this + 392LL) = RFONTOBJ::ulSimpleOrientation(this, a2);
    if ( *(_DWORD *)(*(_QWORD *)this + 392LL) >= 0xE10u && (*(_DWORD *)(*(_QWORD *)this + 716LL) & 0x10) != 0 )
      goto LABEL_28;
  }
LABEL_23:
  v35 = 0;
  *(_DWORD *)(*(_QWORD *)this + 656LL) = a10;
  v36 = *(_QWORD *)(*(_QWORD *)this + 96LL);
  v37 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(a10) + 32) + 23448LL);
  if ( *(_QWORD *)(*(_QWORD *)this + 96LL) == v37 )
  {
    if ( (unsigned int)UmfdQueryFontCapsEx(*(_QWORD *)(*(_QWORD *)this + 24LL), v37, v68) != -1 )
      v35 = v69;
  }
  else
  {
    v38 = *(unsigned int (__fastcall **)(__int64, _BYTE *))(v36 + 3016);
    if ( v38 && v38(2LL, v68) != -1 )
      v35 = v69;
  }
  v39 = *(_QWORD *)this;
  if ( (*(_DWORD *)(v36 + 40) & 0x2000) == 0 )
  {
    *(_DWORD *)(v39 + 92) = 1;
    *(_DWORD *)(*(_QWORD *)this + 88LL) = 0;
    goto LABEL_58;
  }
  v40 = *(_DWORD *)(v39 + 12);
  *(_DWORD *)(v39 + 92) = 0;
  v41 = (v40 & 0x10010000) != 0 ? 400 : 800;
  v39 = v41;
  *(_DWORD *)(*(_QWORD *)this + 88LL) = 1;
  v42 = *(_QWORD *)this;
  if ( a10 )
  {
    *(_DWORD *)(v42 + 88) = 2;
    goto LABEL_49;
  }
  v43 = *(_QWORD *)(v42 + 104);
  if ( v43 )
  {
    v44 = (*(_DWORD *)(v43 + 40) & 0x8000) == 0;
    *(_QWORD *)v65 = *(_QWORD *)(v42 + 104);
    if ( !v44 )
    {
      if ( KeAreApcsDisabled() )
      {
LABEL_43:
        v39 = v41;
        if ( (*(_DWORD *)(v43 + 1792) & 0x40000000) != 0 )
        {
          v39 = 3 * PDEVOBJ::ulLogPixelsY((PDEVOBJ *)v65);
          if ( (unsigned int)v39 <= 0x320 )
            v39 = v41;
          if ( (unsigned int)v39 > 0x960 )
            v39 = 2400LL;
        }
        goto LABEL_48;
      }
      v42 = *(_QWORD *)this;
    }
    if ( *(_QWORD *)(v43 + 2960) )
    {
      v72 = 0LL;
      v73 = 0LL;
      PushThreadGuardedObject(&v72, v42, vRestartbRealizeFont);
      *(_DWORD *)(*(_QWORD *)this + 88LL) = (*(__int64 (__fastcall **)(_QWORD))(v43 + 2960))(*(_QWORD *)(*(_QWORD *)this + 112LL));
      PopThreadGuardedObject(&v72);
    }
    goto LABEL_43;
  }
LABEL_48:
  v12 = v66;
LABEL_49:
  v45 = *(_DWORD **)this;
  if ( *(_DWORD *)(*(_QWORD *)this + 88LL) == 1 )
  {
    if ( (v35 & 2) == 0
      || (v45[179] & 0x8000) != 0 && (v45[86] > (unsigned int)(2 * v39) || v45[87] > (unsigned int)v39) )
    {
      v45[22] = 2;
    }
  }
  else if ( *(_DWORD *)(*(_QWORD *)this + 88LL) == 2 && (v35 & 1) == 0 )
  {
    v45[22] = 1;
  }
LABEL_58:
  v46 = *(_QWORD *)(SGDGetSessionState(v39) + 32);
  if ( *(_DWORD *)(*(_QWORD *)this + 88LL) == 2 )
    *(_DWORD *)(*(_QWORD *)this + 12LL) &= 0x8FFEFFFF;
  if ( a10 )
  {
    v24 = *(_QWORD *)this;
    if ( *(_DWORD *)(*(_QWORD *)this + 88LL) != 2 )
      goto LABEL_13;
  }
  if ( !a11 || (v47 = 1, *(_DWORD *)(*(_QWORD *)this + 392LL)) )
    v47 = 0;
  *(_DWORD *)(*(_QWORD *)this + 640LL) = v47;
  inited = RFONTOBJ::bInitCache(this, a12);
  v49 = *(Gre::Base **)this;
  if ( !inited )
  {
    v24 = *(_QWORD *)this;
    goto LABEL_13;
  }
  *((_QWORD *)v49 + 86) = 0LL;
  *(_QWORD *)v65 = *((_QWORD *)Gre::Base::Globals(v49) + 3);
  GreAcquireSemaphore(*(_QWORD *)v65);
  v50 = *(_DWORD *)(v46 + 23408);
  v44 = v50 == -1;
  v51 = v50 + 1;
  *(_DWORD *)(v46 + 23408) = v51;
  if ( v44 )
  {
    *(_DWORD *)(v46 + 23408) = 1;
    v51 = 1;
  }
  **(_DWORD **)this = v51;
  if ( a3 )
  {
    *(_DWORD *)(*(_QWORD *)this + 660LL) = 1;
    v66 = PDEVOBJ::prfntActive(a3);
    RFONTOBJ::vInsert(this, &v66, 1LL);
    PDEVOBJ::prfntActive(a3, v66);
  }
  v52 = v70;
  v66 = *(struct RFONT **)(v70 + 72);
  RFONTOBJ::vInsert(this, &v66, 0LL);
  *(_QWORD *)(v52 + 72) = v66;
  SEMOBJ::vUnlock((SEMOBJ *)v65);
  v53 = *(_DWORD *)(*(_QWORD *)this + 12LL);
  if ( *(_DWORD *)(*(_QWORD *)this + 88LL) == 1 )
    v54 = v53 | 1;
  else
    v54 = v53 & 0xFFFFFFFE;
  *(_DWORD *)(*(_QWORD *)this + 12LL) = v54;
  if ( a2 )
    *(_DWORD *)(*(_QWORD *)this + 208LL) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 208LL);
  else
    *(_DWORD *)(*(_QWORD *)this + 208LL) = 0;
  if ( !*(_DWORD *)(v46 + 19352) || (v55 = 1, (*((_DWORD *)v12 + 3) & 0x10) == 0) )
    v55 = 0;
  *(_DWORD *)(*(_QWORD *)this + 708LL) = v55;
  v56 = *(_QWORD *)this;
  if ( (*(_DWORD *)(*(_QWORD *)this + 12LL) & 0x10000000) != 0 )
  {
    if ( (*(_DWORD *)(v56 + 204) & 1) == 0 || (v57 = 1, *(_DWORD *)(v56 + 328)) )
      v57 = 0;
    v58 = *(_QWORD *)(*(_QWORD *)(v56 + 120) + 32LL);
    if ( (*(_DWORD *)(v58 + 48) & 0x401000) != 0 )
    {
      if ( v57 )
      {
        if ( *(_WORD *)(v58 + 46) <= 0x190u )
        {
          v59 = (const wchar_t *)(v58 + *(int *)(v58 + 8));
          if ( !_wcsicmp(v59, L"Courier New")
            || !_wcsicmp(v59, L"Rod")
            || !_wcsicmp(v59, L"Rod Transparent")
            || !_wcsicmp(v59, L"Fixed Miriam Transparent")
            || !_wcsicmp(v59, L"Miriam Fixed")
            || !_wcsicmp(v59, L"Simplified Arabic Fixed") )
          {
            *(_DWORD *)(*(_QWORD *)this + 64LL) = 1;
          }
        }
      }
    }
    v60 = *(_QWORD *)this;
    if ( (*(_DWORD *)(*(_QWORD *)this + 12LL) & 0x20000000) != 0 )
    {
      v72 = 0LL;
      *(_QWORD *)&v73 = 0LL;
      EXFORMOBJ::vGetCoefficient((EXFORMOBJ *)(v60 + 224), (struct tagFLOATOBJ_XFORM *)&v72);
      v61 = *(_BYTE **)(v52 + 192);
      v62 = (float)*(__int16 *)(v71 + 56) * *((float *)&v72 + 3);
      *((float *)&v72 + 3) = v62;
      if ( v61 )
      {
        v63 = 0;
        if ( *v61 )
        {
          v64 = v61 + 4;
          while ( *v64 != (int)v62 )
          {
            ++v63;
            v64 += 80;
            if ( v63 >= (unsigned __int8)*v61 )
              goto LABEL_102;
          }
          v17 = (__int64)&v61[80 * v63 + 4];
        }
      }
LABEL_102:
      *(_QWORD *)(*(_QWORD *)this + 72LL) = v17;
    }
  }
  return 1LL;
}

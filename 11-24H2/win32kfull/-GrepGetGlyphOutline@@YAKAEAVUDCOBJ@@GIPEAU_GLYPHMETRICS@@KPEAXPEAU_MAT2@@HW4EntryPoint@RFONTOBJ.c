/*
 * XREFs of ?GrepGetGlyphOutline@@YAKAEAVUDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@HW4EntryPoint@RFONTOBJ@@@Z @ 0x1400B0B2C
 * Callers:
 *     NtGdiGetGlyphOutline @ 0x140260020 (NtGdiGetGlyphOutline.c)
 * Callees:
 *     ?bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z @ 0x14002B4D0 (-bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z.c)
 *     ??$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z @ 0x14005CB24 (--$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14005CE04 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?dtorHelper@RFONTOBJ@@QEAAXXZ @ 0x14005CF58 (-dtorHelper@RFONTOBJ@@QEAAXXZ.c)
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x14005D0AC (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z @ 0x14005DC90 (-bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ??$GreReleasePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1400A3DC0 (--$GreReleasePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??$GreAcquirePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1400A3EA8 (--$GreAcquirePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1400B03C4 (-QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1400B1364 (-vReleaseCache@RFONTOBJ@@QEAAXXZ.c)
 *     ??0RESETFCOBJ@@QEAA@AEAVUDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z @ 0x1400B1490 (--0RESETFCOBJ@@QEAA@AEAVUDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1400B1B20 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 *     ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1400B25CC (--0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z.c)
 *     EngUnmapFontFileFD @ 0x1400B3DE0 (EngUnmapFontFileFD.c)
 *     ?pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1400C1F00 (-pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 *     ?vLockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXH@Z @ 0x14017C094 (-vLockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXH@Z.c)
 *     ??0?$SEMOBJ@$0P@@@QEAA@PEAVRFONT@@@Z @ 0x140184224 (--0-$SEMOBJ@$0P@@@QEAA@PEAVRFONT@@@Z.c)
 *     ?bSkipCHSFontSegUISymFallback@RFONTOBJ@@QEAAHGPEAVPFF@@0@Z @ 0x1401849F4 (-bSkipCHSFontSegUISymFallback@RFONTOBJ@@QEAAHGPEAVPFF@@0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$0P@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140195C64 (--$GreReleaseSemaphoreCommon@$0P@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?IsPerFontEUDC@RFONTOBJ@@QEAA_NXZ @ 0x1401A49CC (-IsPerFontEUDC@RFONTOBJ@@QEAA_NXZ.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z @ 0x14025B70C (-vInitEUDC@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall GrepGetGlyphOutline(
        struct UDCOBJ *a1,
        unsigned __int16 a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        void *a6,
        struct _MAT2 *a7,
        int a8)
{
  __int64 v9; // rsi
  unsigned int v10; // r15d
  unsigned int v11; // r14d
  unsigned int v12; // r13d
  int v13; // ebx
  unsigned int v14; // edi
  unsigned int v15; // r12d
  int v16; // ecx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rbx
  SIZE sizLogResPpi; // rax
  unsigned int v22; // eax
  LONG top; // ecx
  int v24; // eax
  int v25; // eax
  bool v27; // zf
  struct _FONTOBJ *v28; // rdi
  unsigned int v29; // r15d
  __int64 (__fastcall *v30)(_QWORD, struct _FONTOBJ *, _QWORD, __int64, struct _GLYPHDATA *, unsigned int, void *); // rbx
  __int64 v31; // r9
  ULONG_PTR *p_fract; // rbx
  __int64 v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rbx
  __int64 v39; // rdx
  unsigned int v40; // r13d
  __int64 v41; // r13
  __int64 v42; // rax
  __int64 v43; // rbx
  __int64 v44; // rbx
  unsigned int i; // r13d
  __int64 v46; // rax
  __int64 v47; // rbx
  RFONTOBJ *v48; // rcx
  __int64 v49; // r9
  struct RFONTOBJ *v50; // r8
  struct _GLYPHDATA *v51; // rax
  unsigned int v52; // edi
  unsigned int v53; // edi
  unsigned int v54; // edi
  __int64 v55; // rbx
  struct RFONTOBJ *v56; // r8
  unsigned int v57; // r13d
  struct _GLYPHDATA *v58; // rax
  struct RFONTOBJ *v59; // r8
  struct _GLYPHDATA *EudcMetrics; // rax
  unsigned __int16 v61; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v62; // [rsp+48h] [rbp-B8h] BYREF
  struct _FONTOBJ *v63; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v64; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v65; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v66; // [rsp+68h] [rbp-98h] BYREF
  __int64 v67; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v68; // [rsp+78h] [rbp-88h]
  int v69; // [rsp+7Ch] [rbp-84h]
  __int64 *v70; // [rsp+80h] [rbp-80h]
  __int64 v71; // [rsp+88h] [rbp-78h] BYREF
  __int64 v72; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v73; // [rsp+98h] [rbp-68h]
  int v74; // [rsp+9Ch] [rbp-64h]
  _QWORD v75[2]; // [rsp+A0h] [rbp-60h] BYREF
  struct UDCOBJ *v76; // [rsp+B0h] [rbp-50h]
  _DWORD v77[2]; // [rsp+B8h] [rbp-48h] BYREF
  RFONTOBJ *v78; // [rsp+C0h] [rbp-40h]
  struct _MAT2 *v79; // [rsp+C8h] [rbp-38h] BYREF
  unsigned int v80; // [rsp+D0h] [rbp-30h]
  void *v81; // [rsp+D8h] [rbp-28h]
  struct _GLYPHDATA v82; // [rsp+E0h] [rbp-20h] BYREF

  v81 = a6;
  v9 = a4;
  v79 = a7;
  v10 = a2;
  v11 = 0;
  v76 = a1;
  v75[0] = a4;
  memset_0(&v82, 0, sizeof(v82));
  v12 = -1;
  v69 = -1;
  v74 = a3 & 0x100;
  v13 = a3 & 0x80;
  v14 = a3 & 0xFFFFFE7F;
  v15 = 0;
  v73 = v13 != 0 ? 4 : 2;
  if ( !v9 || !v79 )
  {
    EngSetLastError(0x57u);
    return v12;
  }
  LODWORD(v64) = 6;
  v16 = *(unsigned __int16 *)(*(_QWORD *)v76 + 12LL);
  v65 = 0LL;
  HIDWORD(v64) = v16;
  if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v65, v76, 0LL, 2u, (const struct RFONTOBJ::Tag *)&v64) )
    GreAcquireSemaphore<5,RFONT *>(v65);
  v72 = 0LL;
  v70 = &v65;
  v18 = v65;
  v71 = 0LL;
  v67 = 0LL;
  if ( v65 )
  {
    if ( v13 )
    {
      v11 = v10;
      v68 = v10;
    }
    else
    {
      v62 = 0;
      v61 = v10;
      RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v65, &v61, 1u, &v62, 0, 0);
      v11 = v62;
      v18 = v65;
      v68 = v62;
    }
    if ( v11 == *(_DWORD *)(v18 + 456)
      && !v13
      && (unsigned int)RFONTOBJ::bIsLinkedGlyph((RFONTOBJ *)&v65, (unsigned __int16)v10, v17) )
    {
      v34 = v65;
      if ( *(_QWORD *)(v65 + 856) )
      {
        v11 = -1;
        SEMOBJ<15>::SEMOBJ<15>(&v64, v65);
        v38 = *(_QWORD *)(W32GetSessionState(v36, v35, v37) + 96);
        GreAcquirePushLockShared2<16,0>(v38 + 4872);
        _InterlockedIncrement((volatile signed __int32 *)(v38 + 13508));
        GreReleasePushLockShared2<16,0>(v38 + 4872);
        RFONTOBJ::vInitEUDC((RFONTOBJ *)&v65, v76);
        RFONTOBJ::vLockEUDCFontsGlyphCache((RFONTOBJ *)&v65, 0);
        v39 = v64;
        *(_DWORD *)(v34 + 720) |= 1u;
        if ( v39 )
          GreReleaseSemaphoreCommon<15,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal);
        v40 = *(_DWORD *)(v34 + 848);
        v66 = v40;
        if ( !v40 )
          goto LABEL_91;
        v41 = v40 - 1;
        LODWORD(v63) = v41;
        v42 = *(_QWORD *)(v34 + 752);
        v62 = 0;
        v61 = v10;
        v67 = *(_QWORD *)(v42 + 8 * v41);
        v43 = v67;
        RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v67, &v61, 1u, &v62, 0, 0);
        if ( v62 == *(_DWORD *)(v43 + 456) )
          goto LABEL_91;
        v64 = *(_QWORD *)(*(_QWORD *)(v34 + 752) + 8 * v41);
        if ( v64 )
        {
          if ( RFONTOBJ::IsPerFontEUDC((RFONTOBJ *)&v64) )
          {
            v66 = (unsigned int)v63;
            EudcMetrics = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v64, v10, v59);
            if ( EudcMetrics )
            {
              if ( EudcMetrics->fxD )
              {
                v11 = v62;
                v70 = &v67;
              }
            }
          }
        }
        v64 = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v64);
        if ( v11 == -1 )
        {
LABEL_91:
          v44 = *(_QWORD *)(v34 + 736);
          if ( !v44
            || (v62 = 0,
                v72 = v44,
                v61 = v10,
                RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v72, &v61, 1u, &v62, 0, 0),
                v62 == *(_DWORD *)(v44 + 456))
            || (v11 = v62, v70 = &v72, v62 == -1) )
          {
            for ( i = 0; i < v66; ++i )
            {
              v46 = *(_QWORD *)(v34 + 752);
              v62 = 0;
              v61 = v10;
              v67 = *(_QWORD *)(v46 + 8LL * i);
              v47 = v67;
              RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v67, &v61, 1u, &v62, 0, 0);
              if ( v62 != *(_DWORD *)(v47 + 456) )
              {
                v49 = *(_QWORD *)(*(_QWORD *)(v34 + 752) + 8LL * i);
                v63 = (struct _FONTOBJ *)v49;
                if ( v49 )
                {
                  if ( !(unsigned int)RFONTOBJ::bSkipCHSFontSegUISymFallback(
                                        v48,
                                        v10,
                                        *(struct PFF **)(v34 + 128),
                                        *(struct PFF **)(v49 + 128)) )
                  {
                    v51 = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v63, v10, v50);
                    if ( v51 )
                    {
                      if ( v51->fxD )
                      {
                        v11 = v62;
                        v70 = &v67;
                        v63 = 0LL;
                        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v63);
                        if ( v11 != -1 )
                          goto LABEL_69;
                        break;
                      }
                    }
                  }
                }
                v63 = 0LL;
                RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v63);
              }
            }
            v55 = *(_QWORD *)(v34 + 744);
            if ( !v55 )
              goto LABEL_79;
            v66 = 0;
            v71 = v55;
            v61 = v10;
            RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v71, &v61, 1u, &v66, 0, 0);
            v57 = v66;
            if ( v66 == *(_DWORD *)(v55 + 456) )
              goto LABEL_79;
            v64 = *(_QWORD *)(v34 + 744);
            if ( v64 )
            {
              v58 = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v64, v10, v56);
              if ( v58 )
              {
                if ( v58->fxD )
                {
                  v11 = v57;
                  v70 = &v71;
                }
              }
            }
            v64 = 0LL;
            RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v64);
            if ( v11 == -1 )
            {
LABEL_79:
              RFONTOBJ::dtorHelper((RFONTOBJ *)&v65);
              v11 = v68;
              *(_DWORD *)(v34 + 720) = 0;
            }
          }
        }
LABEL_69:
        v12 = v69;
      }
      v9 = v75[0];
    }
  }
  if ( *v70 )
  {
    v19 = *v70;
  }
  else
  {
    EngSetLastError(0x3EBu);
    v19 = 0LL;
  }
  v67 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v67);
  v71 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v71);
  v72 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v72);
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v65);
  if ( v19 )
  {
    v63 = (struct _FONTOBJ *)v19;
    GreAcquireSemaphore<5,RFONT *>(v19);
    v20 = *(_QWORD *)(v19 + 128);
    v75[0] = v20;
    sizLogResPpi = v63[1].sizLogResPpi;
    if ( !*(_QWORD *)&sizLogResPpi
      || !*(_QWORD *)(*(_QWORD *)&sizLogResPpi + 3072LL)
      || (RESETFCOBJ::RESETFCOBJ((RESETFCOBJ *)v77, v76, (struct RFONTOBJ *)&v63, v79, a8, v73), !v77[0]) )
    {
      EngSetLastError(0x3EBu);
LABEL_22:
      if ( v63 )
        RFONTOBJ::vReleaseCache((RFONTOBJ *)&v63);
      v63 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v63);
      return v12;
    }
    if ( v14 )
    {
      if ( v14 != 1 )
      {
        if ( v14 == 2 || v14 == 3 )
        {
          v27 = v14 == 3;
          v28 = v63;
          v29 = 2;
          v30 = *(__int64 (__fastcall **)(_QWORD, struct _FONTOBJ *, _QWORD, __int64, struct _GLYPHDATA *, unsigned int, void *))(*(_QWORD *)(v20 + 96) + 3072LL);
          if ( !v27 )
            v29 = 0;
          ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)&v79, (struct PFFOBJ *)v75);
          v31 = v29 | 4;
          if ( !v74 )
            v31 = v29;
          v12 = v30(0LL, v28, v11, v31, &v82, a5, v81);
          if ( v80 )
          {
            p_fract = (ULONG_PTR *)&v79->eM11.fract;
            v33 = v80;
            do
            {
              EngUnmapFontFileFD(*p_fract++);
              --v33;
            }
            while ( v33 );
          }
          goto LABEL_18;
        }
        if ( v14 != 4 && v14 - 5 > 1 )
        {
LABEL_20:
          if ( !v77[1] )
          {
            RFONTOBJ::vReleaseCache(v78);
            RFONTOBJ::vMakeInactive(v78);
          }
          goto LABEL_22;
        }
      }
      v52 = v14 - 1;
      if ( v52 )
      {
        v53 = v52 - 3;
        if ( v53 )
        {
          v54 = v53 - 1;
          if ( v54 )
          {
            if ( v54 == 1 )
              v15 = 9;
          }
          else
          {
            v15 = 8;
          }
        }
        else
        {
          v15 = 6;
        }
      }
      else
      {
        v15 = 5;
      }
      v22 = PFFOBJ::QueryFontData((PFFOBJ *)v75, 0LL, v63, v15, v11, &v82, v81, a5);
    }
    else
    {
      v22 = PFFOBJ::QueryFontData((PFFOBJ *)v75, 0LL, v63, 4u, v11, &v82, 0LL, 0);
    }
    v12 = v22;
LABEL_18:
    if ( v12 != -1 )
    {
      top = v82.rclInk.top;
      v24 = v82.rclInk.right - v82.rclInk.left;
      *(_DWORD *)(v9 + 8) = v82.rclInk.left;
      *(_DWORD *)v9 = v24;
      *(_DWORD *)(v9 + 4) = v82.rclInk.bottom - top;
      v25 = (v82.ptqD.x.HighPart >> 3) + 1;
      *(_DWORD *)(v9 + 12) = -top;
      *(_WORD *)(v9 + 16) = v25 >> 1;
      *(_WORD *)(v9 + 18) = ((v82.ptqD.y.HighPart >> 3) + 1) >> 1;
    }
    goto LABEL_20;
  }
  return v12;
}

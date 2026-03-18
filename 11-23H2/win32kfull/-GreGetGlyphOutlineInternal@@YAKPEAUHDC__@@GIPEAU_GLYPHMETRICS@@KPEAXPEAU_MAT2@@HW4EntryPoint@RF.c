/*
 * XREFs of ?GreGetGlyphOutlineInternal@@YAKPEAUHDC__@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@HW4EntryPoint@RFONTOBJ@@@Z @ 0x1C00D3538
 * Callers:
 *     NtGdiGetGlyphOutline @ 0x1C00D3D80 (NtGdiGetGlyphOutline.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C00C8860 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1C00C889C (-vReleaseCache@RFONTOBJ@@QEAAXXZ.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1C00C9E28 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 *     ?QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C00CA364 (-QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ??0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z @ 0x1C00D3410 (--0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z.c)
 *     ??1RESETFCOBJ@@QEAA@XZ @ 0x1C00D3F64 (--1RESETFCOBJ@@QEAA@XZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z @ 0x1C010D900 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011C090 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C72C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 *     ?bSkipCHSFontSegUISymFallback@RFONTOBJ@@QEAAHGPEAVPFF@@0@Z @ 0x1C015BCC0 (-bSkipCHSFontSegUISymFallback@RFONTOBJ@@QEAAHGPEAVPFF@@0@Z.c)
 *     ?bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z @ 0x1C02B40E4 (-bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z.c)
 *     ?dtorHelper@RFONTOBJ@@QEAAXXZ @ 0x1C02B44C0 (-dtorHelper@RFONTOBJ@@QEAAXXZ.c)
 *     ?pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C02B461C (-pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02B481C (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vLockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXH@Z @ 0x1C02B6C6C (-vLockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXH@Z.c)
 *     ?QueryTrueTypeOutline@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KHPEAU_GLYPHDATA@@KPEAUtagTTPOLYGONHEADER@@@Z @ 0x1C02E09A8 (-QueryTrueTypeOutline@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KHPEAU_GLYPHDATA@@KPEAUtagTTPOLYG.c)
 */

__int64 __fastcall GreGetGlyphOutlineInternal(
        HDC a1,
        unsigned __int16 a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        struct tagTTPOLYGONHEADER *a6,
        struct _MAT2 *a7,
        int a8)
{
  unsigned int v10; // r15d
  unsigned int v11; // r14d
  int v12; // esi
  unsigned int v13; // r12d
  unsigned int v14; // edi
  __int64 v15; // rbx
  unsigned int v16; // eax
  __int64 *v17; // r13
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rcx
  Gre::Base *v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rbx
  unsigned int v24; // r12d
  __int64 v25; // r12
  __int64 v26; // rax
  __int64 v27; // rbx
  struct RFONTOBJ *v28; // r8
  __int64 v29; // rax
  struct _GLYPHDATA *EudcMetrics; // rax
  __int64 v31; // rbx
  unsigned int v32; // r13d
  __int64 v33; // r12
  __int64 v34; // rax
  __int64 v35; // rbx
  RFONTOBJ *v36; // rcx
  __int64 v37; // r9
  struct RFONTOBJ *v38; // r8
  struct _GLYPHDATA *v39; // rax
  __int64 v40; // rbx
  struct RFONTOBJ *v41; // r8
  unsigned int v42; // r12d
  struct _GLYPHDATA *v43; // rax
  __int64 v44; // rsi
  SIZE sizLogResPpi; // rax
  struct DHPDEV__ *v46; // rdx
  unsigned int v47; // edi
  unsigned int v48; // edi
  unsigned int v49; // edi
  int v50; // eax
  int v51; // ecx
  unsigned int v52; // eax
  LONG top; // ecx
  int v54; // eax
  int v55; // eax
  ULONG v56; // ecx
  unsigned __int16 v58; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v59; // [rsp+48h] [rbp-B8h] BYREF
  struct _FONTOBJ *v60; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v61; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v62; // [rsp+60h] [rbp-A0h]
  unsigned int v63; // [rsp+64h] [rbp-9Ch]
  unsigned int v64[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v65; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v66; // [rsp+78h] [rbp-88h]
  int v67; // [rsp+7Ch] [rbp-84h]
  __int64 v68; // [rsp+80h] [rbp-80h] BYREF
  __int64 v69; // [rsp+88h] [rbp-78h] BYREF
  __int64 *v70; // [rsp+90h] [rbp-70h]
  unsigned int v71; // [rsp+98h] [rbp-68h]
  int v72; // [rsp+9Ch] [rbp-64h]
  __int64 v73; // [rsp+A0h] [rbp-60h]
  struct _MAT2 *v74[2]; // [rsp+A8h] [rbp-58h] BYREF
  struct tagTTPOLYGONHEADER *v75; // [rsp+B8h] [rbp-48h]
  _QWORD v76[2]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v77[2]; // [rsp+D0h] [rbp-30h] BYREF
  char v78[32]; // [rsp+E0h] [rbp-20h] BYREF
  struct _GLYPHDATA v79; // [rsp+100h] [rbp+0h] BYREF

  v75 = a6;
  v10 = a2;
  v11 = 0;
  v73 = a4;
  v74[0] = a7;
  memset_0(&v79, 0, sizeof(v79));
  v63 = 0;
  v76[0] = 0LL;
  v12 = a3 & 0x80;
  v72 = a3 & 0x100;
  v13 = -1;
  v67 = -1;
  v14 = a3 & 0xFFFFFE7F;
  v71 = v12 != 0 ? 4 : 2;
  DCOBJ::DCOBJ((DCOBJ *)v77, a1);
  v15 = v73;
  if ( !v73 || !v74[0] )
  {
    v56 = 87;
    goto LABEL_87;
  }
  if ( !v77[0] )
  {
    v56 = 6;
LABEL_87:
    EngSetLastError(v56);
    goto LABEL_88;
  }
  v16 = *(unsigned __int16 *)(v77[0] + 12LL);
  v61 = 0LL;
  v64[1] = v16;
  v64[0] = 6;
  if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v61, (struct XDCOBJ *)v77, 0, 2u, (const struct RFONTOBJ::Tag *)v64) )
    GreAcquireSemaphore(*(_QWORD *)(v61 + 504));
  v69 = 0LL;
  v17 = &v61;
  v68 = 0LL;
  v65 = 0LL;
  v18 = v61;
  v70 = &v61;
  if ( v61 )
  {
    if ( v12 )
    {
      v11 = v10;
      v66 = v10;
    }
    else
    {
      v59 = 0;
      v58 = v10;
      RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v61, &v58, 1, &v59, 0, 0);
      v11 = v59;
      v18 = v61;
      v66 = v59;
    }
    if ( v11 == *(_DWORD *)(v18 + 460) && !v12 )
    {
      if ( (unsigned int)RFONTOBJ::bIsLinkedGlyph((RFONTOBJ *)&v61, v10) )
      {
        v19 = v61;
        v20 = *(_QWORD *)(v61 + 848);
        if ( v20 )
        {
          GreAcquireSemaphore(v20);
          v11 = -1;
          Gre::Base::Globals(v21);
          v23 = *(_QWORD *)(SGDGetSessionState(v22) + 32);
          GreAcquireSemaphore(*(_QWORD *)(v23 + 13272));
          ++*(_DWORD *)(v23 + 13300);
          EtwTraceGreLockReleaseSemaphore(L"GreFullGlobals.hsemEUDC1");
          GreReleaseSemaphoreInternal(*(_QWORD *)(v23 + 13272));
          RFONTOBJ::vInitEUDC((RFONTOBJ *)&v61, (struct XDCOBJ *)v77);
          RFONTOBJ::vLockEUDCFontsGlyphCache((RFONTOBJ *)&v61, 0);
          *(_DWORD *)(v19 + 712) |= 1u;
          EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC");
          GreReleaseSemaphoreInternal(*(_QWORD *)(v19 + 848));
          v24 = *(_DWORD *)(v19 + 840);
          v62 = v24;
          if ( v24 )
          {
            v59 = 0;
            v25 = v24 - 1;
            LODWORD(v60) = v25;
            v26 = *(_QWORD *)(v19 + 744);
            v58 = v10;
            v65 = *(_QWORD *)(v26 + 8 * v25);
            v27 = v65;
            RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v65, &v58, 1, &v59, 0, 0);
            if ( v59 == *(_DWORD *)(v27 + 460) )
            {
              v24 = v62;
            }
            else
            {
              v29 = *(_QWORD *)(*(_QWORD *)(v19 + 744) + 8 * v25);
              *(_QWORD *)v64 = v29;
              if ( v29 && (*(_DWORD *)(*(_QWORD *)(v29 + 128) + 52LL) & 0xA) == 8 )
              {
                v24 = (unsigned int)v60;
                v62 = (unsigned int)v60;
                EudcMetrics = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)v64, v10, v28);
                if ( EudcMetrics && EudcMetrics->fxD )
                {
                  v11 = v59;
                  v17 = &v65;
                  v70 = &v65;
                }
              }
              else
              {
                v24 = v62;
              }
              *(_QWORD *)v64 = 0LL;
              RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v64);
              if ( v11 != -1 )
                goto LABEL_46;
            }
          }
          v31 = *(_QWORD *)(v19 + 728);
          if ( v31 )
          {
            v59 = 0;
            v69 = v31;
            v58 = v10;
            RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v69, &v58, 1, &v59, 0, 0);
            if ( v59 != *(_DWORD *)(v31 + 460) )
            {
              v17 = &v69;
              v11 = v59;
              v70 = &v69;
              if ( v59 != -1 )
                goto LABEL_46;
            }
          }
          v32 = 0;
          if ( v24 )
          {
            v58 = v10;
            v33 = 0LL;
            do
            {
              v34 = *(_QWORD *)(v19 + 744);
              v59 = 0;
              v65 = *(_QWORD *)(v33 + v34);
              v35 = v65;
              RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v65, &v58, 1, &v59, 0, 0);
              if ( v59 != *(_DWORD *)(v35 + 460) )
              {
                v37 = *(_QWORD *)(v33 + *(_QWORD *)(v19 + 744));
                v60 = (struct _FONTOBJ *)v37;
                if ( v37 )
                {
                  if ( !(unsigned int)RFONTOBJ::bSkipCHSFontSegUISymFallback(
                                        v36,
                                        v10,
                                        *(struct PFF **)(v19 + 128),
                                        *(struct PFF **)(v37 + 128)) )
                  {
                    v39 = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v60, v10, v38);
                    if ( v39 )
                    {
                      if ( v39->fxD )
                      {
                        v11 = v59;
                        v17 = &v65;
                        v60 = 0LL;
                        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v60);
                        if ( v11 == -1 )
                          goto LABEL_38;
                        goto LABEL_46;
                      }
                    }
                  }
                }
                v60 = 0LL;
                RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v60);
              }
              ++v32;
              v33 += 8LL;
            }
            while ( v32 < v62 );
          }
          v17 = v70;
LABEL_38:
          v40 = *(_QWORD *)(v19 + 736);
          if ( !v40 )
            goto LABEL_45;
          v59 = 0;
          v68 = v40;
          v58 = v10;
          RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v68, &v58, 1, &v59, 0, 0);
          v42 = v59;
          if ( v59 == *(_DWORD *)(v40 + 460) )
            goto LABEL_45;
          *(_QWORD *)v64 = *(_QWORD *)(v19 + 736);
          if ( *(_QWORD *)v64 )
          {
            v43 = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)v64, v10, v41);
            if ( v43 )
            {
              if ( v43->fxD )
              {
                v11 = v42;
                v17 = &v68;
              }
            }
          }
          *(_QWORD *)v64 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v64);
          if ( v11 == -1 )
          {
LABEL_45:
            RFONTOBJ::dtorHelper((RFONTOBJ *)&v61);
            *(_DWORD *)(v19 + 712) = 0;
            v11 = v66;
          }
LABEL_46:
          v13 = v67;
          v15 = v73;
        }
      }
    }
  }
  if ( *v17 )
  {
    v44 = *v17;
  }
  else
  {
    EngSetLastError(0x3EBu);
    v44 = v76[0];
  }
  v65 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v65);
  v68 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v68);
  v69 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v69);
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v61);
  if ( v44 )
  {
    v60 = (struct _FONTOBJ *)v44;
    GreAcquireSemaphore(*(_QWORD *)(v44 + 504));
    v76[0] = *(_QWORD *)(v44 + 128);
    sizLogResPpi = v60[1].sizLogResPpi;
    if ( !*(_QWORD *)&sizLogResPpi || !*(_QWORD *)(*(_QWORD *)&sizLogResPpi + 3056LL) )
    {
      EngSetLastError(0x3EBu);
      goto LABEL_82;
    }
    RESETFCOBJ::RESETFCOBJ((RESETFCOBJ *)v74, (struct DCOBJ *)v77, (struct RFONTOBJ *)&v60, v74[0], a8, v71);
    if ( !LODWORD(v74[0]) )
    {
      EngSetLastError(0x3EBu);
LABEL_80:
      RESETFCOBJ::~RESETFCOBJ((RESETFCOBJ *)v74);
LABEL_82:
      if ( v60 )
        RFONTOBJ::vReleaseCache((RFONTOBJ *)&v60);
      v60 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v60);
      goto LABEL_88;
    }
    if ( v14 )
    {
      if ( v14 != 1 )
      {
        if ( v14 == 2 || v14 == 3 )
        {
          v50 = 2;
          if ( v14 != 3 )
            v50 = 0;
          v51 = v50 | 4;
          if ( !v72 )
            v51 = v50;
          v52 = PFFOBJ::QueryTrueTypeOutline((PFFOBJ *)v76, v46, v60, v11, v51, &v79, a5, v75);
          goto LABEL_78;
        }
        if ( v14 != 4 && v14 - 5 > 1 )
          goto LABEL_80;
      }
      v47 = v14 - 1;
      if ( v47 )
      {
        v48 = v47 - 3;
        if ( v48 )
        {
          v49 = v48 - 1;
          if ( v49 )
          {
            if ( v49 == 1 )
              v63 = 9;
          }
          else
          {
            v63 = 8;
          }
        }
        else
        {
          v63 = 6;
        }
      }
      else
      {
        v63 = 5;
      }
      v52 = PFFOBJ::QueryFontData((PFFOBJ *)v76, 0LL, v60, v63, v11, &v79, v75, a5);
    }
    else
    {
      v52 = PFFOBJ::QueryFontData((PFFOBJ *)v76, 0LL, v60, 4u, v11, &v79, 0LL, 0);
    }
LABEL_78:
    v13 = v52;
    if ( v52 != -1 )
    {
      top = v79.rclInk.top;
      v54 = v79.rclInk.right - v79.rclInk.left;
      *(_DWORD *)(v15 + 8) = v79.rclInk.left;
      *(_DWORD *)v15 = v54;
      *(_DWORD *)(v15 + 4) = v79.rclInk.bottom - top;
      v55 = (v79.ptqD.x.HighPart >> 3) + 1;
      *(_DWORD *)(v15 + 12) = -top;
      *(_WORD *)(v15 + 16) = v55 >> 1;
      *(_WORD *)(v15 + 18) = ((v79.ptqD.y.HighPart >> 3) + 1) >> 1;
    }
    goto LABEL_80;
  }
LABEL_88:
  if ( v77[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v77);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v78);
  return v13;
}

/*
 * XREFs of NtGdiGetETM @ 0x1C02D5240
 * Callers:
 *     <none>
 * Callees:
 *     ?pSurfobj@SURFACE@@QEAAPEAU_SURFOBJ@@XZ @ 0x1C001F300 (-pSurfobj@SURFACE@@QEAAPEAU_SURFOBJ@@XZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C00C8860 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1C00F9818 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUSESSION_GLOBALS@Full@Gre@@@Z @ 0x1C00FB710 (--0EUDCCountRegion@@QEAA@AEAUSESSION_GLOBALS@Full@Gre@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z @ 0x1C010D900 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ?flFontType@PFEOBJ@@QEAAKXZ @ 0x1C01174E0 (-flFontType@PFEOBJ@@QEAAKXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011C090 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011C700 (--1DCOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ?bValid@SURFREF@@QEBAHXZ @ 0x1C013D840 (-bValid@SURFREF@@QEBAHXZ.c)
 *     ??0SURFFAKEOBJ@@QEAA@PEAUHDEV__@@PEAUDHPDEV__@@@Z @ 0x1C013E5F4 (--0SURFFAKEOBJ@@QEAA@PEAUHDEV__@@PEAUDHPDEV__@@@Z.c)
 *     ??1SURFFAKEOBJ@@QEAA@XZ @ 0x1C013E6E0 (--1SURFFAKEOBJ@@QEAA@XZ.c)
 *     ?pSurfobj@SURFREF@@QEAAPEAU_SURFOBJ@@XZ @ 0x1C0264710 (-pSurfobj@SURFREF@@QEAAPEAU_SURFOBJ@@XZ.c)
 *     ?vIFIMetricsToETM@@YAXPEAU_EXTTEXTMETRIC@@AEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_IFIMETRICS@@@Z @ 0x1C02B2CC4 (-vIFIMetricsToETM@@YAXPEAU_EXTTEXTMETRIC@@AEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_IFIMETRICS@@@Z.c)
 *     ?GetETMFontManagement@@YAHAEAVRFONTOBJ@@VPDEVOBJ@@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK4@Z @ 0x1C02BF0F8 (-GetETMFontManagement@@YAHAEAVRFONTOBJ@@VPDEVOBJ@@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK4@Z.c)
 *     ?FontManagement@PFFOBJ@@QEAAHPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1C02E0714 (-FontManagement@PFFOBJ@@QEAAHPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 */

__int64 __fastcall NtGdiGetETM(HDC a1, ULONG64 a2)
{
  unsigned int v3; // edi
  __int64 v4; // rcx
  __int64 v5; // rax
  unsigned int v6; // ecx
  __int64 v7; // r9
  __int64 sizLogResPpi; // rbx
  struct _SURFOBJ *v9; // r8
  struct _SURFOBJ *v10; // rax
  __int64 v11; // r8
  struct _SURFOBJ *v12; // rax
  __int64 v13; // r9
  _BYTE *v14; // rdx
  struct RFONTOBJ::Tag *v16; // [rsp+20h] [rbp-178h]
  __int64 v17; // [rsp+28h] [rbp-170h]
  struct _FONTOBJ *v18; // [rsp+50h] [rbp-148h] BYREF
  int v19; // [rsp+58h] [rbp-140h] BYREF
  unsigned int v20[2]; // [rsp+60h] [rbp-138h] BYREF
  PVOID pvProducer; // [rsp+68h] [rbp-130h] BYREF
  _QWORD v22[2]; // [rsp+70h] [rbp-128h] BYREF
  _QWORD v23[6]; // [rsp+80h] [rbp-118h] BYREF
  _BYTE v24[48]; // [rsp+B0h] [rbp-E8h] BYREF
  _BYTE v25[112]; // [rsp+E0h] [rbp-B8h] BYREF
  __int128 v26; // [rsp+150h] [rbp-48h] BYREF
  __int128 v27; // [rsp+160h] [rbp-38h]
  __int128 v28; // [rsp+170h] [rbp-28h]
  int v29; // [rsp+180h] [rbp-18h]

  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0;
  v3 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v23, a1);
  if ( a2 && v23[0] )
  {
    v5 = SGDGetSessionState(v4);
    EUDCCountRegion::EUDCCountRegion((EUDCCountRegion *)v24, *(struct Gre::Full::SESSION_GLOBALS **)(v5 + 32));
    v6 = *(unsigned __int16 *)(v23[0] + 12LL);
    v20[0] = 1;
    v20[1] = v6;
    v18 = 0LL;
    if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v18, (struct XDCOBJ *)v23, 0, 2u, (const struct RFONTOBJ::Tag *)v20) )
      GreAcquireSemaphore(v18[7].pvProducer);
    if ( v18 )
    {
      sizLogResPpi = (__int64)v18[1].sizLogResPpi;
      if ( *(_QWORD *)(sizLogResPpi + 3040) )
      {
        v19 = 256;
        v9 = 0LL;
        if ( (*(_DWORD *)(sizLogResPpi + 40) & 0x8000) != 0 )
          v9 = *(struct _SURFOBJ **)(sizLogResPpi + 1768);
        if ( (unsigned int)GetETMFontManagement((struct RFONTOBJ *)&v18, sizLogResPpi, v9, v7, (__int64)v16, v17, &v19) )
        {
          v22[0] = *(_QWORD *)&v18[2].iUniq;
          v10 = SURFACE::pSurfobj(*(SURFACE **)(sizLogResPpi + 2528));
          if ( v10 )
          {
            v3 = PFFOBJ::FontManagement((PFFOBJ *)v22, v10, (struct _FONTOBJ *)v11, 0x100u, 0, 0LL, 0x34u, &v26);
          }
          else
          {
            SURFFAKEOBJ::SURFFAKEOBJ((SURFFAKEOBJ *)v25, *(HDEV *)(v11 + 104), *(struct DHPDEV__ **)(v11 + 112));
            if ( SURFREF::bValid((SURFREF *)v25) )
            {
              v12 = SURFREF::pSurfobj((SURFREF *)v25);
              v3 = PFFOBJ::FontManagement((PFFOBJ *)v22, v12, v18, 0x100u, 0, 0LL, 0x34u, &v26);
            }
            SURFFAKEOBJ::~SURFFAKEOBJ((SURFFAKEOBJ *)v25);
          }
        }
      }
      if ( !v3 )
      {
        pvProducer = v18[1].pvProducer;
        if ( pvProducer )
        {
          if ( (PFEOBJ::flFontType((PFEOBJ *)&pvProducer) & 4) != 0 )
          {
            vIFIMetricsToETM(
              (struct _EXTTEXTMETRIC *)&v26,
              (struct RFONTOBJ *)&v18,
              (struct DCOBJ *)v23,
              *(struct _IFIMETRICS **)(v13 + 32));
            v3 = 1;
          }
        }
      }
    }
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v18);
    EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v24);
  }
  if ( v3 )
  {
    if ( (a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v14 = (_BYTE *)a2;
    if ( a2 >= MmUserProbeAddress )
      v14 = (_BYTE *)MmUserProbeAddress;
    *v14 = *v14;
    v14[51] = v14[51];
    *(_OWORD *)a2 = v26;
    *(_OWORD *)(a2 + 16) = v27;
    *(_OWORD *)(a2 + 32) = v28;
    *(_DWORD *)(a2 + 48) = v29;
  }
  DCOBJ::~DCOBJ((DCOBJ *)v23);
  return v3;
}

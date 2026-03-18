/*
 * XREFs of EngUnmapFontFileFD @ 0x1400B3DE0
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z @ 0x14005DC90 (-bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ?GrepGetGlyphOutline@@YAKAEAVUDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@HW4EntryPoint@RFONTOBJ@@@Z @ 0x1400B0B2C (-GrepGetGlyphOutline@@YAKAEAVUDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@HW4EntryPoint@RFONTOBJ.c)
 *     ?QueryAdvanceWidths@PFFOBJ@@QEAAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z @ 0x1400B252C (-QueryAdvanceWidths@PFFOBJ@@QEAAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z.c)
 *     ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1400B25CC (--0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z.c)
 *     ??1UmfdClientSideFileViewMapper@@QEAA@XZ @ 0x1400B270C (--1UmfdClientSideFileViewMapper@@QEAA@XZ.c)
 *     ?ulGetFontData2@@YAKAEAVUDCOBJ@@KKPEAXKAEBUTag@RFONTOBJ@@@Z @ 0x1400B2790 (-ulGetFontData2@@YAKAEAVUDCOBJ@@KKPEAXKAEBUTag@RFONTOBJ@@@Z.c)
 *     ?QueryTrueTypeTable@PFFOBJ@@QEAAJ_KKKJKPEAEPEAPEAEPEAK@Z @ 0x1400B29FC (-QueryTrueTypeTable@PFFOBJ@@QEAAJ_KKKJKPEAEPEAPEAEPEAK@Z.c)
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1400B2D0C (--1ATTACHOBJ@@QEAA@XZ.c)
 *     ?UmfdEscEngUnmapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1400B3BD0 (-UmfdEscEngUnmapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1400B7F2C (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z @ 0x1400C2054 (-QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z.c)
 *     ?pvFileUMPD@RFONTOBJ@@QEAAPEAXPEAKPEAPEAX@Z @ 0x1400DC67C (-pvFileUMPD@RFONTOBJ@@QEAAPEAXPEAKPEAPEAX@Z.c)
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x1400FFA30 (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 *     ?GreMakeFontDir@@YAKKPEAEPEAG@Z @ 0x14019EECC (-GreMakeFontDir@@YAKKPEAEPEAG@Z.c)
 *     ?MapFontFiles@@YA_NKPEAPEAUFONTFILEVIEW@@PEAPEAXPEAK@Z @ 0x1401B23A8 (-MapFontFiles@@YA_NKPEAPEAUFONTFILEVIEW@@PEAPEAXPEAK@Z.c)
 *     NtGdiGetFontFileData @ 0x1401B7450 (NtGdiGetFontFileData.c)
 *     ?GetTrueTypeFile@PFFOBJ@@QEAAPEAX_KPEAK@Z @ 0x1401E54FC (-GetTrueTypeFile@PFFOBJ@@QEAAPEAX_KPEAK@Z.c)
 *     ?TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x140220F04 (-TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z.c)
 * Callees:
 *     ?vUnreferenceFileviewSection@@YAXPEAUFILEVIEW@@@Z @ 0x14019F58C (-vUnreferenceFileviewSection@@YAXPEAUFILEVIEW@@@Z.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

void __stdcall EngUnmapFontFileFD(ULONG_PTR iFile)
{
  Gre::Base *v2; // rcx
  struct _FAST_MUTEX **v3; // rdi
  int v4; // ecx
  int v5; // ecx
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  char v10; // bl
  _QWORD v11[5]; // [rsp+28h] [rbp-29h] BYREF
  int v12; // [rsp+50h] [rbp-1h]
  __int128 v13; // [rsp+58h] [rbp+7h] BYREF
  __int128 v14; // [rsp+68h] [rbp+17h]
  __int128 v15; // [rsp+78h] [rbp+27h]
  __int128 v16; // [rsp+88h] [rbp+37h]
  __int128 v17; // [rsp+98h] [rbp+47h]

  memset_0(&v13, 0, 0x50uLL);
  if ( iFile )
  {
    v3 = (struct _FAST_MUTEX **)Gre::Base::Globals(v2);
    KeAcquireGuardedMutex(*v3 + 26);
    v4 = *(_DWORD *)(iFile + 100);
    if ( v4 )
    {
      v5 = v4 - 1;
      *(_DWORD *)(iFile + 100) = v5;
      if ( !v5 )
      {
        if ( *(_QWORD *)(iFile + 80) )
        {
          v6 = *(_OWORD *)(iFile + 16);
          v13 = *(_OWORD *)iFile;
          v7 = *(_OWORD *)(iFile + 32);
          v14 = v6;
          v8 = *(_OWORD *)(iFile + 48);
          v15 = v7;
          v9 = *(_OWORD *)(iFile + 64);
          v16 = v8;
          v17 = v9;
          if ( *(_QWORD *)(iFile + 16) )
          {
            *(_QWORD *)(iFile + 16) = 0LL;
            if ( !*(_QWORD *)(iFile + 8) && (*(_BYTE *)(iFile + 44) || *(_BYTE *)(iFile + 45)) )
            {
              *(_QWORD *)(iFile + 48) = 0LL;
              *(_QWORD *)(iFile + 32) = 0LL;
            }
          }
        }
      }
    }
    KeReleaseGuardedMutex(*v3 + 26);
    if ( (_QWORD)v14 )
    {
      if ( BYTE12(v15) || (v10 = 0, BYTE13(v15)) )
        v10 = 1;
      v11[0] = *((_QWORD *)&v17 + 1);
      v11[2] = v14;
      v11[1] = 0LL;
      v11[3] = 0LL;
      v11[4] = 0LL;
      v12 = 4;
      Gre::MapViewOfSectionObj::Unmap((Gre::MapViewOfSectionObj *)v11);
      if ( !*((_QWORD *)&v13 + 1) )
      {
        if ( v10 )
          vUnreferenceFileviewSection((struct FILEVIEW *)&v13);
      }
    }
  }
}

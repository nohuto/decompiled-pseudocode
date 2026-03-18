/*
 * XREFs of EngUnmapFontFileFD @ 0x1C0114DF0
 * Callers:
 *     bAddAllFlEntry @ 0x1C001ADEC (bAddAllFlEntry.c)
 *     ?vInitializeFontAssocStatus@@YAXXZ @ 0x1C001BA3C (-vInitializeFontAssocStatus@@YAXXZ.c)
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C00C9A04 (--1ATTACHOBJ@@QEAA@XZ.c)
 *     ?bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z @ 0x1C00CB7CC (-bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z.c)
 *     ?MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z @ 0x1C00CF2A0 (-MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z @ 0x1C010D900 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1C01135E0 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?UmfdEscEngUnmapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C013F574 (-UmfdEscEngUnmapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     GreEudcLoadLinkW @ 0x1C029E0C8 (GreEudcLoadLinkW.c)
 *     GreMakeFontDir @ 0x1C02D5048 (GreMakeFontDir.c)
 *     NtGdiGetFontFileData @ 0x1C02D5EA0 (NtGdiGetFontFileData.c)
 * Callees:
 *     ?vUnmapFileFD@@YAXPEAU_FILEVIEW@@E@Z @ 0x1C00D2254 (-vUnmapFileFD@@YAXPEAU_FILEVIEW@@E@Z.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 */

void __stdcall EngUnmapFontFileFD(ULONG_PTR iFile)
{
  Gre::Base *v2; // rcx
  struct Gre::Base::SESSION_GLOBALS *v3; // rdi
  int v4; // ecx
  int v5; // ecx
  bool v6; // zf
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // [rsp+20h] [rbp-58h] BYREF
  __int128 v12; // [rsp+30h] [rbp-48h]
  __int128 v13; // [rsp+40h] [rbp-38h]
  __int128 v14; // [rsp+50h] [rbp-28h]
  __int128 v15; // [rsp+60h] [rbp-18h]

  memset_0(&v11, 0, 0x50uLL);
  if ( iFile )
  {
    v3 = Gre::Base::Globals(v2);
    GreAcquireFastMutex(*((_QWORD *)v3 + 18));
    v4 = *(_DWORD *)(iFile + 100);
    if ( v4 )
    {
      v5 = v4 - 1;
      *(_DWORD *)(iFile + 100) = v5;
      if ( !v5 )
      {
        if ( *(_QWORD *)(iFile + 80) )
        {
          v6 = *(_QWORD *)(iFile + 16) == 0LL;
          v7 = *(_OWORD *)(iFile + 16);
          v11 = *(_OWORD *)iFile;
          v8 = *(_OWORD *)(iFile + 32);
          v12 = v7;
          v9 = *(_OWORD *)(iFile + 48);
          v13 = v8;
          v10 = *(_OWORD *)(iFile + 64);
          v14 = v9;
          v15 = v10;
          if ( !v6 )
          {
            *(_QWORD *)(iFile + 16) = 0LL;
            if ( !*(_QWORD *)(iFile + 8) && (*(_DWORD *)(iFile + 40) & 0x18) != 0 )
            {
              *(_QWORD *)(iFile + 48) = 0LL;
              *(_QWORD *)(iFile + 32) = 0LL;
            }
          }
        }
      }
    }
    GreReleaseFastMutex(*((_QWORD *)v3 + 18));
    if ( (_QWORD)v12 )
      vUnmapFileFD((struct _FILEVIEW *)&v11, (BYTE8(v13) & 8) != 0 || (BYTE8(v13) & 0x10) != 0);
  }
}

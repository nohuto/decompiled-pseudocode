/*
 * XREFs of ?vUnreferenceFileviewSection@@YAXPEAUFILEVIEW@@@Z @ 0x14019F58C
 * Callers:
 *     EngMapFontFileFDInternal @ 0x1400B39CC (EngMapFontFileFDInternal.c)
 *     EngUnmapFontFileFD @ 0x1400B3DE0 (EngUnmapFontFileFD.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1400B7F2C (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?GreMakeFontDir@@YAKKPEAEPEAG@Z @ 0x14019EECC (-GreMakeFontDir@@YAKKPEAEPEAG@Z.c)
 *     FreeFileView @ 0x14019F3FC (FreeFileView.c)
 *     ?vUnmapFileFD@@YAXPEAUFILEVIEW@@_N@Z @ 0x14019F500 (-vUnmapFileFD@@YAXPEAUFILEVIEW@@_N@Z.c)
 *     ?vUnmapFile@@YAXPEAUFILEVIEW@@H@Z @ 0x140222110 (-vUnmapFile@@YAXPEAUFILEVIEW@@H@Z.c)
 *     ?bCreateSectionFromHandle@@YAHPEAXPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z @ 0x1403048A4 (-bCreateSectionFromHandle@@YAHPEAXPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z.c)
 *     ?bMapFile@@YAHPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z @ 0x140304B38 (-bMapFile@@YAHPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z.c)
 *     ?bMapFileRetainHandle@@YAHPEBGPEAUFILEVIEW@@KW4GreFileKind@@@Z @ 0x140304C50 (-bMapFileRetainHandle@@YAHPEBGPEAUFILEVIEW@@KW4GreFileKind@@@Z.c)
 *     EngUnmapFile @ 0x140304E70 (EngUnmapFile.c)
 * Callees:
 *     ?UnreferenceNetworkedFontFileNode@NetworkedFontFileTable@@YA_NPEAUNETWORKED_FONT_FILE_NODE@@@Z @ 0x140304554 (-UnreferenceNetworkedFontFileNode@NetworkedFontFileTable@@YA_NPEAUNETWORKED_FONT_FILE_NODE@@@Z.c)
 *     ?bCopySection@@YAHPEAX0_K@Z @ 0x1403045E0 (-bCopySection@@YAHPEAX0_K@Z.c)
 */

void __fastcall vUnreferenceFileviewSection(struct FILEVIEW *a1, struct NETWORKED_FONT_FILE_NODE *a2)
{
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rdx
  void *v6; // [rsp+40h] [rbp+8h] BYREF
  union _LARGE_INTEGER v7; // [rsp+48h] [rbp+10h] BYREF

  if ( (*((_DWORD *)a1 + 10) & 2) != 0 )
  {
    v4 = (void *)*((_QWORD *)a1 + 7);
    if ( v4 )
    {
      if ( NetworkedFontFileTable::UnreferenceNetworkedFontFileNode(v4, a2) )
      {
        v5 = (void *)*((_QWORD *)a1 + 6);
        if ( v5 )
        {
          if ( (*((_DWORD *)a1 + 10) & 4) != 0 )
          {
            v7.QuadPart = *((unsigned int *)a1 + 6);
            Gre::SectionObj::SectionObj((Gre::SectionObj *)&v6, v5, &v7, 1, 0LL);
            if ( v6 )
              bCopySection(v6, *((void **)a1 + 4), *((unsigned int *)a1 + 6));
            Gre::SectionObj::~SectionObj((Gre::SectionObj *)&v6);
          }
        }
      }
    }
  }
  if ( *((_QWORD *)a1 + 4) )
  {
    v6 = (void *)*((_QWORD *)a1 + 4);
    Gre::SectionObj::~SectionObj((Gre::SectionObj *)&v6);
    *((_QWORD *)a1 + 4) = 0LL;
  }
  v3 = (void *)*((_QWORD *)a1 + 6);
  if ( v3 )
  {
    ZwClose(v3);
    *((_QWORD *)a1 + 6) = 0LL;
  }
}

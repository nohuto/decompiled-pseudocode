/*
 * XREFs of ??1MapViewOfSectionObj@Gre@@QEAA@XZ @ 0x1401E09CC
 * Callers:
 *     ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1400212B0 (-bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     cMapRemoteFonts @ 0x140115278 (cMapRemoteFonts.c)
 *     ?EngMapFontFileInternal@@YAH_KPEAPEAKPEAK@Z @ 0x140303F08 (-EngMapFontFileInternal@@YAH_KPEAPEAKPEAK@Z.c)
 *     ?bCopySection@@YAHPEAX0_K@Z @ 0x1403045E0 (-bCopySection@@YAHPEAX0_K@Z.c)
 *     ?bMapFile@@YAHPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z @ 0x140304B38 (-bMapFile@@YAHPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z.c)
 *     ?bMapFileRetainHandle@@YAHPEBGPEAUFILEVIEW@@KW4GreFileKind@@@Z @ 0x140304C50 (-bMapFileRetainHandle@@YAHPEBGPEAUFILEVIEW@@KW4GreFileKind@@@Z.c)
 *     EngUnmapFile @ 0x140304E70 (EngUnmapFile.c)
 *     GrepUnmapSessionView @ 0x140304FE0 (GrepUnmapSessionView.c)
 *     ?GreGetUFIPathname@@YAHPEAU_UNIVERSAL_FONT_ID@@PEAKPEAGK1KPEAH1PEAX31@Z @ 0x14032641C (-GreGetUFIPathname@@YAHPEAU_UNIVERSAL_FONT_ID@@PEAKPEAGK1KPEAH1PEAX31@Z.c)
 *     ??1FontFileBackupMapper@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x1403360E8 (--1FontFileBackupMapper@UmfdHostLifeTimeManager@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall Gre::MapViewOfSectionObj::~MapViewOfSectionObj(Gre::MapViewOfSectionObj *this)
{
  if ( *((_DWORD *)this + 10) != 5 )
    Gre::MapViewOfSectionObj::Unmap(this);
}

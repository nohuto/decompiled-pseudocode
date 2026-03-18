/*
 * XREFs of ??0MALLOCOBJ@@QEAA@K@Z @ 0x1401AEB94
 * Callers:
 *     bAddAllFlEntry @ 0x140152750 (bAddAllFlEntry.c)
 *     ?bAttemptReload@PFFOBJ@@QEAAHXZ @ 0x140228D98 (-bAttemptReload@PFFOBJ@@QEAAHXZ.c)
 *     ?ObtainSectionForNetworkedFontFile@NetworkedFontFileTable@@YAJPEAXPEBGPEAT_LARGE_INTEGER@@PEAPEAXPEAPEAUNETWORKED_FONT_FILE_NODE@@@Z @ 0x1403041D8 (-ObtainSectionForNetworkedFontFile@NetworkedFontFileTable@@YAJPEAXPEBGPEAT_LARGE_INTEGER@@PEAPEA.c)
 *     GreEudcLoadLinkW @ 0x14030C258 (GreEudcLoadLinkW.c)
 *     bDeleteFlEntry @ 0x14030C64C (bDeleteFlEntry.c)
 *     bWriteUserSystemEUDCRegistry @ 0x14030C84C (bWriteUserSystemEUDCRegistry.c)
 *     ?BackPropagateLargeBitmapBits@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAXH@Z @ 0x140332480 (-BackPropagateLargeBitmapBits@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAXH@Z.c)
 * Callees:
 *     <none>
 */

MALLOCOBJ *__fastcall MALLOCOBJ::MALLOCOBJ(MALLOCOBJ *this, unsigned int a2)
{
  __int64 v3; // rax

  *(_QWORD *)this = 0LL;
  if ( !a2 || (v3 = Win32AllocPoolZInit(a2, 1886221383LL), (*(_QWORD *)this = v3) == 0LL) )
    EngSetLastError(8u);
  return this;
}

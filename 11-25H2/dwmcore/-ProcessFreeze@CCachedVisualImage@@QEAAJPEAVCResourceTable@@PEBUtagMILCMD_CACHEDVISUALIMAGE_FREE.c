/*
 * XREFs of ?ProcessFreeze@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CACHEDVISUALIMAGE_FREEZE@@@Z @ 0x18022E2A4
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCachedVisualImage::ProcessFreeze(
        CCachedVisualImage *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_CACHEDVISUALIMAGE_FREEZE *a3)
{
  *((_BYTE *)this + 2056) = 1;
  return 0LL;
}

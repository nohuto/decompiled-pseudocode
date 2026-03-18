/*
 * XREFs of ?ProcessSetPassiveUpdateMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETPASSIVEUPDATEMODE@@@Z @ 0x18022F474
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisual::ProcessSetPassiveUpdateMode(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETPASSIVEUPDATEMODE *a3)
{
  __int64 result; // rax

  result = 0LL;
  *((_BYTE *)this + 106) = *((_BYTE *)this + 106) & 0xFB | (*((_BYTE *)a3 + 8) != 0 ? 4 : 0);
  return result;
}

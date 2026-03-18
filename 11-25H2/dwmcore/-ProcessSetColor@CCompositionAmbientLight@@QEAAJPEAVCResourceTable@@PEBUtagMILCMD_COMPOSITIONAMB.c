/*
 * XREFs of ?ProcessSetColor@CCompositionAmbientLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONAMBIENTLIGHT_SETCOLOR@@@Z @ 0x180259834
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionAmbientLight::ProcessSetColor(
        CCompositionAmbientLight *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONAMBIENTLIGHT_SETCOLOR *a3)
{
  return CResource::SetPropertyImpl(
           this,
           (const struct AnimationHelper::AnimatedProperty *)&CCompositionAmbientLight::sc_Color,
           (char *)a3 + 8);
}

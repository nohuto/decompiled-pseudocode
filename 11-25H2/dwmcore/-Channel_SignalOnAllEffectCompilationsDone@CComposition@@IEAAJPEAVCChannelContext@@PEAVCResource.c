/*
 * XREFs of ?Channel_SignalOnAllEffectCompilationsDone@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_SIGNALONALLEFFECTCOMPILATIONSDONE@@@Z @ 0x180229314
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CComposition::Channel_SignalOnAllEffectCompilationsDone(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_CHANNEL_SIGNALONALLEFFECTCOMPILATIONSDONE *a4)
{
  *((_BYTE *)a2 + 105) = 1;
  return 0LL;
}

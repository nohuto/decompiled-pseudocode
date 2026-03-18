/*
 * XREFs of ?SetIsDebugCounterEnabled@?$CChannelGeneratedT@VCChannelContext@@V?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@@@QEAAJ_N@Z @ 0x1802836CC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?UpdateDebugCounter@CComposition@@QEAAX_N@Z @ 0x1802665FC (-UpdateDebugCounter@CComposition@@QEAAX_N@Z.c)
 */

__int64 __fastcall CChannelGeneratedT<CChannelContext,CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>>::SetIsDebugCounterEnabled(
        __int64 a1,
        char a2)
{
  if ( a2 != *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = a2;
    CComposition::UpdateDebugCounter(g_pComposition, a2);
  }
  return 0LL;
}

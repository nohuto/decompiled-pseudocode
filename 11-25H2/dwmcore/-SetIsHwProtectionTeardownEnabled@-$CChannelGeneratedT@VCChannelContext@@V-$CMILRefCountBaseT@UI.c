/*
 * XREFs of ?SetIsHwProtectionTeardownEnabled@?$CChannelGeneratedT@VCChannelContext@@V?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@@@QEAAJ_N@Z @ 0x180283778
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?OnIsHwProtectionTeardownEnabledChanged@CChannelContext@@QEAAXXZ @ 0x180269928 (-OnIsHwProtectionTeardownEnabledChanged@CChannelContext@@QEAAXXZ.c)
 */

__int64 __fastcall CChannelGeneratedT<CChannelContext,CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>>::SetIsHwProtectionTeardownEnabled(
        CChannelContext *a1,
        char a2)
{
  if ( a2 != *((_BYTE *)a1 + 17) )
  {
    *((_BYTE *)a1 + 17) = a2;
    CChannelContext::OnIsHwProtectionTeardownEnabledChanged(a1);
  }
  return 0LL;
}

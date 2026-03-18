/*
 * XREFs of ?OnSuspendAnimationsChanged@CChannelContext@@QEAAXXZ @ 0x180224960
 * Callers:
 *     ?SetSuspendAnimations@?$CChannelGeneratedT@VCChannelContext@@V?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@@@QEAAJ_N@Z @ 0x18022834C (-SetSuspendAnimations@-$CChannelGeneratedT@VCChannelContext@@V-$CMILRefCountBaseT@UIMILRefCount@.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180096A38 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     _tlgKeywordOn @ 0x1801B92C0 (_tlgKeywordOn.c)
 */

void __fastcall CChannelContext::OnSuspendAnimationsChanged(CChannelContext *this)
{
  __int64 v2; // rcx

  if ( (unsigned int)dword_1803F8D18 > 5 && tlgKeywordOn((__int64)&dword_1803F8D18, 4LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v2,
      (__int64)&unk_1803CCA5F);
  CExpressionManager::SuspendAnimations(
    *((CExpressionManager **)g_pComposition + 103),
    *((_DWORD *)this + 6),
    *((_BYTE *)this + 18),
    *((_BYTE *)this + 104));
}

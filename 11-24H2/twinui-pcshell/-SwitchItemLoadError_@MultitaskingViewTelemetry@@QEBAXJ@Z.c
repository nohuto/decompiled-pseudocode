/*
 * XREFs of ?SwitchItemLoadError_@MultitaskingViewTelemetry@@QEBAXJ@Z @ 0x1804C0D24
 * Callers:
 *     ?v_LayoutChildren@SwitchItemThumbnailElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x1804D5B70 (-v_LayoutChildren@SwitchItemThumbnailElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationSt.c)
 * Callees:
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800B8D54 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x1800CBCCC (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1801B7FB4 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 */

void __fastcall MultitaskingViewTelemetry::SwitchItemLoadError_(MultitaskingViewTelemetry *this, int a2)
{
  const struct _tlgProvider_t *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // r9
  MultitaskingViewTelemetry *v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  v6 = this;
  v3 = WindowManagementLogging::Provider();
  if ( *(_DWORD *)v3 > 5u )
  {
    if ( tlgKeywordOn((__int64)v3, 0x200000000000LL) )
    {
      v7 = 0x1000000LL;
      LODWORD(v6) = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v4,
        byte_18080601F,
        0LL,
        v5,
        (__int64)&v6,
        (__int64)&v7);
    }
  }
}

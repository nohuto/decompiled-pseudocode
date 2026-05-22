/*
 * XREFs of ?HeadEventHandlerEnabled_@RawInputProvidersTracing@@QEAAXJ@Z @ 0x1800D3758
 * Callers:
 *     ?EnableHeadEventHandler@SpatialRimDeviceCollection@@AEAAJXZ @ 0x1800D2F20 (-EnableHeadEventHandler@SpatialRimDeviceCollection@@AEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800020EC (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     _tlgKeywordOn @ 0x180031480 (_tlgKeywordOn.c)
 *     ?Provider@RawInputProvidersTracing@@SAPEBU_tlgProvider_t@@XZ @ 0x1800D0A4C (-Provider@RawInputProvidersTracing@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall RawInputProvidersTracing::HeadEventHandlerEnabled_(RawInputProvidersTracing *this, int a2)
{
  const struct _tlgProvider_t *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  RawInputProvidersTracing *v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = this;
  v3 = RawInputProvidersTracing::Provider((__int64)this);
  if ( *(_DWORD *)v3 > 4u && tlgKeywordOn((__int64)v3, 2LL) )
  {
    LODWORD(v7) = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      v4,
      (__int64)&unk_1802095AA,
      v5,
      v6,
      (__int64)&v7);
  }
}

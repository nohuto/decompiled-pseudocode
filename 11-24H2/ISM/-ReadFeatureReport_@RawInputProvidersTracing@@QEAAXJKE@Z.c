/*
 * XREFs of ?ReadFeatureReport_@RawInputProvidersTracing@@QEAAXJKE@Z @ 0x1800D2A04
 * Callers:
 *     ?ReadFeatureReport@SpatialRimDevice@SpatialInteractions@Internal@Windows@@UEAAJEPEAEK@Z @ 0x1800D2930 (-ReadFeatureReport@SpatialRimDevice@SpatialInteractions@Internal@Windows@@UEAAJEPEAEK@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180003678 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     _tlgKeywordOn @ 0x180031A40 (_tlgKeywordOn.c)
 *     ?Provider@RawInputProvidersTracing@@SAPEBU_tlgProvider_t@@XZ @ 0x1800D2908 (-Provider@RawInputProvidersTracing@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall RawInputProvidersTracing::ReadFeatureReport_(RawInputProvidersTracing *this, int a2, int a3, char a4)
{
  const struct _tlgProvider_t *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // [rsp+40h] [rbp-18h] BYREF
  _DWORD v12[5]; // [rsp+44h] [rbp-14h] BYREF
  RawInputProvidersTracing *v13; // [rsp+60h] [rbp+8h] BYREF

  v13 = this;
  v7 = RawInputProvidersTracing::Provider((__int64)this);
  if ( *(_DWORD *)v7 > 4u && tlgKeywordOn((__int64)v7, 2LL) )
  {
    LOBYTE(v13) = a4;
    v11 = a3;
    v12[0] = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
      v8,
      (__int64)&unk_18021237C,
      v9,
      v10,
      (__int64)v12,
      (__int64)&v11,
      (__int64)&v13);
  }
}

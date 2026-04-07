/*
 * XREFs of ?UDwmHolographicDeviceDriverDetected_@UDwmTrace@@QEAAXXZ @ 0x1800A4354
 * Callers:
 *     ?OnHolographicDisplayCalibrationDriverDetected@CAnalogCompositorManager@@AEAAXXZ @ 0x1800A3A3C (-OnHolographicDisplayCalibrationDriverDetected@CAnalogCompositorManager@@AEAAXXZ.c)
 * Callees:
 *     ?Provider@UDwmTrace@@SAPEBU_tlgProvider_t@@XZ @ 0x1800153C0 (-Provider@UDwmTrace@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180059B74 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     _tlgKeywordOn @ 0x18007A880 (_tlgKeywordOn.c)
 */

void __fastcall UDwmTrace::UDwmHolographicDeviceDriverDetected_(UDwmTrace *this)
{
  const struct _tlgProvider_t *v1; // rcx
  int v2; // ecx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = (__int64)this;
  v1 = UDwmTrace::Provider((__int64)this);
  if ( *(_DWORD *)v1 > 4u )
  {
    if ( tlgKeywordOn((__int64)v1, 0x400000000000LL) )
    {
      v5 = 0x2000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
        v2,
        (int)&unk_18010F800,
        v3,
        v4,
        (__int64)&v5);
    }
  }
}

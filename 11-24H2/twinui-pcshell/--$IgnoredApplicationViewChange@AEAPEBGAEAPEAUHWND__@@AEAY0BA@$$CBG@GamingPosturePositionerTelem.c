/*
 * XREFs of ??$IgnoredApplicationViewChange@AEAPEBGAEAPEAUHWND__@@AEAY0BA@$$CBG@GamingPosturePositionerTelemetryProvider@@SAXAEAPEBGAEAPEAUHWND__@@AEAY0BA@$$CBG@Z @ 0x1804F551C
 * Callers:
 *     ?OnApplicationViewChanged@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1805032C0 (-OnApplicationViewChanged@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x18000AD1C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x180505628 (-Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 */

const struct _tlgProvider_t *__fastcall GamingPosturePositionerTelemetryProvider::IgnoredApplicationViewChange<unsigned short const * &,HWND__ * &,unsigned short const (&)[16]>(
        _QWORD *a1,
        __int64 *a2,
        const wchar_t *a3)
{
  const struct _tlgProvider_t *result; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  _QWORD v9[3]; // [rsp+40h] [rbp-18h] BYREF
  const wchar_t *v10; // [rsp+70h] [rbp+18h] BYREF
  __int64 v11; // [rsp+78h] [rbp+20h] BYREF

  v10 = a3;
  result = GamingPosturePositionerTelemetryProvider::Provider();
  if ( *(_DWORD *)result > 5u )
  {
    v8 = *a2;
    v10 = L"Background view";
    v9[0] = *a1;
    v11 = v8;
    return (const struct _tlgProvider_t *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>>(
                                            (__int64)result,
                                            (__int64)&unk_180808579,
                                            v6,
                                            v7,
                                            v9,
                                            (__int64)&v11,
                                            &v10);
  }
  return result;
}

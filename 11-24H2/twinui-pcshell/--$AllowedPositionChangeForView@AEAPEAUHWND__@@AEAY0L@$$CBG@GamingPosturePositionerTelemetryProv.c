/*
 * XREFs of ??$AllowedPositionChangeForView@AEAPEAUHWND__@@AEAY0L@$$CBG@GamingPosturePositionerTelemetryProvider@@SAXAEAPEAUHWND__@@AEAY0L@$$CBG@Z @ 0x1804F3FC8
 * Callers:
 *     ?OnShellTrackedWindowPosChanged@GamingPosturePositioner@@UEAAXPEAUHWND__@@PEAUIApplicationView@@HKUtagRECT@@@Z @ 0x1805042F0 (-OnShellTrackedWindowPosChanged@GamingPosturePositioner@@UEAAXPEAUHWND__@@PEAUIApplicationView@@.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1800059FC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x180505628 (-Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 */

const struct _tlgProvider_t *__fastcall GamingPosturePositionerTelemetryProvider::AllowedPositionChangeForView<HWND__ * &,unsigned short const (&)[11]>(
        __int64 *a1,
        __int64 a2)
{
  const struct _tlgProvider_t *result; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  result = GamingPosturePositionerTelemetryProvider::Provider();
  if ( *(_DWORD *)result > 5u )
  {
    v8 = *a1;
    v7 = a2;
    return (const struct _tlgProvider_t *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>>(
                                            (__int64)result,
                                            (__int64)&unk_180807C68,
                                            v5,
                                            v6,
                                            (__int64)&v8,
                                            &v7);
  }
  return result;
}

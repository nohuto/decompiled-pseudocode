/*
 * XREFs of ??$AllowNextShowWindow@AEAPEAUHWND__@@AEAI@GamingPosturePositionerTelemetryProvider@@SAXAEAPEAUHWND__@@AEAI@Z @ 0x1804F3DF4
 * Callers:
 *     ?AllowNextShowWindow@GamingPosturePositioner@@UEAAXPEAUHWND__@@I@Z @ 0x1804FA350 (-AllowNextShowWindow@GamingPosturePositioner@@UEAAXPEAUHWND__@@I@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800EB7F8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x180505628 (-Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 */

int __fastcall GamingPosturePositionerTelemetryProvider::AllowNextShowWindow<HWND__ * &,unsigned int &>(
        __int64 *a1,
        int *a2)
{
  const struct _tlgProvider_t *v4; // rax
  int v5; // edx
  int v7; // [rsp+50h] [rbp+18h] BYREF
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  v4 = GamingPosturePositionerTelemetryProvider::Provider();
  if ( *(_DWORD *)v4 > 5u )
  {
    v5 = *a2;
    v8 = *a1;
    v7 = v5;
    LODWORD(v4) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
                    (__int64)v4,
                    byte_18080894C,
                    0LL,
                    0LL,
                    (__int64)&v8,
                    (__int64)&v7);
  }
  return (int)v4;
}

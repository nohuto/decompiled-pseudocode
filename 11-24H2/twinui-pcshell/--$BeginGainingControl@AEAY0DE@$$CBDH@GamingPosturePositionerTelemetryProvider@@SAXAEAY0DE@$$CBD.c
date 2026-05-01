/*
 * XREFs of ??$BeginGainingControl@AEAY0DE@$$CBDH@GamingPosturePositionerTelemetryProvider@@SAXAEAY0DE@$$CBD$$QEAH@Z @ 0x1804F4914
 * Callers:
 *     ?ControlGainedForActivation@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1804FB790 (-ControlGainedForActivation@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITION.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1801F5CA8 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x180505628 (-Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 */

int __fastcall GamingPosturePositionerTelemetryProvider::BeginGainingControl<char const (&)[52],int>(
        __int64 a1,
        _DWORD *a2)
{
  const struct _tlgProvider_t *v3; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  const wchar_t *v8; // [rsp+50h] [rbp+18h] BYREF

  v7 = a1;
  v3 = GamingPosturePositionerTelemetryProvider::Provider();
  if ( *(_DWORD *)v3 > 5u )
  {
    LODWORD(v7) = *a2;
    v8 = (const wchar_t *)"GamingPosturePositioner::ControlGainedForActivation";
    LODWORD(v3) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
                    (__int64)v3,
                    byte_180808B6C,
                    v4,
                    v5,
                    &v8,
                    (__int64)&v7);
  }
  return (int)v3;
}

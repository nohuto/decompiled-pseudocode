/*
 * XREFs of ??$DisplaySettingsChange@AEB_NAEA_N@DesktopBlueLightReductionManagerTelemetry@@SAXAEB_NAEA_N@Z @ 0x1801CBD1C
 * Callers:
 *     ?DisplaySettingsChange@DesktopBlueLightReductionManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1801CBC10 (-DisplaySettingsChange@DesktopBlueLightReductionManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800CBCCC (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VBlueLightReductionLogging@@@details@wil@@QEAAPEAVBlueLightReductionLogging@@P6AXXZ@Z @ 0x1801CC070 (-get@-$static_lazy@VBlueLightReductionLogging@@@details@wil@@QEAAPEAVBlueLightReductionLogging@@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@3@Z @ 0x1801D16A0 (--$Write@U-$_tlgWrapperByVal@$00@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

char __fastcall DesktopBlueLightReductionManagerTelemetry::DisplaySettingsChange<bool const &,bool &>(
        char *a1,
        char *a2)
{
  __int64 v4; // rax
  _DWORD *v5; // rcx
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  char v10; // [rsp+50h] [rbp+18h] BYREF
  char v11; // [rsp+58h] [rbp+20h] BYREF

  v4 = wil::details::static_lazy<BlueLightReductionLogging>::get(
         a1,
         _lambda_8fbe65ba72b2d61923eb3411a963ff67_::_lambda_invoker_cdecl_);
  v5 = *(_DWORD **)(v4 + 8);
  if ( *v5 > 5u )
  {
    LOBYTE(v4) = tlgKeywordOn((__int64)v5, 0x400000000000LL);
    if ( (_BYTE)v4 )
    {
      v10 = *a2;
      v11 = *a1;
      LOBYTE(v4) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
                     v6,
                     (unsigned int)&unk_1807E49F4,
                     v7,
                     v8,
                     (__int64)&v11,
                     (__int64)&v10);
    }
  }
  return v4;
}

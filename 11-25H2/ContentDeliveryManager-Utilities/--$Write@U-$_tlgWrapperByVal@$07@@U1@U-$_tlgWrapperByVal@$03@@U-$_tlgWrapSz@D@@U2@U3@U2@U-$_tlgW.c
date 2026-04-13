/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@_W@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@_W@@45456456@Z @ 0x1800015A0
 * Callers:
 *     ?ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x180039534 (-ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 *     ?StopActivity@LaunchUriActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@MEAAXXZ @ 0x1800583D0 (-StopActivity@LaunchUriActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@MEAAXXZ.c)
 *     ?StopActivity@SendAppServiceMessageActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@MEAAXXZ @ 0x180058600 (-StopActivity@SendAppServiceMessageActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@M.c)
 *     ?StopActivity@SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@MEAAXXZ @ 0x180063700 (-StopActivity@SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Backgrou.c)
 *     ?StopActivity@ActionCommittedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@MEAAXXZ @ 0x18006F8B0 (-StopActivity@ActionCommittedActivity@ContentDeliveryManagerTelemetry@Background@ContentDelivery.c)
 *     ?StopActivity@ActionInvokedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@MEAAXXZ @ 0x18006FAF0 (-StopActivity@ActionInvokedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryMa.c)
 *     ?StopActivity@ActionRevertedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@MEAAXXZ @ 0x18006FD30 (-StopActivity@ActionRevertedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryM.c)
 *     ?StopActivity@ActionStagedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@MEAAXXZ @ 0x18006FF70 (-StopActivity@ActionStagedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryMan.c)
 *     ?StopActivity@ActionUnstagedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@MEAAXXZ @ 0x1800701B0 (-StopActivity@ActionUnstagedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryM.c)
 *     ?StopActivity@LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@MEAAXXZ @ 0x1800AF140 (-StopActivity@LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@MEAAXXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001CB8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800B6A50 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _QWORD *a8,
        __int64 a9,
        _QWORD *a10,
        __int64 a11,
        _QWORD *a12,
        __int64 a13,
        _QWORD *a14,
        __int64 a15,
        _QWORD *a16,
        _QWORD *a17,
        __int64 a18,
        _QWORD *a19,
        _QWORD *a20)
{
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax

  v21 = -1LL;
  if ( *a20 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( *(_WORD *)(*a20 + 2 * v22) );
  }
  if ( *a19 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( *(_BYTE *)(*a19 + v23) );
  }
  if ( *a17 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( *(_WORD *)(*a17 + 2 * v24) );
  }
  if ( *a16 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( *(_BYTE *)(*a16 + v25) );
  }
  if ( *a14 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( *(_BYTE *)(*a14 + v26) );
  }
  if ( *a12 )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( *(_WORD *)(*a12 + 2 * v27) );
  }
  if ( *a10 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( *(_BYTE *)(*a10 + v28) );
  }
  if ( *a8 )
  {
    do
      ++v21;
    while ( *(_BYTE *)(*a8 + v21) );
  }
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, a3);
}

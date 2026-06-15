/*
 * XREFs of ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x14005DF14
 * Callers:
 *     ??$make_wnf_subscription_state@UWNF_AUDIO_ORIENTATION_STATE@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBUWNF_AUDIO_ORIENTATION_STATE@@@Z@wistd@@KPEAPEAU?$wnf_subscription_state@UWNF_AUDIO_ORIENTATION_STATE@@@01@@Z @ 0x14005BC60 (--$make_wnf_subscription_state@UWNF_AUDIO_ORIENTATION_STATE@@@details@wil@@YAJAEBU_WNF_STATE_NAM.c)
 *     wil::details::make_wnf_subscription_state__CAPOEnvironmentStateChangedNotificationsHandler::RegisterForEnvironmentalStateChangedNotifications_::_2_::WnfPayload4k_ @ 0x14005F67C (wil--details--make_wnf_subscription_state__CAPOEnvironmentStateChangedNotificationsHandler--Regi.c)
 * Callees:
 *     ??$ReportFailure_NtStatus@$00@details@wil@@YAJPEAXIPEBD110J@Z @ 0x14005BAE8 (--$ReportFailure_NtStatus@$00@details@wil@@YAJPEAXIPEBD110J@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_NtStatus(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  int v5; // [rsp+20h] [rbp-28h]
  wil::details *v6; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  LODWORD(v6) = (_DWORD)a4;
  return wil::details::ReportFailure_NtStatus<1>((__int64)this, (int)a2, a3, (__int64)a4, v5, retaddr, v6);
}

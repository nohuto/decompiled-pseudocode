/*
 * XREFs of ?SetEvent@details@wil@@YAXPEAX@Z @ 0x14001DE10
 * Callers:
 *     ?Run@?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAJH@Z @ 0x14001D3A8 (-Run@-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAJH@Z.c)
 *     _lambda_d1a8b950306abda3aed68804ea97f7ae_::operator() @ 0x14001D40C (_lambda_d1a8b950306abda3aed68804ea97f7ae_--operator().c)
 *     ?SignalAndWaitForThread@CAudioPump@@AEAAXXZ @ 0x14001DD24 (-SignalAndWaitForThread@CAudioPump@@AEAAXXZ.c)
 *     ?CheckForPause@CAudioPump@@AEAAXXZ @ 0x14001EB60 (-CheckForPause@CAudioPump@@AEAAXXZ.c)
 *     ?InputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x14001ED50 (-InputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z.c)
 *     ?OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x14001FE30 (-OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z.c)
 *     ?Pause@CAudioPump@@UEAAJXZ @ 0x1400216D0 (-Pause@CAudioPump@@UEAAJXZ.c)
 *     ?Resume@CAudioPump@@UEAAJXZ @ 0x14002BD10 (-Resume@CAudioPump@@UEAAJXZ.c)
 *     ?CMModulesNotificationCallback@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@CAKPEAUHCMNOTIFICATION__@@PEAXW4_CM_NOTIFY_ACTION@@PEAU_CM_NOTIFY_EVENT_DATA@@K@Z @ 0x14004AD60 (-CMModulesNotificationCallback@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@CAKPEAUHC.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x14005E7B0 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::details::SetEvent(wil::details *this, void *a2)
{
  unsigned int v2; // r8d
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !SetEvent(this) )
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x9D3, v2, v3);
}

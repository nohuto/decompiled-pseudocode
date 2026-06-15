/*
 * XREFs of ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180103394
 * Callers:
 *     ServiceDeviceEvent @ 0x180064F0C (ServiceDeviceEvent.c)
 *     _CSebNotifier::AcquireSebReference_::_1_::catch$4 @ 0x1801689D6 (_CSebNotifier--AcquireSebReference_--_1_--catch$4.c)
 *     _CPdcActivationClient::AcquirePdcTimerActivation_::_1_::catch$5 @ 0x18016B3F0 (_CPdcActivationClient--AcquirePdcTimerActivation_--_1_--catch$5.c)
 *     _CXvmPowerReferenceManager::AcquirePowerReference_::_1_::catch$4 @ 0x1801706FD (_CXvmPowerReferenceManager--AcquirePowerReference_--_1_--catch$4.c)
 * Callees:
 *     ??$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z @ 0x18009E634 (--$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Log_Hr(wil::details::in1diag3 *this, __int64 a2, __int64 a3, const char *a4)
{
  unsigned int v4; // ebx
  wil::details *v6; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v4 = (unsigned int)a4;
  LODWORD(v6) = (_DWORD)a4;
  wil::details::ReportFailure_Hr<2>((__int64)this, a2, a3, 0LL, 0LL, retaddr, v6);
  return v4;
}

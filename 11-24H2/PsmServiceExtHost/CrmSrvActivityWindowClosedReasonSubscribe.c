/*
 * XREFs of CrmSrvActivityWindowClosedReasonSubscribe @ 0x180030B30
 * Callers:
 *     CrmRpcSrvActivityWindowClosedReasonSubscribe @ 0x180030B10 (CrmRpcSrvActivityWindowClosedReasonSubscribe.c)
 *     CrmpInProcActivityWindowClosedReasonSubscribe @ 0x180077310 (CrmpInProcActivityWindowClosedReasonSubscribe.c)
 * Callees:
 *     CempLockAcquireExclusive @ 0x18002B830 (CempLockAcquireExclusive.c)
 *     RmpWnfCreateStateNameForClient @ 0x18002EB68 (RmpWnfCreateStateNameForClient.c)
 *     CrmRegistrationNotifyWindowClosedReasonChange @ 0x18002FE58 (CrmRegistrationNotifyWindowClosedReasonChange.c)
 *     CrmLogSrvActivityWindowClosedReasonSubscribeStop @ 0x180030C1C (CrmLogSrvActivityWindowClosedReasonSubscribeStop.c)
 *     CrmLogSrvActivityWindowClosedReasonSubscribeStart @ 0x180030D28 (CrmLogSrvActivityWindowClosedReasonSubscribeStart.c)
 *     CrmRegistrationFindActivity @ 0x180030DC0 (CrmRegistrationFindActivity.c)
 *     CrmActivityDereference @ 0x1800320E0 (CrmActivityDereference.c)
 */

__int64 __fastcall CrmSrvActivityWindowClosedReasonSubscribe(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v6; // ebp
  _DWORD *Activity; // rax
  void *v8; // rdi
  _QWORD *v9; // r14
  int StateNameForClient; // ebx

  v6 = 1601;
  CrmLogSrvActivityWindowClosedReasonSubscribeStart();
  CempLockAcquireExclusive(a2);
  Activity = (_DWORD *)CrmRegistrationFindActivity(a2, a1);
  v8 = Activity;
  if ( !Activity || (v6 = Activity[16], v9 = Activity + 38, Activity[38]) || Activity[39] )
  {
    StateNameForClient = -1073741811;
  }
  else
  {
    StateNameForClient = RmpWnfCreateStateNameForClient((PSID)(a2 + 72), 0LL, 0, (__int64)(Activity + 38));
    if ( StateNameForClient >= 0 )
    {
      CrmRegistrationNotifyWindowClosedReasonChange(a2, (__int64)v8);
      *a3 = *v9;
    }
  }
  *(_DWORD *)(a2 + 8) = 0;
  RtlReleaseSRWLockExclusive(a2);
  if ( v8 )
    CrmActivityDereference(v8);
  CrmLogSrvActivityWindowClosedReasonSubscribeStop(a2, v6, a1, (unsigned int)StateNameForClient);
  return (unsigned int)StateNameForClient;
}

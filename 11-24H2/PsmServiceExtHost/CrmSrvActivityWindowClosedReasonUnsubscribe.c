/*
 * XREFs of CrmSrvActivityWindowClosedReasonUnsubscribe @ 0x1800695C8
 * Callers:
 *     CrmpInProcActivityWindowClosedReasonUnsubscribe @ 0x1800695B0 (CrmpInProcActivityWindowClosedReasonUnsubscribe.c)
 * Callees:
 *     CempLockAcquireExclusive @ 0x18002B830 (CempLockAcquireExclusive.c)
 *     CrmRegistrationFindActivity @ 0x180030DC0 (CrmRegistrationFindActivity.c)
 *     CrmActivityDereference @ 0x1800320E0 (CrmActivityDereference.c)
 *     CrmLogSrvActivityWindowClosedReasonUnsubscribeStart @ 0x180069698 (CrmLogSrvActivityWindowClosedReasonUnsubscribeStart.c)
 */

__int64 __fastcall CrmSrvActivityWindowClosedReasonUnsubscribe(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebp
  __int64 *Activity; // rax
  __int64 v6; // rdx
  volatile signed __int64 *v7; // rbx
  _QWORD *v8; // rdi
  unsigned int v9; // edi

  v4 = 1601;
  CrmLogSrvActivityWindowClosedReasonUnsubscribeStart();
  CempLockAcquireExclusive(a2);
  Activity = CrmRegistrationFindActivity(a2, a1);
  v7 = Activity;
  if ( Activity
    && ((v4 = *((_DWORD *)Activity + 16), v8 = Activity + 19, *((_DWORD *)Activity + 38)) || *((_DWORD *)Activity + 39)) )
  {
    NtDeleteWnfStateName(Activity + 19, v6);
    *v8 = 0LL;
    v9 = 0;
  }
  else
  {
    v9 = -1073741811;
  }
  *(_DWORD *)(a2 + 8) = 0;
  RtlReleaseSRWLockExclusive(a2);
  if ( v7 )
    CrmActivityDereference(v7);
  return CrmLogSrvActivityWindowClosedReasonUnsubscribeStop(a2, v4, a1, v9);
}

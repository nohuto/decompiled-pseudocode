/*
 * XREFs of CrmSessionUserNotification @ 0x180068FE0
 * Callers:
 *     PsmCrmSessionUserNotification @ 0x18006E030 (PsmCrmSessionUserNotification.c)
 * Callees:
 *     CempLockAcquireExclusive @ 0x18002B8B0 (CempLockAcquireExclusive.c)
 *     CrmGlobalsRundown @ 0x18002F9BC (CrmGlobalsRundown.c)
 *     CrmStateMonitorTimeSinceLogonReset @ 0x180069070 (CrmStateMonitorTimeSinceLogonReset.c)
 */

__int64 __fastcall CrmSessionUserNotification(int a1)
{
  _DWORD *v1; // rdi
  __int64 result; // rax

  if ( a1 == 6 )
    return CrmGlobalsRundown();
  if ( a1 == 5 )
  {
    RtlAcquireSRWLockShared(&CrmGlobals);
    v1 = qword_1800E9910;
    if ( qword_1800E9910 )
      CempLockAcquireExclusive((__int64)qword_1800E9910 + 8);
    result = RtlReleaseSRWLockShared(&CrmGlobals);
    if ( v1 )
    {
      CrmStateMonitorTimeSinceLogonReset(v1);
      v1[4] = 0;
      return RtlReleaseSRWLockExclusive(v1 + 2);
    }
  }
  return result;
}

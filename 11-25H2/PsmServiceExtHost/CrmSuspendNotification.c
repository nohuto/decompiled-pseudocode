/*
 * XREFs of CrmSuspendNotification @ 0x180069A38
 * Callers:
 *     PsmCrmSuspendNotification @ 0x18006E200 (PsmCrmSuspendNotification.c)
 * Callees:
 *     CempLockAcquireExclusive @ 0x18002B8B0 (CempLockAcquireExclusive.c)
 *     CrmStateMonitorStateSet @ 0x18002D2A0 (CrmStateMonitorStateSet.c)
 */

__int64 __fastcall CrmSuspendNotification(int a1)
{
  unsigned int *v1; // rdi
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  RtlAcquireSRWLockShared(&CrmGlobals);
  v1 = (unsigned int *)qword_1800E9900;
  if ( qword_1800E9900 )
    CempLockAcquireExclusive((__int64)qword_1800E9900 + 8);
  result = RtlReleaseSRWLockShared(&CrmGlobals);
  if ( v1 )
  {
    CrmStateMonitorStateSet(v1, &v3, 4uLL, 1);
    v1[4] = 0;
    return RtlReleaseSRWLockExclusive(v1 + 2);
  }
  return result;
}

/*
 * XREFs of CrmSuspendNotification @ 0x1800698B8
 * Callers:
 *     PsmCrmSuspendNotification @ 0x18006DFD0 (PsmCrmSuspendNotification.c)
 * Callees:
 *     CempLockAcquireExclusive @ 0x18002B830 (CempLockAcquireExclusive.c)
 *     CrmStateMonitorStateSet @ 0x18002D220 (CrmStateMonitorStateSet.c)
 */

__int64 __fastcall CrmSuspendNotification(int a1)
{
  unsigned int *v1; // rdi
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  RtlAcquireSRWLockShared(&CrmGlobals);
  v1 = (unsigned int *)qword_1800EA8A0;
  if ( qword_1800EA8A0 )
    CempLockAcquireExclusive((__int64)qword_1800EA8A0 + 8);
  result = RtlReleaseSRWLockShared(&CrmGlobals);
  if ( v1 )
  {
    CrmStateMonitorStateSet(v1, &v3, 4uLL, 1);
    v1[4] = 0;
    return RtlReleaseSRWLockExclusive(v1 + 2);
  }
  return result;
}

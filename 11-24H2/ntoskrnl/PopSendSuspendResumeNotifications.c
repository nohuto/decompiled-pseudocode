/*
 * XREFs of PopSendSuspendResumeNotifications @ 0x140AB644C
 * Callers:
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopSendSuspendResumeApplicationNotification @ 0x140751E54 (PopSendSuspendResumeApplicationNotification.c)
 *     PopSendSuspendResumeServiceNotification @ 0x140751F7C (PopSendSuspendResumeServiceNotification.c)
 */

__int64 __fastcall PopSendSuspendResumeNotifications(char a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rcx
  unsigned int v6; // eax
  __int64 v7; // rdx

  if ( KeGetCurrentThread()->PreviousMode )
  {
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopSuspendResumeNotification);
    if ( HIDWORD(qword_140F0C5F0) == 1 )
    {
      v2 = -1072103422;
    }
    else if ( a1 == (_BYTE)qword_140F0C5F0 )
    {
      v2 = -1073741101;
    }
    else
    {
      qword_140F0C5F8 = (__int64)KeGetCurrentThread();
      HIDWORD(qword_140F0C5F0) = 1;
      PopReleaseRwLock(&PopSuspendResumeNotification);
      if ( a1 )
      {
        LOBYTE(v4) = a1;
        PopSendSuspendResumeApplicationNotification(v4, v3);
        LOBYTE(v5) = a1;
        v6 = PopSendSuspendResumeServiceNotification(v5);
      }
      else
      {
        PopSendSuspendResumeServiceNotification(0LL);
        v6 = PopSendSuspendResumeApplicationNotification(0LL, v7);
      }
      v2 = v6;
      PopAcquireRwLockExclusive((unsigned __int64 *)&PopSuspendResumeNotification);
      HIDWORD(qword_140F0C5F0) = 0;
      LOBYTE(qword_140F0C5F0) = a1;
    }
    PopReleaseRwLock(&PopSuspendResumeNotification);
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v2;
}

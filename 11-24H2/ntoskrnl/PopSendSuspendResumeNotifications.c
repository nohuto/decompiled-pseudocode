/*
 * XREFs of PopSendSuspendResumeNotifications @ 0x140ABB42C
 * Callers:
 *     NtPowerInformation @ 0x1409F0230 (NtPowerInformation.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopSendSuspendResumeApplicationNotification @ 0x140753B34 (PopSendSuspendResumeApplicationNotification.c)
 *     PopSendSuspendResumeServiceNotification @ 0x140753C5C (PopSendSuspendResumeServiceNotification.c)
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
    PopAcquireRwLockExclusive(&PopSuspendResumeNotification);
    if ( HIDWORD(qword_140F0C330) == 1 )
    {
      v2 = -1072103422;
    }
    else if ( a1 == (_BYTE)qword_140F0C330 )
    {
      v2 = -1073741101;
    }
    else
    {
      qword_140F0C338 = (__int64)KeGetCurrentThread();
      HIDWORD(qword_140F0C330) = 1;
      PopReleaseRwLock((signed __int64 *)&PopSuspendResumeNotification);
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
      PopAcquireRwLockExclusive(&PopSuspendResumeNotification);
      HIDWORD(qword_140F0C330) = 0;
      LOBYTE(qword_140F0C330) = a1;
    }
    PopReleaseRwLock((signed __int64 *)&PopSuspendResumeNotification);
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v2;
}

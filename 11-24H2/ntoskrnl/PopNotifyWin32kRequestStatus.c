/*
 * XREFs of PopNotifyWin32kRequestStatus @ 0x140A68DD0
 * Callers:
 *     PopPowerInformationInternal @ 0x140AC4A30 (PopPowerInformationInternal.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopQueueWorkItem @ 0x140497478 (PopQueueWorkItem.c)
 */

__int64 __fastcall PopNotifyWin32kRequestStatus(unsigned int a1, char a2)
{
  __int64 v2; // rbx
  int v4; // eax
  bool v5; // zf
  int v6; // eax

  v2 = a1;
  PopAcquireRwLockExclusive(&PopWin32kPowerRequestStatus);
  v4 = *((_DWORD *)&PopWin32kPowerRequestStatus + v2 + 6);
  if ( a2 )
  {
    v6 = v4 + 1;
    v5 = v6 == 1;
  }
  else
  {
    v6 = v4 - 1;
    v5 = v6 == 0;
  }
  *((_DWORD *)&PopWin32kPowerRequestStatus + v2 + 6) = v6;
  if ( v5 && *(_QWORD *)&qword_140F0DAB0 )
    PopQueueWorkItem((__int64)&unk_140F0DC58, DelayedWorkQueue);
  PopReleaseRwLock((signed __int64 *)&PopWin32kPowerRequestStatus);
  return 0LL;
}

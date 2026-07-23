/*
 * XREFs of PopNotifyWin32kRequestStatus @ 0x140A62180
 * Callers:
 *     PopPowerInformationInternal @ 0x140AC2410 (PopPowerInformationInternal.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopQueueWorkItem @ 0x140491E08 (PopQueueWorkItem.c)
 */

__int64 __fastcall PopNotifyWin32kRequestStatus(unsigned int a1, char a2)
{
  __int64 v2; // rbx
  int v4; // eax
  bool v5; // zf
  int v6; // eax

  v2 = a1;
  PopAcquireRwLockExclusive((unsigned __int64 *)PopWin32kPowerRequestStatus);
  v4 = *((_DWORD *)&PopWin32kPowerRequestStatus[3] + v2);
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
  *((_DWORD *)&PopWin32kPowerRequestStatus[3] + v2) = v6;
  if ( v5 && *(_QWORD *)&qword_140F0DD30 )
    PopQueueWorkItem((__int64)&unk_140F0DED8, DelayedWorkQueue);
  PopReleaseRwLock(PopWin32kPowerRequestStatus);
  return 0LL;
}

/*
 * XREFs of VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140AA83D0
 * Callers:
 *     VrpLoadDifferencingHive @ 0x14092C6BC (VrpLoadDifferencingHive.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x14028D2F0 (KeAbPostReleaseEx.c)
 *     KeAbPreWait @ 0x14031DCF0 (KeAbPreWait.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     RtlInsertHeadCircularList @ 0x14041D800 (RtlInsertHeadCircularList.c)
 *     VrpLockDiffHiveEntry @ 0x14092CF58 (VrpLockDiffHiveEntry.c)
 *     VrpUnlockDiffHiveEntry @ 0x14092CFB8 (VrpUnlockDiffHiveEntry.c)
 */

char *__fastcall VrpWaitForDiffHiveEntryTransitionOwnerToLeave(__int64 a1)
{
  char *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  ULONG_PTR v6; // rbx
  struct _KEVENT v8[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v9; // [rsp+60h] [rbp-18h]

  memset(v8, 0, sizeof(v8));
  v9 = 0LL;
  v8[0].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)KeGetCurrentThread();
  KeInitializeEvent(&v8[1], SynchronizationEvent, 0);
  v9 = 0LL;
  RtlInsertHeadCircularList((__int64 *)(a1 + 48), v8);
  VrpUnlockDiffHiveEntry(a1);
  v2 = (char *)KeAbPreAcquire(a1 + 40, 0LL);
  v6 = (ULONG_PTR)v2;
  if ( v2 )
    KeAbPreWait(v2, v3, v4, v5);
  KeWaitForSingleObject(&v8[1], Executive, 0, 0, 0LL);
  if ( v6 )
  {
    KeAbPreAcquire(a1 + 40, v6);
    KeAbPostReleaseEx(a1 + 40, v6);
  }
  return VrpLockDiffHiveEntry(a1);
}

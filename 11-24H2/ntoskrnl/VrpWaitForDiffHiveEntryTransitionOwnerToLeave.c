/*
 * XREFs of VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140AAD350
 * Callers:
 *     VrpLoadDifferencingHive @ 0x14092A57C (VrpLoadDifferencingHive.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x14025CCE0 (KeAbPostReleaseEx.c)
 *     KeAbPreWait @ 0x14033E810 (KeAbPreWait.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     RtlInsertHeadCircularList @ 0x1404296B0 (RtlInsertHeadCircularList.c)
 *     VrpLockDiffHiveEntry @ 0x14092AE18 (VrpLockDiffHiveEntry.c)
 *     VrpUnlockDiffHiveEntry @ 0x14092AE78 (VrpUnlockDiffHiveEntry.c)
 */

__int64 __fastcall VrpWaitForDiffHiveEntryTransitionOwnerToLeave(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  ULONG_PTR v5; // rbx
  struct _KEVENT v7[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v8; // [rsp+60h] [rbp-18h]

  memset(v7, 0, sizeof(v7));
  v8 = 0LL;
  v7[0].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)KeGetCurrentThread();
  KeInitializeEvent(&v7[1], SynchronizationEvent, 0);
  v8 = 0LL;
  RtlInsertHeadCircularList((__int64 *)(a1 + 48), v7);
  VrpUnlockDiffHiveEntry(a1);
  v2 = KeAbPreAcquire(a1 + 40, 0LL);
  v5 = (ULONG_PTR)v2;
  if ( v2 )
    KeAbPreWait((__int64)v2, v3, v4);
  KeWaitForSingleObject(&v7[1], Executive, 0, 0, 0LL);
  if ( v5 )
  {
    KeAbPreAcquire(a1 + 40, v5);
    KeAbPostReleaseEx(a1 + 40, v5);
  }
  return VrpLockDiffHiveEntry(a1);
}

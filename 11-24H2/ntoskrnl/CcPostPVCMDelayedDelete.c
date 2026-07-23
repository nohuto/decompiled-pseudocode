/*
 * XREFs of CcPostPVCMDelayedDelete @ 0x1404B2BAC
 * Callers:
 *     CcPostPVCMForDeleteToPartition @ 0x1404B2A84 (CcPostPVCMForDeleteToPartition.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     KeSetCoalescableTimer @ 0x1402BE6B0 (KeSetCoalescableTimer.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall CcPostPVCMDelayedDelete(__int64 a1, _QWORD *a2, char a3)
{
  _QWORD *v6; // rdx
  _QWORD *v7; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  a2[203] = MEMORY[0xFFFFF78000000320];
  if ( !a3 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 768), &LockHandle);
  v6 = *(_QWORD **)(a1 + 120);
  v7 = a2 + 72;
  if ( *v6 != a1 + 112 )
    __fastfail(3u);
  *v7 = a1 + 112;
  a2[73] = v6;
  *v6 = v7;
  *(_QWORD *)(a1 + 120) = v7;
  if ( !*(_BYTE *)(a1 + 1504) )
  {
    KeSetCoalescableTimer((PKTIMER)(a1 + 1376), CcDelayedDeletePVCMInterval, 0, 0x3E8u, (PKDPC)(a1 + 1440));
    *(_BYTE *)(a1 + 1504) = 1;
  }
  if ( !a3 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
}

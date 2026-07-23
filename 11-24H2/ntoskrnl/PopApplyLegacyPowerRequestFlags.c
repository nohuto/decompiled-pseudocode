/*
 * XREFs of PopApplyLegacyPowerRequestFlags @ 0x140464798
 * Callers:
 *     PoRegisterSystemState @ 0x1402B9710 (PoRegisterSystemState.c)
 *     NtSetThreadExecutionState @ 0x140AC4920 (NtSetThreadExecutionState.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     PopPowerRequestReferenceRelease @ 0x1404649E0 (PopPowerRequestReferenceRelease.c)
 *     PopPowerRequestReferenceAcquire @ 0x140464AF0 (PopPowerRequestReferenceAcquire.c)
 *     PopPowerRequestEvaluatePendingRequestStatus @ 0x140464D44 (PopPowerRequestEvaluatePendingRequestStatus.c)
 *     PopQueueWorkItem @ 0x140491E08 (PopQueueWorkItem.c)
 */

void __fastcall PopApplyLegacyPowerRequestFlags(PVOID Object, char a2, char a3)
{
  int v3; // ebx
  int v7; // esi
  int v8; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (a3 & 1) != 0 )
  {
    if ( (a2 & 1) != 0 )
      PopPowerRequestReferenceAcquire(Object);
    else
      PopPowerRequestReferenceRelease(Object);
  }
  else if ( (a2 & 1) != 0 )
  {
    v3 = 2;
  }
  if ( (a3 & 2) != 0 )
  {
    if ( (a2 & 2) != 0 )
      PopPowerRequestReferenceAcquire(Object);
    else
      PopPowerRequestReferenceRelease(Object);
  }
  else if ( (a2 & 2) != 0 )
  {
    v3 |= 1u;
  }
  v7 = a2 & 0x40;
  if ( (a3 & 0x40) != 0 )
  {
    if ( v7 )
      PopPowerRequestReferenceAcquire(Object);
    else
      PopPowerRequestReferenceRelease(Object);
  }
  else if ( v7 )
  {
    v3 |= 4u;
  }
  if ( v3 )
  {
    KeAcquireInStackQueuedSpinLock(&PopPowerRequestSpinLock, &LockHandle);
    v8 = *((_DWORD *)Object + 7);
    if ( (v8 & v3) != 0 )
    {
      *((_DWORD *)Object + 7) = v8 & ~v3;
      PopPowerRequestEvaluatePendingRequestStatus(Object);
      PopQueueWorkItem(&PopPowerRequestUpdateWorkItem, 0LL);
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}

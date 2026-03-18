/*
 * XREFs of ?KiEnableGroupScheduling@@YAXXZ @ 0x1405C3060
 * Callers:
 *     KeInsertSchedulingGroup @ 0x1402F5D80 (KeInsertSchedulingGroup.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     KeUpdateGroupSchedulingConstants @ 0x1405C3564 (KeUpdateGroupSchedulingConstants.c)
 */

void KiEnableGroupScheduling(void)
{
  __int64 v0; // rcx
  __int64 *v1; // rdx
  __int64 v2; // r8
  __int64 v3; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&KiSchedulingGroupLock, &LockHandle);
  if ( !KiGroupSchedulingEnabled )
  {
    LOBYTE(v0) = 1;
    KiSchedulingGroupList.Blink = &KiSchedulingGroupList;
    KiSchedulingGroupList.Flink = &KiSchedulingGroupList;
    KeUpdateGroupSchedulingConstants(v0);
    KiGenerationEndTick = MEMORY[0xFFFFF78000000320] + (unsigned int)KiGenerationTicks;
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      v1 = KiProcessorBlock;
      v2 = (unsigned int)KeNumberProcessors_0;
      do
      {
        v3 = *v1++;
        *(_QWORD *)(v3 + 35472) = v3 + 35464;
        *(_QWORD *)(v3 + 35464) = v3 + 35464;
        *(_DWORD *)(v3 + 216) = 440 * *(_DWORD *)(v3 + 36) + 128;
        *(_QWORD *)(v3 + 35800) = KiGenerationEndTick;
        --v2;
      }
      while ( v2 );
    }
    KiGroupSchedulingEnabled = 1;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}

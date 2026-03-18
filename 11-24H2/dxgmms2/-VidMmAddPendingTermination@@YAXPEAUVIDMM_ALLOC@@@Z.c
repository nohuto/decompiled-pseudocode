/*
 * XREFs of ?VidMmAddPendingTermination@@YAXPEAUVIDMM_ALLOC@@@Z @ 0x1400337E4
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x140018790 (VidSchiScheduleCommandToRun.c)
 *     VidSchiProcessPrimariesTerminationList @ 0x140033250 (VidSchiProcessPrimariesTerminationList.c)
 *     VidSchSubmitDeviceCommand @ 0x140033344 (VidSchSubmitDeviceCommand.c)
 * Callees:
 *     <none>
 */

void __fastcall VidMmAddPendingTermination(struct VIDMM_ALLOC *a1)
{
  __int64 v2; // rdi
  KIRQL v3; // si
  _QWORD *v4; // rbx
  _QWORD *v5; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = **((_QWORD **)a1 + 1);
  v3 = KfRaiseIrql(2u);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v2 + 44392), &LockHandle);
  v4 = (_QWORD *)((char *)a1 + 216);
  v5 = *(_QWORD **)(v2 + 44408);
  if ( *v5 != v2 + 44400 )
    __fastfail(3u);
  *v4 = v2 + 44400;
  v4[1] = v5;
  *v5 = v4;
  *(_QWORD *)(v2 + 44408) = v4;
  ++*(_DWORD *)(v2 + 44416);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  KeSetEvent(*(PRKEVENT *)(v2 + 44440), 0, 0);
  KeLowerIrql(v3);
}

/*
 * XREFs of ExpWorkerFactoryCreateThread @ 0x140206060
 * Callers:
 *     ExpWorkerFactoryCheckCreate @ 0x140303CE0 (ExpWorkerFactoryCheckCreate.c)
 *     NtSetInformationWorkerFactory @ 0x14043ED50 (NtSetInformationWorkerFactory.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     ZwSetInformationThread @ 0x14069B2E0 (ZwSetInformationThread.c)
 *     ZwResumeThread @ 0x14069BB80 (ZwResumeThread.c)
 *     ObCloseHandle @ 0x1408EFEC0 (ObCloseHandle.c)
 *     RtlpCreateUserThreadEx @ 0x140A08E7C (RtlpCreateUserThreadEx.c)
 */

__int64 __fastcall ExpWorkerFactoryCreateThread(__int64 a1)
{
  int v1; // esi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v4; // edi
  unsigned int v5; // esi
  int v6; // r15d
  int UserThread; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp+27h] BYREF

  v1 = *(_DWORD *)(a1 + 408);
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentThread = KeGetCurrentThread();
  v4 = 128;
  --CurrentThread->KernelApcDisable;
  v5 = (v1 & 0x800 | 0x80u) >> 7;
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 104)) )
  {
    KeAcquireInStackQueuedSpinLock(*(PKSPIN_LOCK *)(a1 + 16), &LockHandle);
    if ( !*(_BYTE *)(*(_QWORD *)(a1 + 16) + 33LL) )
    {
      ++*(_DWORD *)(a1 + 392);
      v6 = *(_DWORD *)(a1 + 408);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      UserThread = RtlpCreateUserThreadEx(*(_QWORD *)(a1 + 40), 0, v5, 0, *(_QWORD *)(a1 + 56), *(_QWORD *)(a1 + 64));
      *(_DWORD *)(a1 + 416) = UserThread;
      v4 = UserThread;
      if ( UserThread >= 0 )
      {
        if ( (v6 & 0x8000) == 0 )
        {
          KeAcquireInStackQueuedSpinLock(*(PKSPIN_LOCK *)(a1 + 16), &LockHandle);
          *(_DWORD *)(a1 + 408) |= 0x8000u;
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        }
        if ( *(_DWORD *)(a1 + 412) )
          ZwSetInformationThread(0LL, ThreadBasePriority, (PVOID)(a1 + 412), 4u);
        if ( (*(_DWORD *)(a1 + 408) & 0x4000) != 0 )
          ZwSetInformationThread(
            0LL,
            ThreadSuspendCount|ThreadAffinityMask,
            (PVOID)(a1 + 120),
            8 * (unsigned __int16)KiActiveGroups);
        v4 = ZwResumeThread(0LL, 0LL);
        ObCloseHandle(0LL, 0);
        goto LABEL_11;
      }
      KeAcquireInStackQueuedSpinLock(*(PKSPIN_LOCK *)(a1 + 16), &LockHandle);
      --*(_DWORD *)(a1 + 392);
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_11:
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 104));
  }
  KeLeaveCriticalRegion();
  return v4;
}

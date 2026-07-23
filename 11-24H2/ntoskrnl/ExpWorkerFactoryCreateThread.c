/*
 * XREFs of ExpWorkerFactoryCreateThread @ 0x14020F0C8
 * Callers:
 *     NtSetInformationWorkerFactory @ 0x14032BA00 (NtSetInformationWorkerFactory.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1403AD7A0 (ExpWorkerFactoryCheckCreate.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     ZwSetInformationThread @ 0x1406A7550 (ZwSetInformationThread.c)
 *     ZwResumeThread @ 0x1406A7DF0 (ZwResumeThread.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 *     RtlpCreateUserThreadEx @ 0x140A0B458 (RtlpCreateUserThreadEx.c)
 */

__int64 __fastcall ExpWorkerFactoryCreateThread(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // edi
  int v4; // r15d
  int UserThread; // eax
  HANDLE v6; // rsi
  int v8; // [rsp+38h] [rbp-19h]
  __int64 v9[2]; // [rsp+68h] [rbp+17h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp+27h] BYREF
  HANDLE ThreadHandle; // [rsp+B8h] [rbp+67h] BYREF

  ThreadHandle = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentThread = KeGetCurrentThread();
  v3 = 128;
  *(_OWORD *)v9 = 0LL;
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 104)) )
  {
    KeAcquireInStackQueuedSpinLock(*(PKSPIN_LOCK *)(a1 + 16), &LockHandle);
    if ( !*(_BYTE *)(*(_QWORD *)(a1 + 16) + 33LL) )
    {
      ++*(_DWORD *)(a1 + 392);
      v4 = *(_DWORD *)(a1 + 408);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      UserThread = RtlpCreateUserThreadEx(
                     *(HANDLE *)(a1 + 40),
                     *(_QWORD *)(a1 + 56),
                     *(_QWORD *)(a1 + 64),
                     v8,
                     *(PUSER_THREAD_START_ROUTINE *)(a1 + 24),
                     *(PVOID *)(a1 + 32),
                     (__int64)&ThreadHandle,
                     (__int64)v9);
      *(_DWORD *)(a1 + 416) = UserThread;
      v3 = UserThread;
      if ( UserThread >= 0 )
      {
        if ( (v4 & 0x8000) == 0 )
        {
          KeAcquireInStackQueuedSpinLock(*(PKSPIN_LOCK *)(a1 + 16), &LockHandle);
          *(_DWORD *)(a1 + 408) |= 0x8000u;
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        }
        v6 = ThreadHandle;
        if ( *(_DWORD *)(a1 + 412) )
          ZwSetInformationThread(ThreadHandle, ThreadBasePriority, (PVOID)(a1 + 412), 4u);
        if ( (*(_DWORD *)(a1 + 408) & 0x4000) != 0 )
          ZwSetInformationThread(v6, ThreadSelectedCpuSets, (PVOID)(a1 + 120), 8 * (unsigned __int16)KiActiveGroups);
        v3 = ZwResumeThread(v6, 0LL);
        ObCloseHandle(v6, 0);
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
  return v3;
}

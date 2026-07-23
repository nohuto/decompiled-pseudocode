/*
 * XREFs of PopIrpWorker @ 0x1404E3650
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExFreeToNPagedLookasideList @ 0x1402E4C00 (ExFreeToNPagedLookasideList.c)
 *     KeReleaseSemaphore @ 0x1402F2490 (KeReleaseSemaphore.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     PopPepDeviceDState @ 0x1403A6948 (PopPepDeviceDState.c)
 *     PoDeviceAcquireIrp @ 0x1403CC078 (PoDeviceAcquireIrp.c)
 *     PopFxGetDeviceDStateReason @ 0x140481C7C (PopFxGetDeviceDStateReason.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledNoReportingNoInline @ 0x1405CB038 (Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledNoReportingNoInline.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PsTerminateSystemThread @ 0x1409D16F0 (PsTerminateSystemThread.c)
 */

NTSTATUS __fastcall PopIrpWorker(struct _KSEMAPHORE **Entry)
{
  unsigned __int8 CurrentIrql; // r15
  struct _KSEMAPHORE *v3; // rcx
  LARGE_INTEGER *Timeout; // r12
  int v5; // edx
  __int128 v6; // kr00_16
  char v7; // bl
  __int64 v9; // rbx
  __int64 v10; // rax
  int v11; // ecx
  ULONG_PTR v12; // r14
  __int64 v13; // rdx
  _DWORD *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rdi
  int DeviceDStateReason; // eax
  int v22; // r10d
  char v23; // bl
  __int64 v24; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-50h] BYREF
  __int128 v26; // [rsp+48h] [rbp-38h] BYREF
  __m256i v27; // [rsp+58h] [rbp-28h]
  LARGE_INTEGER v28; // [rsp+B0h] [rbp+30h] BYREF

  v28.QuadPart = 0LL;
  CurrentIrql = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v26 = 0LL;
  *(_OWORD *)&v27.m256i_u64[2] = 0LL;
  *(_OWORD *)v27.m256i_i8 = (unsigned __int64)KeGetCurrentThread();
  if ( Entry )
  {
    v3 = *Entry;
    if ( v3 )
      KeReleaseSemaphore(v3, 0, 1, 0);
    ExFreeToNPagedLookasideList(&PopDynamicIrpWorkerLookaside, Entry);
    v28.QuadPart = -100000000LL;
    Timeout = &v28;
    v27.m256i_i8[24] = 0;
  }
  else
  {
    Timeout = 0LL;
    v27.m256i_i8[24] = 1;
  }
  ExAcquireFastMutex(&PopIrpWorkerMutex);
  --PopIrpWorkerPendingCount;
  ++PopIrpWorkerCount;
  if ( *(__int64 **)qword_140F086F8 != &PopIrpThreadList )
LABEL_53:
    __fastfail(3u);
  *(_QWORD *)&v26 = &PopIrpThreadList;
  *((_QWORD *)&v26 + 1) = qword_140F086F8;
  *(_QWORD *)qword_140F086F8 = &v26;
  qword_140F086F8 = (__int64)&v26;
  KeReleaseGuardedMutex(&PopIrpWorkerMutex);
  do
  {
    while ( KeWaitForSingleObject(&PopIrpWorkerSemaphore, Executive, 0, 0, Timeout) != 258 )
    {
      KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
      v9 = PopIrpWorkerList;
      PopIrpLockThread = (__int64)KeGetCurrentThread();
      if ( *(__int64 **)(PopIrpWorkerList + 8) != &PopIrpWorkerList )
        goto LABEL_53;
      v10 = *(_QWORD *)PopIrpWorkerList;
      if ( *(_QWORD *)(*(_QWORD *)PopIrpWorkerList + 8LL) != PopIrpWorkerList )
        goto LABEL_53;
      PopIrpWorkerList = *(_QWORD *)PopIrpWorkerList;
      *(_QWORD *)(v10 + 8) = &PopIrpWorkerList;
      PopIrpLockThread = 0LL;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      ExAcquireFastMutex(&PopIrpWorkerMutex);
      v11 = ++PopIrpWorkerInFlightCount;
      if ( PopCreateIrpWorkerAllowed
        && v11 == PopIrpWorkerCount
        && (unsigned int)PopIrpWorkerCount < 0xF
        && !PopIrpWorkerPendingCount
        && !PopIrpWorkerRequested )
      {
        PopIrpWorkerRequested = 1;
        KeSetEvent(&PopIrpWorkerControlEvent, 0, 0);
      }
      KeReleaseGuardedMutex(&PopIrpWorkerMutex);
      v12 = v9 - 168;
      v13 = *(_QWORD *)(v9 - 168 + 184);
      v14 = *(_DWORD **)(v13 + 40);
      PoDeviceAcquireIrp(v9 - 168, *(_BYTE *)(v13 + 1), (__int64)v14);
      v16 = *(char *)(v9 - 168 + 66);
      v17 = 9 * v16;
      v18 = *(_QWORD *)(v9 - 168 + 72 * v16 + 200);
      if ( *(_BYTE *)(v18 + 184) == 2 && *(_DWORD *)(v18 + 188) == 1 && *(_DWORD **)(v18 + 32) == v14 )
      {
        v19 = *(_QWORD *)(v18 + 24);
        v20 = *(_QWORD *)(v18 + 200);
        v17 = v19 ? *(_QWORD *)(*(_QWORD *)(v19 + 312) + 40LL) : 0LL;
        *(_DWORD *)(v17 + 156) = *(_DWORD *)(v18 + 192);
        if ( v20 )
        {
          DeviceDStateReason = PopFxGetDeviceDStateReason(v20);
          *(_DWORD *)(v18 + 280) = DeviceDStateReason;
          *(_BYTE *)(v18 + 208) = 0;
          if ( DeviceDStateReason == 1 )
            *(_BYTE *)(v18 + 208) = 1;
          v17 = *(unsigned int *)(v18 + 192);
          *(_BYTE *)(v18 + 209) = (_DWORD)v17 != v22;
          if ( (_DWORD)v17 != v22 )
          {
            if ( (_DWORD)v17 == 1 )
            {
              _InterlockedOr((volatile signed __int32 *)(v20 + 32), 2u);
            }
            else if ( (unsigned int)Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledNoReportingNoInline()
                   && (*(_DWORD *)(v20 + 864) & 1) == 0 )
            {
              _InterlockedOr((volatile signed __int32 *)(v20 + 32), 0x800u);
            }
            PopPepDeviceDState(*(_QWORD *)(v20 + 56), *(_DWORD *)(v18 + 192), 0LL, *(unsigned int *)(v18 + 280));
          }
        }
      }
      v27.m256i_i64[1] = v12;
      v23 = 0;
      v27.m256i_i64[2] = (__int64)v14;
      if ( (v14[12] & 0x2000) == 0 && v12 == PopInrushIrp )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v15) = 2;
          LOBYTE(v17) = CurrentIrql;
          KiRaiseIrqlProcessIrqlFlags(v17, v15);
        }
        v23 = 1;
      }
      guard_dispatch_icall_no_overrides(v14, v12);
      if ( v23 )
      {
        if ( KiIrqlFlags )
        {
          LOBYTE(v24) = CurrentIrql;
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v24);
        }
        __writecr8(CurrentIrql);
      }
      if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
        KeBugCheckEx(0xA0u, 0x901uLL, (ULONG_PTR)v14, v12, KeGetCurrentThread()->CombinedApcDisable);
      *(_OWORD *)&v27.m256i_u64[1] = 0LL;
      ObfDereferenceObjectWithTag(v14, 0x72496F50u);
      ExAcquireFastMutex(&PopIrpWorkerMutex);
      --PopIrpWorkerInFlightCount;
      KeReleaseGuardedMutex(&PopIrpWorkerMutex);
    }
    ExAcquireFastMutex(&PopIrpWorkerMutex);
    if ( PopCreateIrpWorkerAllowed
      && ((v5 = PopIrpWorkerCount - 1, PopIrpWorkerInFlightCount != PopIrpWorkerCount - 1) || PopIrpWorkerPendingCount) )
    {
      v6 = v26;
      v7 = 0;
      if ( *(__int128 **)(v26 + 8) != &v26 || **((__int128 ***)&v26 + 1) != &v26 )
        goto LABEL_53;
      **((_QWORD **)&v26 + 1) = v26;
      *(_QWORD *)(v6 + 8) = *((_QWORD *)&v6 + 1);
      PopIrpWorkerCount = v5;
    }
    else
    {
      v7 = 1;
    }
    KeReleaseGuardedMutex(&PopIrpWorkerMutex);
  }
  while ( v7 );
  return PsTerminateSystemThread(0);
}

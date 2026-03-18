/*
 * XREFs of PopIrpWorker @ 0x1404EBF10
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14024A9C0 (ExFreeToNPagedLookasideList.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 *     PopPepDeviceDState @ 0x1403137A0 (PopPepDeviceDState.c)
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireFastMutex @ 0x14033E850 (ExAcquireFastMutex.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     KeReleaseSemaphore @ 0x1403D91C0 (KeReleaseSemaphore.c)
 *     PoDeviceAcquireIrp @ 0x1403D9CF8 (PoDeviceAcquireIrp.c)
 *     PopFxGetDeviceDStateReason @ 0x140486D58 (PopFxGetDeviceDStateReason.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledNoReportingNoInline @ 0x1405CD8C8 (Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledNoReportingNoInline.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PsTerminateSystemThread @ 0x1409D8000 (PsTerminateSystemThread.c)
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
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rdi
  int DeviceDStateReason; // eax
  int v24; // r10d
  char v25; // bl
  __int64 v26; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-50h] BYREF
  __int128 v28; // [rsp+48h] [rbp-38h] BYREF
  __m256i v29; // [rsp+58h] [rbp-28h]
  LARGE_INTEGER v30; // [rsp+B0h] [rbp+30h] BYREF

  v30.QuadPart = 0LL;
  CurrentIrql = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v28 = 0LL;
  *(_OWORD *)&v29.m256i_u64[2] = 0LL;
  *(_OWORD *)v29.m256i_i8 = (unsigned __int64)KeGetCurrentThread();
  if ( Entry )
  {
    v3 = *Entry;
    if ( v3 )
      KeReleaseSemaphore(v3, 0, 1, 0);
    ExFreeToNPagedLookasideList(&PopDynamicIrpWorkerLookaside, Entry);
    v30.QuadPart = -100000000LL;
    Timeout = &v30;
    v29.m256i_i8[24] = 0;
  }
  else
  {
    Timeout = 0LL;
    v29.m256i_i8[24] = 1;
  }
  ExAcquireFastMutex(&PopIrpWorkerMutex);
  --PopIrpWorkerPendingCount;
  ++PopIrpWorkerCount;
  if ( *(__int64 **)qword_140F08398 != &PopIrpThreadList )
LABEL_53:
    __fastfail(3u);
  *(_QWORD *)&v28 = &PopIrpThreadList;
  *((_QWORD *)&v28 + 1) = qword_140F08398;
  *(_QWORD *)qword_140F08398 = &v28;
  qword_140F08398 = (__int64)&v28;
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
      v18 = *(char *)(v9 - 168 + 66);
      v19 = 9 * v18;
      v20 = *(_QWORD *)(v9 - 168 + 72 * v18 + 200);
      if ( *(_BYTE *)(v20 + 184) == 2 && *(_DWORD *)(v20 + 188) == 1 && *(_DWORD **)(v20 + 32) == v14 )
      {
        v21 = *(_QWORD *)(v20 + 24);
        v22 = *(_QWORD *)(v20 + 200);
        v19 = v21 ? *(_QWORD *)(*(_QWORD *)(v21 + 312) + 40LL) : 0LL;
        *(_DWORD *)(v19 + 156) = *(_DWORD *)(v20 + 192);
        if ( v22 )
        {
          DeviceDStateReason = PopFxGetDeviceDStateReason(v22);
          *(_DWORD *)(v20 + 280) = DeviceDStateReason;
          *(_BYTE *)(v20 + 208) = 0;
          if ( DeviceDStateReason == 1 )
            *(_BYTE *)(v20 + 208) = 1;
          v19 = *(unsigned int *)(v20 + 192);
          *(_BYTE *)(v20 + 209) = (_DWORD)v19 != v24;
          if ( (_DWORD)v19 != v24 )
          {
            if ( (_DWORD)v19 == 1 )
            {
              _InterlockedOr((volatile signed __int32 *)(v22 + 32), 2u);
            }
            else if ( (unsigned int)Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledNoReportingNoInline()
                   && (*(_DWORD *)(v22 + 864) & 1) == 0 )
            {
              _InterlockedOr((volatile signed __int32 *)(v22 + 32), 0x800u);
            }
            PopPepDeviceDState(*(_QWORD *)(v22 + 56), *(_DWORD *)(v20 + 192), 0LL, *(unsigned int *)(v20 + 280));
          }
        }
      }
      v29.m256i_i64[1] = v12;
      v25 = 0;
      v29.m256i_i64[2] = (__int64)v14;
      if ( (v14[12] & 0x2000) == 0 && v12 == PopInrushIrp )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v15) = 2;
          LOBYTE(v19) = CurrentIrql;
          KiRaiseIrqlProcessIrqlFlags(v19, v15);
        }
        v25 = 1;
      }
      guard_dispatch_icall_no_overrides(v14, v12, v16, v17);
      if ( v25 )
      {
        if ( KiIrqlFlags )
        {
          LOBYTE(v26) = CurrentIrql;
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v26);
        }
        __writecr8(CurrentIrql);
      }
      if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
        KeBugCheckEx(0xA0u, 0x901uLL, (ULONG_PTR)v14, v12, KeGetCurrentThread()->CombinedApcDisable);
      *(_OWORD *)&v29.m256i_u64[1] = 0LL;
      ObfDereferenceObjectWithTag(v14, 0x72496F50u);
      ExAcquireFastMutex(&PopIrpWorkerMutex);
      --PopIrpWorkerInFlightCount;
      KeReleaseGuardedMutex(&PopIrpWorkerMutex);
    }
    ExAcquireFastMutex(&PopIrpWorkerMutex);
    if ( PopCreateIrpWorkerAllowed
      && ((v5 = PopIrpWorkerCount - 1, PopIrpWorkerInFlightCount != PopIrpWorkerCount - 1) || PopIrpWorkerPendingCount) )
    {
      v6 = v28;
      v7 = 0;
      if ( *(__int128 **)(v28 + 8) != &v28 || **((__int128 ***)&v28 + 1) != &v28 )
        goto LABEL_53;
      **((_QWORD **)&v28 + 1) = v28;
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

/*
 * XREFs of PopIrpWorker @ 0x140356760
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseSemaphore @ 0x14027FE40 (KeReleaseSemaphore.c)
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     PoDeviceAcquireIrp @ 0x140356F58 (PoDeviceAcquireIrp.c)
 *     PopFxGetDeviceDStateReason @ 0x140357078 (PopFxGetDeviceDStateReason.c)
 *     PopPepDeviceDState @ 0x140357170 (PopPepDeviceDState.c)
 *     ExFreeToNPagedLookasideList @ 0x1403739F0 (ExFreeToNPagedLookasideList.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PsTerminateSystemThread @ 0x14098F390 (PsTerminateSystemThread.c)
 */

NTSTATUS __fastcall PopIrpWorker(struct _KSEMAPHORE **Entry)
{
  unsigned __int8 CurrentIrql; // r14
  struct _KSEMAPHORE *v3; // rcx
  LARGE_INTEGER *Timeout; // r15
  __int64 v5; // rdi
  __int64 v6; // rax
  int v7; // ecx
  __int64 v8; // rdx
  ULONG_PTR v9; // rdi
  _DWORD *v10; // rbx
  __int64 v11; // r10
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r11
  __int64 v15; // rcx
  int v16; // esi
  char v17; // si
  __int64 v18; // rdx
  int v19; // edx
  __int128 v20; // kr00_16
  char v21; // bl
  int DeviceDStateReason; // eax
  __int64 v24; // r10
  __int64 v25; // r11
  int v26; // ecx
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
  if ( *(__int64 **)qword_140F07D48 != &PopIrpThreadList )
LABEL_27:
    __fastfail(3u);
  *(_QWORD *)&v28 = &PopIrpThreadList;
  *((_QWORD *)&v28 + 1) = qword_140F07D48;
  *(_QWORD *)qword_140F07D48 = &v28;
  qword_140F07D48 = (__int64)&v28;
LABEL_7:
  KeReleaseGuardedMutex(&PopIrpWorkerMutex);
  do
  {
    if ( KeWaitForSingleObject(&PopIrpWorkerSemaphore, Executive, 0, 0, Timeout) != 258 )
    {
      KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
      v5 = PopIrpWorkerList;
      PopIrpLockThread = (__int64)KeGetCurrentThread();
      if ( *(__int64 **)(PopIrpWorkerList + 8) != &PopIrpWorkerList )
        goto LABEL_27;
      v6 = *(_QWORD *)PopIrpWorkerList;
      if ( *(_QWORD *)(*(_QWORD *)PopIrpWorkerList + 8LL) != PopIrpWorkerList )
        goto LABEL_27;
      PopIrpWorkerList = *(_QWORD *)PopIrpWorkerList;
      *(_QWORD *)(v6 + 8) = &PopIrpWorkerList;
      PopIrpLockThread = 0LL;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      ExAcquireFastMutex(&PopIrpWorkerMutex);
      v7 = ++PopIrpWorkerInFlightCount;
      if ( PopCreateIrpWorkerAllowed
        && v7 == PopIrpWorkerCount
        && (unsigned int)PopIrpWorkerCount < 0xF
        && !PopIrpWorkerPendingCount
        && !PopIrpWorkerRequested )
      {
        PopIrpWorkerRequested = 1;
        KeSetEvent(&PopIrpWorkerControlEvent, 0, 0);
      }
      KeReleaseGuardedMutex(&PopIrpWorkerMutex);
      v8 = *(_QWORD *)(v5 + 16);
      v9 = v5 - 168;
      v10 = *(_DWORD **)(v8 + 40);
      LOBYTE(v8) = *(_BYTE *)(v8 + 1);
      PoDeviceAcquireIrp(v9, v8, v10);
      v11 = *(_QWORD *)(v9 + 72LL * *(char *)(v9 + 66) + 200);
      v12 = 2LL;
      if ( *(_BYTE *)(v11 + 184) == 2 && *(_DWORD *)(v11 + 188) == 1 && *(_DWORD **)(v11 + 32) == v10 )
      {
        v13 = *(_QWORD *)(v11 + 24);
        v14 = *(_QWORD *)(v11 + 200);
        if ( v13 )
          v15 = *(_QWORD *)(*(_QWORD *)(v13 + 312) + 40LL);
        else
          v15 = 0LL;
        v16 = *(_DWORD *)(v15 + 156);
        *(_DWORD *)(v15 + 156) = *(_DWORD *)(v11 + 192);
        if ( v14 )
        {
          DeviceDStateReason = PopFxGetDeviceDStateReason(v14);
          *(_DWORD *)(v24 + 280) = DeviceDStateReason;
          *(_BYTE *)(v24 + 208) = 0;
          if ( DeviceDStateReason == 1 )
            *(_BYTE *)(v24 + 208) = 1;
          v26 = *(_DWORD *)(v24 + 192);
          *(_BYTE *)(v24 + 209) = v26 != v16;
          if ( v26 != v16 )
          {
            if ( v26 == 1 )
              _InterlockedOr((volatile signed __int32 *)(v25 + 32), 2u);
            PopPepDeviceDState(*(_QWORD *)(v25 + 56), *(unsigned int *)(v24 + 192), 0LL, *(unsigned int *)(v24 + 280));
          }
        }
        v12 = 2LL;
      }
      v29.m256i_i64[1] = v9;
      v17 = 0;
      v29.m256i_i64[2] = (__int64)v10;
      if ( (v10[12] & 0x2000) == 0 && v9 == PopInrushIrp )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v12) = CurrentIrql;
          KiRaiseIrqlProcessIrqlFlags(v12);
        }
        v17 = 1;
      }
      guard_dispatch_icall_no_overrides(v10, v9);
      if ( v17 )
      {
        if ( KiIrqlFlags )
        {
          LOBYTE(v18) = CurrentIrql;
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v18);
        }
        __writecr8(CurrentIrql);
      }
      if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
        KeBugCheckEx(0xA0u, 0x901uLL, (ULONG_PTR)v10, v9, KeGetCurrentThread()->CombinedApcDisable);
      *(_OWORD *)&v29.m256i_u64[1] = 0LL;
      ObfDereferenceObjectWithTag(v10, 0x72496F50u);
      ExAcquireFastMutex(&PopIrpWorkerMutex);
      --PopIrpWorkerInFlightCount;
      goto LABEL_7;
    }
    ExAcquireFastMutex(&PopIrpWorkerMutex);
    if ( PopCreateIrpWorkerAllowed
      && ((v19 = PopIrpWorkerCount - 1, PopIrpWorkerInFlightCount != PopIrpWorkerCount - 1) || PopIrpWorkerPendingCount) )
    {
      v20 = v28;
      v21 = 0;
      if ( *(__int128 **)(v28 + 8) != &v28 || **((__int128 ***)&v28 + 1) != &v28 )
        goto LABEL_27;
      **((_QWORD **)&v28 + 1) = v28;
      *(_QWORD *)(v20 + 8) = *((_QWORD *)&v20 + 1);
      PopIrpWorkerCount = v19;
    }
    else
    {
      v21 = 1;
    }
    KeReleaseGuardedMutex(&PopIrpWorkerMutex);
  }
  while ( v21 );
  return PsTerminateSystemThread(0);
}

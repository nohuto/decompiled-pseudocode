/*
 * XREFs of VidSchiSubmitCommandPacketToQueue @ 0x140004B80
 * Callers:
 *     VidSchWaitForSingleSyncObject @ 0x140003F10 (VidSchWaitForSingleSyncObject.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x14000FC30 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchSubmitCommand @ 0x1400D2850 (VidSchSubmitCommand.c)
 *     VidSchSubmitPagingCommand @ 0x1400E2E98 (VidSchSubmitPagingCommand.c)
 *     VidSchSubmitGlobalCommand @ 0x1400E45A8 (VidSchSubmitGlobalCommand.c)
 *     VidSchEnqueueCpuEvent @ 0x1400E46B0 (VidSchEnqueueCpuEvent.c)
 *     VidSchFlushPendingCommand @ 0x140105420 (VidSchFlushPendingCommand.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x140015D90 (VidSchiProfilePerformanceTick.c)
 *     VidSchiInsertCommandToSoftwareQueue @ 0x14001A970 (VidSchiInsertCommandToSoftwareQueue.c)
 *     VidSchiAdjustWorkerThreadPriority @ 0x140032E60 (VidSchiAdjustWorkerThreadPriority.c)
 *     VidSchiSubmitCommandPacketToQueueDirectSubmitAware @ 0x140048068 (VidSchiSubmitCommandPacketToQueueDirectSubmitAware.c)
 *     ?EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1400BB8F0 (-EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     VidSchiEnsureVSyncEnabled @ 0x1400D5120 (VidSchiEnsureVSyncEnabled.c)
 */

void __fastcall VidSchiSubmitCommandPacketToQueue(__int64 a1)
{
  _QWORD *v1; // rbp
  __int64 v3; // r15
  _QWORD *v4; // r14
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rax
  VIDMM_DEVICE *v9; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-40h] BYREF
  __int16 v11; // [rsp+60h] [rbp-28h]
  int v12; // [rsp+90h] [rbp+8h] BYREF

  v1 = *(_QWORD **)(a1 + 88);
  v3 = v1[12];
  v4 = (_QWORD *)v1[13];
  v5 = *(_QWORD *)(v3 + 24);
  if ( (*(_DWORD *)(v5 + 2792) & 2) != 0 )
  {
    VidSchiSubmitCommandPacketToQueueDirectSubmitAware();
  }
  else
  {
    VidSchiEnsureVSyncEnabled(a1, v1[13]);
    v11 = 0;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 1984), &LockHandle);
    LOBYTE(v11) = 1;
    v6 = v1[18];
    v1[18] = v6 + 1;
    *(_QWORD *)(a1 + 112) = v6;
    v7 = MEMORY[0xFFFFF78000000320];
    v4[24] = v7 * KeQueryTimeIncrement();
    if ( !*(_DWORD *)(a1 + 48) )
    {
      v1[22] = *(_QWORD *)(a1 + 112);
      ++v4[231];
    }
    VidSchiProfilePerformanceTick(4, v5, v3, 0, 0LL, a1, 0LL, 0LL);
    v12 = 0;
    VidSchiInsertCommandToSoftwareQueue(a1, &v12);
    if ( (_BYTE)v11 )
    {
      if ( HIBYTE(v11) )
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      else
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      LOBYTE(v11) = 0;
    }
    VidSchiAdjustWorkerThreadPriority(v1);
    if ( v12 )
    {
      *(_QWORD *)(v5 + 1480) = MEMORY[0xFFFFF78000000320];
      KeSetEvent((PRKEVENT)(v5 + 1448), 0, 0);
    }
    v8 = v4[1];
    if ( v8 )
    {
      v9 = *(VIDMM_DEVICE **)(v8 + 792);
      if ( v9 )
        VIDMM_DEVICE::EnsureSchedulable(v9, 1);
    }
    if ( (_BYTE)v11 )
    {
      if ( HIBYTE(v11) )
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      else
        KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
  }
}

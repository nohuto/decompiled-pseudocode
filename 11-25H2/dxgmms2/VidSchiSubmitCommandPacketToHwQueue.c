/*
 * XREFs of VidSchiSubmitCommandPacketToHwQueue @ 0x14001CD20
 * Callers:
 *     VidSchSubmitWaitToHwQueue @ 0x1400034F0 (VidSchSubmitWaitToHwQueue.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x14001B090 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchSubmitSignalToHwQueue @ 0x140030520 (VidSchSubmitSignalToHwQueue.c)
 *     VidSchSubmitCommandToHwQueue @ 0x1400497F0 (VidSchSubmitCommandToHwQueue.c)
 *     VidSchiSubmitHwPagingCommand @ 0x1400E3910 (VidSchiSubmitHwPagingCommand.c)
 *     VidSchEnqueueCpuEvent @ 0x1400E4D10 (VidSchEnqueueCpuEvent.c)
 * Callees:
 *     ?VidSchiInsertCommandToHwQueue@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x14001CEE0 (-VidSchiInsertCommandToHwQueue@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiProfilePerformanceTick @ 0x1400211F0 (VidSchiProfilePerformanceTick.c)
 *     ?EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1400B3910 (-EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     VidSchiEnsureVSyncEnabled @ 0x1400D94C0 (VidSchiEnsureVSyncEnabled.c)
 */

void __fastcall VidSchiSubmitCommandPacketToHwQueue(struct _VIDSCH_QUEUE_PACKET *a1)
{
  _QWORD *v1; // rsi
  __int64 v3; // rax
  __int64 v4; // rbp
  __int64 v5; // rdi
  __int64 v6; // r14
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  char v11; // cl
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-30h] BYREF
  __int16 v16; // [rsp+60h] [rbp-18h]

  v1 = (_QWORD *)*((_QWORD *)a1 + 12);
  v3 = v1[5];
  v4 = *(_QWORD *)(v3 + 16);
  v5 = *(_QWORD *)(v3 + 8);
  v6 = *(_QWORD *)(v4 + 24);
  VidSchiEnsureVSyncEnabled(a1, v5);
  v16 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 1984), &LockHandle);
  v7 = *((_DWORD *)a1 + 12);
  LOBYTE(v16) = 1;
  if ( v7 )
  {
    if ( v7 == 8 )
    {
      v13 = *((_QWORD *)a1 + 96);
      v14 = v1[7];
      v1[9] = v13;
      *(_QWORD *)(v14 + 96) = v13;
    }
  }
  else
  {
    v8 = *((_QWORD *)a1 + 156);
    v9 = v1[3 * *((unsigned int *)a1 + 314) + 7];
    v1[3 * *((unsigned int *)a1 + 314) + 9] = v8;
    *(_QWORD *)(v9 + 96) = v8;
    v10 = v1[13];
    if ( v10 && *((_DWORD *)a1 + 314) == 1 )
      *(_QWORD *)(v10 + 96) = *((_QWORD *)a1 + 162);
    ++*(_QWORD *)(v5 + 1848);
  }
  *((_QWORD *)a1 + 14) = ++v1[17];
  VidSchiProfilePerformanceTick(4, v6, v4, 0, 0LL, (__int64)a1, 0LL, 0LL);
  VidSchiInsertCommandToHwQueue(a1);
  v11 = v16;
  if ( (_BYTE)v16 )
  {
    if ( HIBYTE(v16) )
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    else
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    v11 = 0;
    LOBYTE(v16) = 0;
  }
  v12 = *(_QWORD *)(v5 + 8);
  if ( v12 && *(_QWORD *)(v12 + 792) )
  {
    VIDMM_DEVICE::EnsureSchedulable(*(VIDMM_DEVICE **)(v12 + 792), 1);
    v11 = v16;
  }
  if ( v11 )
  {
    if ( HIBYTE(v16) )
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    else
      KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}

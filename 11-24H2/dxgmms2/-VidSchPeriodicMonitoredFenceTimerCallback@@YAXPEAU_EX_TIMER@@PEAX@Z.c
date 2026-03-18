/*
 * XREFs of ?VidSchPeriodicMonitoredFenceTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x140050610
 * Callers:
 *     <none>
 * Callees:
 *     ?VidSchiGetCurrentVSyncPeriod100ns@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z @ 0x14000304C (-VidSchiGetCurrentVSyncPeriod100ns@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z.c)
 *     VidSchiCalculatePeriodicTargetFrameNumber @ 0x1400030B0 (VidSchiCalculatePeriodicTargetFrameNumber.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140008038 (McTemplateK0q_EtwWriteTransfer.c)
 *     VidSchSignalSyncObjectsFromCpu @ 0x14001F580 (VidSchSignalSyncObjectsFromCpu.c)
 *     McTemplateK0pqqiix_EtwWriteTransfer @ 0x14004F258 (McTemplateK0pqqiix_EtwWriteTransfer.c)
 *     ?VidSchCalculatePeriodicMonitoredFenceTimerDueTime@@YA_J_J00H@Z @ 0x14005055C (-VidSchCalculatePeriodicMonitoredFenceTimerDueTime@@YA_J_J00H@Z.c)
 */

void __fastcall VidSchPeriodicMonitoredFenceTimerCallback(struct _EX_TIMER *a1, unsigned int *a2)
{
  __int64 v2; // r8
  __int64 v4; // rdi
  __int64 v5; // rax
  unsigned __int64 v6; // r14
  __int64 v7; // r8
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  unsigned int v11; // edx
  unsigned __int64 CurrentVSyncPeriod100ns; // rdi
  int v13; // eax
  unsigned __int64 v14; // rbp
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  struct _VIDSCH_GLOBAL *v19; // [rsp+20h] [rbp-68h]
  __int64 v20; // [rsp+28h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-38h] BYREF
  int v22; // [rsp+98h] [rbp+10h] BYREF
  unsigned __int64 v23; // [rsp+A0h] [rbp+18h] BYREF

  v2 = *(_QWORD *)a2;
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 8LL) + 8LL * a2[2] + 3432);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(*(_QWORD *)(v2 + 8) + 1984LL), &LockHandle);
  v5 = *(_QWORD *)a2;
  v6 = *(_QWORD *)(v4 + 44368);
  v7 = *(_QWORD *)(v4 + 44352);
  v22 = 0;
  v8 = VidSchiCalculatePeriodicTargetFrameNumber((__int64)a2, v6, v7, &v22, *(struct _VIDSCH_GLOBAL **)(v5 + 8), v4);
  v9 = *(_QWORD *)a2;
  v10 = v8;
  v11 = *(_DWORD *)(v4 + 24);
  v23 = v8;
  CurrentVSyncPeriod100ns = VidSchiGetCurrentVSyncPeriod100ns(*(struct _VIDSCH_GLOBAL **)(v9 + 8), v11);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( *((_QWORD *)a2 + 6) < v10 )
  {
    v13 = VidSchSignalSyncObjectsFromCpu(1u, (struct _VIDSCH_SYNC_OBJECT **)a2, 0, (char *)&v23);
    v14 = v23;
    if ( v13 >= 0 )
      *((_QWORD *)a2 + 6) = v23;
    v15 = VidSchCalculatePeriodicMonitoredFenceTimerDueTime(v6, CurrentVSyncPeriod100ns, *((_QWORD *)a2 + 2), v22);
    if ( v15 > 0 )
    {
      if ( (byte_140081241 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer();
      v15 = -(__int64)CurrentVSyncPeriod100ns;
    }
    ExSetTimer(*((_QWORD *)a2 + 5), v15, 0LL, 0LL);
    if ( (byte_140081241 & 4) != 0 )
    {
      LODWORD(v20) = a2[6];
      LODWORD(v19) = a2[2];
      McTemplateK0pqqiix_EtwWriteTransfer(v17, v16, v18, *(_QWORD *)a2, v19, v20, v6, v15, v14);
    }
  }
  else
  {
    if ( (byte_140081241 & 1) != 0 )
      McTemplateK0q_EtwWriteTransfer();
    ExSetTimer(*((_QWORD *)a2 + 5), -(__int64)CurrentVSyncPeriod100ns, 0LL, 0LL);
  }
}

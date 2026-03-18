/*
 * XREFs of VidSchDestroyPeriodicFrameNotification @ 0x14003B460
 * Callers:
 *     VidSchCreatePeriodicFrameNotification @ 0x140002B20 (VidSchCreatePeriodicFrameNotification.c)
 *     VidSchiClearPeriodicFrameNotifications @ 0x14001CC18 (VidSchiClearPeriodicFrameNotifications.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     VidSchiReleaseSyncObjectReference @ 0x14000F6E0 (VidSchiReleaseSyncObjectReference.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x1400122E0 (-ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x14001FB70 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x14001FEE0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ?SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z @ 0x14003B954 (-SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z.c)
 *     McTemplateK0pqxxqpp_EtwWriteTransfer @ 0x140050C04 (McTemplateK0pqxxqpp_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 *     VidSchControlVSyncAdapter @ 0x1400D4F00 (VidSchControlVSyncAdapter.c)
 */

void __fastcall VidSchDestroyPeriodicFrameNotification(_QWORD *P, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rsi
  __int64 v5; // rcx
  unsigned int *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rcx
  _QWORD v18[2]; // [rsp+58h] [rbp-19h] BYREF
  __int64 v19; // [rsp+68h] [rbp-9h] BYREF
  _QWORD v20[2]; // [rsp+70h] [rbp-1h] BYREF
  char v21; // [rsp+80h] [rbp+Fh]
  int v22; // [rsp+84h] [rbp+13h]
  _QWORD v23[4]; // [rsp+88h] [rbp+17h] BYREF
  __int16 v24; // [rsp+A8h] [rbp+37h]

  v3 = (unsigned int *)(P + 1);
  if ( (byte_140081241 & 4) != 0 )
    McTemplateK0pqxxqpp_EtwWriteTransfer(
      (_DWORD)P,
      (unsigned int)&EventDestroyPeriodicFrameNotification,
      a3,
      *P,
      *v3,
      P[2],
      0,
      *((_DWORD *)P + 6),
      P[4],
      P[5]);
  v5 = P[5];
  if ( v5 )
  {
    LOBYTE(a3) = 1;
    LOBYTE(a2) = 1;
    ExDeleteTimer(v5, a2, a3, 0LL);
  }
  v6 = v3;
  if ( P[4] )
  {
    v18[0] = P[4];
    v12 = *P;
    v18[1] = 0LL;
    v13 = ((__int64 (__fastcall *)(_QWORD, _QWORD *))DxgCoreInterface[75])(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) + 16LL) + 3120LL),
            v18);
    if ( v13 < 0 )
    {
      WdLogSingleEntry1(1LL, v13);
      WdLogGlobalForLineNumber = 14690;
      DxgkLogInternalTriageEvent(v14, 0x40000LL);
      v6 = (unsigned int *)(P + 1);
    }
  }
  if ( (int)VidSchControlVSyncAdapter(*(struct _VIDSCH_GLOBAL **)(*P + 8LL)) < 0 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*P + 8LL) + 2468LL) )
      v15 = *v6;
    else
      v15 = -3;
    WdLogSingleEntry1(1LL, v15);
    v16 = *P;
    WdLogGlobalForLineNumber = 14701;
    DxgkLogInternalTriageEvent(*(_QWORD *)(v16 + 8), 0x40000LL);
  }
  v7 = *(_QWORD *)(*P + 8LL);
  v24 = 0;
  v23[0] = v7 + 1984;
  AcquireSpinLock::Acquire((Acquire *)v23);
  v8 = *P;
  v9 = *v6;
  v19 = *(_QWORD *)(*P + 8LL);
  v20[1] = v20;
  v20[0] = v20;
  v21 = 0;
  v22 = 2;
  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) + 8 * v9 + 3432) + 78960LL)
            + 8LL * (unsigned __int8)*((_DWORD *)P + 6)) = 0LL;
  _VIDSCH_SYNC_OBJECT::SetToAlwaysSignaled((_VIDSCH_SYNC_OBJECT *)*P, (struct HwQueueStagingList *)&v19, 1);
  if ( !v21 && v22 )
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)&v19, 0LL);
  AcquireSpinLock::Release((AcquireSpinLock *)v23);
  VidSchiReleaseSyncObjectReference((char *)*P, v10);
  v11 = *(_QWORD *)(*P + 16LL);
  if ( *(_DWORD *)(v11 + 404) != 6 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 476;
    DxgkLogInternalTriageEvent(v17, 262146LL);
  }
  *(_QWORD *)(v11 + 176) = 0LL;
  ExFreePoolWithTag(P, 0x62616956u);
}

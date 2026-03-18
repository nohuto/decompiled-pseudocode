/*
 * XREFs of VidSchiProcessPeriodicNotificationCookie @ 0x1400031E4
 * Callers:
 *     VidSchDdiNotifyDpcWorker @ 0x14000779C (VidSchDdiNotifyDpcWorker.c)
 *     VidSchDdiNotifyDpc @ 0x1400079E0 (VidSchDdiNotifyDpc.c)
 * Callees:
 *     VidSchiCalculatePeriodicTargetFrameNumber @ 0x1400030B0 (VidSchiCalculatePeriodicTargetFrameNumber.c)
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140008038 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KPEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x14000EF50 (-VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DD.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x1400122E0 (-ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x14001FB70 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x14001FEE0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     McTemplateK0pqqiix_EtwWriteTransfer @ 0x14004F258 (McTemplateK0pqqiix_EtwWriteTransfer.c)
 *     McTemplateK0qqix_EtwWriteTransfer @ 0x14004F488 (McTemplateK0qqix_EtwWriteTransfer.c)
 */

void __fastcall VidSchiProcessPeriodicNotificationCookie(struct _VIDSCH_GLOBAL *a1, __int64 a2, int a3)
{
  __int64 v3; // r9
  __int64 v5; // rdi
  union _SLIST_HEADER *v7; // r15
  union _SLIST_HEADER *v8; // rbx
  union _SLIST_HEADER *v9; // r14
  ULONGLONG Alignment; // rsi
  int v11; // ecx
  int v12; // r8d
  __int64 v13; // rsi
  unsigned __int64 v14; // r12
  __int64 v15; // r8
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rbx
  int v21; // eax
  int v22; // edx
  int v23; // r8d
  int v24; // ecx
  __int64 v25; // rbx
  __int64 v26; // rax
  int v27; // ecx
  int v28; // r8d
  int v29; // ecx
  int v30; // r8d
  const wchar_t *v31; // r9
  struct VIDSCH_HW_QUEUE **v32; // rax
  struct VIDSCH_HW_QUEUE **v33; // [rsp+28h] [rbp-51h]
  struct _VIDSCH_GLOBAL *v34; // [rsp+50h] [rbp-29h] BYREF
  _QWORD v35[2]; // [rsp+58h] [rbp-21h] BYREF
  char v36; // [rsp+68h] [rbp-11h]
  int v37; // [rsp+6Ch] [rbp-Dh]
  _QWORD v38[4]; // [rsp+70h] [rbp-9h] BYREF
  __int16 v39; // [rsp+90h] [rbp+17h]
  int v40; // [rsp+E0h] [rbp+67h] BYREF
  unsigned __int64 v41; // [rsp+E8h] [rbp+6Fh] BYREF

  v3 = *(unsigned int *)(a2 + 48);
  v5 = *(unsigned int *)(a2 + 52);
  v7 = (union _SLIST_HEADER *)*((_QWORD *)a1 + v3 + 429);
  v8 = v7 + 2773;
  v9 = v7 + 2772;
  if ( (byte_140081241 & 4) != 0 )
    McTemplateK0qqix_EtwWriteTransfer((_DWORD)a1, a2, a3, v3, v5, v8->Alignment, v9->Alignment);
  ExpInterlockedPushEntrySList(v7 + 4936, (PSLIST_ENTRY)(a2 + 16));
  v39 = 0;
  v38[0] = (char *)a1 + 1984;
  AcquireSpinLock::Acquire((AcquireSpinLock *)v38);
  v34 = a1;
  v36 = 0;
  v35[1] = v35;
  v35[0] = v35;
  v37 = 2;
  Alignment = v7[4935].Alignment;
  if ( !Alignment
    || (v13 = *(_QWORD *)(Alignment + 8LL * (unsigned __int8)v5)) == 0
    || *(_DWORD *)(v13 + 24) != (_DWORD)v5 )
  {
    WdLogSingleEntry1(1LL, v5);
    WdLogGlobalForLineNumber = 9550;
    DxgkLogInternalTriageEvent(
      v11,
      0x40000,
      v12,
      (unsigned int)L"Storage for periodic monitored fence notification %d is invalid",
      v5,
      0LL,
      0LL,
      0LL);
    goto LABEL_5;
  }
  v14 = v8->Alignment;
  v15 = v9->Alignment;
  v16 = v8->Alignment;
  v40 = 0;
  v17 = VidSchiCalculatePeriodicTargetFrameNumber(v13, v16, v15, &v40, a1, (__int64)v7);
  v20 = v17;
  v41 = v17;
  if ( *(_QWORD *)(v13 + 48) == v17 )
  {
    WdLogSingleEntry1(1LL, v17);
    WdLogGlobalForLineNumber = 9579;
    v31 = L"New periodic monitored fence value has the same value as the last signaled value %d";
    v33 = 0LL;
LABEL_19:
    DxgkLogInternalTriageEvent(v29, 0x40000, v30, (_DWORD)v31, v20, (__int64)v33, 0LL, 0LL);
    goto LABEL_5;
  }
  if ( *(_QWORD *)(v13 + 48) > v17 )
  {
    if ( (byte_140081241 & 1) != 0 )
      McTemplateK0q_EtwWriteTransfer(v18, "h", v19, 25LL);
    WdLogSingleEntry2(1LL, v20, *(_QWORD *)(v13 + 48));
    v32 = *(struct VIDSCH_HW_QUEUE ***)(v13 + 48);
    v31 = L"New periodic monitored fence value %d is less than the last signaled value %d";
    WdLogGlobalForLineNumber = 9593;
    v33 = v32;
    goto LABEL_19;
  }
  v21 = VidSchiSignalSyncObjectsFromCpu(
          (struct HwQueueStagingList *)&v34,
          1u,
          (struct _VIDSCH_SYNC_OBJECT **)v13,
          0,
          &v41,
          0LL);
  if ( v21 < 0 )
  {
    v25 = v21;
    WdLogSingleEntry3(1LL, *(unsigned int *)(v13 + 8), v5, v21);
    v26 = *(unsigned int *)(v13 + 8);
    WdLogGlobalForLineNumber = 9610;
    DxgkLogInternalTriageEvent(
      v27,
      0x40000,
      v28,
      (unsigned int)L"Failed to signal periodic monitored fence with VidPnSourceID:%d NotificationID:%u, returning 0x%I64x",
      v26,
      v5,
      v25,
      0LL);
  }
  else
  {
    v24 = v41;
    *(_QWORD *)(v13 + 48) = v41;
    if ( (byte_140081241 & 4) != 0 )
      McTemplateK0pqqiix_EtwWriteTransfer(v24, v22, v23, *(_QWORD *)v13, *(_DWORD *)(v13 + 8), v5, v14, 0, v24);
  }
LABEL_5:
  if ( !v36 && v37 )
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)&v34, 0LL);
  AcquireSpinLock::Release((AcquireSpinLock *)v38);
}

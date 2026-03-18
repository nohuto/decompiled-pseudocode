/*
 * XREFs of ?VmBusProcessPacket@@YAXPEAX@Z @ 0x140396200
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pxqt_EtwWriteTransfer @ 0x140016478 (McTemplateK0pxqt_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140046900 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     McTemplateK0pxq_EtwWriteTransfer @ 0x14004CC40 (McTemplateK0pxq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?ReleaseVirtualGpuReference@DXGK_VIRTUAL_GPU_PARAV@@QEAAXXZ @ 0x1403968EC (-ReleaseVirtualGpuReference@DXGK_VIRTUAL_GPU_PARAV@@QEAAXXZ.c)
 *     ?VmBusExecuteCommandInProcessContext@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@P6AE0@Z@Z @ 0x140396924 (-VmBusExecuteCommandInProcessContext@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@P6AE0@Z@Z.c)
 *     ?AcquireVirtualGpuByLuid@DXGVIRTUALMACHINE@@QEAAPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAU_LUID@@@Z @ 0x140396D10 (-AcquireVirtualGpuByLuid@DXGVIRTUALMACHINE@@QEAAPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAU_LUID@@@Z.c)
 */

void __fastcall VmBusProcessPacket(struct DXGADAPTER_VMBUS_PACKET *WorkItem)
{
  PWORKER_THREAD_ROUTINE v1; // r8
  struct _LIST_ENTRY *v2; // rsi
  char v4; // r14
  struct _LIST_ENTRY *v5; // rdx
  struct _LIST_ENTRY *Flink; // rax
  PWORKER_THREAD_ROUTINE v7; // rbp
  unsigned __int8 v8; // r15
  struct _LIST_ENTRY *v9; // r13
  __int64 v10; // r9
  unsigned int v11; // r12d
  struct _LIST_ENTRY *v12; // rax
  unsigned int v13; // eax
  __int64 v14; // rdi
  const struct DXG_VMBUS_COMMAND_TABLE near *const *v15; // rdi
  struct _LUID *v16; // rax
  __int64 *v17; // r14
  WORKER_THREAD_ROUTINE *v18; // rax
  char v19; // si
  unsigned __int8 v20; // al
  __int64 v21; // rcx
  __int64 v22; // r8
  struct DXGGLOBAL *Global; // rax
  __int64 v24; // rax
  const EVENT_DESCRIPTOR *v25; // rdx
  int v26; // eax
  __int64 v27; // rax
  const wchar_t *v28; // r9
  __int64 Flink_low; // rdi
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // [rsp+28h] [rbp-70h]
  __int64 v33; // [rsp+30h] [rbp-68h]
  int v34; // [rsp+A8h] [rbp+10h]
  int v35; // [rsp+B0h] [rbp+18h]
  int v36; // [rsp+B8h] [rbp+20h]

  v1 = (PWORKER_THREAD_ROUTINE)*((_QWORD *)WorkItem + 10);
  v2 = (struct _LIST_ENTRY *)*((_QWORD *)WorkItem + 17);
  v4 = 0;
  if ( v1 )
  {
    v24 = *((_QWORD *)v1 + 13);
    v7 = (PWORKER_THREAD_ROUTINE)((char *)v1 + 176);
    *((_QWORD *)WorkItem + 13) = v24;
    *((_DWORD *)WorkItem + 38) = *(_DWORD *)(v24 + 392);
    v5 = (struct _LIST_ENTRY *)*((_QWORD *)v1 + 12);
    *((_QWORD *)WorkItem + 12) = v5;
  }
  else
  {
    v5 = (struct _LIST_ENTRY *)*((_QWORD *)WorkItem + 12);
    if ( v5 )
    {
      Flink = v5[37].Flink;
      *((_QWORD *)WorkItem + 13) = Flink;
      v7 = (PWORKER_THREAD_ROUTINE)&Flink[10];
      *((_DWORD *)WorkItem + 38) = Flink[24].Blink;
    }
    else
    {
      v7 = (PWORKER_THREAD_ROUTINE)*((_QWORD *)WorkItem + 14);
    }
  }
  v8 = 0;
  v9 = v2->Flink;
  v10 = 2LL;
  v11 = SBYTE4(v2->Blink);
  v34 = 0;
  v35 = 0;
  v36 = 0;
  if ( *((_BYTE *)v7 + 69) )
    goto LABEL_81;
  v12 = (struct _LIST_ENTRY *)*((_QWORD *)WorkItem + 13);
  if ( v12 && BYTE3(v12[21].Flink) )
  {
    if ( v11 > 1 && *((_DWORD *)v7 + 12) == 1 )
    {
      WdLogSingleEntry0(2LL);
      v27 = 413LL;
      goto LABEL_42;
    }
  }
  else if ( *((_DWORD *)v7 + 12) != v11 )
  {
    WdLogSingleEntry0(2LL);
    v27 = 420LL;
LABEL_42:
    WdLogGlobalForLineNumber = v27;
    v28 = L"The command is sent to invalid channel";
LABEL_80:
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v28, v27, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_81;
  }
  if ( !v5 && v1 )
    *((_QWORD *)WorkItem + 12) = *((_QWORD *)v1 + 12);
  _InterlockedIncrement(&g_VgpuNumWorkItemProcessed);
  v13 = *((_DWORD *)WorkItem + 36);
  if ( v11 == 1 )
  {
    if ( v13 >= 0x18 )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
      {
        McTemplateK0pxq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          &EventVmBusProcessPacketGlobalWorkerBegin,
          (__int64)v1,
          *((_QWORD *)WorkItem + 13) + 160LL,
          v2->Flink,
          LODWORD(v2[1].Flink));
        v10 = 2LL;
      }
      Flink_low = SLODWORD(v2[1].Flink);
      v34 = Flink_low;
      if ( (unsigned int)(Flink_low - 1000) <= 0x16 )
      {
        v15 = &DXG_HOST_GLOBAL_VMBUS::VmBusCommandTableVmToHost + 2 * (int)Flink_low - 2000;
        goto LABEL_20;
      }
      WdLogSingleEntry1(2LL, Flink_low);
      v28 = L"Invalid VM to Host command is passed: %I64n";
      WdLogGlobalForLineNumber = 450;
LABEL_79:
      v27 = SLODWORD(v2[1].Flink);
      goto LABEL_80;
    }
    WdLogSingleEntry1(2LL, *((unsigned int *)WorkItem + 36));
    WdLogGlobalForLineNumber = 440;
    goto LABEL_69;
  }
  if ( v11 > 1 )
  {
    if ( v13 >= 0x18 )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
      {
        McTemplateK0pxq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          &EventVmBusProcessPacketHostToVmWorkerBegin,
          (__int64)v1,
          *((_QWORD *)WorkItem + 13) + 160LL,
          v2->Flink,
          LODWORD(v2[1].Flink));
        v10 = 2LL;
      }
      v30 = SLODWORD(v2[1].Flink);
      v35 = v30;
      if ( (unsigned int)v30 <= 6 )
      {
        v15 = (const struct DXG_VMBUS_COMMAND_TABLE near *const *)((char *)&DXG_GUEST_GLOBAL_VMBUS::VmBusCommandTableHostToVm
                                                                 + 16 * v30);
        v19 = 0;
        goto LABEL_23;
      }
      WdLogSingleEntry1(2LL, v30);
      WdLogGlobalForLineNumber = 533;
      goto LABEL_78;
    }
    WdLogSingleEntry1(2LL, *((unsigned int *)WorkItem + 36));
    WdLogGlobalForLineNumber = 523;
LABEL_69:
    v27 = *((unsigned int *)WorkItem + 36);
    v28 = L"Invalid packet size: %I64n";
    goto LABEL_80;
  }
  if ( v13 < 0x18 )
  {
    WdLogSingleEntry1(2LL, *((unsigned int *)WorkItem + 36));
    WdLogGlobalForLineNumber = 460;
    goto LABEL_69;
  }
  v14 = SLODWORD(v2[1].Flink);
  v36 = v14;
  if ( (unsigned int)v14 > 0x44 )
  {
    WdLogSingleEntry1(2LL, v14);
    WdLogGlobalForLineNumber = 466;
LABEL_78:
    v28 = L"Invalid command is passed: %I64n";
    goto LABEL_79;
  }
  v15 = &DXG_HOST_VIRTUALGPU_VMBUS::VmBusCommandTableVgpuToHost + 2 * v14;
  if ( !*((_QWORD *)WorkItem + 10) )
  {
    v16 = (struct _LUID *)*((_QWORD *)WorkItem + 15);
    if ( !v16 )
    {
      WdLogSingleEntry0(2LL);
      v27 = 480LL;
      v28 = L"Invalid extended header";
      WdLogGlobalForLineNumber = 480;
      goto LABEL_80;
    }
    v17 = (__int64 *)&v16[1];
    v18 = (WORKER_THREAD_ROUTINE *)DXGVIRTUALMACHINE::AcquireVirtualGpuByLuid(
                                     *((DXGVIRTUALMACHINE **)WorkItem + 13),
                                     v16 + 1);
    *((_QWORD *)WorkItem + 10) = v18;
    if ( !v18 )
    {
      WdLogSingleEntry1(2LL, *v17);
      v27 = *v17;
      v28 = L"Failed to find virtual GPU by luid: 0x%I64x";
      WdLogGlobalForLineNumber = 486;
      goto LABEL_80;
    }
    v4 = 1;
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
    McTemplateK0pxq_EtwWriteTransfer(
      (REGHANDLE *)&DxgkControlGuid_Context,
      &EventVmBusProcessPacketWorkerBegin,
      (__int64)v1,
      *((_QWORD *)WorkItem + 13) + 160LL,
      v2->Flink,
      LODWORD(v2[1].Flink));
LABEL_20:
  v19 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)WorkItem + 13) + 339LL)
    || *((_BYTE *)WorkItem + 156)
    || (*(_DWORD *)(*((_QWORD *)WorkItem + 17) + 12LL) & 0x100) != 0 )
  {
LABEL_23:
    if ( *((_DWORD *)WorkItem + 36) < *((_DWORD *)v15 + 3) )
    {
      WdLogSingleEntry1(2LL, *((unsigned int *)WorkItem + 36));
      v31 = *((unsigned int *)WorkItem + 36);
      WdLogGlobalForLineNumber = 543;
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Invalid packet size: %I64n", v31, 0LL, 0LL, 0LL, 0LL);
      v19 = 1;
    }
    else
    {
      if ( *((_BYTE *)v15 + 8) )
        v20 = VmBusExecuteCommandInProcessContext(
                WorkItem,
                *(unsigned __int8 (**)(struct DXGADAPTER_VMBUS_PACKET *))v15);
      else
        v20 = (*(__int64 (__fastcall **)(struct DXGADAPTER_VMBUS_PACKET *, struct _LIST_ENTRY *, PWORKER_THREAD_ROUTINE, __int64))v15)(
                WorkItem,
                v5,
                v1,
                v10);
      v8 = v20;
    }
    if ( v4 )
      DXGK_VIRTUAL_GPU_PARAV::ReleaseVirtualGpuReference(*((DXGK_VIRTUAL_GPU_PARAV **)WorkItem + 10));
    if ( !v19 )
    {
LABEL_30:
      if ( !v8 )
        VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)WorkItem + 16), 0LL, 0);
      if ( !bTracingEnabled )
        goto LABEL_33;
      if ( v11 == 1 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) == 0 )
          goto LABEL_33;
        v25 = (const EVENT_DESCRIPTOR *)&EventVmBusProcessPacketGlobalWorkerEnd;
        LODWORD(v33) = v8;
        v26 = v34;
      }
      else if ( v11 == 2 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) == 0 )
          goto LABEL_33;
        v25 = (const EVENT_DESCRIPTOR *)&EventVmBusProcessPacketHostToVmWorkerEnd;
        LODWORD(v33) = v8;
        v26 = v35;
      }
      else
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) == 0 )
        {
LABEL_33:
          Global = DXGGLOBAL::GetGlobal();
          ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)((char *)Global + 160), WorkItem);
          return;
        }
        v25 = (const EVENT_DESCRIPTOR *)&EventVmBusProcessPacketWorkerEnd;
        LODWORD(v33) = v8;
        v26 = v36;
      }
      LODWORD(v32) = v26;
      McTemplateK0pxqt_EtwWriteTransfer(v21, v25, v22, *((_QWORD *)WorkItem + 13) + 160LL, v9, v32, v33);
      goto LABEL_33;
    }
LABEL_81:
    if ( !*((_BYTE *)DXGGLOBAL::GetGlobal() + 304802) )
      *((_BYTE *)v7 + 69) = 1;
    goto LABEL_30;
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100000000LL) != 0 )
  {
    LODWORD(v32) = 0;
    McTemplateK0pxq_EtwWriteTransfer(
      (REGHANDLE *)&DxgkControlGuid_Context,
      &EventVmBusSecondaryWorkItem,
      (__int64)v1,
      v7,
      v9,
      v32);
  }
  *((_BYTE *)WorkItem + 156) = 1;
  if ( v4 )
    DXGK_VIRTUAL_GPU_PARAV::ReleaseVirtualGpuReference(*((DXGK_VIRTUAL_GPU_PARAV **)WorkItem + 10));
  *((_QWORD *)WorkItem + 10) = 0LL;
  *((_QWORD *)WorkItem + 2) = VmBusProcessPacket;
  *((_QWORD *)WorkItem + 3) = WorkItem;
  *(_QWORD *)WorkItem = 0LL;
  ExQueueWorkItem((PWORK_QUEUE_ITEM)WorkItem, CustomPriorityWorkQueue|MaximumWorkQueue|0x8);
}

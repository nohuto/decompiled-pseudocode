/*
 * XREFs of ?VmBusProcessPacket@@YAXPEAX@Z @ 0x140391060
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0pxqt_EtwWriteTransfer @ 0x140013278 (McTemplateK0pxqt_EtwWriteTransfer.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1400462CC (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     McTemplateK0pxq_EtwWriteTransfer @ 0x14004C6F0 (McTemplateK0pxq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?ReleaseVirtualGpuReference@DXGK_VIRTUAL_GPU_PARAV@@QEAAXXZ @ 0x14039174C (-ReleaseVirtualGpuReference@DXGK_VIRTUAL_GPU_PARAV@@QEAAXXZ.c)
 *     ?VmBusExecuteCommandInProcessContext@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@P6AE0@Z@Z @ 0x140391784 (-VmBusExecuteCommandInProcessContext@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@P6AE0@Z@Z.c)
 *     ?AcquireVirtualGpuByLuid@DXGVIRTUALMACHINE@@QEAAPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAU_LUID@@@Z @ 0x140391B70 (-AcquireVirtualGpuByLuid@DXGVIRTUALMACHINE@@QEAAPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAU_LUID@@@Z.c)
 */

void __fastcall VmBusProcessPacket(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // r8
  __int64 *v2; // rsi
  char v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rbp
  unsigned __int8 v8; // r15
  __int64 v9; // r13
  __int64 v10; // r9
  unsigned int v11; // r12d
  __int64 v12; // rax
  unsigned int v13; // eax
  __int64 v14; // rdi
  const struct DXG_VMBUS_COMMAND_TABLE near *const *v15; // rdi
  struct _LUID *v16; // rax
  __int64 *v17; // r14
  struct DXGK_VIRTUAL_GPU_PARAV *v18; // rax
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
  __int64 v29; // rdi
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // [rsp+28h] [rbp-70h]
  __int64 v33; // [rsp+30h] [rbp-68h]
  int v34; // [rsp+A8h] [rbp+10h]
  int v35; // [rsp+B0h] [rbp+18h]
  int v36; // [rsp+B8h] [rbp+20h]

  v1 = *((_QWORD *)a1 + 10);
  v2 = (__int64 *)*((_QWORD *)a1 + 17);
  v4 = 0;
  if ( v1 )
  {
    v24 = *(_QWORD *)(v1 + 104);
    v7 = v1 + 176;
    *((_QWORD *)a1 + 13) = v24;
    *((_DWORD *)a1 + 38) = *(_DWORD *)(v24 + 392);
    v5 = *(_QWORD *)(v1 + 96);
    *((_QWORD *)a1 + 12) = v5;
  }
  else
  {
    v5 = *((_QWORD *)a1 + 12);
    if ( v5 )
    {
      v6 = *(_QWORD *)(v5 + 592);
      *((_QWORD *)a1 + 13) = v6;
      v7 = v6 + 160;
      *((_DWORD *)a1 + 38) = *(_DWORD *)(v6 + 392);
    }
    else
    {
      v7 = *((_QWORD *)a1 + 14);
    }
  }
  v8 = 0;
  v9 = *v2;
  v10 = 2LL;
  v11 = *((char *)v2 + 12);
  v34 = 0;
  v35 = 0;
  v36 = 0;
  if ( *(_BYTE *)(v7 + 69) )
    goto LABEL_81;
  v12 = *((_QWORD *)a1 + 13);
  if ( v12 && *(_BYTE *)(v12 + 339) )
  {
    if ( v11 > 1 && *(_DWORD *)(v7 + 48) == 1 )
    {
      WdLogSingleEntry0(2LL);
      v27 = 410LL;
      goto LABEL_42;
    }
  }
  else if ( *(_DWORD *)(v7 + 48) != v11 )
  {
    WdLogSingleEntry0(2LL);
    v27 = 417LL;
LABEL_42:
    WdLogGlobalForLineNumber = v27;
    v28 = L"The command is sent to invalid channel";
LABEL_80:
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v28, v27, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_81;
  }
  if ( !v5 && v1 )
    *((_QWORD *)a1 + 12) = *(_QWORD *)(v1 + 96);
  _InterlockedIncrement(&g_VgpuNumWorkItemProcessed);
  v13 = *((_DWORD *)a1 + 36);
  if ( v11 == 1 )
  {
    if ( v13 >= 0x18 )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
      {
        McTemplateK0pxq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          &EventVmBusProcessPacketGlobalWorkerBegin,
          v1,
          *((_QWORD *)a1 + 13) + 160LL,
          *v2,
          *((_DWORD *)v2 + 4));
        v10 = 2LL;
      }
      v29 = *((int *)v2 + 4);
      v34 = v29;
      if ( (unsigned int)(v29 - 1000) <= 0x16 )
      {
        v15 = &DXG_HOST_GLOBAL_VMBUS::VmBusCommandTableVmToHost + 2 * (int)v29 - 2000;
        goto LABEL_20;
      }
      WdLogSingleEntry1(2LL, v29);
      v28 = L"Invalid VM to Host command is passed: %I64n";
      WdLogGlobalForLineNumber = 447;
LABEL_79:
      v27 = *((int *)v2 + 4);
      goto LABEL_80;
    }
    WdLogSingleEntry1(2LL, *((unsigned int *)a1 + 36));
    WdLogGlobalForLineNumber = 437;
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
          v1,
          *((_QWORD *)a1 + 13) + 160LL,
          *v2,
          *((_DWORD *)v2 + 4));
        v10 = 2LL;
      }
      v30 = *((int *)v2 + 4);
      v35 = v30;
      if ( (unsigned int)v30 <= 6 )
      {
        v15 = (const struct DXG_VMBUS_COMMAND_TABLE near *const *)((char *)&DXG_GUEST_GLOBAL_VMBUS::VmBusCommandTableHostToVm
                                                                 + 16 * v30);
        v19 = 0;
        goto LABEL_23;
      }
      WdLogSingleEntry1(2LL, v30);
      WdLogGlobalForLineNumber = 530;
      goto LABEL_78;
    }
    WdLogSingleEntry1(2LL, *((unsigned int *)a1 + 36));
    WdLogGlobalForLineNumber = 520;
LABEL_69:
    v27 = *((unsigned int *)a1 + 36);
    v28 = L"Invalid packet size: %I64n";
    goto LABEL_80;
  }
  if ( v13 < 0x18 )
  {
    WdLogSingleEntry1(2LL, *((unsigned int *)a1 + 36));
    WdLogGlobalForLineNumber = 457;
    goto LABEL_69;
  }
  v14 = *((int *)v2 + 4);
  v36 = v14;
  if ( (unsigned int)v14 > 0x44 )
  {
    WdLogSingleEntry1(2LL, v14);
    WdLogGlobalForLineNumber = 463;
LABEL_78:
    v28 = L"Invalid command is passed: %I64n";
    goto LABEL_79;
  }
  v15 = &DXG_HOST_VIRTUALGPU_VMBUS::VmBusCommandTableVgpuToHost + 2 * v14;
  if ( !*((_QWORD *)a1 + 10) )
  {
    v16 = (struct _LUID *)*((_QWORD *)a1 + 15);
    if ( !v16 )
    {
      WdLogSingleEntry0(2LL);
      v27 = 477LL;
      v28 = L"Invalid extended header";
      WdLogGlobalForLineNumber = 477;
      goto LABEL_80;
    }
    v17 = (__int64 *)&v16[1];
    v18 = DXGVIRTUALMACHINE::AcquireVirtualGpuByLuid(*((DXGVIRTUALMACHINE **)a1 + 13), v16 + 1);
    *((_QWORD *)a1 + 10) = v18;
    if ( !v18 )
    {
      WdLogSingleEntry1(2LL, *v17);
      v27 = *v17;
      v28 = L"Failed to find virtual GPU by luid: 0x%I64x";
      WdLogGlobalForLineNumber = 483;
      goto LABEL_80;
    }
    v4 = 1;
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
    McTemplateK0pxq_EtwWriteTransfer(
      (REGHANDLE *)&DxgkControlGuid_Context,
      &EventVmBusProcessPacketWorkerBegin,
      v1,
      *((_QWORD *)a1 + 13) + 160LL,
      *v2,
      *((_DWORD *)v2 + 4));
LABEL_20:
  v19 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 13) + 339LL)
    || *((_BYTE *)a1 + 156)
    || (*(_DWORD *)(*((_QWORD *)a1 + 17) + 12LL) & 0x100) != 0 )
  {
LABEL_23:
    if ( *((_DWORD *)a1 + 36) < *((_DWORD *)v15 + 3) )
    {
      WdLogSingleEntry1(2LL, *((unsigned int *)a1 + 36));
      v31 = *((unsigned int *)a1 + 36);
      WdLogGlobalForLineNumber = 540;
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Invalid packet size: %I64n", v31, 0LL, 0LL, 0LL, 0LL);
      v19 = 1;
    }
    else
    {
      if ( *((_BYTE *)v15 + 8) )
        v20 = VmBusExecuteCommandInProcessContext(a1, *(unsigned __int8 (**)(struct DXGADAPTER_VMBUS_PACKET *))v15);
      else
        v20 = (*(__int64 (__fastcall **)(struct DXGADAPTER_VMBUS_PACKET *, __int64, __int64, __int64))v15)(
                a1,
                v5,
                v1,
                v10);
      v8 = v20;
    }
    if ( v4 )
      DXGK_VIRTUAL_GPU_PARAV::ReleaseVirtualGpuReference(*((DXGK_VIRTUAL_GPU_PARAV **)a1 + 10));
    if ( !v19 )
    {
LABEL_30:
      if ( !v8 )
        VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), 0LL, 0);
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
          ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)((char *)Global + 160), a1);
          return;
        }
        v25 = (const EVENT_DESCRIPTOR *)&EventVmBusProcessPacketWorkerEnd;
        LODWORD(v33) = v8;
        v26 = v36;
      }
      LODWORD(v32) = v26;
      McTemplateK0pxqt_EtwWriteTransfer(v21, v25, v22, *((_QWORD *)a1 + 13) + 160LL, v9, v32, v33);
      goto LABEL_33;
    }
LABEL_81:
    if ( !*((_BYTE *)DXGGLOBAL::GetGlobal() + 304882) )
      *(_BYTE *)(v7 + 69) = 1;
    goto LABEL_30;
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100000000LL) != 0 )
  {
    LODWORD(v32) = 0;
    McTemplateK0pxq_EtwWriteTransfer(
      (REGHANDLE *)&DxgkControlGuid_Context,
      &EventVmBusSecondaryWorkItem,
      v1,
      v7,
      v9,
      v32);
  }
  *((_BYTE *)a1 + 156) = 1;
  if ( v4 )
    DXGK_VIRTUAL_GPU_PARAV::ReleaseVirtualGpuReference(*((DXGK_VIRTUAL_GPU_PARAV **)a1 + 10));
  *((_QWORD *)a1 + 10) = 0LL;
  *((_QWORD *)a1 + 2) = VmBusProcessPacket;
  *((_QWORD *)a1 + 3) = a1;
  *(_QWORD *)a1 = 0LL;
  ExQueueWorkItem((PWORK_QUEUE_ITEM)a1, CustomPriorityWorkQueue|MaximumWorkQueue|0x8);
}

/*
 * XREFs of ?VmBusChannelProcessPacket@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@PEAXII@Z @ 0x140045CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000A750 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0pxqt_EtwWriteTransfer @ 0x140013278 (McTemplateK0pxqt_EtwWriteTransfer.c)
 *     ?GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE_DPC@@QEAAJXZ @ 0x1400461A8 (-GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE_DPC@@QEAAJXZ.c)
 *     ?QueueWorkItem@DXG_DEFERRED_WORK_QUEUE_DPC@@QEAAXPEAUDXG_DEFERRED_QUEUE_WORK_ITEM@@@Z @ 0x140046214 (-QueueWorkItem@DXG_DEFERRED_WORK_QUEUE_DPC@@QEAAXPEAUDXG_DEFERRED_QUEUE_WORK_ITEM@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1400462CC (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     McTemplateK0pxq_EtwWriteTransfer @ 0x14004C6F0 (McTemplateK0pxq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 */

void __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusChannelProcessPacket(
        struct VMBCHANNEL__ *a1,
        struct VMBPACKETCOMPLETION__ *a2,
        char *a3,
        unsigned int a4,
        unsigned int a5)
{
  int v8; // r8d
  __int64 v9; // r13
  char v10; // r12
  int v11; // ecx
  char *v12; // rdi
  char v13; // al
  unsigned int v14; // ebp
  __int64 v15; // r14
  struct DXGGLOBAL *Global; // rax
  char *v17; // rax
  char *v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  void *v22; // rdx
  const EVENT_DESCRIPTOR *v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rcx
  const wchar_t *v27; // rax
  __int64 v28; // rax
  const wchar_t *v29; // r9
  __int64 v30; // [rsp+28h] [rbp-80h]
  __int64 v31; // [rsp+30h] [rbp-78h]
  char *v32; // [rsp+60h] [rbp-48h]
  int v34; // [rsp+C8h] [rbp+20h]

  _InterlockedIncrement(&g_VgpuNumIncomingPackets);
  v34 = 1;
  v9 = ((__int64 (*)(void))qword_140160398)();
  v32 = 0LL;
  v10 = 1;
  v11 = 0;
  if ( *(_DWORD *)(v9 + 392) >= 0x28u )
  {
    if ( a4 < 0x10 )
    {
      WdLogSingleEntry0(2LL);
      v26 = 7123LL;
      WdLogGlobalForLineNumber = 7123;
      if ( !bTracingEnabled || (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) == 0 )
        goto LABEL_34;
      v27 = L"VmBusChannelProcessPacket: Invalid buffer size for extended header";
    }
    else
    {
      v11 = *(_DWORD *)a3;
      v32 = a3;
      if ( *(_DWORD *)a3 < a4 )
      {
        a4 -= v11;
        goto LABEL_2;
      }
      WdLogSingleEntry0(2LL);
      v26 = 7130LL;
      WdLogGlobalForLineNumber = 7130;
      if ( !bTracingEnabled || (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) == 0 )
        goto LABEL_34;
      v27 = L"VmBusChannelProcessPacket: Invalid ext header size";
    }
LABEL_41:
    McTemplateK0zqqzxxxxx_EtwWriteTransfer(v26, v24, v25, 0LL, 0, -1, v27, v26, 0, 0, 0, 0);
    goto LABEL_34;
  }
LABEL_2:
  if ( a4 < 0x10 )
  {
    WdLogSingleEntry0(2LL);
    v26 = 7137LL;
    WdLogGlobalForLineNumber = 7137;
    if ( !bTracingEnabled || (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) == 0 )
      goto LABEL_34;
    v27 = L"VmBusChannelProcessPacket: Unexpected buffer size less than DXGKVMB_COMMAND_BASE";
    goto LABEL_41;
  }
  v12 = &a3[v11];
  v13 = v12[12];
  if ( v13 != 1 )
  {
    if ( v13 )
    {
      WdLogSingleEntry0(2LL);
      v28 = 7189LL;
      v29 = L"VmBusChannelProcessPacket: Invalid channel type";
    }
    else
    {
      v34 = 0;
      if ( a4 >= 0x18 )
      {
        v14 = *((_DWORD *)v12 + 4);
        if ( v14 < 0x45 )
        {
          v15 = *(_QWORD *)v12;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) == 0 )
            goto LABEL_8;
          v22 = &EventVmBusProcessPacketDpcBegin;
          goto LABEL_48;
        }
        WdLogSingleEntry1(2LL, *((int *)v12 + 4));
        v28 = *((int *)v12 + 4);
        v29 = L"Invalid command is passed: %I64n";
        WdLogGlobalForLineNumber = 7176;
LABEL_53:
        DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v29, v28, 0LL, 0LL, 0LL, 0LL);
        goto LABEL_34;
      }
      WdLogSingleEntry0(2LL);
      v28 = 7170LL;
      v29 = L"VmBusChannelProcessPacket: Unexpected buffer size less than DXGKVMB_COMMAND_VGPU_TO_HOST";
    }
LABEL_52:
    WdLogGlobalForLineNumber = v28;
    goto LABEL_53;
  }
  if ( a4 < 0x18 )
  {
    WdLogSingleEntry0(2LL);
    v28 = 7146LL;
    v29 = L"VmBusChannelProcessPacket: Unexpected buffer size less than DXGKVMB_COMMAND_VM_TO_HOST";
    goto LABEL_52;
  }
  v14 = *((_DWORD *)v12 + 4);
  if ( v14 - 1000 > 0x16 )
  {
    WdLogSingleEntry1(2LL, *((int *)v12 + 4));
    v28 = *((int *)v12 + 4);
    v29 = L"Invalid VM to Host command is passed: %I64n";
    WdLogGlobalForLineNumber = 7153;
    goto LABEL_53;
  }
  v15 = *(_QWORD *)v12;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) == 0 )
    goto LABEL_8;
  v22 = &EventVmBusProcessPacketGlobalDpcBegin;
LABEL_48:
  McTemplateK0pxq_EtwWriteTransfer((unsigned int)&DxgkControlGuid_Context, (_DWORD)v22, v8, (_DWORD)a1, v15, v14);
LABEL_8:
  Global = DXGGLOBAL::GetGlobal();
  v17 = (char *)ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)((char *)Global + 160));
  v18 = v17;
  if ( v17 )
  {
    memset(v17, 0, 0xA0uLL);
    _InterlockedIncrement(&g_VgpuNumWorkItemQueued);
    *((_QWORD *)v18 + 16) = a2;
    *((_QWORD *)v18 + 15) = v32;
    *((_QWORD *)v18 + 9) = a1;
    *((_DWORD *)v18 + 36) = a4;
    *((_QWORD *)v18 + 17) = v12;
    *((_DWORD *)v18 + 37) = a5;
    *((_QWORD *)v18 + 12) = *(_QWORD *)(v9 + 56);
    *((_QWORD *)v18 + 6) = VmBusProcessPacket;
    *((_QWORD *)v18 + 7) = v18;
    if ( *(_BYTE *)(v9 + 339)
      && ((unsigned int)DXG_DEFERRED_WORK_QUEUE_DPC::GetNumWorkItems((DXG_DEFERRED_WORK_QUEUE_DPC *)(v9 + 408))
       || (*((_DWORD *)v12 + 3) & 0x100) != 0) )
    {
      DXG_DEFERRED_WORK_QUEUE_DPC::QueueWorkItem(
        (DXG_DEFERRED_WORK_QUEUE_DPC *)(v9 + 408),
        (struct DXG_DEFERRED_QUEUE_WORK_ITEM *)(v18 + 32));
    }
    else
    {
      v18[156] = 1;
      *((_QWORD *)v18 + 2) = VmBusProcessPacket;
      *((_QWORD *)v18 + 3) = v18;
      *(_QWORD *)v18 = 0LL;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)v18, CustomPriorityWorkQueue|MaximumWorkQueue|0x8);
    }
    v10 = 0;
  }
  else
  {
    WdLogSingleEntry0(6LL);
    v19 = 7240LL;
    WdLogGlobalForLineNumber = 7240;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        7240LL,
        v21,
        v20,
        0LL,
        1,
        -1,
        L"Failed to allocated a work item",
        72,
        0,
        0,
        0,
        0);
  }
  if ( v34 == 1 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) == 0 )
      goto LABEL_16;
    v23 = (const EVENT_DESCRIPTOR *)&EventVmBusProcessPacketGlobalDpcEnd;
  }
  else
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) == 0 )
      goto LABEL_16;
    v23 = (const EVENT_DESCRIPTOR *)&EventVmBusProcessPacketDpcEnd;
  }
  LODWORD(v31) = v18 != 0LL;
  LODWORD(v30) = v14;
  McTemplateK0pxqt_EtwWriteTransfer(v19, v23, v20, a1, v15, v30, v31);
LABEL_16:
  if ( v10 )
LABEL_34:
    VmBusCompletePacket(a2, 0LL, 0);
}

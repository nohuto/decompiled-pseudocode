/*
 * XREFs of ?VmBusChannelProcessPacket@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@PEAXII@Z @ 0x1400462B0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pxqt_EtwWriteTransfer @ 0x140016478 (McTemplateK0pxqt_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x140019D30 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE_DPC@@QEAAJXZ @ 0x1400467B8 (-GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE_DPC@@QEAAJXZ.c)
 *     ?QueueWorkItem@DXG_DEFERRED_WORK_QUEUE_DPC@@QEAAXPEAUDXG_DEFERRED_QUEUE_WORK_ITEM@@@Z @ 0x14004683C (-QueueWorkItem@DXG_DEFERRED_WORK_QUEUE_DPC@@QEAAXPEAUDXG_DEFERRED_QUEUE_WORK_ITEM@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140046900 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     McTemplateK0pxq_EtwWriteTransfer @ 0x14004CC40 (McTemplateK0pxq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memset @ 0x14009FCC0 (memset.c)
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
  int v21; // edx
  void *v22; // rdx
  const EVENT_DESCRIPTOR *v23; // rdx
  int v24; // edx
  __int64 v25; // r8
  int v26; // edx
  __int64 v27; // r8
  int v28; // edx
  __int64 v29; // r8
  __int64 v30; // rax
  const wchar_t *v31; // r9
  __int64 v32; // [rsp+28h] [rbp-80h]
  __int64 v33; // [rsp+30h] [rbp-78h]
  char *v34; // [rsp+60h] [rbp-48h]
  int v36; // [rsp+C8h] [rbp+20h]

  _InterlockedIncrement(&g_VgpuNumIncomingPackets);
  v36 = 1;
  v9 = ((__int64 (*)(void))qword_14015D378)();
  v34 = 0LL;
  v10 = 1;
  v11 = 0;
  if ( *(_DWORD *)(v9 + 392) >= 0x28u )
  {
    if ( a4 < 0x10 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 7089;
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          7089,
          v26,
          v27,
          0LL,
          0,
          -1,
          L"VmBusChannelProcessPacket: Invalid buffer size for extended header",
          7089LL,
          0LL,
          0LL,
          0LL,
          0LL);
      goto LABEL_35;
    }
    v11 = *(_DWORD *)a3;
    v34 = a3;
    if ( *(_DWORD *)a3 >= a4 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 7096;
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          7096,
          v24,
          v25,
          0LL,
          0,
          -1,
          L"VmBusChannelProcessPacket: Invalid ext header size",
          7096LL,
          0LL,
          0LL,
          0LL,
          0LL);
      goto LABEL_35;
    }
    a4 -= v11;
  }
  if ( a4 < 0x10 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 7103;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        7103,
        v28,
        v29,
        0LL,
        0,
        -1,
        L"VmBusChannelProcessPacket: Unexpected buffer size less than DXGKVMB_COMMAND_BASE",
        7103LL,
        0LL,
        0LL,
        0LL,
        0LL);
    goto LABEL_35;
  }
  v12 = &a3[v11];
  v13 = v12[12];
  if ( v13 != 1 )
  {
    if ( v13 )
    {
      WdLogSingleEntry0(2LL);
      v30 = 7155LL;
      v31 = L"VmBusChannelProcessPacket: Invalid channel type";
    }
    else
    {
      v36 = 0;
      if ( a4 >= 0x18 )
      {
        v14 = *((_DWORD *)v12 + 4);
        if ( v14 < 0x45 )
        {
          v15 = *(_QWORD *)v12;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) == 0 )
            goto LABEL_8;
          v22 = &EventVmBusProcessPacketDpcBegin;
          goto LABEL_47;
        }
        WdLogSingleEntry1(2LL, *((int *)v12 + 4));
        v30 = *((int *)v12 + 4);
        v31 = L"Invalid command is passed: %I64n";
        WdLogGlobalForLineNumber = 7142;
LABEL_52:
        DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v31, v30, 0LL, 0LL, 0LL, 0LL);
        goto LABEL_35;
      }
      WdLogSingleEntry0(2LL);
      v30 = 7136LL;
      v31 = L"VmBusChannelProcessPacket: Unexpected buffer size less than DXGKVMB_COMMAND_VGPU_TO_HOST";
    }
LABEL_51:
    WdLogGlobalForLineNumber = v30;
    goto LABEL_52;
  }
  if ( a4 < 0x18 )
  {
    WdLogSingleEntry0(2LL);
    v30 = 7112LL;
    v31 = L"VmBusChannelProcessPacket: Unexpected buffer size less than DXGKVMB_COMMAND_VM_TO_HOST";
    goto LABEL_51;
  }
  v14 = *((_DWORD *)v12 + 4);
  if ( v14 - 1000 > 0x16 )
  {
    WdLogSingleEntry1(2LL, *((int *)v12 + 4));
    v30 = *((int *)v12 + 4);
    v31 = L"Invalid VM to Host command is passed: %I64n";
    WdLogGlobalForLineNumber = 7119;
    goto LABEL_52;
  }
  v15 = *(_QWORD *)v12;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) == 0 )
    goto LABEL_8;
  v22 = &EventVmBusProcessPacketGlobalDpcBegin;
LABEL_47:
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
    *((_QWORD *)v18 + 15) = v34;
    *((_QWORD *)v18 + 9) = a1;
    *((_DWORD *)v18 + 36) = a4;
    *((_QWORD *)v18 + 17) = v12;
    *((_DWORD *)v18 + 37) = a5;
    *((_QWORD *)v18 + 12) = *(_QWORD *)(v9 + 56);
    *((_QWORD *)v18 + 6) = VmBusProcessPacket;
    *((_QWORD *)v18 + 7) = v18;
    if ( *(_BYTE *)(v9 + 339)
      && ((unsigned int)DXG_DEFERRED_WORK_QUEUE_DPC::GetNumWorkItems((DXG_DEFERRED_WORK_QUEUE_DPC *)(v9 + 400))
       || (*((_DWORD *)v12 + 3) & 0x100) != 0) )
    {
      DXG_DEFERRED_WORK_QUEUE_DPC::QueueWorkItem(
        (DXG_DEFERRED_WORK_QUEUE_DPC *)(v9 + 400),
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
    v19 = 7206LL;
    WdLogGlobalForLineNumber = 7206;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        7206,
        v21,
        v20,
        0LL,
        1,
        -1,
        L"Failed to allocated a work item",
        7206LL,
        0LL,
        0LL,
        0LL,
        0LL);
  }
  if ( v36 == 1 )
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
  LODWORD(v33) = v18 != 0LL;
  LODWORD(v32) = v14;
  McTemplateK0pxqt_EtwWriteTransfer(v19, v23, v20, a1, v15, v32, v33);
LABEL_16:
  if ( v10 )
LABEL_35:
    VmBusCompletePacket(a2, 0LL, 0);
}

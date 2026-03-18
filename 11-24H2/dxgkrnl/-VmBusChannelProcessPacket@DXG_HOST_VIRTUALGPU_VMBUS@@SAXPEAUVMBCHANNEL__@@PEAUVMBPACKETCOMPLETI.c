/*
 * XREFs of ?VmBusChannelProcessPacket@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@PEAXII@Z @ 0x14007B650
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0pxqt_EtwWriteTransfer @ 0x140013278 (McTemplateK0pxqt_EtwWriteTransfer.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1400462CC (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     McTemplateK0pxq_EtwWriteTransfer @ 0x14004C6F0 (McTemplateK0pxq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 */

void __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusChannelProcessPacket(
        struct VMBCHANNEL__ *a1,
        struct VMBPACKETCOMPLETION__ *a2,
        char *a3,
        unsigned int a4,
        unsigned int a5)
{
  int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rax
  const wchar_t *v14; // r9
  char *v15; // rdi
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  unsigned int v18; // ebp
  __int64 v19; // r15
  struct DXGGLOBAL *Global; // rax
  struct _WORK_QUEUE_ITEM *v21; // rax
  struct _WORK_QUEUE_ITEM *v22; // r14
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // [rsp+28h] [rbp-60h]
  __int64 v26; // [rsp+30h] [rbp-58h]
  char *v27; // [rsp+50h] [rbp-38h]

  _InterlockedIncrement(&g_VgpuNumIncomingPackets);
  v9 = 0;
  v27 = 0LL;
  v10 = ((__int64 (*)(void))qword_140160398)();
  v11 = 0LL;
  v12 = *(_QWORD *)(v10 + 104);
  if ( *(_DWORD *)(v12 + 392) >= 0x28u )
  {
    if ( a4 < 0x10 )
    {
      WdLogSingleEntry0(2LL);
      v13 = 856LL;
      v14 = L"VmBusChannelProcessPacket: Invalid buffer size for extended header";
      WdLogGlobalForLineNumber = 856;
LABEL_17:
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v14, v13, 0LL, 0LL, 0LL, 0LL);
      VmBusCompletePacket(a2, 0LL, 0);
      return;
    }
    v11 = *(unsigned int *)a3;
    v27 = a3;
    if ( (unsigned int)v11 >= a4 )
    {
      WdLogSingleEntry0(2LL);
      v13 = 863LL;
      v14 = L"VmBusChannelProcessPacket: Invalid ext header size";
      WdLogGlobalForLineNumber = 863;
      goto LABEL_17;
    }
    a4 -= v11;
  }
  if ( a4 < 0x18 )
  {
    WdLogSingleEntry0(2LL);
    v13 = 870LL;
    v14 = L"VmBusChannelProcessPacket: Unexpected buffer size less than DXGKVMB_COMMAND_VGPU_TO_HOST";
    WdLogGlobalForLineNumber = 870;
    goto LABEL_17;
  }
  v15 = &a3[(unsigned int)v11];
  if ( *(_BYTE *)(v12 + 339) )
  {
    v16 = *((int *)v15 + 4);
    if ( (unsigned int)v16 > 0x24 || (v17 = 0x1040004000LL, !_bittest64(&v17, v16)) )
    {
      WdLogSingleEntry0(2LL);
      v13 = 884LL;
      v14 = L"VmBusChannelProcessPacket: Virtual GPU channel is disabled";
      WdLogGlobalForLineNumber = 884;
      goto LABEL_17;
    }
  }
  if ( v15[12] )
  {
    WdLogSingleEntry0(2LL);
    v13 = 889LL;
    v14 = L"VmBusChannelProcessPacket: Invalid channel type";
    WdLogGlobalForLineNumber = 889;
    goto LABEL_17;
  }
  v18 = *((_DWORD *)v15 + 4);
  if ( v18 >= 0x45 )
  {
    WdLogSingleEntry1(2LL, *((int *)v15 + 4));
    v13 = *((int *)v15 + 4);
    v14 = L"Invalid command is passed: %I64n";
    WdLogGlobalForLineNumber = 894;
    goto LABEL_17;
  }
  v19 = *(_QWORD *)v15;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
    McTemplateK0pxq_EtwWriteTransfer(
      (REGHANDLE *)&DxgkControlGuid_Context,
      &EventVmBusProcessPacketDpcBegin,
      v11,
      a1,
      v19,
      *((_DWORD *)v15 + 4));
  Global = DXGGLOBAL::GetGlobal();
  v21 = (struct _WORK_QUEUE_ITEM *)ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)((char *)Global + 160));
  v22 = v21;
  if ( v21 )
  {
    memset(v21, 0, 0xA0uLL);
    _InterlockedIncrement(&g_VgpuNumWorkItemQueued);
    HIDWORD(v22[4].WorkerRoutine) = a5;
    v22[3].Parameter = v27;
    v22[2].List.Blink = (struct _LIST_ENTRY *)a1;
    LODWORD(v22[4].WorkerRoutine) = a4;
    v22[4].List.Flink = (struct _LIST_ENTRY *)a2;
    v22[4].List.Blink = (struct _LIST_ENTRY *)v15;
    v22[2].WorkerRoutine = (PWORKER_THREAD_ROUTINE)((__int64 (__fastcall *)(struct VMBCHANNEL__ *))qword_140160398)(a1);
    BYTE4(v22[4].Parameter) = 1;
    v22->WorkerRoutine = (PWORKER_THREAD_ROUTINE)VmBusProcessPacket;
    v22->Parameter = v22;
    v22->List.Flink = 0LL;
    ExQueueWorkItem(v22, CustomPriorityWorkQueue|MaximumWorkQueue|0x8);
  }
  else
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 922;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Failed to allocated a work item",
      922LL,
      0LL,
      0LL,
      0LL,
      0LL);
    VmBusCompletePacket(a2, 0LL, 0);
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
  {
    LOBYTE(v9) = v22 != 0LL;
    LODWORD(v26) = v9;
    LODWORD(v25) = v18;
    McTemplateK0pxqt_EtwWriteTransfer(v23, &EventVmBusProcessPacketDpcEnd, v24, a1, v19, v25, v26);
  }
}

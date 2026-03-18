/*
 * XREFs of ?VmBusChannelProcessPacket@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@PEAXII@Z @ 0x14007AEC0
 * Callers:
 *     <none>
 * Callees:
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x14001294C (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140046900 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     McTemplateK0pxq_EtwWriteTransfer @ 0x14004CC40 (McTemplateK0pxq_EtwWriteTransfer.c)
 *     ?PropagatePresentHistoryToken@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXPEAU_D3DKMT_PRESENTHISTORYTOKEN@@_N111111PEAX@Z @ 0x14007ABE8 (-PropagatePresentHistoryToken@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXPEAU_D3DKMT_PRESENTHISTORYTOKEN@.c)
 *     ?VmBusSignalGuestEvent@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUDXGKVMB_COMMAND_SIGNALGUESTEVENT@@@Z @ 0x14007B6A0 (-VmBusSignalGuestEvent@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUDXGKVMB_COMMAND_SIGNALGUESTEVENT@@@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memset @ 0x14009FCC0 (memset.c)
 */

void __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusChannelProcessPacket(
        struct VMBCHANNEL__ *a1,
        struct _LIST_ENTRY *a2,
        __int64 a3,
        int a4,
        unsigned int a5)
{
  int v9; // r14d
  __int64 v10; // r15
  int v11; // ecx
  bool v12; // di
  int v13; // ecx
  struct DXGGLOBAL *Global; // rax
  struct _WORK_QUEUE_ITEM *v15; // rax
  struct _WORK_QUEUE_ITEM *v16; // rsi
  __int64 v17; // r8
  ULONG64 v18; // rcx
  _QWORD *v19; // rcx
  void *v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  char v23; // [rsp+20h] [rbp-58h]
  __int64 v24; // [rsp+28h] [rbp-50h]
  bool v25; // [rsp+30h] [rbp-48h]

  _InterlockedIncrement(&g_VgpuNumIncomingPackets);
  v9 = *(_DWORD *)(a3 + 16);
  v10 = *(_QWORD *)a3;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
  {
    LODWORD(v24) = *(_DWORD *)(a3 + 16);
    v23 = *(_QWORD *)a3;
    McTemplateK0pxq_EtwWriteTransfer(
      (REGHANDLE *)&DxgkControlGuid_Context,
      &EventVmBusProcessPacketHostToVmDpcBegin,
      a3,
      a1);
  }
  v11 = *(_DWORD *)(a3 + 16);
  v12 = 0;
  if ( v11 )
  {
    v13 = v11 - 1;
    if ( v13 )
    {
      if ( v13 == 1 )
      {
        v18 = *(_QWORD *)(a3 + 24);
        if ( v18 > MmUserProbeAddress )
        {
          v19 = (_QWORD *)(v18 + 16);
          if ( v19 )
          {
            if ( ((*(_DWORD *)(a3 + 40) >> 1) & 0xF) != 0 )
            {
              if ( ((*(_DWORD *)(a3 + 40) >> 1) & 0xF) == 1 )
                *v19 = *(_QWORD *)(a3 + 32);
            }
            else
            {
              *(_DWORD *)v19 = *(_DWORD *)(a3 + 32);
            }
            if ( (*(_DWORD *)(a3 + 40) & 1) != 0 )
              CRefCountedBuffer::RefCountedBufferRelease(*(PVOID *)(a3 + 24));
          }
        }
      }
      else
      {
        Global = DXGGLOBAL::GetGlobal();
        v15 = (struct _WORK_QUEUE_ITEM *)ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)((char *)Global + 160));
        v16 = v15;
        if ( v15 )
        {
          memset(v15, 0, 0xA0uLL);
          v16->Parameter = v16;
          v16->WorkerRoutine = (PWORKER_THREAD_ROUTINE)VmBusProcessPacket;
          v16->List.Flink = 0LL;
          _InterlockedIncrement(&g_VgpuNumWorkItemQueued);
          HIDWORD(v16[4].WorkerRoutine) = a5;
          v16[2].List.Blink = (struct _LIST_ENTRY *)a1;
          LODWORD(v16[4].WorkerRoutine) = a4;
          v16[4].List.Flink = a2;
          v16[4].List.Blink = (struct _LIST_ENTRY *)a3;
          v16[3].WorkerRoutine = (PWORKER_THREAD_ROUTINE)((__int64 (__fastcall *)(struct VMBCHANNEL__ *))qword_14015D378)(a1);
          LODWORD(v16[4].Parameter) = *((_DWORD *)DXGGLOBAL::GetGlobal() + 426);
          ExQueueWorkItem(v16, CustomPriorityWorkQueue|MaximumWorkQueue|0x8);
          goto LABEL_28;
        }
        WdLogSingleEntry0(6LL);
        WdLogGlobalForLineNumber = 15009;
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          0xFFFFFFFFLL,
          L"Failed to allocated a work item",
          15009LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    else
    {
      v20 = *(void **)(a3 + 40);
      if ( (!v20 || (unsigned __int64)v20 > MmUserProbeAddress)
        && *(_QWORD *)(a3 + 24) > MmUserProbeAddress
        && *(_QWORD *)(a3 + 32) > MmUserProbeAddress )
      {
        if ( v20 )
          CRefCountedBuffer::RefCountedBufferRelease(v20);
        if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 426) >= 0x18u )
          v12 = *(_BYTE *)(a3 + 48) & 1;
        DXGPRESENTHISTORYTOKENQUEUE::PropagatePresentHistoryToken(
          *(PKSPIN_LOCK *)(a3 + 24),
          *(struct _D3DKMT_PRESENTHISTORYTOKEN **)(a3 + 32),
          v21,
          v22,
          v23,
          v24,
          v25,
          v12);
      }
    }
  }
  else
  {
    DXG_GUEST_GLOBAL_VMBUS::VmBusSignalGuestEvent((struct DXGKVMB_COMMAND_SIGNALGUESTEVENT *)a3);
  }
  VmBusCompletePacket((struct VMBPACKETCOMPLETION__ *)a2, 0LL, 0);
LABEL_28:
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
  {
    LODWORD(v24) = v9;
    McTemplateK0pxq_EtwWriteTransfer(
      (REGHANDLE *)&DxgkControlGuid_Context,
      &EventVmBusProcessPacketHostToVmDpcEnd,
      v17,
      a1,
      v10,
      v24);
  }
}

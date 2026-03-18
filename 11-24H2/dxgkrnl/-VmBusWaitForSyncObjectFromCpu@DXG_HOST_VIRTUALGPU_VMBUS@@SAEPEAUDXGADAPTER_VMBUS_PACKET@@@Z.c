/*
 * XREFs of ?VmBusWaitForSyncObjectFromCpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1403DD930
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z @ 0x140013690 (-ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400456A8 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1400462CC (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140051578 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGC.c)
 *     ?AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z @ 0x140058200 (-AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z.c)
 *     ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@HPEAX1@Z @ 0x1402AC610 (-DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusWaitForSyncObjectFromCpu(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // bl
  __int64 v3; // rax
  __int64 v4; // r14
  __int64 Pool2; // rsi
  __int64 v6; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned int v10; // eax
  unsigned int v11; // ecx
  __int64 v12; // rax
  void *v13; // r9
  _BYTE v14[24]; // [rsp+50h] [rbp-9h] BYREF
  struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU v15; // [rsp+68h] [rbp+Fh] BYREF
  int v16; // [rsp+C0h] [rbp+67h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v14,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    v3 = CastToVmBusCommand<DXGKVMB_COMMAND_VSYNCREMOTINGCTRL>((__int64)a1);
    v4 = v3;
    if ( v3 )
    {
      v16 = -1073741811;
      memset(&v15, 0, sizeof(v15));
      Pool2 = 0LL;
      v6 = *(unsigned int *)(v3 + 28);
      if ( (_DWORD)v6 && (v8 = 4 * v6, v8 <= 0xFFFFFFFF) && (v9 = 8LL * *(unsigned int *)(v4 + 28), v9 <= 0xFFFFFFFF) )
      {
        v10 = v8 + 56;
        if ( v10 < 0x38 )
        {
          WdLogSingleEntry0(3LL);
          WdLogGlobalForLineNumber = 4217;
        }
        else
        {
          v11 = v10 + v9;
          if ( v11 < v10 )
          {
            WdLogSingleEntry0(3LL);
            WdLogGlobalForLineNumber = 4222;
          }
          else if ( *((_DWORD *)a1 + 36) >= v11 )
          {
            if ( *(_QWORD *)(v4 + 40) )
            {
              Pool2 = ExAllocatePool2(64LL, 40LL, 1265072196LL);
              if ( Pool2 )
              {
                v12 = *(_QWORD *)(v4 + 40);
                *(_QWORD *)Pool2 = *(_QWORD *)(*((_QWORD *)a1 + 10) + 104LL) + 160LL;
                *(_QWORD *)(Pool2 + 8) = v12;
                *(_BYTE *)(Pool2 + 16) = *(_BYTE *)(v4 + 48);
                *(_BYTE *)(Pool2 + 19) = (*(_DWORD *)(*((_QWORD *)a1 + 11) + 408LL) & 0x10) != 0;
                DXG_SIGNAL_GUEST_CPU_EVENT::AcquireReference((struct DXG_SIGNAL_GUEST_CPU_EVENT *)Pool2);
                v15.ObjectHandleArray = (const D3DKMT_HANDLE *)(v4 + 56);
                v15.FenceValueArray = (const UINT64 *)(v4 + 4 * (*(unsigned int *)(v4 + 28) + 14LL));
                v15.Flags.Value = *(_DWORD *)(v4 + 32);
                v15.hDevice = *(_DWORD *)(v4 + 24);
                v15.ObjectCount = *(_DWORD *)(v4 + 28);
                v15.hAsyncEvent = (HANDLE)Pool2;
                v16 = DxgkWaitForSynchronizationObjectFromCpuInternal(&v15, 0, (void *)Pool2, v13);
              }
              else
              {
                WdLogSingleEntry0(6LL);
                WdLogGlobalForLineNumber = 4243;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262145LL,
                  0xFFFFFFFFLL,
                  L"Failed to allocate memory for DXG_SIGNAL_GUEST_CPU_EVENT",
                  4243LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                v16 = -1073741801;
              }
            }
            else
            {
              WdLogSingleEntry0(3LL);
              WdLogGlobalForLineNumber = 4236;
            }
          }
          else
          {
            WdLogSingleEntry0(3LL);
            WdLogGlobalForLineNumber = 4227;
          }
        }
      }
      else
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 4212;
      }
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v16, 4u);
      if ( v16 < 0 )
      {
        if ( Pool2 )
          DXG_SIGNAL_GUEST_CPU_EVENT::ReleaseReference((struct DXG_SIGNAL_GUEST_CPU_EVENT *)Pool2);
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 4276;
      }
      v2 = 1;
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v14);
    return v2;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 4197;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"The adapter is already closed by the guest",
      4197LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v14);
    return 0;
  }
}

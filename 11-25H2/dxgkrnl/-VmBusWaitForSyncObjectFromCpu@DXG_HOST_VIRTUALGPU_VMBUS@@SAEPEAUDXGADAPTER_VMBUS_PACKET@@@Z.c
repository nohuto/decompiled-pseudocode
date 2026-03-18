/*
 * XREFs of ?VmBusWaitForSyncObjectFromCpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1403E5400
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x140013BA0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140014A20 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z @ 0x14001F680 (-ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140046900 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140051B28 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGC.c)
 *     ?AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z @ 0x140058780 (-AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z.c)
 *     ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@HPEAX1@Z @ 0x1402A61E0 (-DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusWaitForSyncObjectFromCpu(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // bl
  __int64 v3; // rax
  __int64 v4; // r9
  __int64 v5; // r14
  __int64 Pool2; // rsi
  __int64 v7; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned int v11; // eax
  unsigned int v12; // ecx
  __int64 v13; // rax
  void *v14; // r9
  _BYTE v15[24]; // [rsp+50h] [rbp-9h] BYREF
  struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU v16; // [rsp+68h] [rbp+Fh] BYREF
  int v17; // [rsp+C0h] [rbp+67h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v15, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v15);
  v2 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    v3 = CastToVmBusCommand<DXGKVMB_COMMAND_VSYNCREMOTINGCTRL>((__int64)a1);
    v5 = v3;
    if ( v3 )
    {
      v17 = -1073741811;
      memset(&v16, 0, sizeof(v16));
      Pool2 = 0LL;
      v7 = *(unsigned int *)(v3 + 28);
      if ( (_DWORD)v7 && (v9 = 4 * v7, v9 <= 0xFFFFFFFF) && (v10 = 8LL * *(unsigned int *)(v5 + 28), v10 <= 0xFFFFFFFF) )
      {
        v11 = v9 + 56;
        if ( v11 < 0x38 )
        {
          WdLogSingleEntry0(3LL);
          WdLogGlobalForLineNumber = 4211;
        }
        else
        {
          v12 = v11 + v10;
          if ( v12 < v11 )
          {
            WdLogSingleEntry0(3LL);
            WdLogGlobalForLineNumber = 4216;
          }
          else if ( *((_DWORD *)a1 + 36) >= v12 )
          {
            if ( *(_QWORD *)(v5 + 40) )
            {
              Pool2 = ExAllocatePool2(64LL, 40LL, 1265072196LL, v4);
              if ( Pool2 )
              {
                v13 = *(_QWORD *)(v5 + 40);
                *(_QWORD *)Pool2 = *(_QWORD *)(*((_QWORD *)a1 + 10) + 104LL) + 160LL;
                *(_QWORD *)(Pool2 + 8) = v13;
                *(_BYTE *)(Pool2 + 16) = *(_BYTE *)(v5 + 48);
                *(_BYTE *)(Pool2 + 19) = (*(_DWORD *)(*((_QWORD *)a1 + 11) + 408LL) & 0x10) != 0;
                DXG_SIGNAL_GUEST_CPU_EVENT::AcquireReference((struct DXG_SIGNAL_GUEST_CPU_EVENT *)Pool2);
                v16.ObjectHandleArray = (const D3DKMT_HANDLE *)(v5 + 56);
                v16.FenceValueArray = (const UINT64 *)(v5 + 4 * (*(unsigned int *)(v5 + 28) + 14LL));
                v16.Flags.Value = *(_DWORD *)(v5 + 32);
                v16.hDevice = *(_DWORD *)(v5 + 24);
                v16.ObjectCount = *(_DWORD *)(v5 + 28);
                v16.hAsyncEvent = (HANDLE)Pool2;
                v17 = DxgkWaitForSynchronizationObjectFromCpuInternal(&v16, 0, (void *)Pool2, v14);
              }
              else
              {
                WdLogSingleEntry0(6LL);
                WdLogGlobalForLineNumber = 4237;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262145,
                  0xFFFFFFFFLL,
                  L"Failed to allocate memory for DXG_SIGNAL_GUEST_CPU_EVENT",
                  4237LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                v17 = -1073741801;
              }
            }
            else
            {
              WdLogSingleEntry0(3LL);
              WdLogGlobalForLineNumber = 4230;
            }
          }
          else
          {
            WdLogSingleEntry0(3LL);
            WdLogGlobalForLineNumber = 4221;
          }
        }
      }
      else
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 4206;
      }
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v17, 4u);
      if ( v17 < 0 )
      {
        if ( Pool2 )
          DXG_SIGNAL_GUEST_CPU_EVENT::ReleaseReference((struct DXG_SIGNAL_GUEST_CPU_EVENT *)Pool2);
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 4270;
      }
      v2 = 1;
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v15);
    return v2;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 4191;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"The adapter is already closed by the guest",
      4191LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v15);
    return 0;
  }
}

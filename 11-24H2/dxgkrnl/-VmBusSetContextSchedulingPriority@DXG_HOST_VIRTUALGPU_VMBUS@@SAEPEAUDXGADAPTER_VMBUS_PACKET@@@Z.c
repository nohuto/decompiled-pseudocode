/*
 * XREFs of ?VmBusSetContextSchedulingPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14022FC70
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400456A8 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1400462CC (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140059048 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEA.c)
 *     DxgkSetContextInProcessSchedulingPriority @ 0x1403C11E0 (DxgkSetContextInProcessSchedulingPriority.c)
 *     DxgkSetContextSchedulingPriority @ 0x1403E2600 (DxgkSetContextSchedulingPriority.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSetContextSchedulingPriority(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // bl
  char v4; // si
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  _BYTE v8[32]; // [rsp+50h] [rbp-28h] BYREF
  int v9; // [rsp+80h] [rbp+8h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v8,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 3225;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"The adapter is already closed by the guest",
      3225LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v8);
    return 0;
  }
  v9 = -1073741811;
  v4 = 0;
  v5 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>((__int64)a1);
  if ( v5 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 12) + 592LL) + 392LL) > 0x10u )
    {
      if ( *((_DWORD *)a1 + 36) < 0x28u )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 3235;
        DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Invalid packet size", 3235LL, 0LL, 0LL, 0LL, 0LL);
LABEL_12:
        VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v9, 4u);
        v2 = 1;
        goto LABEL_13;
      }
      v4 = *(_BYTE *)(v5 + 32);
    }
    v6 = v5 + 24;
    if ( v4 )
      v7 = DxgkSetContextInProcessSchedulingPriority(v6);
    else
      v7 = DxgkSetContextSchedulingPriority(v6);
    v9 = v7;
    goto LABEL_12;
  }
LABEL_13:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v8);
  return v2;
}

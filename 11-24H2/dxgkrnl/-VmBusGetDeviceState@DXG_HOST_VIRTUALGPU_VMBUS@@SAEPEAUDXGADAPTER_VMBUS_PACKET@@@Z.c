/*
 * XREFs of ?VmBusGetDeviceState@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402A9CB0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400456A8 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1400462CC (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_GETDEVICESTATE_VB@@@@YAPEAUDXGKVMB_COMMAND_GETDEVICESTATE_VB@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1400516B8 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_GETDEVICESTATE_VB@@@@YAPEAUDXGKVMB_COMMAND_GETDEVICESTATE.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?ConvertHostVidPnTargetIdToVidPnSourceId@DXG_HOST_VIRTUALGPU_VMBUS@@CAJIIPEAI@Z @ 0x1402A9A9C (-ConvertHostVidPnTargetIdToVidPnSourceId@DXG_HOST_VIRTUALGPU_VMBUS@@CAJIIPEAI@Z.c)
 *     DxgkGetDeviceStateInternal @ 0x1402AB150 (DxgkGetDeviceStateInternal.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusGetDeviceState(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // bl
  unsigned int v3; // r14d
  __int64 v4; // rdi
  unsigned int v5; // edx
  __int64 v6; // rcx
  __int64 v7; // rdx
  _BYTE v9[32]; // [rsp+50h] [rbp-19h] BYREF
  _OWORD v10[4]; // [rsp+70h] [rbp+7h] BYREF
  unsigned int v11; // [rsp+D0h] [rbp+67h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v9,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    v3 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 12) + 592LL) + 392LL);
    v4 = CastToVmBusCommand<DXGKVMB_COMMAND_GETDEVICESTATE_VB>((__int64)a1);
    if ( !v4 )
    {
LABEL_10:
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v9);
      return v2;
    }
    memset(v10, 0, sizeof(v10));
    v10[0] = *(_OWORD *)(v4 + 24);
    v10[1] = *(_OWORD *)(v4 + 40);
    v10[2] = *(_OWORD *)(v4 + 56);
    *(_QWORD *)&v10[3] = *(_QWORD *)(v4 + 72);
    if ( v3 >= 0x20 && *(_DWORD *)(v4 + 28) == 4 && (*(_BYTE *)(v4 + 80) & 1) != 0 )
    {
      v5 = *(_DWORD *)(v4 + 32);
      v6 = *(unsigned int *)(v4 + 24);
      v11 = 0;
      DWORD2(v10[3]) = DXG_HOST_VIRTUALGPU_VMBUS::ConvertHostVidPnTargetIdToVidPnSourceId(v6, v5, &v11);
      if ( SDWORD2(v10[3]) < 0 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 4465;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Fail to locate VidPnSourceId",
          4465LL,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_9;
      }
      DWORD2(v10[0]) = v11;
    }
    LOBYTE(v7) = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
    DWORD2(v10[3]) = DxgkGetDeviceStateInternal(v10, v7);
LABEL_9:
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), v10, 0x40u);
    v2 = 1;
    goto LABEL_10;
  }
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 4443;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"The adapter is already closed by the guest",
    4443LL,
    0LL,
    0LL,
    0LL,
    0LL);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v9);
  return 0;
}

/*
 * XREFs of ?VmBusGetDeviceState@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1403B0580
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x140013BA0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140014A20 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140046900 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_GETDEVICESTATE_VB@@@@YAPEAUDXGKVMB_COMMAND_GETDEVICESTATE_VB@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140051C68 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_GETDEVICESTATE_VB@@@@YAPEAUDXGKVMB_COMMAND_GETDEVICESTATE.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     DxgkGetDeviceStateInternal @ 0x1402A4C80 (DxgkGetDeviceStateInternal.c)
 *     ?ConvertHostVidPnTargetIdToVidPnSourceId@DXG_HOST_VIRTUALGPU_VMBUS@@CAJIIPEAI@Z @ 0x1403B0764 (-ConvertHostVidPnTargetIdToVidPnSourceId@DXG_HOST_VIRTUALGPU_VMBUS@@CAJIIPEAI@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusGetDeviceState(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // bl
  unsigned int v3; // r14d
  __int64 v4; // rdi
  unsigned int v5; // edx
  unsigned int v6; // ecx
  char CurrentThreadPreviousMode; // al
  __int64 v8; // r8
  _BYTE v10[32]; // [rsp+50h] [rbp-19h] BYREF
  _OWORD v11[4]; // [rsp+70h] [rbp+7h] BYREF
  unsigned int v12; // [rsp+D0h] [rbp+67h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v10);
  v2 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    v3 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 12) + 592LL) + 392LL);
    v4 = CastToVmBusCommand<DXGKVMB_COMMAND_GETDEVICESTATE_VB>((__int64)a1);
    if ( !v4 )
    {
LABEL_10:
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10);
      return v2;
    }
    memset(v11, 0, sizeof(v11));
    v11[0] = *(_OWORD *)(v4 + 24);
    v11[1] = *(_OWORD *)(v4 + 40);
    v11[2] = *(_OWORD *)(v4 + 56);
    *(_QWORD *)&v11[3] = *(_QWORD *)(v4 + 72);
    if ( v3 >= 0x20 && *(_DWORD *)(v4 + 28) == 4 && (*(_BYTE *)(v4 + 80) & 1) != 0 )
    {
      v5 = *(_DWORD *)(v4 + 32);
      v6 = *(_DWORD *)(v4 + 24);
      v12 = 0;
      DWORD2(v11[3]) = DXG_HOST_VIRTUALGPU_VMBUS::ConvertHostVidPnTargetIdToVidPnSourceId(v6, v5, &v12);
      if ( SDWORD2(v11[3]) < 0 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 4459;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Fail to locate VidPnSourceId",
          4459LL,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_9;
      }
      DWORD2(v11[0]) = v12;
    }
    CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
    DWORD2(v11[3]) = DxgkGetDeviceStateInternal((ULONG64)v11, CurrentThreadPreviousMode == 1, v8);
LABEL_9:
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), v11, 0x40u);
    v2 = 1;
    goto LABEL_10;
  }
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 4437;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"The adapter is already closed by the guest",
    4437LL,
    0LL,
    0LL,
    0LL,
    0LL);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10);
  return 0;
}

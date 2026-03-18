/*
 * XREFs of ?VmBusCreateHwQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402BC230
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400456A8 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1400462CC (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_PRESENTHISTORYTOKEN@@@@YAPEAUDXGKVMB_COMMAND_PRESENTHISTORYTOKEN@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1400632A0 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_PRESENTHISTORYTOKEN@@@@YAPEAUDXGKVMB_COMMAND_PRESENTHISTO.c)
 *     DxgkCreateHwQueueInternal @ 0x1402BAF98 (DxgkCreateHwQueueInternal.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCreateHwQueue(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // si
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // rdi
  unsigned __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned int v9; // r15d
  int HwQueueInternal; // eax
  __int64 v11; // rbx
  __int64 v12; // [rsp+28h] [rbp-39h]
  _BYTE v13[24]; // [rsp+58h] [rbp-9h] BYREF
  __int128 v14; // [rsp+70h] [rbp+Fh] BYREF
  __int128 v15; // [rsp+80h] [rbp+1Fh]
  __int128 v16; // [rsp+90h] [rbp+2Fh]

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v13,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1184;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"The adapter is already closed by the guest",
      1184LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_7;
  }
  v3 = CastToVmBusCommand<DXGKVMB_COMMAND_PRESENTHISTORYTOKEN>((__int64)a1);
  v5 = v3;
  if ( !v3 )
  {
LABEL_7:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13);
    return 0;
  }
  v6 = *(unsigned int *)(v3 + 64);
  v7 = *((unsigned int *)a1 + 36);
  if ( v7 - 71 >= v6 )
  {
    v9 = v6 + 71;
    v14 = 0LL;
    v15 = 0LL;
    v16 = 0LL;
    *(_QWORD *)&v14 = *(_QWORD *)(v3 + 56);
    if ( *(_DWORD *)(v3 + 64) )
    {
      *(_QWORD *)&v15 = v3 + 68;
      DWORD2(v14) = *(_DWORD *)(v3 + 64);
    }
    HwQueueInternal = DxgkCreateHwQueueInternal((__int64)&v14, 0, v4);
    *(_DWORD *)(v5 + 24) = HwQueueInternal;
    if ( HwQueueInternal < 0 )
    {
      v11 = HwQueueInternal;
      WdLogSingleEntry1(2LL, HwQueueInternal);
      WdLogGlobalForLineNumber = 1224;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to create HwQueue, returning: 0x%I64x",
        v11,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      *(_QWORD *)(v5 + 28) = *((_QWORD *)&v15 + 1);
      *(_OWORD *)(v5 + 40) = v16;
    }
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), (void *)v5, v9);
    v2 = 1;
  }
  else
  {
    WdLogSingleEntry1(2LL, v7);
    v12 = *((unsigned int *)a1 + 36);
    WdLogGlobalForLineNumber = 1190;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Invalid packet size: 0x%I64x", v12, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13);
  return v2;
}

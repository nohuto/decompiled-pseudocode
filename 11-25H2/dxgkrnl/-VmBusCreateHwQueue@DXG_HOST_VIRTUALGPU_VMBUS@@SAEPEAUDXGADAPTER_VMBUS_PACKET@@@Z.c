/*
 * XREFs of ?VmBusCreateHwQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140320FC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x140013BA0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140014A20 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140046900 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_PRESENTHISTORYTOKEN@@@@YAPEAUDXGKVMB_COMMAND_PRESENTHISTORYTOKEN@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1400629B0 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_PRESENTHISTORYTOKEN@@@@YAPEAUDXGKVMB_COMMAND_PRESENTHISTO.c)
 *     DxgkCreateHwQueueInternal @ 0x140321C88 (DxgkCreateHwQueueInternal.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCreateHwQueue(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // si
  __int64 v3; // rax
  __int64 v4; // rdi
  unsigned __int64 v5; // rcx
  __int64 v6; // rdx
  unsigned int v8; // r15d
  int v9; // eax
  __int64 v10; // rbx
  __int64 v11; // [rsp+28h] [rbp-39h]
  _BYTE v12[24]; // [rsp+58h] [rbp-9h] BYREF
  __int128 v13; // [rsp+70h] [rbp+Fh] BYREF
  __int128 v14; // [rsp+80h] [rbp+1Fh]
  __int128 v15; // [rsp+90h] [rbp+2Fh]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v12);
  v2 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1187;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"The adapter is already closed by the guest",
      1187LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_7;
  }
  v3 = CastToVmBusCommand<DXGKVMB_COMMAND_PRESENTHISTORYTOKEN>((__int64)a1);
  v4 = v3;
  if ( !v3 )
  {
LABEL_7:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12);
    return 0;
  }
  v5 = *(unsigned int *)(v3 + 64);
  v6 = *((unsigned int *)a1 + 36);
  if ( v6 - 71 >= v5 )
  {
    v8 = v5 + 71;
    v13 = 0LL;
    v14 = 0LL;
    v15 = 0LL;
    *(_QWORD *)&v13 = *(_QWORD *)(v3 + 56);
    if ( *(_DWORD *)(v3 + 64) )
    {
      *(_QWORD *)&v14 = v3 + 68;
      DWORD2(v13) = *(_DWORD *)(v3 + 64);
    }
    v9 = DxgkCreateHwQueueInternal(&v13, 0LL);
    *(_DWORD *)(v4 + 24) = v9;
    if ( v9 < 0 )
    {
      v10 = v9;
      WdLogSingleEntry1(2LL, v9);
      WdLogGlobalForLineNumber = 1227;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to create HwQueue, returning: 0x%I64x",
        v10,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      *(_QWORD *)(v4 + 28) = *((_QWORD *)&v14 + 1);
      *(_OWORD *)(v4 + 40) = v15;
    }
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), (void *)v4, v8);
    v2 = 1;
  }
  else
  {
    WdLogSingleEntry1(2LL, v6);
    v11 = *((unsigned int *)a1 + 36);
    WdLogGlobalForLineNumber = 1193;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Invalid packet size: 0x%I64x", v11, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12);
  return v2;
}

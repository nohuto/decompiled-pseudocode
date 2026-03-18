/*
 * XREFs of ?VmBusUpdateGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140231660
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400456A8 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1400462CC (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_UPDATEGPUVIRTUALADDRESS@@@@YAPEAUDXGKVMB_COMMAND_UPDATEGPUVIRTUALADDRESS@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14007AFF8 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_UPDATEGPUVIRTUALADDRESS@@@@YAPEAUDXGKVMB_COMMAND_UPDATEGP.c)
 *     DxgkUpdateGpuVirtualAddress @ 0x1402F7A50 (DxgkUpdateGpuVirtualAddress.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusUpdateGpuVirtualAddress(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // bl
  __int64 v4; // rax
  __int64 v5; // rsi
  int v6; // r8d
  int updated; // eax
  struct VMBPACKETCOMPLETION__ *v8; // rcx
  __int64 v9; // [rsp+28h] [rbp-29h]
  _BYTE v10[24]; // [rsp+58h] [rbp+7h] BYREF
  _DWORD v11[4]; // [rsp+70h] [rbp+1Fh] BYREF
  __int64 v12; // [rsp+80h] [rbp+2Fh]
  __int128 v13; // [rsp+88h] [rbp+37h]
  __int64 v14; // [rsp+98h] [rbp+47h]
  int v15; // [rsp+A0h] [rbp+4Fh]
  int v16; // [rsp+A4h] [rbp+53h]
  int v17; // [rsp+B8h] [rbp+67h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v10,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    v4 = CastToVmBusCommand<DXGKVMB_COMMAND_UPDATEGPUVIRTUALADDRESS>((__int64)a1);
    v5 = v4;
    if ( v4 )
    {
      v16 = 0;
      v13 = 0LL;
      v14 = *(_QWORD *)(v4 + 24);
      v15 = *(_DWORD *)(v4 + 48);
      v11[1] = *(_DWORD *)(v4 + 36);
      v11[0] = *(_DWORD *)(v4 + 32);
      v11[2] = *(_DWORD *)(v4 + 40);
      v11[3] = *(_DWORD *)(v4 + 44);
      v12 = v4 + 56;
      v6 = *(_DWORD *)(v4 + 44);
      if ( v6 && ((unsigned __int64)*((unsigned int *)a1 + 36) - 120) >> 6 >= (unsigned int)(v6 - 1) )
      {
        updated = DxgkUpdateGpuVirtualAddress(v11);
      }
      else
      {
        WdLogSingleEntry1(2LL, *(unsigned int *)(v4 + 44));
        v9 = *(unsigned int *)(v5 + 44);
        WdLogGlobalForLineNumber = 5562;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Invalid NumOperations: 0x%I64x",
          v9,
          0LL,
          0LL,
          0LL,
          0LL);
        updated = -1073741811;
      }
      v8 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 16);
      v17 = updated;
      VmBusCompletePacket(v8, &v17, 4u);
      v2 = 1;
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10);
    return v2;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 5545;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"The adapter is already closed by the guest",
      5545LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10);
    return 0;
  }
}

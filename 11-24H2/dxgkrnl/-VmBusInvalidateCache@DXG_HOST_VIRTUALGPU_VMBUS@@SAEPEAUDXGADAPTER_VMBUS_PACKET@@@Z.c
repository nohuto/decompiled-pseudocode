/*
 * XREFs of ?VmBusInvalidateCache@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140224350
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400456A8 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1400462CC (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140051578 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGC.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     DxgkInvalidateCache @ 0x1401B35A0 (DxgkInvalidateCache.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusInvalidateCache(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // bl
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  int v7; // eax
  struct VMBPACKETCOMPLETION__ *v8; // rcx
  int v9; // [rsp+50h] [rbp-48h] BYREF
  _BYTE v10[24]; // [rsp+58h] [rbp-40h] BYREF
  _DWORD v11[2]; // [rsp+70h] [rbp-28h] BYREF
  __int64 v12; // [rsp+78h] [rbp-20h]
  __int64 v13; // [rsp+80h] [rbp-18h]

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v10,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    v4 = CastToVmBusCommand<DXGKVMB_COMMAND_VSYNCREMOTINGCTRL>((__int64)a1);
    if ( v4 )
    {
      v11[0] = *(_DWORD *)(v4 + 24);
      v11[1] = *(_DWORD *)(v4 + 28);
      v12 = *(_QWORD *)(v4 + 32);
      v13 = *(_QWORD *)(v4 + 40);
      v7 = DxgkInvalidateCache((__int64)v11, v5, v6);
      v8 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 16);
      v9 = v7;
      VmBusCompletePacket(v8, &v9, 4u);
      v2 = 1;
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10);
    return v2;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 5778;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"The adapter is already closed by the guest",
      5778LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10);
    return 0;
  }
}

/*
 * XREFs of ?VmBusSetQueuedLimit@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402307E0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400456A8 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1400462CC (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1400515A8 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     DxgkSetQueuedLimit @ 0x14029A720 (DxgkSetQueuedLimit.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSetQueuedLimit(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rdx
  char v2; // bl
  __int64 v5; // rax
  __int128 *v6; // rbx
  int v7; // eax
  struct VMBPACKETCOMPLETION__ *v8; // rcx
  _BYTE v9[24]; // [rsp+50h] [rbp-48h] BYREF
  __int128 v10; // [rsp+68h] [rbp-30h] BYREF
  int v11; // [rsp+78h] [rbp-20h]

  v1 = *((_QWORD *)a1 + 10);
  v2 = 0;
  if ( *(_BYTE *)(v1 + 155) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 4425;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Presentation is disabled", 4425LL, 0LL, 0LL, 0LL, 0LL);
    return 0;
  }
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v9, (struct _KTHREAD **)(v1 + 248));
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 4429;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"The adapter is already closed by the guest",
      4429LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v9);
    return 0;
  }
  v5 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  if ( v5 )
  {
    v10 = 0uLL;
    v6 = (__int128 *)(v5 + 24);
    v7 = DxgkSetQueuedLimit(v5 + 24);
    v8 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 16);
    v11 = v7;
    v10 = *v6;
    VmBusCompletePacket(v8, &v10, 0x14u);
    v2 = 1;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v9);
  return v2;
}

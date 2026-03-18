/*
 * XREFs of ?VmBusGetInternalAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14018A780
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x140013BA0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140014A20 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140046900 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1400670D8 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14006735C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?IsVailEnabled@DXGVIRTUALMACHINE@@QEAAEXZ @ 0x1401E7A40 (-IsVailEnabled@DXGVIRTUALMACHINE@@QEAAEXZ.c)
 *     ?FillInternalAdapterInfo@DXGADAPTER@@QEBAXPEAUDXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN@@@Z @ 0x1402179D4 (-FillInternalAdapterInfo@DXGADAPTER@@QEBAXPEAUDXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN@@@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusGetInternalAdapterInfo(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rsi
  char v3; // bl
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int8 IsVailEnabled; // al
  unsigned int v9; // edx
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // esi
  __int64 v13; // rax
  unsigned int v14; // r8d
  __int64 v16; // [rsp+58h] [rbp-B0h]
  _BYTE v17[24]; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v18[89]; // [rsp+78h] [rbp-90h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v17, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v17);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 0;
  if ( *(_BYTE *)(v2 + 173) )
  {
    memset(v18, 0, sizeof(v18));
    DXGADAPTER::FillInternalAdapterInfo(
      *(DXGADAPTER **)(v2 + 16),
      (struct DXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN *)v18);
    v4 = *((_QWORD *)a1 + 12);
    HIDWORD(v18[1]) = HIDWORD(v18[1]) & 0xFFFFFFFE | *(_BYTE *)(*((_QWORD *)a1 + 10) + 153LL) & 1;
    v5 = *(_QWORD *)(v4 + 592);
    LOBYTE(v4) = *(_BYTE *)(v5 + 338);
    *(_BYTE *)(v5 + 338) = 0;
    LODWORD(v5) = HIDWORD(v18[1]) & 0xFFFFFFFD | (2 * (v4 & 1));
    v6 = *((_QWORD *)a1 + 10);
    HIDWORD(v18[1]) = v5;
    v7 = *((_QWORD *)a1 + 12);
    HIDWORD(v18[0]) = *(_DWORD *)(*(_QWORD *)(v6 + 16) + 3064LL);
    IsVailEnabled = DXGVIRTUALMACHINE::IsVailEnabled(*(DXGVIRTUALMACHINE **)(v7 + 592));
    v9 = HIDWORD(v18[1]) & 0xFFFFFFFB | (4 * (IsVailEnabled & 1));
    v10 = *((_QWORD *)a1 + 12);
    HIDWORD(v18[1]) = v9;
    v11 = *(_QWORD *)(v10 + 592);
    v12 = *(_DWORD *)(v11 + 392);
    if ( v12 >= 0x21 )
      HIDWORD(v18[1]) = v9 & 0xFFFFFFDF | (*(_QWORD *)(v11 + 272) != 0LL ? 0x20 : 0);
    if ( v12 >= 0x28 )
    {
      if ( (Feature_AsyncVmBusMessages__private_featureState & 0x10) == 0 )
      {
        v16 = Feature_AsyncVmBusMessages__private_featureState | 1u;
        wil_details_FeatureReporting_ReportUsageToService(
          (__int64)&Feature_AsyncVmBusMessages__private_descriptor,
          v16,
          3LL);
        wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
          v16,
          3,
          (__int64)&Feature_AsyncVmBusMessages__private_descriptor);
      }
      v13 = *((_QWORD *)a1 + 13);
      HIDWORD(v18[1]) |= 0x40u;
      *(_BYTE *)(v13 + 339) = 1;
    }
    v18[88] = *(_QWORD *)(*((_QWORD *)a1 + 10) + 28LL);
    if ( v12 > 0x10 )
      v14 = v12 < 0x22 ? 704 : 712;
    else
      v14 = 24;
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), v18, v14);
    v3 = 1;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 5230;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"The adapter is already closed by the guest",
      5230LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v17);
  return v3;
}

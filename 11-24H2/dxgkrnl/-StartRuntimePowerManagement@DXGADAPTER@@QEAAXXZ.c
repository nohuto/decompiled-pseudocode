/*
 * XREFs of ?StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ @ 0x140195D1C
 * Callers:
 *     DpiFdoStartAdapter @ 0x140245688 (DpiFdoStartAdapter.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z @ 0x140025980 (-SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z.c)
 *     ?DdiPowerRuntimeControlRequest@DXGADAPTER@@QEAAJPEBU_GUID@@PEAX_K12PEA_K@Z @ 0x140068DAC (-DdiPowerRuntimeControlRequest@DXGADAPTER@@QEAAJPEBU_GUID@@PEAX_K12PEA_K@Z.c)
 *     ?DdiPowerRuntimeSetDeviceHandle@DXGADAPTER@@QEAAJXZ @ 0x1401A6D9C (-DdiPowerRuntimeSetDeviceHandle@DXGADAPTER@@QEAAJXZ.c)
 */

void __fastcall DXGADAPTER::StartRuntimePowerManagement(DXGADAPTER *this)
{
  unsigned int v2; // edi
  unsigned int v3; // edx
  NTSTATUS v4; // eax
  __int64 v5; // rbx

  if ( !*((_QWORD *)this + 404) )
    return;
  v2 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 27) + 64LL) + 40LL) + 28LL);
  if ( *((int *)this + 684) < 0x2000 || v2 < 0x5006 )
  {
    if ( v2 < 0x3008 )
      goto LABEL_7;
  }
  else
  {
    DXGADAPTER::DdiPowerRuntimeSetDeviceHandle(this);
  }
  *((_BYTE *)this + 3665) = 1;
  DXGADAPTER::DdiPowerRuntimeControlRequest(
    this,
    &GUID_DXGKDDI_POWER_MANAGEMENT_PREPARE_TO_START,
    0LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_7:
  if ( !*((_BYTE *)this + 3664) )
  {
    v3 = *((_DWORD *)this + 843);
    if ( v3 != -1 )
      DXGADAPTER::SetPowerComponentActiveCBInternal(this, v3, 0, 0);
  }
  PoFxStartDevicePowerManagement(*((_QWORD *)this + 404));
  if ( v2 >= 0x3008 )
    DXGADAPTER::DdiPowerRuntimeControlRequest(this, &GUID_DXGKDDI_POWER_MANAGEMENT_STARTED, 0LL, 0LL, 0LL, 0LL, 0LL);
  v4 = PoRegisterPowerSettingCallback(
         *((PDEVICE_OBJECT *)this + 27),
         &GUID_MONITOR_POWER_ON,
         DXGADAPTER::PowerSettingCallback,
         this,
         (PVOID *)this + 463);
  if ( v4 < 0 )
  {
    v5 = v4;
    WdLogSingleEntry1(2LL, v4);
    WdLogGlobalForLineNumber = 155;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"PoRegisterPowerSettingCallback failed with status:0x%I64x",
      v5,
      0LL,
      0LL,
      0LL,
      0LL);
  }
}

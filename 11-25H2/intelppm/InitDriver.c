/*
 * XREFs of InitDriver @ 0x14004903C
 * Callers:
 *     ProcLibGlobalInit @ 0x14004A9C8 (ProcLibGlobalInit.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x140004BCC (HviIsAnyHypervisorPresent.c)
 *     PctGetIntelEsuType @ 0x140005928 (PctGetIntelEsuType.c)
 *     IsTurboModeSupported @ 0x1400064B4 (IsTurboModeSupported.c)
 *     IsPerformanceEnergyBiasSupported @ 0x140006520 (IsPerformanceEnergyBiasSupported.c)
 *     IsHwpSupported @ 0x140006594 (IsHwpSupported.c)
 *     IsACountMCountSupported @ 0x14000663C (IsACountMCountSupported.c)
 *     __security_check_cookie @ 0x14000FEF0 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x14000FF30 (GetCpuIdInfo.c)
 *     _guard_dispatch_icall @ 0x14000FF90 (_guard_dispatch_icall.c)
 *     GetRegistryDwordValue @ 0x140028658 (GetRegistryDwordValue.c)
 *     IsHwpNativeInterruptSupported @ 0x1400292EC (IsHwpNativeInterruptSupported.c)
 *     IsHgsInterruptSupported @ 0x140029368 (IsHgsInterruptSupported.c)
 *     IsMonitorMWaitSupported @ 0x14002A254 (IsMonitorMWaitSupported.c)
 *     IsNonwrappingACountMCountSupported @ 0x14002B0FC (IsNonwrappingACountMCountSupported.c)
 *     IsRdtResourcePrioritizationSupported @ 0x14002B148 (IsRdtResourcePrioritizationSupported.c)
 *     GetHvPpmCapabilities @ 0x1400300B8 (GetHvPpmCapabilities.c)
 *     GetRegistryDwordValueNoDefault @ 0x140047484 (GetRegistryDwordValueNoDefault.c)
 */

__int64 __fastcall InitDriver(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // edi
  char v5; // si
  __int64 v6; // rdi
  __int64 v7; // rdi
  bool v9; // [rsp+20h] [rbp-30h] BYREF
  bool v10; // [rsp+21h] [rbp-2Fh] BYREF
  int v11; // [rsp+24h] [rbp-2Ch] BYREF
  int v12; // [rsp+28h] [rbp-28h] BYREF
  __int128 v13; // [rsp+30h] [rbp-20h] BYREF

  v11 = 0;
  v10 = 0;
  v4 = 12223;
  if ( IsHwpNativeInterruptSupported() || IsHgsInterruptSupported() )
    v4 = 32703;
  HviIsAnyHypervisorPresent();
  LODWORD(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) = v4;
  WPP_MAIN_CB.Queue.Wcb.DeviceObject = (void *)0x100000001LL;
  v5 = 0;
  *(_QWORD *)(a1 + 16) = &WPP_MAIN_CB.Queue.Wcb.DeviceObject;
  *(_WORD *)(a1 + 32) = 12;
  *(&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters + 1) = v4;
  v6 = 572522496LL;
  *(_OWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = ACPI_OSC_INTEL_GUID;
  LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) = 1;
  *(void **)((char *)&WPP_MAIN_CB.Queue.Wcb.DeviceContext + 4) = (void *)2;
  *(_QWORD *)(a1 + 24) = &WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  *(_QWORD *)(a1 + 64) = ValidatePStateCapability;
  *(_QWORD *)(a1 + 72) = SetGV3PerfState;
  *(_QWORD *)(a1 + 80) = SetFFHThrottleState;
  *(_QWORD *)(a1 + 88) = SetGV3PerfStateHidden;
  *(_QWORD *)(a1 + 96) = SetFFHThrottleStateHidden;
  *(_WORD *)(a1 + 34) = 32;
  if ( IsACountMCountSupported() )
  {
    v6 = 639631360LL;
    *(_QWORD *)(a1 + 120) = GV3HardwareFeedback;
    if ( IsNonwrappingACountMCountSupported() )
    {
      v5 = 1;
      v6 = 0x8026200000LL;
    }
  }
  *(_QWORD *)(a1 + 160) = GetCppcPerfFeedbackHandler;
  v13 = 0LL;
  GetCpuIdInfo(1u, &v13);
  if ( (HIDWORD(v13) & 0x400000) != 0 )
    *(_QWORD *)(a1 + 128) = GetFFHThrottleState;
  if ( IsPerformanceEnergyBiasSupported() )
    *(_QWORD *)(a1 + 136) = SetPerformanceEnergyBiasPolicy;
  if ( IsTurboModeSupported() )
  {
    if ( !IsPerformanceEnergyBiasSupported() )
    {
      *(_QWORD *)(a1 + 144) = SetTurboDisablePolicy;
      goto LABEL_16;
    }
    *(_QWORD *)(a1 + 72) = SetGV3PerfStateAndTurbo;
    *(_QWORD *)(a1 + 112) = GetGV3PerfStateFlags;
    *(_QWORD *)(a1 + 88) = SetGV3PerfStateAndTurboHidden;
  }
  if ( v5 )
    v6 |= 0x400000uLL;
LABEL_16:
  v9 = IsMonitorMWaitSupported();
  if ( v9 || (GetHvPpmCapabilities(0LL, &v9, 0LL), v9) )
  {
    *(_QWORD *)(a1 + 48) = InitAcpiIdleStateSupport;
    *(_QWORD *)(a1 + 56) = DecodeMWaitIdleState;
    v6 |= 0x12000007F000uLL;
  }
  if ( IsHwpSupported() )
  {
    *(_QWORD *)(a1 + 176) = IsCppcThrottleEfficient;
    *(_QWORD *)(a1 + 200) = GetHwpPerfControlHandler;
    GetRegistryDwordValue(
      (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
      (__int64)L"AllowVmPerfControl",
      &v11);
    if ( v11 )
    {
      if ( qword_140019580 && (unsigned __int8)qword_140019580() )
        v6 |= 0x400000000000uLL;
    }
  }
  if ( IsHwpNativeInterruptSupported() || IsHgsInterruptSupported() )
  {
    v6 |= 0x4000000000uLL;
    *(_QWORD *)(a1 + 184) = ConnectHwpInterrupt;
    *(_QWORD *)(a1 + 192) = ReConnectHwpInterrupt;
    *(_QWORD *)(a1 + 208) = EnableHwpInterrupt;
  }
  if ( IsRdtResourcePrioritizationSupported(&v10) )
  {
    v6 |= 0x4000000000000uLL;
    *(_QWORD *)(a1 + 168) = GetRdtResourcePrioritizationRegister;
    if ( v10 )
      *(_QWORD *)(a1 + 216) = EnablePackageRdtResourcePrioritization;
  }
  *(_DWORD *)(a1 + 312) = 409;
  *(_QWORD *)(a1 + 320) = -65536LL;
  *(_DWORD *)(a1 + 328) = 410;
  *(_QWORD *)(a1 + 336) = 0LL;
  if ( qword_140019550 && qword_140019558 && qword_140019560 && qword_140019568 )
    v6 |= 0x200000000000uLL;
  if ( dword_140019A88 == 2 )
  {
    v12 = 0;
    if ( (int)GetRegistryDwordValueNoDefault(
                (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\IntelHswPcc\\Enum",
                (__int64)L"Count",
                (__int64)&v12) >= 0 )
    {
      if ( v12 )
        *(_QWORD *)(a1 + 104) = PerfControlIntelPccWorkaround;
    }
  }
  *(_BYTE *)(a1 + 232) = 1;
  *(_QWORD *)(a1 + 240) = InitEnergyCounters;
  *(_QWORD *)(a1 + 248) = UnInitEnergyCounters;
  *(_QWORD *)(a1 + 344) = GetHwDebugRegisters;
  *(_QWORD *)(a1 + 352) = InitMeasRegisters;
  *(_QWORD *)(a1 + 360) = QueryProcMeasValues;
  v7 = v6 | 0x1000000000000LL;
  if ( (unsigned int)PctGetIntelEsuType() != 2 )
  {
    v7 |= 0x800000000000uLL;
    *(_QWORD *)(a1 + 272) = PctDiscoverPlatformCtrs;
    *(_QWORD *)(a1 + 280) = PctSnapPlatformCtrs;
    *(_QWORD *)(a1 + 288) = PctEnumPlatfromCtr;
    *(_QWORD *)(a1 + 296) = PctGetPlatformCtr;
    *(_QWORD *)(a1 + 304) = PctGetPlatformCtrInfo;
    *(_QWORD *)(a1 + 368) = PctResetCountersOnD0;
  }
  *a2 |= v7;
  if ( qword_140019548 )
    qword_140019548(&dword_140019AD8, 0LL);
  return 0LL;
}

/*
 * XREFs of InitDriver @ 0x140022E14
 * Callers:
 *     ProcLibGlobalInit @ 0x140043530 (ProcLibGlobalInit.c)
 * Callees:
 *     __security_check_cookie @ 0x14000D660 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x14000D6A0 (GetCpuIdInfo.c)
 *     _guard_dispatch_icall @ 0x14000D700 (_guard_dispatch_icall.c)
 *     IsEnergyMsrSupported @ 0x1400222B8 (IsEnergyMsrSupported.c)
 *     IsPackageEnergyMsrSupported @ 0x1400222FC (IsPackageEnergyMsrSupported.c)
 *     IsRaplSupported @ 0x140022340 (IsRaplSupported.c)
 *     IsMonitorMWaitSupported @ 0x140022624 (IsMonitorMWaitSupported.c)
 *     IsACountMCountSupported @ 0x1400230FC (IsACountMCountSupported.c)
 *     GetRegistryDwordValue @ 0x140023214 (GetRegistryDwordValue.c)
 *     GetHvPpmCapabilities @ 0x140025A00 (GetHvPpmCapabilities.c)
 */

__int64 __fastcall InitDriver(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdi
  bool v6[4]; // [rsp+20h] [rbp-30h] BYREF
  int v7; // [rsp+24h] [rbp-2Ch] BYREF
  __int128 v8; // [rsp+28h] [rbp-28h] BYREF
  __int128 v9; // [rsp+38h] [rbp-18h] BYREF

  *(_QWORD *)(a1 + 64) = ValidatePStateCapability;
  v4 = 0x20000000LL;
  *(_QWORD *)(a1 + 72) = SetFFHPState;
  *(_QWORD *)(a1 + 88) = SetFFHPStateHidden;
  byte_140014EB0 = 1;
  *(_QWORD *)(a1 + 40) = AmdPpmDeviceStart;
  if ( (unsigned __int8)IsACountMCountSupported() )
  {
    v4 = 0x8024000000LL;
    *(_QWORD *)(a1 + 120) = ACountMCountHardwareFeedback;
  }
  *(_QWORD *)(a1 + 160) = GetCppcPerfFeedbackHandler;
  v9 = 0LL;
  v8 = 0LL;
  GetCpuIdInfo(0x80000000, &v9);
  if ( (unsigned int)v9 >= 7 )
  {
    GetCpuIdInfo(0x80000007, &v8);
    if ( (WORD6(v8) & 0x200) != 0 )
      *(_QWORD *)(a1 + 144) = SetPerformanceBoostMode;
  }
  if ( (unsigned __int8)IsACountMCountSupported() )
  {
    v8 = 0LL;
    GetCpuIdInfo(1u, &v8);
    if ( (v8 & 0xF00) == 0xF00 && (unsigned int)(unsigned __int8)((unsigned int)v8 >> 20) + 15 >= 0x17 )
      v4 |= 0x400000uLL;
  }
  v6[0] = IsMonitorMWaitSupported();
  if ( v6[0] || (GetHvPpmCapabilities(0LL, v6, 0LL), v6[0]) )
  {
    *(_QWORD *)(a1 + 48) = InitAcpiIdleStateSupport;
    *(_QWORD *)(a1 + 56) = DecodeMWaitIdleState;
    v4 |= 0x2000007F000uLL;
  }
  v7 = 0;
  v8 = 0LL;
  v9 = 0LL;
  GetCpuIdInfo(0x80000000, &v8);
  if ( (unsigned int)v8 >= 0x80000008 )
  {
    GetCpuIdInfo(0x80000008, &v9);
    if ( (DWORD1(v9) & 0x8000000) != 0 )
    {
      *(_QWORD *)(a1 + 200) = GetCppcRequestMsrPerfControlHandler;
      GetRegistryDwordValue(
        L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
        L"AllowVmPerfControl",
        &v7);
      if ( v7 )
      {
        if ( qword_1400149A0 && (unsigned __int8)qword_1400149A0() )
          v4 |= 0x400000000000uLL;
      }
    }
  }
  if ( qword_140014970 && qword_140014978 && qword_140014980 && qword_140014988 )
    v4 |= 0x200000000000uLL;
  *(_DWORD *)(a1 + 312) = -1073676190;
  *(_QWORD *)(a1 + 240) = InitEnergyCountersOnCurrentProcessor;
  *(_QWORD *)(a1 + 248) = UnInitEnergyCountersOnCurrentProcessor;
  *(_QWORD *)(a1 + 320) = -16LL;
  if ( IsRaplSupported() && IsEnergyMsrSupported() && IsPackageEnergyMsrSupported() )
  {
    v4 |= 0x800000000000uLL;
    *(_QWORD *)(a1 + 272) = AmdPctDiscoverPlatformCtrs;
    *(_QWORD *)(a1 + 280) = AmdPctSnapPlatformCtrs;
    *(_QWORD *)(a1 + 288) = AmdPctEnumPlatfromCtr;
    *(_QWORD *)(a1 + 296) = AmdPctGetPlatformCtr;
    *(_QWORD *)(a1 + 304) = AmdPctGetPlatformCtrInfo;
    *(_QWORD *)(a1 + 368) = AmdResetCountersOnD0;
  }
  *a2 |= v4;
  return 0LL;
}

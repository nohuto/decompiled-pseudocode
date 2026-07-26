/*
 * XREFs of ?ndisReadRegistry@@YAXXZ @ 0x140098C18
 * Callers:
 *     DriverEntry @ 0x14018B234 (DriverEntry.c)
 * Callees:
 *     Feature_NDPQualityWinter26__private_IsEnabledDeviceUsageNoInline @ 0x140092F04 (Feature_NDPQualityWinter26__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_NdisDatapathVerifier__private_ReportDeviceUsage @ 0x140098E60 (Feature_NdisDatapathVerifier__private_ReportDeviceUsage.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memset @ 0x1400E7500 (memset.c)
 *     ?ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z @ 0x1401394B4 (-ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z.c)
 *     ndisLoadNotifyRegister @ 0x14018BF40 (ndisLoadNotifyRegister.c)
 */

void ndisReadRegistry(void)
{
  unsigned __int8 (*v0)(void *, const struct KnobDescriptor *, unsigned __int64 *); // r8
  unsigned int v1; // eax
  unsigned int v2; // edx
  void *v3; // [rsp+20h] [rbp-E0h]
  _DWORD VersionInformation[72]; // [rsp+30h] [rbp-D0h] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+150h] [rbp+50h] BYREF
  __int64 (__fastcall *v6)(wchar_t *, unsigned int, void *, unsigned int, void *, void *); // [rsp+188h] [rbp+88h]
  int v7; // [rsp+190h] [rbp+90h]
  __int64 v8; // [rsp+198h] [rbp+98h]
  __int64 v9; // [rsp+1A0h] [rbp+A0h]
  int v10; // [rsp+1A8h] [rbp+A8h]
  void *v11; // [rsp+1B0h] [rbp+B0h]
  int v12; // [rsp+1B8h] [rbp+B8h]
  __int128 v13; // [rsp+1C0h] [rbp+C0h]
  __int128 v14; // [rsp+1D0h] [rbp+D0h]
  __int128 v15; // [rsp+1E0h] [rbp+E0h]
  __int64 v16; // [rsp+1F0h] [rbp+F0h]

  memset(&VersionInformation[1], 0, 0x118uLL);
  QueryTable.QueryRoutine = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v12 = 0;
  QueryTable.Name = L"MediaTypes";
  QueryTable.Flags = 1;
  v6 = ndisAddMediaTypeToArray;
  v11 = &unk_14011CE04;
  memset(&QueryTable.EntryContext, 0, 32);
  v7 = 20;
  v10 = 4;
  v16 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  RtlQueryRegistryValuesEx(1u, L"NDIS", &QueryTable, 0LL, 0LL);
  ndisRegisterKnobs(&stru_1400F4300, 0x27uLL, v0, 0LL, v3);
  ndisLoadNotifyRegister();
  if ( ndisAoAcTestOverride == 1 )
    ndisAoAcTest = 1;
  VersionInformation[0] = 284;
  RtlGetVersion((PRTL_OSVERSIONINFOW)VersionInformation);
  if ( ndisNoPauseOnSuspend == 0xFFFFFF )
    ndisNoPauseOnSuspend = BYTE2(VersionInformation[70]) == 1;
  if ( ndisDebugLoggingMode >= 3 )
    ndisDebugLoggingMode = 0;
  if ( !(_BYTE)KdDebuggerEnabled )
    ndisAllowFlowControl = 1;
  v1 = ndisMaxNumRssCpus;
  if ( !ndisMaxNumRssCpus )
  {
    v1 = 1;
    ndisMaxNumRssCpus = 1;
  }
  if ( v1 > ndisNumberOfActiveProcessorsAtBoot )
  {
    v1 = ndisNumberOfActiveProcessorsAtBoot;
    ndisMaxNumRssCpus = ndisNumberOfActiveProcessorsAtBoot;
  }
  if ( v1 > 0x800 )
  {
    v1 = 2048;
    ndisMaxNumRssCpus = 2048;
  }
  v2 = ndisRssBaseCpu;
  if ( ndisRssBaseCpu >= ndisNumberOfActiveProcessorsAtBoot )
  {
    v2 = ndisNumberOfActiveProcessorsAtBoot - 1;
    ndisRssBaseCpu = ndisNumberOfActiveProcessorsAtBoot - 1;
  }
  if ( v2 + v1 > ndisNumberOfActiveProcessorsAtBoot )
    ndisMaxNumRssCpus = ndisNumberOfActiveProcessorsAtBoot - v2;
  if ( (unsigned int)(dword_14011B4C8 - 1) > 0x1E )
    dword_14011B4C8 = 8;
  if ( ndisDatapathVerifierMode > 2u )
  {
    if ( ndisDatapathVerifierMode == 3 )
    {
      Feature_NdisDatapathVerifier__private_ReportDeviceUsage();
      ndisDatapathVerifierMode = 1;
    }
    else
    {
      ndisDatapathVerifierMode = 0;
    }
  }
  if ( ndisNblContextVerifierMode && (unsigned int)(ndisNblContextVerifierMode - 1) >= 2 )
    ndisNblContextVerifierMode = 0;
  if ( (unsigned int)Feature_NDPQualityWinter26__private_IsEnabledDeviceUsageNoInline() )
    ndisNDPQualityWinter26IsEnabled = 1;
}

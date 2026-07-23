/*
 * XREFs of SepSetSystemPaths @ 0x14078E970
 * Callers:
 *     SepIsMinTCB @ 0x1409FA28C (SepIsMinTCB.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     RtlStringCbPrintfW @ 0x140404170 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053A3BC (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14053A44C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     SepLoadNgenLocations @ 0x14078E5FC (SepLoadNgenLocations.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepSetSystemPaths(__int64 a1)
{
  unsigned int v2; // edi
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rsi
  size_t v4; // r15
  size_t v5; // r14
  __int64 Pool2; // rax
  signed __int64 v7; // rbx
  const WCHAR *v8; // rbp
  __int64 v9; // r13
  wchar_t *v10; // rbp
  wchar_t *v11; // rbp
  unsigned __int8 v13; // [rsp+58h] [rbp+10h]
  unsigned __int8 v14; // [rsp+58h] [rbp+10h]

  v2 = 0;
  SepLoadNgenLocations(a1);
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v4 = LOWORD(CurrentServerSiloGlobals[77].Flink) + 30LL;
  if ( (Feature_ID51912085__private_featureState & 0x10) == 0 )
  {
    v13 = Feature_ID51912085__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_ID51912085__private_descriptor,
      Feature_ID51912085__private_featureState | 1,
      3);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v13, 3, (__int64)&Feature_ID51912085__private_descriptor);
  }
  v5 = LOWORD(CurrentServerSiloGlobals[77].Flink) + 34LL;
  Pool2 = ExAllocatePool2(0x100uLL, v5 + 2 * v4 + 64, 0x63734943u);
  v7 = Pool2;
  if ( Pool2 )
  {
    v8 = (const WCHAR *)(Pool2 + 64);
    RtlStringCbPrintfW((NTSTRSAFE_PWSTR)(Pool2 + 64), v4, L"\\??\\%ws\\System32\\", CurrentServerSiloGlobals[77].Blink);
    RtlInitUnicodeString((PUNICODE_STRING)v7, v8);
    v9 = v4 >> 1;
    v10 = (wchar_t *)&v8[v9];
    RtlStringCbPrintfW(v10, v4, L"\\??\\%ws\\SysWOW64\\", CurrentServerSiloGlobals[77].Blink);
    RtlInitUnicodeString((PUNICODE_STRING)(v7 + 16), v10);
    *(_OWORD *)(v7 + 32) = *(_OWORD *)v7;
    *(_WORD *)(v7 + 32) = 12;
    if ( (Feature_ID51912085__private_featureState & 0x10) == 0 )
    {
      v14 = Feature_ID51912085__private_featureState | 1;
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_ID51912085__private_descriptor,
        Feature_ID51912085__private_featureState | 1,
        3);
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
        v14,
        3,
        (__int64)&Feature_ID51912085__private_descriptor);
    }
    v11 = &v10[v9];
    RtlStringCbPrintfW(v11, v5, L"\\??\\%ws\\SystemApps\\", CurrentServerSiloGlobals[77].Blink);
    RtlInitUnicodeString((PUNICODE_STRING)(v7 + 48), v11);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 32), v7, 0LL) )
      ExFreePoolWithTag((PVOID)v7, 0x63734943u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v2;
}

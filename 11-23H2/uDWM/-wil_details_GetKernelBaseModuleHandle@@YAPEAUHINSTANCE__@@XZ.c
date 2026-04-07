/*
 * XREFs of ?wil_details_GetKernelBaseModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x180021F0C
 * Callers:
 *     wil_StagingConfig_LogStagedFeatureUsage @ 0x18005EA80 (wil_StagingConfig_LogStagedFeatureUsage.c)
 *     ?MicrosoftInternalNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@@Z @ 0x18009C250 (-MicrosoftInternalNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@@Z.c)
 *     ?evaluate_and_report@?$test_common_data@$0A@@details@tip@@AEAAX_J@Z @ 0x1800F2A18 (-evaluate_and_report@-$test_common_data@$0A@@details@tip@@AEAAX_J@Z.c)
 *     ?start@?$test_common_data@$0A@@details@tip@@QEAA?AU_GUID@@XZ @ 0x1800F36D4 (-start@-$test_common_data@$0A@@details@tip@@QEAA-AU_GUID@@XZ.c)
 *     TestClose @ 0x1800F41A4 (TestClose.c)
 *     TestQueryData @ 0x1800F4200 (TestQueryData.c)
 *     TestUnlockData @ 0x1800F428C (TestUnlockData.c)
 * Callees:
 *     <none>
 */

HINSTANCE wil_details_GetKernelBaseModuleHandle(void)
{
  HINSTANCE result; // rax

  result = g_wil_details_kernelbaseModuleHandle;
  if ( !g_wil_details_kernelbaseModuleHandle )
  {
    result = GetModuleHandleW(L"kernelbase.dll");
    g_wil_details_kernelbaseModuleHandle = result;
  }
  return result;
}

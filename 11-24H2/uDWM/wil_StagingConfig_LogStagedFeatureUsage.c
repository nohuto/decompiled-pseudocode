/*
 * XREFs of wil_StagingConfig_LogStagedFeatureUsage @ 0x18008A8D0
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_GetKernelBaseProcAddress@@YAP6A_JXZPEBD@Z @ 0x1800997C4 (-wil_details_GetKernelBaseProcAddress@@YAP6A_JXZPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 (*__fastcall wil_StagingConfig_LogStagedFeatureUsage(unsigned int a1, unsigned int a2, __int64 a3))(void)
{
  __int64 (*result)(void); // rax
  char v4; // bl

  result = (__int64 (*)(void))g_wil_details_pfnLogStagedFeatureUsage;
  v4 = a3;
  if ( g_wil_details_pfnLogStagedFeatureUsage
    || (result = wil_details_GetKernelBaseProcAddress("LogStagedFeatureUsage"),
        (g_wil_details_pfnLogStagedFeatureUsage = (__int64)result) != 0) )
  {
    LOBYTE(a3) = v4;
    return (__int64 (*)(void))((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))result)(a1, a2, a3);
  }
  return result;
}

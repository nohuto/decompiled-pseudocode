/*
 * XREFs of RtlpInitMuiCriticalSection @ 0x1800115D4
 * Callers:
 *     RtlSetProcessPreferredUILanguages @ 0x18000F8D0 (RtlSetProcessPreferredUILanguages.c)
 *     LdrpSetThreadPreferredLangList @ 0x180011370 (LdrpSetThreadPreferredLangList.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180011550 (RtlpCreateProcessRegistryInfo.c)
 *     RtlSetThreadPreferredUILanguages @ 0x180011A20 (RtlSetThreadPreferredUILanguages.c)
 *     RtlpQueryDefaultUILanguage @ 0x180015F40 (RtlpQueryDefaultUILanguage.c)
 *     RtlpSetProcUserMachineLangList @ 0x180016B90 (RtlpSetProcUserMachineLangList.c)
 *     RtlGetThreadPreferredUILanguages @ 0x1800173A0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlUpdateProcessRegistryInfo @ 0x1800CC36C (RtlUpdateProcessRegistryInfo.c)
 *     RtlpSetProcMergedLangList @ 0x1801061B4 (RtlpSetProcMergedLangList.c)
 *     RtlGetProcessPreferredUILanguages @ 0x1801080D0 (RtlGetProcessPreferredUILanguages.c)
 *     RtlpCleanupRegistryKeys @ 0x18013D760 (RtlpCleanupRegistryKeys.c)
 * Callees:
 *     RtlInitializeCriticalSectionEx @ 0x180030BC0 (RtlInitializeCriticalSectionEx.c)
 *     ZwDelayExecution @ 0x1801606D0 (ZwDelayExecution.c)
 */

__int64 RtlpInitMuiCriticalSection()
{
  __int64 result; // rax
  LARGE_INTEGER DelayInterval; // [rsp+38h] [rbp+10h] BYREF

  DelayInterval.QuadPart = -1000000LL;
  do
  {
    if ( _InterlockedCompareExchange(&InitRegistryInfoCritSect, 1, 0) )
    {
      result = (unsigned int)InitRegistryInfoCritSect;
      if ( InitRegistryInfoCritSect == 1 )
      {
        ZwDelayExecution(0, &DelayInterval);
        result = (unsigned int)InitRegistryInfoCritSect;
      }
    }
    else
    {
      RtlInitializeCriticalSectionEx(&RegistryInfoCritSect, 0, 0);
      result = 2LL;
      InitRegistryInfoCritSect = 2;
    }
  }
  while ( (_DWORD)result != 2 );
  return result;
}

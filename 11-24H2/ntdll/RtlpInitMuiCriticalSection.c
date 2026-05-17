/*
 * XREFs of RtlpInitMuiCriticalSection @ 0x18007CC94
 * Callers:
 *     RtlSetProcessPreferredUILanguages @ 0x180031240 (RtlSetProcessPreferredUILanguages.c)
 *     RtlpQueryDefaultUILanguage @ 0x180035CC0 (RtlpQueryDefaultUILanguage.c)
 *     RtlpSetProcUserMachineLangList @ 0x180036910 (RtlpSetProcUserMachineLangList.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180037120 (RtlGetThreadPreferredUILanguages.c)
 *     RtlSetThreadPreferredUILanguages @ 0x18007C4E0 (RtlSetThreadPreferredUILanguages.c)
 *     LdrpSetThreadPreferredLangList @ 0x18007CA30 (LdrpSetThreadPreferredLangList.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18007CC10 (RtlpCreateProcessRegistryInfo.c)
 *     RtlUpdateProcessRegistryInfo @ 0x1800EAE54 (RtlUpdateProcessRegistryInfo.c)
 *     RtlpSetProcMergedLangList @ 0x18010B414 (RtlpSetProcMergedLangList.c)
 *     RtlGetProcessPreferredUILanguages @ 0x18010D110 (RtlGetProcessPreferredUILanguages.c)
 *     RtlpCleanupRegistryKeys @ 0x18013F570 (RtlpCleanupRegistryKeys.c)
 * Callees:
 *     RtlInitializeCriticalSectionEx @ 0x18009BD70 (RtlInitializeCriticalSectionEx.c)
 *     ZwDelayExecution @ 0x180162310 (ZwDelayExecution.c)
 */

__int64 RtlpInitMuiCriticalSection()
{
  __int64 result; // rax
  __int64 v1; // [rsp+38h] [rbp+10h] BYREF

  v1 = -1000000LL;
  do
  {
    if ( _InterlockedCompareExchange(&InitRegistryInfoCritSect, 1, 0) )
    {
      result = (unsigned int)InitRegistryInfoCritSect;
      if ( InitRegistryInfoCritSect == 1 )
      {
        ZwDelayExecution(0LL, &v1);
        result = (unsigned int)InitRegistryInfoCritSect;
      }
    }
    else
    {
      RtlInitializeCriticalSectionEx(&RegistryInfoCritSect, 0LL, 0LL);
      result = 2LL;
      InitRegistryInfoCritSect = 2;
    }
  }
  while ( (_DWORD)result != 2 );
  return result;
}

/*
 * XREFs of RtlpInitMuiCriticalSection @ 0x18008BB44
 * Callers:
 *     RtlSetProcessPreferredUILanguages @ 0x180059D10 (RtlSetProcessPreferredUILanguages.c)
 *     RtlpSetProcUserMachineLangList @ 0x18005D1B0 (RtlpSetProcUserMachineLangList.c)
 *     RtlGetThreadPreferredUILanguages @ 0x18005D9C0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlUpdateProcessRegistryInfo @ 0x180086FD0 (RtlUpdateProcessRegistryInfo.c)
 *     RtlSetThreadPreferredUILanguages @ 0x18008B390 (RtlSetThreadPreferredUILanguages.c)
 *     LdrpSetThreadPreferredLangList @ 0x18008B8E0 (LdrpSetThreadPreferredLangList.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18008BAC0 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpQueryDefaultUILanguage @ 0x18008D650 (RtlpQueryDefaultUILanguage.c)
 *     RtlpSetProcMergedLangList @ 0x18010DAB4 (RtlpSetProcMergedLangList.c)
 *     RtlGetProcessPreferredUILanguages @ 0x18010FB40 (RtlGetProcessPreferredUILanguages.c)
 *     RtlpCleanupRegistryKeys @ 0x180140C60 (RtlpCleanupRegistryKeys.c)
 * Callees:
 *     RtlInitializeCriticalSectionEx @ 0x1800073E0 (RtlInitializeCriticalSectionEx.c)
 *     ZwDelayExecution @ 0x1801638A0 (ZwDelayExecution.c)
 */

__int64 __fastcall RtlpInitMuiCriticalSection(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = -1000000LL;
  do
  {
    if ( _InterlockedCompareExchange(&InitRegistryInfoCritSect, 1, 0) )
    {
      result = (unsigned int)InitRegistryInfoCritSect;
      if ( InitRegistryInfoCritSect == 1 )
      {
        ZwDelayExecution(0LL, &v5);
        result = (unsigned int)InitRegistryInfoCritSect;
      }
    }
    else
    {
      RtlInitializeCriticalSectionEx((__int64)&RegistryInfoCritSect, 0, 0LL, a4);
      result = 2LL;
      InitRegistryInfoCritSect = 2;
    }
  }
  while ( (_DWORD)result != 2 );
  return result;
}

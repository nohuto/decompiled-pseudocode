/*
 * XREFs of DpiSessionCreateCallback @ 0x1403DAA9C
 * Callers:
 *     DxgkNotifySessionStateChange @ 0x1403DA6C0 (DxgkNotifySessionStateChange.c)
 * Callees:
 *     Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledDeviceUsageNoInline @ 0x14007C80C (Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     DpiFdoStartAdapterThread @ 0x140247620 (DpiFdoStartAdapterThread.c)
 *     DpiLdaValidateSystemChainStatus @ 0x140253FA0 (DpiLdaValidateSystemChainStatus.c)
 */

__int64 DpiSessionCreateCallback()
{
  unsigned int v0; // ebx
  NTSTATUS v1; // eax
  __int64 v2; // rdx
  NTSTATUS v3; // eax
  __int64 InputBuffer; // [rsp+30h] [rbp-28h] BYREF
  int v6; // [rsp+38h] [rbp-20h]

  v0 = 0;
  if ( !_InterlockedCompareExchange(&dword_140160D20, 1, 0) )
  {
    v1 = KeWaitForSingleObject(&stru_140160D68, Executive, 0, 0, 0LL);
    v0 = v1;
    if ( v1 )
    {
      WdLogSingleEntry1(2LL, v1);
      v0 = 0;
      WdLogGlobalForLineNumber = 3615;
    }
    DpiFdoStartAdapterThread(0LL, v2);
    if ( (unsigned int)Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledDeviceUsageNoInline() )
    {
      KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      if ( !dword_1401613D8 )
      {
        v6 = 0;
        InputBuffer = 23LL;
        v3 = ZwPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 0xCu, 0LL, 0);
        if ( v3 < 0 )
        {
          WdLogSingleEntry1(2LL, v3);
          WdLogGlobalForLineNumber = 3665;
        }
      }
      KeReleaseMutex(&Object, 0);
    }
    DpiLdaValidateSystemChainStatus();
    _InterlockedExchange(&dword_140160D20, 2);
  }
  return v0;
}

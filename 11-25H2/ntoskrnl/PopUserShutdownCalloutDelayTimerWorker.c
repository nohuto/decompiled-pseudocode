/*
 * XREFs of PopUserShutdownCalloutDelayTimerWorker @ 0x1407481A0
 * Callers:
 *     <none>
 * Callees:
 *     SleepstudyHelperBlockerActiveDereference @ 0x14044E0C0 (SleepstudyHelperBlockerActiveDereference.c)
 *     Feature_RsUserModeShutdown__private_IsEnabledDeviceUsageNoInline @ 0x1405CF098 (Feature_RsUserModeShutdown__private_IsEnabledDeviceUsageNoInline.c)
 *     PdcTaskClientRequest @ 0x140A86C44 (PdcTaskClientRequest.c)
 */

__int64 PopUserShutdownCalloutDelayTimerWorker()
{
  signed __int32 v0; // eax
  bool v1; // cc
  __int64 result; // rax

  do
  {
    PdcTaskClientRequest(PopUserShutdownTaskClient, 0LL);
    if ( (unsigned int)Feature_RsUserModeShutdown__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( PopUserShutdownPoBlockerHandle )
        SleepstudyHelperBlockerActiveDereference(PopUserShutdownPoBlockerHandle);
    }
    v0 = _InterlockedExchangeAdd(&dword_140F0BC48, 0xFFFFFFFF);
    v1 = v0 <= 1;
    result = (unsigned int)(v0 - 1);
  }
  while ( !v1 );
  return result;
}

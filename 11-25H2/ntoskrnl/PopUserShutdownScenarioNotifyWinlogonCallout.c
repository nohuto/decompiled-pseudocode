/*
 * XREFs of PopUserShutdownScenarioNotifyWinlogonCallout @ 0x1407481E8
 * Callers:
 *     PopDispatchShutdownEvent @ 0x14074DDA0 (PopDispatchShutdownEvent.c)
 * Callees:
 *     KeSetTimer2 @ 0x140370EF0 (KeSetTimer2.c)
 *     SleepstudyHelperBlockerActiveDereference @ 0x14044E0C0 (SleepstudyHelperBlockerActiveDereference.c)
 *     SleepstudyHelperBlockerActiveReference @ 0x14044E160 (SleepstudyHelperBlockerActiveReference.c)
 *     Feature_RsUserModeShutdown__private_IsEnabledDeviceUsageNoInline @ 0x1405CF098 (Feature_RsUserModeShutdown__private_IsEnabledDeviceUsageNoInline.c)
 *     PdcTaskClientRequest @ 0x140A86C44 (PdcTaskClientRequest.c)
 */

void __fastcall PopUserShutdownScenarioNotifyWinlogonCallout(__int64 a1, __int64 a2)
{
  __int128 v2; // [rsp+20h] [rbp-18h] BYREF

  if ( PopUserShutdownTaskClient )
  {
    LOBYTE(a2) = 1;
    PdcTaskClientRequest(PopUserShutdownTaskClient, a2);
    if ( (unsigned int)Feature_RsUserModeShutdown__private_IsEnabledDeviceUsageNoInline()
      && PopUserShutdownPoBlockerHandle )
    {
      SleepstudyHelperBlockerActiveReference(PopUserShutdownPoBlockerHandle);
    }
    v2 = 0LL;
    if ( (unsigned __int8)KeSetTimer2(
                            (__int64)&PopUserShutdownCalloutDelayTimer,
                            (LARGE_INTEGER)-900000000LL,
                            0LL,
                            (__int64)&v2) )
    {
      PdcTaskClientRequest(PopUserShutdownTaskClient, 0LL);
      if ( (unsigned int)Feature_RsUserModeShutdown__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( PopUserShutdownPoBlockerHandle )
          SleepstudyHelperBlockerActiveDereference(PopUserShutdownPoBlockerHandle);
      }
    }
  }
}

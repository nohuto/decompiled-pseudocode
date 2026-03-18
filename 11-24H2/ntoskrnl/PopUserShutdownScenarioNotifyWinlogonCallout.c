/*
 * XREFs of PopUserShutdownScenarioNotifyWinlogonCallout @ 0x1407542C0
 * Callers:
 *     PopDispatchShutdownEvent @ 0x14075A380 (PopDispatchShutdownEvent.c)
 * Callees:
 *     KeSetTimer2 @ 0x1403C20A0 (KeSetTimer2.c)
 *     SleepstudyHelperBlockerActiveDereference @ 0x14044DC00 (SleepstudyHelperBlockerActiveDereference.c)
 *     SleepstudyHelperBlockerActiveReference @ 0x14044DCA0 (SleepstudyHelperBlockerActiveReference.c)
 *     PdcTaskClientRequest @ 0x140A8B894 (PdcTaskClientRequest.c)
 */

void __fastcall PopUserShutdownScenarioNotifyWinlogonCallout(__int64 a1, __int64 a2)
{
  __int128 v2; // [rsp+20h] [rbp-18h] BYREF

  if ( PopUserShutdownTaskClient )
  {
    LOBYTE(a2) = 1;
    PdcTaskClientRequest(PopUserShutdownTaskClient, a2);
    if ( PopUserShutdownPoBlockerHandle )
      SleepstudyHelperBlockerActiveReference(PopUserShutdownPoBlockerHandle);
    v2 = 0LL;
    if ( (unsigned __int8)KeSetTimer2((__int64)&PopUserShutdownCalloutDelayTimer, -900000000LL, 0LL, (__int64)&v2) )
    {
      PdcTaskClientRequest(PopUserShutdownTaskClient, 0LL);
      if ( PopUserShutdownPoBlockerHandle )
        SleepstudyHelperBlockerActiveDereference(PopUserShutdownPoBlockerHandle);
    }
  }
}

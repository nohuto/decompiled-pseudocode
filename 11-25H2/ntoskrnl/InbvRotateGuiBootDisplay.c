/*
 * XREFs of InbvRotateGuiBootDisplay @ 0x14058BFA0
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x14027A990 (KeDelayExecutionThread.c)
 *     InbvAcquireLock @ 0x14058BA4C (InbvAcquireLock.c)
 *     InbvCheckDisplayOwnership @ 0x14058BAB0 (InbvCheckDisplayOwnership.c)
 *     InbvGetDisplayState @ 0x14058BC2C (InbvGetDisplayState.c)
 *     InbvReleaseLock @ 0x14058BCDC (InbvReleaseLock.c)
 *     InbvReleaseResources @ 0x14058BD0C (InbvReleaseResources.c)
 *     RotBarUpdate @ 0x14058C0FC (RotBarUpdate.c)
 *     PsTerminateSystemThread @ 0x14098F390 (PsTerminateSystemThread.c)
 */

void __fastcall InbvRotateGuiBootDisplay(PVOID StartContext)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  LARGE_INTEGER Interval; // [rsp+38h] [rbp+10h] BYREF

  Interval.QuadPart = -800000LL;
  do
  {
    KeDelayExecutionThread(0, 0, &Interval);
    InbvAcquireLock(v1);
    if ( !(unsigned int)InbvGetDisplayState(v2) && RotBarSelection == 1 )
      RotBarUpdate();
    InbvReleaseLock(v3);
  }
  while ( InbvCheckDisplayOwnership(v4) );
  InbvReleaseResources(v5);
  PsTerminateSystemThread(0);
}

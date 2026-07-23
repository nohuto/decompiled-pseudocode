/*
 * XREFs of InbvRotateGuiBootDisplay @ 0x14058C7A0
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     InbvAcquireLock @ 0x14058C24C (InbvAcquireLock.c)
 *     InbvCheckDisplayOwnership @ 0x14058C2B0 (InbvCheckDisplayOwnership.c)
 *     InbvGetDisplayState @ 0x14058C42C (InbvGetDisplayState.c)
 *     InbvReleaseLock @ 0x14058C4DC (InbvReleaseLock.c)
 *     InbvReleaseResources @ 0x14058C50C (InbvReleaseResources.c)
 *     RotBarUpdate @ 0x14058C8FC (RotBarUpdate.c)
 *     PsTerminateSystemThread @ 0x1409D16F0 (PsTerminateSystemThread.c)
 */

void __fastcall InbvRotateGuiBootDisplay(PVOID StartContext)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  LARGE_INTEGER Interval; // [rsp+38h] [rbp+10h] BYREF

  Interval.QuadPart = -800000LL;
  do
  {
    KeDelayExecutionThread(0, 0, &Interval);
    InbvAcquireLock(v2, v1);
    if ( !(unsigned int)InbvGetDisplayState(v4, v3) && RotBarSelection == 1 )
      RotBarUpdate();
    InbvReleaseLock(v6, v5);
  }
  while ( InbvCheckDisplayOwnership(v8, v7) );
  InbvReleaseResources(v10, v9);
  PsTerminateSystemThread(0);
}

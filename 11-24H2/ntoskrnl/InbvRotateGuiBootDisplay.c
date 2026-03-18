/*
 * XREFs of InbvRotateGuiBootDisplay @ 0x14058F780
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x14033BC60 (KeDelayExecutionThread.c)
 *     InbvAcquireLock @ 0x14058F22C (InbvAcquireLock.c)
 *     InbvCheckDisplayOwnership @ 0x14058F290 (InbvCheckDisplayOwnership.c)
 *     InbvGetDisplayState @ 0x14058F40C (InbvGetDisplayState.c)
 *     InbvReleaseLock @ 0x14058F4BC (InbvReleaseLock.c)
 *     InbvReleaseResources @ 0x14058F4EC (InbvReleaseResources.c)
 *     RotBarUpdate @ 0x14058F8DC (RotBarUpdate.c)
 *     PsTerminateSystemThread @ 0x1409D8000 (PsTerminateSystemThread.c)
 */

void __fastcall InbvRotateGuiBootDisplay(PVOID StartContext)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  LARGE_INTEGER Interval; // [rsp+38h] [rbp+10h] BYREF

  Interval.QuadPart = -800000LL;
  do
  {
    KeDelayExecutionThread(0, 0, &Interval);
    InbvAcquireLock(v2, v1, v3, v4);
    if ( !(unsigned int)InbvGetDisplayState(v6, v5, v7, v8) && RotBarSelection == 1 )
      RotBarUpdate();
    InbvReleaseLock(v10, v9, v11, v12);
  }
  while ( InbvCheckDisplayOwnership(v14, v13, v15, v16) );
  InbvReleaseResources(v18, v17, v19, v20);
  PsTerminateSystemThread(0);
}

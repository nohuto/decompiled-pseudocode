/*
 * XREFs of PopDirectedDripsWorkerRoutine @ 0x14074AEB0
 * Callers:
 *     <none>
 * Callees:
 *     PopDeepSleepClearDisengageReason @ 0x1402B9FF0 (PopDeepSleepClearDisengageReason.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     PopDirectedDripsSuspendDevices @ 0x140A35914 (PopDirectedDripsSuspendDevices.c)
 *     PopDirectedDripsRefreshDisengageState @ 0x140A35E50 (PopDirectedDripsRefreshDisengageState.c)
 *     PopDirectedDripsResumeDevices @ 0x140A35FB0 (PopDirectedDripsResumeDevices.c)
 *     PopDirectedDripsHandleResiliencyNotification @ 0x140A360B8 (PopDirectedDripsHandleResiliencyNotification.c)
 *     PopDiagTraceDirectedDripsWorker @ 0x140A526A4 (PopDiagTraceDirectedDripsWorker.c)
 */

void __fastcall __noreturn PopDirectedDripsWorkerRoutine(volatile __int64 *StartContext)
{
  __int64 v2; // rbx
  int v3; // ecx
  char v4; // cl
  __int64 v5; // rdx

  while ( 1 )
  {
    while ( KeWaitForSingleObject((PVOID)(StartContext + 3), Executive, 0, 0, 0LL) )
      ;
    v2 = _InterlockedExchange64(StartContext + 1, 0LL);
    PopDiagTraceDirectedDripsWorker(v2);
    while ( v2 )
    {
      if ( (_DWORD)v2 )
      {
        _BitScanForward((unsigned int *)&v3, v2);
      }
      else
      {
        _BitScanForward((unsigned int *)&v3, HIDWORD(v2));
        LOBYTE(v3) = v4 + 32;
      }
      v5 = 1LL << v3;
      v2 &= ~(1LL << v3);
      if ( 1LL << v3 == 2 )
      {
        PopDirectedDripsRefreshDisengageState(StartContext);
      }
      else
      {
        switch ( v5 )
        {
          case 0x400LL:
            PopDirectedDripsHandleResiliencyNotification(StartContext);
            break;
          case 0x800LL:
            if ( *((_BYTE *)StartContext + 168) )
            {
              LOBYTE(v5) = 1;
              PopDirectedDripsResumeDevices(StartContext, v5);
              PopDirectedDripsSuspendDevices(StartContext);
            }
            break;
          case 0x800000000LL:
            PopDeepSleepClearDisengageReason(8u);
            break;
        }
      }
    }
  }
}

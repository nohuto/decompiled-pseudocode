/*
 * XREFs of ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C004EC10
 * Callers:
 *     ThreadUnlock1 @ 0x1C0045EE0 (ThreadUnlock1.c)
 *     ThreadUnlockWorker1 @ 0x1C0049E10 (ThreadUnlockWorker1.c)
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C004F640 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     DestroyThreadsObjects @ 0x1C004F800 (DestroyThreadsObjects.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     HMUnlockObjectInternal @ 0x1C0056E30 (HMUnlockObjectInternal.c)
 *     HMDestroyUnlockedObject @ 0x1C012C990 (HMDestroyUnlockedObject.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C004C624 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C004EC70 (-HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009CB48 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall HMDestroyUnlockedObjectWorker(struct _HANDLEENTRY *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // [rsp+38h] [rbp+10h] BYREF

  if ( gbInDestroyHandleTableObjects || !PsGetCurrentThreadWin32Thread() )
  {
    if ( PsGetCurrentThreadWin32Thread() )
    {
      if ( (gdwHydraHint & 0x80u) == 0 )
      {
        v5 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3610LL);
      }
    }
    HMDestroyUnlockedObjectWorkerAtomic(a1);
  }
  else
  {
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v5, v2, v3, v4);
    HMDestroyUnlockedObjectWorkerAtomic(a1);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v5);
  }
}

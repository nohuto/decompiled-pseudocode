/*
 * XREFs of ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x140060CE0
 * Callers:
 *     HMUnlockObjectInternal @ 0x140046060 (HMUnlockObjectInternal.c)
 *     HMUnlockObject @ 0x14005F160 (HMUnlockObject.c)
 *     DestroyThreadsObjects @ 0x14005FF70 (DestroyThreadsObjects.c)
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x140061204 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     HMDestroyUnlockedObject @ 0x1401B6480 (HMDestroyUnlockedObject.c)
 * Callees:
 *     ?HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z @ 0x14016A8FC (-HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x1401A2C38 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 */

void __fastcall HMDestroyUnlockedObjectWorker(struct _HANDLEENTRY *a1)
{
  __int64 v2; // rcx
  _BYTE v3[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v4; // [rsp+28h] [rbp-10h]

  if ( *(_DWORD *)(W32GetUserSessionState(a1) + 19816) || !PsGetCurrentThreadWin32Thread() )
  {
    if ( PsGetCurrentThreadWin32Thread() && (*(_DWORD *)(W32GetUserSessionState(v2) + 69192) & 0x80u) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4047LL);
    HMDestroyUnlockedObjectWorkerAtomic(a1);
  }
  else
  {
    v3[0] = 0;
    v4 = 0LL;
    AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v3);
    HMDestroyUnlockedObjectWorkerAtomic(a1);
    if ( v3[0] )
      --*(_DWORD *)(v4 + 28);
  }
}

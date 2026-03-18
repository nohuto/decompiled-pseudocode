/*
 * XREFs of ?Uninitialize@DelayZonePalmRejection@@SAXXZ @ 0x1C00B76E0
 * Callers:
 *     ?UnInitialize@CTouchProcessor@@SAJXZ @ 0x1C00B71A0 (-UnInitialize@CTouchProcessor@@SAJXZ.c)
 * Callees:
 *     HMAssignmentUnlockWorker @ 0x1C0056D3C (HMAssignmentUnlockWorker.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?ClearInputPanelRects@DelayZoneTelemetry@@QEAAXXZ @ 0x1C00B7794 (-ClearInputPanelRects@DelayZoneTelemetry@@QEAAXXZ.c)
 *     ?Uninitialize@CInpLockGuard@@QEAAXXZ @ 0x1C00B77D0 (-Uninitialize@CInpLockGuard@@QEAAXXZ.c)
 */

void __fastcall DelayZonePalmRejection::Uninitialize(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char **v4; // rbx
  __int64 *v5; // rcx
  DelayZoneTelemetry *v6; // rcx
  char *v7; // rdx
  char **v8; // rdi
  char *v9; // rsi
  char *v10; // rax
  char *v11; // rdx
  char **v12; // rcx

  v4 = (char **)(SGDGetUserSessionState(a1, a2, a3, a4) + 17344);
  if ( *v4 )
  {
    v5 = (__int64 *)(*v4 + 24);
    if ( *v5 )
      HMAssignmentUnlockWorker(v5);
    CInpLockGuard::Uninitialize((CInpLockGuard *)(*v4 + 112));
    v6 = (DelayZoneTelemetry *)*((_QWORD *)*v4 + 16);
    if ( v6 )
    {
      DelayZoneTelemetry::ClearInputPanelRects(v6);
      v7 = (char *)*((_QWORD *)*v4 + 16);
      if ( v7 )
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v7);
      *((_QWORD *)*v4 + 16) = 0LL;
    }
    v8 = (char **)(*v4 + 72);
    v9 = *v8;
    while ( v9 != (char *)v8 )
    {
      v10 = *(char **)v9;
      v11 = v9;
      v9 = v10;
      v12 = (char **)*((_QWORD *)v11 + 1);
      if ( *((char **)v10 + 1) != v11 || *v12 != v11 )
        __fastfail(3u);
      *v12 = v10;
      *((_QWORD *)v10 + 1) = v12;
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v11);
    }
    if ( *v4 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, *v4);
    *v4 = 0LL;
  }
}

/*
 * XREFs of ?zInternalStop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18001F654
 * Callers:
 *     ?StopActivity@RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@MEAAXXZ @ 0x18001E620 (-StopActivity@RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@MEAAXXZ.c)
 *     ?StopActivity@WindowEventDispatcher_AppViewActivating@ViewManagerInteropTraceLogging@@MEAAXXZ @ 0x18001F330 (-StopActivity@WindowEventDispatcher_AppViewActivating@ViewManagerInteropTraceLogging@@MEAAXXZ.c)
 *     ?StopActivity@WindowEventDispatcher_AppViewActivationRequested@ViewManagerInteropTraceLogging@@MEAAXXZ @ 0x1801D2B40 (-StopActivity@WindowEventDispatcher_AppViewActivationRequested@ViewManagerInteropTraceLogging@@M.c)
 *     ?StopActivity@AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@MEAAXXZ @ 0x18020A940 (-StopActivity@AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@MEAAXXZ.c)
 *     ?StopActivity@PdcNotificationCallback@ViewManagerInteropTraceLogging@@MEAAXXZ @ 0x18021A550 (-StopActivity@PdcNotificationCallback@ViewManagerInteropTraceLogging@@MEAAXXZ.c)
 *     ?StopActivity@ConnectToWindowManager@ViewManagerInteropTraceLogging@@MEAAXXZ @ 0x180239800 (-StopActivity@ConnectToWindowManager@ViewManagerInteropTraceLogging@@MEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(
        __int64 a1)
{
  RTL_SRWLOCK *v1; // rbx

  v1 = *(RTL_SRWLOCK **)(a1 + 280);
  if ( v1 )
  {
    v1 += 33;
    AcquireSRWLockExclusive(v1);
  }
  **(_DWORD **)(a1 + 272) = 2;
  if ( v1 )
    ReleaseSRWLockExclusive(v1);
}

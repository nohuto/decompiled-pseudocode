/*
 * XREFs of ?zInternalStart@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800A9684
 * Callers:
 *     ?StartActivity@WindowEventDispatcher_AppViewActivating@ViewManagerInteropTraceLogging@@QEAAXXZ @ 0x180020AA0 (-StartActivity@WindowEventDispatcher_AppViewActivating@ViewManagerInteropTraceLogging@@QEAAXXZ.c)
 *     ?StartActivity@WindowEventDispatcher_AppViewActivationRequested@ViewManagerInteropTraceLogging@@QEAAXXZ @ 0x180021804 (-StartActivity@WindowEventDispatcher_AppViewActivationRequested@ViewManagerInteropTraceLogging@@.c)
 *     ?StartActivity@AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAAXK@Z @ 0x1800A95F0 (-StartActivity@AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAAXK@Z.c)
 *     ?StartActivity@RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAAXK@Z @ 0x1800A9A00 (-StartActivity@RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAAXK@Z.c)
 *     ?StartActivity@PdcNotificationCallback@ViewManagerInteropTraceLogging@@QEAAXH@Z @ 0x1800AA850 (-StartActivity@PdcNotificationCallback@ViewManagerInteropTraceLogging@@QEAAXH@Z.c)
 *     ?StartActivity@ConnectToWindowManager@ViewManagerInteropTraceLogging@@QEAAXXZ @ 0x1802ACE98 (-StartActivity@ConnectToWindowManager@ViewManagerInteropTraceLogging@@QEAAXXZ.c)
 * Callees:
 *     ?Provider@ViewManagerInteropLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800207E4 (-Provider@ViewManagerInteropLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(
        __int64 a1)
{
  RTL_SRWLOCK *v1; // rbx
  __int64 v3; // rdi

  v1 = *(RTL_SRWLOCK **)(a1 + 280);
  if ( v1 )
  {
    v1 += 33;
    AcquireSRWLockExclusive(v1);
  }
  v3 = *(_QWORD *)(a1 + 272);
  if ( *(_DWORD *)ViewManagerInteropLogging::Provider() > 5u )
    EventActivityIdControl(3u, (LPGUID)(v3 + 8));
  else
    *(_OWORD *)(v3 + 8) = 0LL;
  *(_DWORD *)v3 = 1;
  if ( v1 )
    ReleaseSRWLockExclusive(v1);
}

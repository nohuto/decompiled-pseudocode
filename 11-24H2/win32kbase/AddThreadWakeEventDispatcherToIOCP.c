/*
 * XREFs of AddThreadWakeEventDispatcherToIOCP @ 0x14014AF40
 * Callers:
 *     <none>
 * Callees:
 *     ?RegisterThreadDispatcherObjectWithCallback@IOCPDispatcher@@QEAAXPEAXP6AX0@Z0@Z @ 0x14014AF90 (-RegisterThreadDispatcherObjectWithCallback@IOCPDispatcher@@QEAAXPEAXP6AX0@Z0@Z.c)
 */

void __fastcall AddThreadWakeEventDispatcherToIOCP(__int64 a1)
{
  IOCPDispatcher *v1; // rbx
  __int64 v2; // rcx
  __int64 UserSessionState; // rax

  v1 = *(IOCPDispatcher **)(W32GetUserSessionState(a1) + 19272);
  UserSessionState = W32GetUserSessionState(v2);
  IOCPDispatcher::RegisterThreadDispatcherObjectWithCallback(
    v1,
    *(void **)(UserSessionState + 18792),
    (void (*)(void *))lambda_0f9e2a8fc479216b45af02f10e3c5bbd_::_lambda_invoker_cdecl_,
    0LL);
}

/*
 * XREFs of KiUserExceptionDispatcher @ 0x180167280
 * Callers:
 *     <none>
 * Callees:
 *     RtlGuardRestoreContext @ 0x1800226C0 (RtlGuardRestoreContext.c)
 *     RtlDispatchException @ 0x180075F60 (RtlDispatchException.c)
 *     RtlRaiseStatus @ 0x18007C3F0 (RtlRaiseStatus.c)
 *     ZwRaiseException @ 0x180166090 (ZwRaiseException.c)
 */

void __noreturn KiUserExceptionDispatcher()
{
  int v0; // eax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  if ( Wow64PrepareForException )
    Wow64PrepareForException(&STACK[0x4F0], &retaddr);
  if ( (unsigned __int8)RtlDispatchException((__int64)&STACK[0x4F0], (__int64)&retaddr) )
    RtlGuardRestoreContext((PCONTEXT)&retaddr, 0LL);
  else
    v0 = ZwRaiseException();
  RtlRaiseStatus(v0);
}

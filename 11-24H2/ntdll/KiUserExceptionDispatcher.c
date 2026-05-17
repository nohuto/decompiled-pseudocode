/*
 * XREFs of KiUserExceptionDispatcher @ 0x180165CF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGuardRestoreContext @ 0x180008EA0 (RtlGuardRestoreContext.c)
 *     RtlRaiseStatus @ 0x180014DE0 (RtlRaiseStatus.c)
 *     RtlDispatchException @ 0x180019060 (RtlDispatchException.c)
 *     ZwRaiseException @ 0x180164B00 (ZwRaiseException.c)
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

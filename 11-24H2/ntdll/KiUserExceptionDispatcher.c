/*
 * XREFs of KiUserExceptionDispatcher @ 0x1801640B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGuardRestoreContext @ 0x1800358A0 (RtlGuardRestoreContext.c)
 *     RtlRaiseStatus @ 0x1800417E0 (RtlRaiseStatus.c)
 *     RtlDispatchException @ 0x180045A60 (RtlDispatchException.c)
 *     ZwRaiseException @ 0x180162EC0 (ZwRaiseException.c)
 */

void __noreturn KiUserExceptionDispatcher()
{
  NTSTATUS v0; // eax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  if ( Wow64PrepareForException )
    Wow64PrepareForException(&STACK[0x4F0], &retaddr);
  if ( RtlDispatchException((PEXCEPTION_RECORD)&STACK[0x4F0], (PCONTEXT)&retaddr) )
    RtlGuardRestoreContext((PCONTEXT)&retaddr, 0LL);
  else
    v0 = ZwRaiseException((PEXCEPTION_RECORD)&STACK[0x4F0], (PCONTEXT)&retaddr, 0);
  RtlRaiseStatus(v0);
}

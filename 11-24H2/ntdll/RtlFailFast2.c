/*
 * XREFs of RtlFailFast2 @ 0x18011F8A0
 * Callers:
 *     RtlGuardRestoreContext @ 0x1800358A0 (RtlGuardRestoreContext.c)
 *     RtlGuardCheckLongJumpTarget @ 0x180035CB0 (RtlGuardCheckLongJumpTarget.c)
 *     RtlGuardCheckExceptionHandler @ 0x180035E90 (RtlGuardCheckExceptionHandler.c)
 *     RtlUnwindEx @ 0x180041E80 (RtlUnwindEx.c)
 *     RtlpHandleInvalidUserCallTarget @ 0x180144B80 (RtlpHandleInvalidUserCallTarget.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn RtlFailFast2(unsigned int a1)
{
  __fastfail(a1);
}

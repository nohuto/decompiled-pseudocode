/*
 * XREFs of RtlFailFast2 @ 0x180123150
 * Callers:
 *     RtlGuardRestoreContext @ 0x1800226C0 (RtlGuardRestoreContext.c)
 *     RtlGuardCheckLongJumpTarget @ 0x180022AD0 (RtlGuardCheckLongJumpTarget.c)
 *     RtlGuardCheckExceptionHandler @ 0x180022CB0 (RtlGuardCheckExceptionHandler.c)
 *     RtlUnwindEx @ 0x180077090 (RtlUnwindEx.c)
 *     RtlpHandleInvalidUserCallTarget @ 0x180147D80 (RtlpHandleInvalidUserCallTarget.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn RtlFailFast2(unsigned int a1)
{
  __fastfail(a1);
}

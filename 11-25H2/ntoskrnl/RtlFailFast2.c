/*
 * XREFs of RtlFailFast2 @ 0x1404FA970
 * Callers:
 *     RtlGuardCheckExceptionHandler @ 0x14025D464 (RtlGuardCheckExceptionHandler.c)
 *     RtlGuardCheckLongJumpTarget @ 0x1405E4858 (RtlGuardCheckLongJumpTarget.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn RtlFailFast2(unsigned int a1)
{
  __fastfail(a1);
}

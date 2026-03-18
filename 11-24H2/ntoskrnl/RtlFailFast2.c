/*
 * XREFs of RtlFailFast2 @ 0x1404FD0F0
 * Callers:
 *     RtlGuardCheckExceptionHandler @ 0x14027BD18 (RtlGuardCheckExceptionHandler.c)
 *     RtlGuardCheckLongJumpTarget @ 0x1405F0BAC (RtlGuardCheckLongJumpTarget.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn RtlFailFast2(unsigned int a1)
{
  __fastfail(a1);
}

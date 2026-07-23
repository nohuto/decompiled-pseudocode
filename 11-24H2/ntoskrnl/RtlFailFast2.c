/*
 * XREFs of RtlFailFast2 @ 0x1404FA9B0
 * Callers:
 *     RtlGuardCheckExceptionHandler @ 0x1402312A8 (RtlGuardCheckExceptionHandler.c)
 *     RtlGuardCheckLongJumpTarget @ 0x1405EE1EC (RtlGuardCheckLongJumpTarget.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn RtlFailFast2(unsigned int a1)
{
  __fastfail(a1);
}

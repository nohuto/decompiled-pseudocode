/*
 * XREFs of KiDecrementKernelShadowStack @ 0x1406AB460
 * Callers:
 *     KiFixupControlProtectionKernelModeReturnMismatch @ 0x1405C6A88 (KiFixupControlProtectionKernelModeReturnMismatch.c)
 * Callees:
 *     sub_1406AB476 @ 0x1406AB476 (sub_1406AB476.c)
 */

__int64 KiDecrementKernelShadowStack()
{
  __int64 v2; // rcx

  __asm { rdsspq  rdx }
  _R8 = 0LL;
  __asm { wrssq   qword ptr [rdx], r8 }
  sub_1406AB476(*_RDX);
  return sub_1406AB476(v2);
}

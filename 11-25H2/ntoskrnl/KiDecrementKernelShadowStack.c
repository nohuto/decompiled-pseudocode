/*
 * XREFs of KiDecrementKernelShadowStack @ 0x1406A0190
 * Callers:
 *     KiFixupControlProtectionKernelModeReturnMismatch @ 0x1405C26E8 (KiFixupControlProtectionKernelModeReturnMismatch.c)
 * Callees:
 *     sub_1406A01A6 @ 0x1406A01A6 (sub_1406A01A6.c)
 */

__int64 KiDecrementKernelShadowStack()
{
  __int64 v2; // rcx

  __asm { rdsspq  rdx }
  _R8 = 0LL;
  __asm { wrssq   qword ptr [rdx], r8 }
  sub_1406A01A6(*_RDX);
  return sub_1406A01A6(v2);
}

/*
 * XREFs of KiDecrementKernelShadowStack @ 0x1406AC400
 * Callers:
 *     KiFixupControlProtectionKernelModeReturnMismatch @ 0x1405C41B8 (KiFixupControlProtectionKernelModeReturnMismatch.c)
 * Callees:
 *     sub_1406AC416 @ 0x1406AC416 (sub_1406AC416.c)
 */

__int64 KiDecrementKernelShadowStack()
{
  __int64 v2; // rcx

  __asm { rdsspq  rdx }
  _R8 = 0LL;
  __asm { wrssq   qword ptr [rdx], r8 }
  sub_1406AC416(*_RDX);
  return sub_1406AC416(v2);
}

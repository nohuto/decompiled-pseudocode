/*
 * XREFs of sub_1406AC416 @ 0x1406AC416
 * Callers:
 *     KiDecrementKernelShadowStack @ 0x1406AC400 (KiDecrementKernelShadowStack.c)
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void __fastcall sub_1406AC416(__int64 _RCX, __int64 _RDX)
{
  __asm { wrssq   qword ptr [rdx-8], rcx }
}

/*
 * XREFs of sub_1406AB476 @ 0x1406AB476
 * Callers:
 *     KiDecrementKernelShadowStack @ 0x1406AB460 (KiDecrementKernelShadowStack.c)
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void __fastcall sub_1406AB476(__int64 _RCX, __int64 _RDX)
{
  __asm { wrssq   qword ptr [rdx-8], rcx }
}

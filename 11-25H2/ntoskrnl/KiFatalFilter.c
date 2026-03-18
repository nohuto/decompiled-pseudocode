/*
 * XREFs of KiFatalFilter @ 0x1405AD560
 * Callers:
 *     KeExpandKernelStackAndCalloutInternal @ 0x140347C90 (KeExpandKernelStackAndCalloutInternal.c)
 *     KiInitializeKernel @ 0x140B48920 (KiInitializeKernel.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

void __fastcall __noreturn KiFatalFilter(ULONG a1, ULONG_PTR *a2)
{
  KeBugCheckEx(a1, *(int *)*a2, *(_QWORD *)(*a2 + 16), *a2, a2[1]);
}

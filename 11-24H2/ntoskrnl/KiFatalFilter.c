/*
 * XREFs of KiFatalFilter @ 0x1405B0EF0
 * Callers:
 *     KeExpandKernelStackAndCalloutInternal @ 0x14027D7A0 (KeExpandKernelStackAndCalloutInternal.c)
 *     KiInitializeKernel @ 0x140B588B0 (KiInitializeKernel.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

void __fastcall __noreturn KiFatalFilter(ULONG a1, ULONG_PTR *a2)
{
  KeBugCheckEx(a1, *(int *)*a2, *(_QWORD *)(*a2 + 16), *a2, a2[1]);
}

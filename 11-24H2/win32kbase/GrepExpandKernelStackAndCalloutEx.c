/*
 * XREFs of GrepExpandKernelStackAndCalloutEx @ 0x1401CE730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall GrepExpandKernelStackAndCalloutEx(
        EXPAND_STACK_CALLOUT *a1,
        void *a2,
        SIZE_T a3,
        BOOLEAN a4,
        PVOID Context)
{
  return KeExpandKernelStackAndCalloutEx(a1, a2, a3, a4, Context);
}

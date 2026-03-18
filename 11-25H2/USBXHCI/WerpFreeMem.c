/*
 * XREFs of WerpFreeMem @ 0x1400591C4
 * Callers:
 *     CheckSpaceAvailable @ 0x140058328 (CheckSpaceAvailable.c)
 *     WerKernelSubmitReport @ 0x1400587BC (WerKernelSubmitReport.c)
 *     WerpAllocateAndInitializeSid @ 0x140058F68 (WerpAllocateAndInitializeSid.c)
 * Callees:
 *     <none>
 */

void __fastcall WerpFreeMem(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0);
}

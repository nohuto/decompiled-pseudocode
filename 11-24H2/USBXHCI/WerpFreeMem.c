/*
 * XREFs of WerpFreeMem @ 0x1400585E4
 * Callers:
 *     CheckSpaceAvailable @ 0x140057748 (CheckSpaceAvailable.c)
 *     WerKernelSubmitReport @ 0x140057BDC (WerKernelSubmitReport.c)
 *     WerpAllocateAndInitializeSid @ 0x140058388 (WerpAllocateAndInitializeSid.c)
 * Callees:
 *     <none>
 */

void __fastcall WerpFreeMem(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0);
}

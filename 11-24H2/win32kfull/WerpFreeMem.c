/*
 * XREFs of WerpFreeMem @ 0x1402F30C4
 * Callers:
 *     WerKernelSubmitReportForHungProcess @ 0x1402F2A24 (WerKernelSubmitReportForHungProcess.c)
 *     WerpAllocateAndInitializeSid @ 0x1402F2FA0 (WerpAllocateAndInitializeSid.c)
 * Callees:
 *     <none>
 */

void __fastcall WerpFreeMem(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0);
}

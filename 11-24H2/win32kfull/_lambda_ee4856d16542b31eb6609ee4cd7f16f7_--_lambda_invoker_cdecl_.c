/*
 * XREFs of _lambda_ee4856d16542b31eb6609ee4cd7f16f7_::_lambda_invoker_cdecl_ @ 0x1402BFE70
 * Callers:
 *     <none>
 * Callees:
 *     WerKernelSubmitReportForHungProcess @ 0x1402F2A24 (WerKernelSubmitReportForHungProcess.c)
 */

void __fastcall lambda_ee4856d16542b31eb6609ee4cd7f16f7_::_lambda_invoker_cdecl_(unsigned int *StartContext)
{
  WerKernelSubmitReportForHungProcess(*StartContext, StartContext[1], StartContext[2]);
  Win32FreePool(StartContext);
}

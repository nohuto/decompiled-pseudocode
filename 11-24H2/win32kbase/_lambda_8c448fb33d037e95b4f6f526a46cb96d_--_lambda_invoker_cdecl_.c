/*
 * XREFs of _lambda_8c448fb33d037e95b4f6f526a46cb96d_::_lambda_invoker_cdecl_ @ 0x140215530
 * Callers:
 *     <none>
 * Callees:
 *     ChildProcessRootSynthesizedMouseInput @ 0x140212350 (ChildProcessRootSynthesizedMouseInput.c)
 *     ?HandleIvEvent@KST@InputTraceLogging@@SAXXZ @ 0x140215590 (-HandleIvEvent@KST@InputTraceLogging@@SAXXZ.c)
 */

void __fastcall lambda_8c448fb33d037e95b4f6f526a46cb96d_::_lambda_invoker_cdecl_(void *a1)
{
  __int64 v1; // rcx

  InputTraceLogging::KST::HandleIvEvent();
  ChildProcessRootSynthesizedMouseInput(v1);
}

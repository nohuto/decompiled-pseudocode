/*
 * XREFs of _lambda_e9675c9cf84d40180a42438b563f3ee7_::_lambda_invoker_cdecl_ @ 0x180073370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall lambda_e9675c9cf84d40180a42438b563f3ee7_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        ExperienceManagerUtils **Context,
        PTP_TIMER Timer,
        __int64 a4,
        __int64 a5)
{
  ExperienceManagerUtils::PostToUIThread(Context[7], (struct IUnknown *)Context, (void *)0x401, 4u, a5);
}

/*
 * XREFs of _lambda_f2cda6ee90f024b0015d0835e9b0d656_::_lambda_invoker_cdecl_ @ 0x180461660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall lambda_f2cda6ee90f024b0015d0835e9b0d656_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        __int64 (__fastcall ****Context)(ExperienceManagerUtils *, GUID *, LPVOID *),
        PTP_TIMER Timer)
{
  SetThreadpoolTimer(Timer, 0LL, 0, 0);
  ExperienceManagerUtils::PostToUIThread(Context[7], (struct IUnknown *)Context, (void *)0x401, 10LL);
}

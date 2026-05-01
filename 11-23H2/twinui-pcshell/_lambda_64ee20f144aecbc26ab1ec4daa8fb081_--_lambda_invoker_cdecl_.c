/*
 * XREFs of _lambda_64ee20f144aecbc26ab1ec4daa8fb081_::_lambda_invoker_cdecl_ @ 0x180461490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall lambda_64ee20f144aecbc26ab1ec4daa8fb081_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        __int64 (__fastcall ****Context)(ExperienceManagerUtils *, GUID *, LPVOID *),
        PTP_TIMER Timer)
{
  SetThreadpoolTimer(Timer, 0LL, 0, 0);
  ExperienceManagerUtils::PostToUIThread(Context[7], (struct IUnknown *)Context, (void *)0x401, 7LL);
}

/*
 * XREFs of _lambda_a507c410840ea9a9d86ed008efcb15bb_::_lambda_invoker_cdecl_ @ 0x1803779F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall lambda_a507c410840ea9a9d86ed008efcb15bb_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        PVOID Context,
        PTP_TIMER Timer)
{
  unsigned int v3; // ebx

  v3 = (unsigned int)Context;
  SetThreadpoolTimer(Timer, 0LL, 0, 0);
  ExperienceManagerUtils::PostToUIThread(0LL, 0LL, (void *)v3, 0LL);
}

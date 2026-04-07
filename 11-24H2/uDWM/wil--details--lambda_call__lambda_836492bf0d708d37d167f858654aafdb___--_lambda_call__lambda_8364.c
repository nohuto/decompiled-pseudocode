/*
 * XREFs of wil::details::lambda_call__lambda_836492bf0d708d37d167f858654aafdb___::_lambda_call__lambda_836492bf0d708d37d167f858654aafdb___ @ 0x180098F4C
 * Callers:
 *     _CAnimationScheduler::_ScheduleStartAnimations_::_1_::dtor$0 @ 0x1800F75F0 (_CAnimationScheduler--_ScheduleStartAnimations_--_1_--dtor$0.c)
 * Callees:
 *     ?_CleanupTransition@CAnimationScheduler@@AEAAXXZ @ 0x180043A6C (-_CleanupTransition@CAnimationScheduler@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::lambda_call__lambda_836492bf0d708d37d167f858654aafdb___::_lambda_call__lambda_836492bf0d708d37d167f858654aafdb___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    CAnimationScheduler::_CleanupTransition(*(CAnimationScheduler **)a1);
  }
}

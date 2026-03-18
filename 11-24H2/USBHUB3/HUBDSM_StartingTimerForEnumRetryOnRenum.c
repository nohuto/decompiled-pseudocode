/*
 * XREFs of HUBDSM_StartingTimerForEnumRetryOnRenum @ 0x140024DA0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_StartEnumRetryTimer @ 0x140033988 (HUBMISC_StartEnumRetryTimer.c)
 */

__int64 __fastcall HUBDSM_StartingTimerForEnumRetryOnRenum(__int64 a1)
{
  HUBMISC_StartEnumRetryTimer(*(_QWORD *)(a1 + 960));
  return 1000LL;
}

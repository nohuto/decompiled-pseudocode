/*
 * XREFs of HUBDSM_StartingTimerForEnumRetryOnRenum @ 0x140024D60
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_StartEnumRetryTimer @ 0x1400336B8 (HUBMISC_StartEnumRetryTimer.c)
 */

__int64 __fastcall HUBDSM_StartingTimerForEnumRetryOnRenum(__int64 a1)
{
  HUBMISC_StartEnumRetryTimer(*(_QWORD *)(a1 + 960));
  return 1000LL;
}

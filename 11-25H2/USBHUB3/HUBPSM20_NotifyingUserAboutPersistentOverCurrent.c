/*
 * XREFs of HUBPSM20_NotifyingUserAboutPersistentOverCurrent @ 0x140012E90
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_GenerateUserNotificationForPersistentOverCurrent @ 0x140086AE4 (HUBMISC_GenerateUserNotificationForPersistentOverCurrent.c)
 */

__int64 __fastcall HUBPSM20_NotifyingUserAboutPersistentOverCurrent(__int64 a1)
{
  HUBMISC_GenerateUserNotificationForPersistentOverCurrent(*(_QWORD *)(a1 + 960));
  return 3013LL;
}

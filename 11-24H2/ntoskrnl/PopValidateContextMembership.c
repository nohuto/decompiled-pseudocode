/*
 * XREFs of PopValidateContextMembership @ 0x1409BA3B0
 * Callers:
 *     PopGetSettingNotificationName @ 0x1409BAE7C (PopGetSettingNotificationName.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x140471820 (RtlCheckTokenMembership.c)
 */

__int64 __fastcall PopValidateContextMembership(void *a1)
{
  RtlCheckTokenMembership(0LL, a1);
  return 3221225506LL;
}

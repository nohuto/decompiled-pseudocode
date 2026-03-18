/*
 * XREFs of UserEnterUserCritSecShared @ 0x140010C90
 * Callers:
 *     <none>
 * Callees:
 *     EnterSharedCrit @ 0x140010CB0 (EnterSharedCrit.c)
 */

__int64 UserEnterUserCritSecShared()
{
  return EnterSharedCrit(1LL, 1LL);
}

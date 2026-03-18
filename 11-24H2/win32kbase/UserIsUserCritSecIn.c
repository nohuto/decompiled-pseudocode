/*
 * XREFs of UserIsUserCritSecIn @ 0x140041C70
 * Callers:
 *     <none>
 * Callees:
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x140042D80 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 */

_BOOL8 UserIsUserCritSecIn()
{
  return IS_USERCRIT_OWNED_AT_ALL();
}

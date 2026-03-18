/*
 * XREFs of UserIsUserCritSecInShared @ 0x140153990
 * Callers:
 *     <none>
 * Callees:
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x140045260 (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 */

_BOOL8 UserIsUserCritSecInShared()
{
  return IS_USERCRIT_OWNED_SHAREDONLY();
}

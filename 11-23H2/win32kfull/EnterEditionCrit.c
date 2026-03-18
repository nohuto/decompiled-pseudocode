/*
 * XREFs of EnterEditionCrit @ 0x1C009D370
 * Callers:
 *     <none>
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C0122A54 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 */

__int64 EnterEditionCrit()
{
  if ( IS_USERCRIT_OWNED_EXCLUSIVE() )
    return 1LL;
  EnterCrit(1LL, 0LL);
  return 0LL;
}

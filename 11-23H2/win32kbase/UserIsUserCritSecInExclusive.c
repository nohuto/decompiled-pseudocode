/*
 * XREFs of UserIsUserCritSecInExclusive @ 0x1C012F850
 * Callers:
 *     <none>
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C0045E80 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 */

_BOOL8 __fastcall UserIsUserCritSecInExclusive(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return IS_USERCRIT_OWNED_EXCLUSIVE(a1, a2, a3, a4);
}

/*
 * XREFs of EnterEditionCrit @ 0x140084100
 * Callers:
 *     <none>
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1400829D0 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 */

__int64 __fastcall EnterEditionCrit(__int64 a1, __int64 a2, __int64 a3)
{
  if ( IS_USERCRIT_OWNED_EXCLUSIVE(a1, a2, a3) )
    return 1LL;
  EnterCrit(1LL, 0LL);
  return 0LL;
}

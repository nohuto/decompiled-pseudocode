/*
 * XREFs of _Feraise @ 0x1800214E8
 * Callers:
 *     _FXp_addh @ 0x18000C5B8 (_FXp_addh.c)
 *     _FXp_mulh @ 0x18000CA34 (_FXp_mulh.c)
 *     _Xp_addh @ 0x18000D310 (_Xp_addh.c)
 *     _Xp_mulh @ 0x18000D7A0 (_Xp_mulh.c)
 *     _LXp_addh @ 0x18000DE84 (_LXp_addh.c)
 *     _LXp_mulh @ 0x18000E260 (_LXp_mulh.c)
 * Callees:
 *     <none>
 */

void __cdecl Feraise(int a1)
{
  if ( (a1 & 5) != 0 )
  {
    *_errno() = 33;
  }
  else if ( (a1 & 0x18) != 0 )
  {
    *_errno() = 34;
  }
}

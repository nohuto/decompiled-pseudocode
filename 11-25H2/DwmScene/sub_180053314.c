/*
 * XREFs of sub_180053314 @ 0x180053314
 * Callers:
 *     sub_180052DEC @ 0x180052DEC (sub_180052DEC.c)
 *     sub_180053C04 @ 0x180053C04 (sub_180053C04.c)
 * Callees:
 *     sub_180040290 @ 0x180040290 (sub_180040290.c)
 */

char __fastcall sub_180053314(__int64 a1, _Mtx_t *a2)
{
  char result; // al

  *(_BYTE *)(a1 + 377) = 0;
  *(_BYTE *)(a1 + 376) = 0;
  Cnd_signal((_Cnd_t)(a1 + 160));
  Cnd_signal((_Cnd_t)(a1 + 232));
  while ( 1 )
  {
    result = sub_180040290(a1 + 378);
    if ( result )
      break;
    Cnd_wait((_Cnd_t)(a1 + 304), *a2);
  }
  return result;
}

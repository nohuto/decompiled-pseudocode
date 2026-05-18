/*
 * XREFs of sub_180053474 @ 0x180053474
 * Callers:
 *     sub_180052F4C @ 0x180052F4C (sub_180052F4C.c)
 *     sub_180053D64 @ 0x180053D64 (sub_180053D64.c)
 * Callees:
 *     sub_1800403F0 @ 0x1800403F0 (sub_1800403F0.c)
 */

char __fastcall sub_180053474(__int64 a1, _Mtx_t *a2)
{
  char result; // al

  *(_BYTE *)(a1 + 377) = 0;
  *(_BYTE *)(a1 + 376) = 0;
  Cnd_signal((_Cnd_t)(a1 + 160));
  Cnd_signal((_Cnd_t)(a1 + 232));
  while ( 1 )
  {
    result = sub_1800403F0(a1 + 378);
    if ( result )
      break;
    Cnd_wait((_Cnd_t)(a1 + 304), *a2);
  }
  return result;
}

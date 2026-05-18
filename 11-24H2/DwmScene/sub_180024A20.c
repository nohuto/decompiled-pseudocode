/*
 * XREFs of sub_180024A20 @ 0x180024A20
 * Callers:
 *     sub_180024874 @ 0x180024874 (sub_180024874.c)
 *     sub_1800D637E @ 0x1800D637E (sub_1800D637E.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180024A20(__int64 a1)
{
  _Mtx_destroy_in_situ((_Mtx_t)(a1 + 16));
  return sub_1800245D8((void **)a1);
}

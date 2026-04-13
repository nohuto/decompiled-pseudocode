/*
 * XREFs of _FXp_movx @ 0x18000CA08
 * Callers:
 *     _FDtento @ 0x18000CE80 (_FDtento.c)
 * Callees:
 *     memcpy_0 @ 0x1800227D6 (memcpy_0.c)
 */

void *__fastcall FXp_movx(void *a1, int a2, const void *a3)
{
  memcpy_0(a1, a3, 4LL * a2);
  return a1;
}

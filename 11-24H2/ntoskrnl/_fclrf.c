/*
 * XREFs of _fclrf @ 0x1405006C0
 * Callers:
 *     _clrfp @ 0x140500570 (_clrfp.c)
 * Callees:
 *     <none>
 */

void fclrf()
{
  _mm_setcsr(_mm_getcsr() & 0xFFFFFFC0);
}

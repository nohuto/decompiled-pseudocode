/*
 * XREFs of _fclrf @ 0x18012A6B0
 * Callers:
 *     _clrfp @ 0x180129590 (_clrfp.c)
 * Callees:
 *     <none>
 */

void fclrf()
{
  _mm_setcsr(_mm_getcsr() & 0xFFFFFFC0);
}

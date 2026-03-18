/*
 * XREFs of _fclrf @ 0x140502E00
 * Callers:
 *     _clrfp @ 0x140502CB0 (_clrfp.c)
 * Callees:
 *     <none>
 */

void fclrf()
{
  _mm_setcsr(_mm_getcsr() & 0xFFFFFFC0);
}

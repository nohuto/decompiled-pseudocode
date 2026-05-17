/*
 * XREFs of _fclrf @ 0x18012DF60
 * Callers:
 *     _clrfp @ 0x18012CE40 (_clrfp.c)
 * Callees:
 *     <none>
 */

void fclrf()
{
  _mm_setcsr(_mm_getcsr() & 0xFFFFFFC0);
}

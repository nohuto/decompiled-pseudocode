/*
 * XREFs of _fclrf @ 0x14001BA90
 * Callers:
 *     _clrfp @ 0x14001B940 (_clrfp.c)
 * Callees:
 *     <none>
 */

void fclrf()
{
  _mm_setcsr(_mm_getcsr() & 0xFFFFFFC0);
}

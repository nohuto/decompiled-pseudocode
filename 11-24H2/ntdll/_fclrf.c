/*
 * XREFs of _fclrf @ 0x18012C480
 * Callers:
 *     _clrfp @ 0x18012B360 (_clrfp.c)
 * Callees:
 *     <none>
 */

void fclrf()
{
  _mm_setcsr(_mm_getcsr() & 0xFFFFFFC0);
}

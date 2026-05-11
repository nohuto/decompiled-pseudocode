/*
 * XREFs of _fclrf @ 0x14001C5C0
 * Callers:
 *     _clrfp @ 0x14001C470 (_clrfp.c)
 * Callees:
 *     <none>
 */

void fclrf()
{
  _mm_setcsr(_mm_getcsr() & 0xFFFFFFC0);
}

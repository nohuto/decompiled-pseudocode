/*
 * XREFs of _clrfp @ 0x180129590
 * Callers:
 *     _raise_exc_ex @ 0x180128F30 (_raise_exc_ex.c)
 * Callees:
 *     _get_fpsr @ 0x18012A690 (_get_fpsr.c)
 *     _fclrf @ 0x18012A6B0 (_fclrf.c)
 */

__int64 clrfp()
{
  __int64 v0; // rbx

  v0 = get_fpsr() & 0x3F;
  fclrf();
  return (unsigned int)v0;
}

/*
 * XREFs of _clrfp @ 0x140502CB0
 * Callers:
 *     _raise_exc_ex @ 0x140502950 (_raise_exc_ex.c)
 * Callees:
 *     _get_fpsr @ 0x140502DE0 (_get_fpsr.c)
 *     _fclrf @ 0x140502E00 (_fclrf.c)
 */

__int64 clrfp()
{
  __int64 v0; // rbx

  v0 = get_fpsr() & 0x3F;
  fclrf();
  return (unsigned int)v0;
}

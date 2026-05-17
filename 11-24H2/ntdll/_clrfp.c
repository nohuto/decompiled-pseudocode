/*
 * XREFs of _clrfp @ 0x18012B360
 * Callers:
 *     _raise_exc_ex @ 0x18012AD00 (_raise_exc_ex.c)
 * Callees:
 *     _get_fpsr @ 0x18012C460 (_get_fpsr.c)
 *     _fclrf @ 0x18012C480 (_fclrf.c)
 */

__int64 clrfp()
{
  __int64 v0; // rbx

  v0 = get_fpsr() & 0x3F;
  fclrf();
  return (unsigned int)v0;
}

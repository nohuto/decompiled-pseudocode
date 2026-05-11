/*
 * XREFs of _clrfp @ 0x14001C470
 * Callers:
 *     _raise_exc_ex @ 0x14001C110 (_raise_exc_ex.c)
 * Callees:
 *     _get_fpsr @ 0x14001C5A0 (_get_fpsr.c)
 *     _fclrf @ 0x14001C5C0 (_fclrf.c)
 */

__int64 clrfp()
{
  __int64 v0; // rbx

  v0 = get_fpsr() & 0x3F;
  fclrf();
  return (unsigned int)v0;
}

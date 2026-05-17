/*
 * XREFs of _statfp @ 0x18012CF30
 * Callers:
 *     _raise_exc_ex @ 0x18012C7E0 (_raise_exc_ex.c)
 * Callees:
 *     _get_fpsr @ 0x18012DF40 (_get_fpsr.c)
 */

__int64 statfp()
{
  return get_fpsr() & 0x3F;
}

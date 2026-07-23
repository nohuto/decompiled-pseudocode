/*
 * XREFs of _statfp @ 0x180129680
 * Callers:
 *     _raise_exc_ex @ 0x180128F30 (_raise_exc_ex.c)
 * Callees:
 *     _get_fpsr @ 0x18012A690 (_get_fpsr.c)
 */

__int64 statfp()
{
  return get_fpsr() & 0x3F;
}

/*
 * XREFs of _statfp @ 0x140502DA0
 * Callers:
 *     _raise_exc_ex @ 0x140502950 (_raise_exc_ex.c)
 * Callees:
 *     _get_fpsr @ 0x140502DE0 (_get_fpsr.c)
 */

__int64 statfp()
{
  return get_fpsr() & 0x3F;
}

/*
 * XREFs of _statfp @ 0x14001BA30
 * Callers:
 *     _raise_exc_ex @ 0x14001B5E0 (_raise_exc_ex.c)
 * Callees:
 *     _get_fpsr @ 0x14001BA70 (_get_fpsr.c)
 */

__int64 statfp()
{
  return get_fpsr() & 0x3F;
}

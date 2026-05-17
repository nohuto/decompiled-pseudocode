/*
 * XREFs of _statfp @ 0x18012B450
 * Callers:
 *     _raise_exc_ex @ 0x18012AD00 (_raise_exc_ex.c)
 * Callees:
 *     _get_fpsr @ 0x18012C460 (_get_fpsr.c)
 */

__int64 statfp()
{
  return get_fpsr() & 0x3F;
}

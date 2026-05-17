/*
 * XREFs of _get_fpsr @ 0x18012DF40
 * Callers:
 *     _control87 @ 0x18012B750 (_control87.c)
 *     _clrfp @ 0x18012CE40 (_clrfp.c)
 *     _ctrlfp @ 0x18012CE70 (_ctrlfp.c)
 *     _set_statfp @ 0x18012CF00 (_set_statfp.c)
 *     _statfp @ 0x18012CF30 (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}

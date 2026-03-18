/*
 * XREFs of _get_fpsr @ 0x140502DE0
 * Callers:
 *     _clrfp @ 0x140502CB0 (_clrfp.c)
 *     _ctrlfp @ 0x140502CE0 (_ctrlfp.c)
 *     _set_statfp @ 0x140502D70 (_set_statfp.c)
 *     _statfp @ 0x140502DA0 (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}

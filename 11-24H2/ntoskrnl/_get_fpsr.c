/*
 * XREFs of _get_fpsr @ 0x1405006A0
 * Callers:
 *     _clrfp @ 0x140500570 (_clrfp.c)
 *     _ctrlfp @ 0x1405005A0 (_ctrlfp.c)
 *     _set_statfp @ 0x140500630 (_set_statfp.c)
 *     _statfp @ 0x140500660 (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}

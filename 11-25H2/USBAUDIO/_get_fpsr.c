/*
 * XREFs of _get_fpsr @ 0x14001C5A0
 * Callers:
 *     _clrfp @ 0x14001C470 (_clrfp.c)
 *     _ctrlfp @ 0x14001C4A0 (_ctrlfp.c)
 *     _set_statfp @ 0x14001C530 (_set_statfp.c)
 *     _statfp @ 0x14001C560 (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}

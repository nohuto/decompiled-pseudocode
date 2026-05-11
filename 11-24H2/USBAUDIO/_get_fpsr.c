/*
 * XREFs of _get_fpsr @ 0x14001BA70
 * Callers:
 *     _clrfp @ 0x14001B940 (_clrfp.c)
 *     _ctrlfp @ 0x14001B970 (_ctrlfp.c)
 *     _set_statfp @ 0x14001BA00 (_set_statfp.c)
 *     _statfp @ 0x14001BA30 (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}

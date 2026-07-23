/*
 * XREFs of _get_fpsr @ 0x18012A690
 * Callers:
 *     _control87 @ 0x180127EA0 (_control87.c)
 *     _clrfp @ 0x180129590 (_clrfp.c)
 *     _ctrlfp @ 0x1801295C0 (_ctrlfp.c)
 *     _set_statfp @ 0x180129650 (_set_statfp.c)
 *     _statfp @ 0x180129680 (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}

/*
 * XREFs of _get_fpsr @ 0x18012C460
 * Callers:
 *     _control87 @ 0x180129C70 (_control87.c)
 *     _clrfp @ 0x18012B360 (_clrfp.c)
 *     _ctrlfp @ 0x18012B390 (_ctrlfp.c)
 *     _set_statfp @ 0x18012B420 (_set_statfp.c)
 *     _statfp @ 0x18012B450 (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}

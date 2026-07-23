/*
 * XREFs of _set_fpsr @ 0x1405006B0
 * Callers:
 *     _ctrlfp @ 0x1405005A0 (_ctrlfp.c)
 *     _set_statfp @ 0x140500630 (_set_statfp.c)
 * Callees:
 *     <none>
 */

void __fastcall set_fpsr(unsigned int a1)
{
  _mm_setcsr(a1);
}

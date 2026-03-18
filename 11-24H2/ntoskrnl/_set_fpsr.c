/*
 * XREFs of _set_fpsr @ 0x140502DF0
 * Callers:
 *     _ctrlfp @ 0x140502CE0 (_ctrlfp.c)
 *     _set_statfp @ 0x140502D70 (_set_statfp.c)
 * Callees:
 *     <none>
 */

void __fastcall set_fpsr(unsigned int a1)
{
  _mm_setcsr(a1);
}

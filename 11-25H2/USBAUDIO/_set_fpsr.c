/*
 * XREFs of _set_fpsr @ 0x14001C5B0
 * Callers:
 *     _ctrlfp @ 0x14001C4A0 (_ctrlfp.c)
 *     _set_statfp @ 0x14001C530 (_set_statfp.c)
 * Callees:
 *     <none>
 */

void __fastcall set_fpsr(unsigned int a1)
{
  _mm_setcsr(a1);
}

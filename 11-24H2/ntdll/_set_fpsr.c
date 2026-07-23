/*
 * XREFs of _set_fpsr @ 0x18012A6A0
 * Callers:
 *     _control87 @ 0x180127EA0 (_control87.c)
 *     _ctrlfp @ 0x1801295C0 (_ctrlfp.c)
 *     _set_statfp @ 0x180129650 (_set_statfp.c)
 * Callees:
 *     <none>
 */

void __fastcall set_fpsr(unsigned int a1)
{
  _mm_setcsr(a1);
}

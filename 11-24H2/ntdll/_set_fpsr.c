/*
 * XREFs of _set_fpsr @ 0x18012C470
 * Callers:
 *     _control87 @ 0x180129C70 (_control87.c)
 *     _ctrlfp @ 0x18012B390 (_ctrlfp.c)
 *     _set_statfp @ 0x18012B420 (_set_statfp.c)
 * Callees:
 *     <none>
 */

void __fastcall set_fpsr(unsigned int a1)
{
  _mm_setcsr(a1);
}

/*
 * XREFs of _set_statfp @ 0x140502D70
 * Callers:
 *     _exception_enabled @ 0x140502240 (_exception_enabled.c)
 * Callees:
 *     _get_fpsr @ 0x140502DE0 (_get_fpsr.c)
 *     _set_fpsr @ 0x140502DF0 (_set_fpsr.c)
 */

__int64 __fastcall set_statfp(char a1)
{
  unsigned int fpsr; // eax

  fpsr = get_fpsr();
  return set_fpsr(a1 & 0x3F | fpsr);
}

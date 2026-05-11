/*
 * XREFs of _set_statfp @ 0x14001C530
 * Callers:
 *     _exception_enabled @ 0x14001B9B0 (_exception_enabled.c)
 * Callees:
 *     _get_fpsr @ 0x14001C5A0 (_get_fpsr.c)
 *     _set_fpsr @ 0x14001C5B0 (_set_fpsr.c)
 */

__int64 __fastcall set_statfp(char a1)
{
  unsigned int fpsr; // eax

  fpsr = get_fpsr();
  return set_fpsr(a1 & 0x3F | fpsr);
}

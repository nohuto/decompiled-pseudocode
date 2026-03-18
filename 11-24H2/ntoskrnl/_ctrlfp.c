/*
 * XREFs of _ctrlfp @ 0x140502CE0
 * Callers:
 *     _call_matherr @ 0x1405021C0 (_call_matherr.c)
 *     _handle_error @ 0x140502310 (_handle_error.c)
 *     _handle_errorf @ 0x140502490 (_handle_errorf.c)
 * Callees:
 *     _get_fpsr @ 0x140502DE0 (_get_fpsr.c)
 *     _set_fpsr @ 0x140502DF0 (_set_fpsr.c)
 */

__int64 __fastcall ctrlfp(int a1, int a2)
{
  unsigned int fpsr; // esi
  __int64 v5; // rcx

  fpsr = get_fpsr();
  v5 = a1 & a2 | fpsr & (~(_WORD)a2 | 0xFFFF807F);
  if ( byte_140E0A690 && (((unsigned __int8)(a1 & a2) | fpsr & ((unsigned __int8)~(_BYTE)a2 | 0x7F)) & 0x40) != 0 )
    set_fpsr(v5);
  else
    set_fpsr((unsigned int)v5 & 0xFFFFFFBF);
  return fpsr;
}

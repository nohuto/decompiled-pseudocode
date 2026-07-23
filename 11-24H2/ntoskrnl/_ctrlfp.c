/*
 * XREFs of _ctrlfp @ 0x1405005A0
 * Callers:
 *     _call_matherr @ 0x1404FFA80 (_call_matherr.c)
 *     _handle_error @ 0x1404FFBD0 (_handle_error.c)
 *     _handle_errorf @ 0x1404FFD50 (_handle_errorf.c)
 * Callees:
 *     _get_fpsr @ 0x1405006A0 (_get_fpsr.c)
 *     _set_fpsr @ 0x1405006B0 (_set_fpsr.c)
 */

__int64 __fastcall ctrlfp(int a1, int a2)
{
  unsigned int fpsr; // esi
  __int64 v5; // rcx

  fpsr = get_fpsr();
  v5 = a1 & a2 | fpsr & (~(_WORD)a2 | 0xFFFF807F);
  if ( byte_140E0A710 && (((unsigned __int8)(a1 & a2) | fpsr & ((unsigned __int8)~(_BYTE)a2 | 0x7F)) & 0x40) != 0 )
    set_fpsr(v5);
  else
    set_fpsr((unsigned int)v5 & 0xFFFFFFBF);
  return fpsr;
}

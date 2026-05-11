/*
 * XREFs of _ctrlfp @ 0x14001B970
 * Callers:
 *     _call_matherr @ 0x14001AE00 (_call_matherr.c)
 *     _handle_error @ 0x14001AF50 (_handle_error.c)
 *     _handle_errorf @ 0x14001B0D0 (_handle_errorf.c)
 * Callees:
 *     _get_fpsr @ 0x14001BA70 (_get_fpsr.c)
 *     _set_fpsr @ 0x14001BA80 (_set_fpsr.c)
 */

__int64 __fastcall ctrlfp(int a1, int a2)
{
  unsigned int fpsr; // esi
  __int64 v5; // rcx

  fpsr = get_fpsr();
  v5 = a1 & a2 | fpsr & (~(_WORD)a2 | 0xFFFF807F);
  if ( byte_140027580 && (((unsigned __int8)(a1 & a2) | fpsr & ((unsigned __int8)~(_BYTE)a2 | 0x7F)) & 0x40) != 0 )
    set_fpsr(v5);
  else
    set_fpsr((unsigned int)v5 & 0xFFFFFFBF);
  return fpsr;
}

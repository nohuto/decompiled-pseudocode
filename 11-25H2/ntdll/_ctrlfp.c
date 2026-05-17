/*
 * XREFs of _ctrlfp @ 0x18012CE70
 * Callers:
 *     fabs @ 0x180126300 (fabs.c)
 *     _call_matherr @ 0x18012BA00 (_call_matherr.c)
 *     _handle_error @ 0x18012BB50 (_handle_error.c)
 *     _except1 @ 0x18012C300 (_except1.c)
 *     _handle_qnan1 @ 0x18012C740 (_handle_qnan1.c)
 *     _umatherr @ 0x18012CB20 (_umatherr.c)
 * Callees:
 *     _get_fpsr @ 0x18012DF40 (_get_fpsr.c)
 *     _set_fpsr @ 0x18012DF50 (_set_fpsr.c)
 */

__int64 __fastcall ctrlfp(int a1, int a2)
{
  unsigned int fpsr; // esi
  __int64 v5; // rcx

  fpsr = get_fpsr();
  v5 = a1 & a2 | fpsr & (~(_WORD)a2 | 0xFFFF807F);
  if ( byte_1801CEEF0 && (((unsigned __int8)(a1 & a2) | fpsr & ((unsigned __int8)~(_BYTE)a2 | 0x7F)) & 0x40) != 0 )
    set_fpsr(v5);
  else
    set_fpsr((unsigned int)v5 & 0xFFFFFFBF);
  return fpsr;
}

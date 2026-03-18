/*
 * XREFs of ApiSetTraceLoggingUserIsActive @ 0x1C0208240
 * Callers:
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C00BFBB0 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 (*__fastcall ApiSetTraceLoggingUserIsActive(unsigned int a1, __int64 a2))(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0296D78;
  if ( qword_1C0296D78 )
  {
    result = (__int64 (*)(void))qword_1C0296D78();
    if ( (int)result >= 0 )
    {
      result = (__int64 (*)(void))qword_1C0296D80;
      if ( qword_1C0296D80 )
        return (__int64 (*)(void))qword_1C0296D80(a1, a2);
    }
  }
  return result;
}

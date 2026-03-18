/*
 * XREFs of ApiSetEditionInitiateMouseEventProcessing @ 0x1C0055180
 * Callers:
 *     ?QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_INT@@PEBUtagPOINT@@@Z @ 0x1C0054818 (-QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_I.c)
 *     ?InitiateWaitForInjectionCompletion@CMouseProcessor@@QEAA_NP6AXXZ@Z @ 0x1C01F83E8 (-InitiateWaitForInjectionCompletion@CMouseProcessor@@QEAA_NP6AXXZ@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 (*__fastcall ApiSetEditionInitiateMouseEventProcessing(unsigned int a1, unsigned int a2))(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0296BE0;
  if ( qword_1C0296BE0 )
  {
    result = (__int64 (*)(void))qword_1C0296BE0();
    if ( (int)result >= 0 )
    {
      result = (__int64 (*)(void))qword_1C0296BE8;
      if ( qword_1C0296BE8 )
        return (__int64 (*)(void))qword_1C0296BE8(a1, a2);
    }
  }
  return result;
}

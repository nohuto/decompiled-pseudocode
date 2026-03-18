/*
 * XREFs of ApiSetInkProcessorOnPointerMessagePosted @ 0x1C0207DEC
 * Callers:
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C01C48BC (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 (*__fastcall ApiSetInkProcessorOnPointerMessagePosted(unsigned int a1, __int64 a2))(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0296338;
  if ( qword_1C0296338 )
  {
    result = (__int64 (*)(void))qword_1C0296338();
    if ( (int)result >= 0 )
    {
      result = (__int64 (*)(void))qword_1C0296340;
      if ( qword_1C0296340 )
        return (__int64 (*)(void))qword_1C0296340(a1, a2);
    }
  }
  return result;
}

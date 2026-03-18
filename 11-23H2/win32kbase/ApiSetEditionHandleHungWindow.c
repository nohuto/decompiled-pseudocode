/*
 * XREFs of ApiSetEditionHandleHungWindow @ 0x1C02065DC
 * Callers:
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C01C48BC (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 *     ?DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C01F62EC (-DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInpu.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 (*__fastcall ApiSetEditionHandleHungWindow(__int64 a1))(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0296458;
  if ( qword_1C0296458 )
  {
    result = (__int64 (*)(void))qword_1C0296458();
    if ( (int)result >= 0 )
    {
      result = (__int64 (*)(void))qword_1C0296460;
      if ( qword_1C0296460 )
        return (__int64 (*)(void))qword_1C0296460(a1);
    }
  }
  return result;
}

/*
 * XREFs of ApiSetEditionGetInputTransform @ 0x1C0206244
 * Callers:
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x1C005649C (-ForwardInputToISM@CMouseProcessor@@AEAA-AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEv.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 (*__fastcall ApiSetEditionGetInputTransform(__int64 a1, __int64 a2))(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0296CD0;
  if ( qword_1C0296CD0 )
  {
    result = (__int64 (*)(void))qword_1C0296CD0();
    if ( (int)result >= 0 )
    {
      result = (__int64 (*)(void))qword_1C0296CD8;
      if ( qword_1C0296CD8 )
        return (__int64 (*)(void))qword_1C0296CD8(a1, a2);
    }
  }
  return result;
}

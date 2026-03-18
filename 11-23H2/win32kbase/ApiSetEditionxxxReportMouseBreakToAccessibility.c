/*
 * XREFs of ApiSetEditionxxxReportMouseBreakToAccessibility @ 0x1C0207ADC
 * Callers:
 *     ?DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C01F62EC (-DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInpu.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionxxxReportMouseBreakToAccessibility(unsigned int a1, __int64 *a2, unsigned int a3)
{
  unsigned int v6; // ebx
  __int64 v7; // xmm0_8
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  int v10; // [rsp+28h] [rbp-10h]

  v6 = 1;
  if ( qword_1C0296B70 && (int)qword_1C0296B70() >= 0 )
  {
    v7 = *a2;
    if ( qword_1C0296B78 )
    {
      v10 = *((_DWORD *)a2 + 2);
      v9 = v7;
      return (unsigned int)qword_1C0296B78(a1, &v9, a3);
    }
    else
    {
      return 0;
    }
  }
  return v6;
}

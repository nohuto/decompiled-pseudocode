/*
 * XREFs of ApiSetEditionSendCursorSuppressionUpdate @ 0x1C0207788
 * Callers:
 *     ?GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C01C4038 (-GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C01C42C0 (-GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionSendCursorSuppressionUpdate(unsigned int a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( qword_1C0296A90 && (int)qword_1C0296A90() >= 0 && qword_1C0296A98 )
    return (unsigned int)qword_1C0296A98(a1);
  return v1;
}

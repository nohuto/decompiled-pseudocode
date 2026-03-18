/*
 * XREFs of ApiSetEditionIsGpqForegroundAccessibleExplicit @ 0x1C00C9988
 * Callers:
 *     ProcessKeyboardInjectedInputViaRim @ 0x1C00024FC (ProcessKeyboardInjectedInputViaRim.c)
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C006B3FC (xxxUpdateGlobalsAndSendKeyEvent.c)
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1C01CECF0 (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerIn.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionIsGpqForegroundAccessibleExplicit(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  unsigned int v4; // edi

  v4 = 0;
  if ( qword_1C02964F0 && (int)qword_1C02964F0() >= 0 && qword_1C02964F8 )
    return (unsigned int)qword_1C02964F8(a1, a2, a3, a4);
  return v4;
}

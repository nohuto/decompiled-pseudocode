/*
 * XREFs of ?Release@HeatProcessor@@UEAAKXZ @ 0x180074E10
 * Callers:
 *     ?Release@DWMCursorBroker@@W7EAAKXZ @ 0x1800CD720 (-Release@DWMCursorBroker@@W7EAAKXZ.c)
 *     ?Release@InputStateManager@@WBA@EAAKXZ @ 0x1800CD730 (-Release@InputStateManager@@WBA@EAAKXZ.c)
 *     ?Release@InputStateManager@@WBI@EAAKXZ @ 0x1800CD740 (-Release@InputStateManager@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HeatProcessor::Release(HeatProcessor *this)
{
  return InputContext::Release((HeatProcessor *)((char *)this + 24));
}

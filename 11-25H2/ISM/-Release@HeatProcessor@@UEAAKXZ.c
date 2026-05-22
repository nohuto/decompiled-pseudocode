/*
 * XREFs of ?Release@HeatProcessor@@UEAAKXZ @ 0x180075070
 * Callers:
 *     ?Release@DWMCursorBroker@@W7EAAKXZ @ 0x1800CB0B0 (-Release@DWMCursorBroker@@W7EAAKXZ.c)
 *     ?Release@InputStateManager@@WBA@EAAKXZ @ 0x1800CB0C0 (-Release@InputStateManager@@WBA@EAAKXZ.c)
 *     ?Release@InputStateManager@@WBI@EAAKXZ @ 0x1800CB0D0 (-Release@InputStateManager@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HeatProcessor::Release(HeatProcessor *this)
{
  return InputContext::Release((HeatProcessor *)((char *)this + 24));
}

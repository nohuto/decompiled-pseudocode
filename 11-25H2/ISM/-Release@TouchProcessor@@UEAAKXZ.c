/*
 * XREFs of ?Release@TouchProcessor@@UEAAKXZ @ 0x180077650
 * Callers:
 *     ?Release@ControllerProcessor@@W7EAAKXZ @ 0x1800F0450 (-Release@ControllerProcessor@@W7EAAKXZ.c)
 *     ?Release@TapProcessor@@WBA@EAAKXZ @ 0x1800F0460 (-Release@TapProcessor@@WBA@EAAKXZ.c)
 *     ?Release@ControllerProcessor@@WEI@EAAKXZ @ 0x180179FF0 (-Release@ControllerProcessor@@WEI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TouchProcessor::Release(TouchProcessor *this)
{
  return InputContext::Release((TouchProcessor *)((char *)this + 16));
}

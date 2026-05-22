/*
 * XREFs of ?Release@TouchProcessor@@UEAAKXZ @ 0x1800772E0
 * Callers:
 *     ?Release@ControllerProcessor@@W7EAAKXZ @ 0x1800F1E40 (-Release@ControllerProcessor@@W7EAAKXZ.c)
 *     ?Release@TapProcessor@@WBA@EAAKXZ @ 0x1800F1E50 (-Release@TapProcessor@@WBA@EAAKXZ.c)
 *     ?Release@ControllerProcessor@@WEI@EAAKXZ @ 0x18017B790 (-Release@ControllerProcessor@@WEI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TouchProcessor::Release(TouchProcessor *this)
{
  return InputContext::Release((TouchProcessor *)((char *)this + 16));
}

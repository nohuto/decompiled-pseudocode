/*
 * XREFs of ?Release@ControllerProcessor@@WEI@EAAKXZ @ 0x180179FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ControllerProcessor::Release(__int64 a1)
{
  return TouchProcessor::Release((TouchProcessor *)(a1 - 72));
}

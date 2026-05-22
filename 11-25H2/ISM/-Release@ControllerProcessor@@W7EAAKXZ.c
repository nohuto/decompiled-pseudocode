/*
 * XREFs of ?Release@ControllerProcessor@@W7EAAKXZ @ 0x1800F0450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ControllerProcessor::Release(__int64 a1)
{
  return TouchProcessor::Release((TouchProcessor *)(a1 - 8));
}

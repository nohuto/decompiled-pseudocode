/*
 * XREFs of ?Release@MouseProcessor@@W7EAAKXZ @ 0x1800A32B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MouseProcessor::Release(__int64 a1)
{
  return OneCoreUAPInputHost::Release((OneCoreUAPInputHost *)(a1 - 8));
}

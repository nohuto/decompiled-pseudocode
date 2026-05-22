/*
 * XREFs of ?Release@MouseProcessor@@WBA@EAAKXZ @ 0x180192460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MouseProcessor::Release(__int64 a1)
{
  return OneCoreUAPInputHost::Release((OneCoreUAPInputHost *)(a1 - 16));
}

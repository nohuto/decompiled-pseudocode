/*
 * XREFs of ?AddRef@OneCoreUAPInputHost@@WCA@EAAKXZ @ 0x1800A2F60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall OneCoreUAPInputHost::AddRef(__int64 a1)
{
  return MouseProcessor::AddRef((MouseProcessor *)(a1 - 32));
}

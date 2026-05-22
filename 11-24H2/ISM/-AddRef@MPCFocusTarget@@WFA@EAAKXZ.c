/*
 * XREFs of ?AddRef@MPCFocusTarget@@WFA@EAAKXZ @ 0x1800FF4A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCFocusTarget::AddRef(__int64 a1)
{
  return ComboButtonProcessor::AddRef((ComboButtonProcessor *)(a1 - 80));
}

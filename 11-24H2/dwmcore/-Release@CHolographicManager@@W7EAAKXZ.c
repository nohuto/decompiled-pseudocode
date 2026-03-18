/*
 * XREFs of ?Release@CHolographicManager@@W7EAAKXZ @ 0x1802577B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHolographicManager::Release(__int64 a1)
{
  return CSpectreCallbackRenderer::Release((CSpectreCallbackRenderer *)(a1 - 8));
}

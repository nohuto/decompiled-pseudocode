/*
 * XREFs of ?AddRef@InputStateManager@@WBA@EAAKXZ @ 0x1800CACB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InputStateManager::AddRef(__int64 a1)
{
  return LampArrayRawInputProvider::AddRef((LampArrayRawInputProvider *)(a1 - 16));
}

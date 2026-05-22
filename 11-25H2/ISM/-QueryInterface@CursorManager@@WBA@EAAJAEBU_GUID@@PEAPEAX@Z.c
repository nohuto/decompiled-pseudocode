/*
 * XREFs of ?QueryInterface@CursorManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18015EDD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CursorManager::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CursorManager::QueryInterface((CursorManager *)(a1 - 16), a2, a3);
}

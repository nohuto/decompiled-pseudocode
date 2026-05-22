/*
 * XREFs of ?OnCoreMessageStatic@CursorManager@@SAJPEAX0H@Z @ 0x18015E9C0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnCursorMessage@CursorManager@@IEAAJPEAUCursorMessage@@@Z @ 0x18015E9D8 (-OnCursorMessage@CursorManager@@IEAAJPEAUCursorMessage@@@Z.c)
 */

__int64 __fastcall CursorManager::OnCoreMessageStatic(CursorManager *a1, struct CursorMessage *a2)
{
  CursorManager::OnCursorMessage(a1, a2);
  return 0LL;
}

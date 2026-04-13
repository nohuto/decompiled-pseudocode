/*
 * XREFs of ?Release@ContextualSuggestionsManager@ContentManagement@@WCI@EAAKXZ @ 0x180039340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::ContextualSuggestionsManager::Release(__int64 a1)
{
  return ContentManagement::PhoneShellNamespaceHelper::Release(a1 - 40);
}

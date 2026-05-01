/*
 * XREFs of ?Release@SearchAppExperienceManager@@WBI@EAAKXZ @ 0x18037CBD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SearchAppExperienceManager::Release(__int64 a1)
{
  return CortanaSharedExperienceManager::Release(a1 - 24);
}

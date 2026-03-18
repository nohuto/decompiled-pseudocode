/*
 * XREFs of EditionApplyForegroundPolicyStartingApp @ 0x1C00EED80
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::ApplyForegroundPolicy @ 0x1C00EE6B0 (_anonymous_namespace_--ApplyForegroundPolicy.c)
 *     _anonymous_namespace_::AppStarting_Set @ 0x1C00EEDA4 (_anonymous_namespace_--AppStarting_Set.c)
 */

__int64 __fastcall EditionApplyForegroundPolicyStartingApp(__int64 a1)
{
  anonymous_namespace_::AppStarting_Set(a1);
  return anonymous_namespace_::ApplyForegroundPolicy(a1);
}

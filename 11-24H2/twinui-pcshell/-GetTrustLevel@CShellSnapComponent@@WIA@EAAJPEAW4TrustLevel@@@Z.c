/*
 * XREFs of ?GetTrustLevel@CShellSnapComponent@@WIA@EAAJPEAW4TrustLevel@@@Z @ 0x18059F380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CShellSnapComponent::GetTrustLevel(__int64 a1, enum TrustLevel *a2)
{
  return CInsightsExperienceManager::GetTrustLevel((CInsightsExperienceManager *)(a1 - 128), a2);
}

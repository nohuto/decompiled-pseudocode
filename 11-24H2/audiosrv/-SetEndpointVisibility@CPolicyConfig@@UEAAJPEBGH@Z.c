/*
 * XREFs of ?SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z @ 0x18007EC30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CPolicyConfig::SetEndpointVisibility(CPolicyConfig *this, const unsigned __int16 *a2, int a3)
{
  DWORD CurrentProcessId; // eax
  CPolicyConfig *v6; // rcx

  CurrentProcessId = GetCurrentProcessId();
  return CPolicyConfig::SetEndpointVisibilityImpl(v6, a2, a3, CurrentProcessId);
}

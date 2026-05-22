/*
 * XREFs of ?GetProcessId@InputDelegationInputObjectProxy@@UEAAKXZ @ 0x180133290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InputDelegationInputObjectProxy::GetProcessId(InputSite **this)
{
  return InputSite::GetProcessId(this[3]);
}

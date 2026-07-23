/*
 * XREFs of HalpNotifyIommuDomainPolicyChange @ 0x14054B860
 * Callers:
 *     <none>
 * Callees:
 *     HalpIommuInvokeInterfaceStateChangeCallbacks @ 0x1404D3740 (HalpIommuInvokeInterfaceStateChangeCallbacks.c)
 */

__int64 __fastcall HalpNotifyIommuDomainPolicyChange(__int64 a1)
{
  return HalpIommuInvokeInterfaceStateChangeCallbacks(a1, 1);
}

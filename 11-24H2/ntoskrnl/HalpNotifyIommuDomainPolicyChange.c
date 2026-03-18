/*
 * XREFs of HalpNotifyIommuDomainPolicyChange @ 0x14054DFB0
 * Callers:
 *     <none>
 * Callees:
 *     HalpIommuInvokeInterfaceStateChangeCallbacks @ 0x1404D9CC4 (HalpIommuInvokeInterfaceStateChangeCallbacks.c)
 */

__int64 __fastcall HalpNotifyIommuDomainPolicyChange(__int64 a1)
{
  return HalpIommuInvokeInterfaceStateChangeCallbacks(a1, 1);
}

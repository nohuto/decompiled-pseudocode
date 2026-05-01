/*
 * XREFs of ??1?$PrivilegedOperationsServiceBase@VPrivilegedHotkeyOperations@@VPrivilegedWindowingOperations@@@@QEAA@XZ @ 0x1802CD55C
 * Callers:
 *     ??1?$PrivilegedOperationsServiceBase@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowingOperations@@@@QEAA@XZ @ 0x180229CB8 (--1-$PrivilegedOperationsServiceBase@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOper.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VPrivilegedWindowOwnershipOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x1800990B0 (-InternalRelease@-$ComPtr@VPrivilegedWindowOwnershipOperations@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall PrivilegedOperationsServiceBase<PrivilegedHotkeyOperations,PrivilegedWindowingOperations>::~PrivilegedOperationsServiceBase<PrivilegedHotkeyOperations,PrivilegedWindowingOperations>(
        __int64 a1)
{
  Microsoft::WRL::ComPtr<PrivilegedWindowOwnershipOperations>::InternalRelease((__int64 *)(a1 + 16));
  return PrivilegedOperationsServiceBase<PrivilegedWindowingOperations>::~PrivilegedOperationsServiceBase<PrivilegedWindowingOperations>(a1);
}

/*
 * XREFs of ??1?$PrivilegedOperationsServiceBase@VPrivilegedWindowingOperations@@@@QEAA@XZ @ 0x1802CD8B8
 * Callers:
 *     ??1?$PrivilegedOperationsServiceBase@VPrivilegedHotkeyOperations@@VPrivilegedWindowingOperations@@@@QEAA@XZ @ 0x1802CD55C (--1-$PrivilegedOperationsServiceBase@VPrivilegedHotkeyOperations@@VPrivilegedWindowingOperations.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VPrivilegedWindowingOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x1801111A8 (-InternalRelease@-$ComPtr@VPrivilegedWindowingOperations@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall PrivilegedOperationsServiceBase<PrivilegedWindowingOperations>::~PrivilegedOperationsServiceBase<PrivilegedWindowingOperations>(
        __int64 a1)
{
  Microsoft::WRL::ComPtr<PrivilegedWindowingOperations>::InternalRelease((__int64 *)(a1 + 8));
  return Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease((volatile signed __int32 **)a1);
}

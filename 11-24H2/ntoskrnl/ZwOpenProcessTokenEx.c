/*
 * XREFs of ZwOpenProcessTokenEx @ 0x1406A79B0
 * Callers:
 *     DifZwOpenProcessTokenExWrapper @ 0x1406407B0 (DifZwOpenProcessTokenExWrapper.c)
 *     RtlpIsAppContainer @ 0x140781A2C (RtlpIsAppContainer.c)
 *     BiOpenEffectiveToken @ 0x1409A7498 (BiOpenEffectiveToken.c)
 *     RtlAcquirePrivilege @ 0x1409A82D4 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x1409A8554 (RtlImpersonateSelfEx.c)
 *     _SysCtxOpenEffectiveToken @ 0x140A88604 (_SysCtxOpenEffectiveToken.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenProcessTokenEx(
        HANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}

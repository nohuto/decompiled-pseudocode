/*
 * XREFs of ZwOpenProcessTokenEx @ 0x1406A6A10
 * Callers:
 *     DifZwOpenProcessTokenExWrapper @ 0x1406421F0 (DifZwOpenProcessTokenExWrapper.c)
 *     RtlpIsAppContainer @ 0x140781AFC (RtlpIsAppContainer.c)
 *     BiOpenEffectiveToken @ 0x1409C0E48 (BiOpenEffectiveToken.c)
 *     RtlAcquirePrivilege @ 0x1409C1C84 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x1409C1F04 (RtlImpersonateSelfEx.c)
 *     _SysCtxOpenEffectiveToken @ 0x140A8C114 (_SysCtxOpenEffectiveToken.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenProcessTokenEx(
        HANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle, *(_QWORD *)&DesiredAccess);
}

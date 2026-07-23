/*
 * XREFs of ZwOpenThreadTokenEx @ 0x1406A7990
 * Callers:
 *     DifZwOpenThreadTokenExWrapper @ 0x140641100 (DifZwOpenThreadTokenExWrapper.c)
 *     RtlpIsAppContainer @ 0x140781A2C (RtlpIsAppContainer.c)
 *     BiOpenEffectiveToken @ 0x1409A7498 (BiOpenEffectiveToken.c)
 *     RtlpOpenThreadToken @ 0x1409A8764 (RtlpOpenThreadToken.c)
 *     _SysCtxOpenEffectiveToken @ 0x140A88604 (_SysCtxOpenEffectiveToken.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenThreadTokenEx(
        HANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        BOOLEAN OpenAsSelf,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}

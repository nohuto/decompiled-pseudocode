/*
 * XREFs of ZwOpenThreadTokenEx @ 0x1406A69F0
 * Callers:
 *     DifZwOpenThreadTokenExWrapper @ 0x140642B40 (DifZwOpenThreadTokenExWrapper.c)
 *     RtlpIsAppContainer @ 0x140781AFC (RtlpIsAppContainer.c)
 *     BiOpenEffectiveToken @ 0x1409C0E48 (BiOpenEffectiveToken.c)
 *     RtlpOpenThreadToken @ 0x1409C2114 (RtlpOpenThreadToken.c)
 *     _SysCtxOpenEffectiveToken @ 0x140A8C114 (_SysCtxOpenEffectiveToken.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenThreadTokenEx(
        HANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        BOOLEAN OpenAsSelf,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle, *(_QWORD *)&DesiredAccess);
}

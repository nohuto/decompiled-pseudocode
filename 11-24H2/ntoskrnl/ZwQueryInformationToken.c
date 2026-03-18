/*
 * XREFs of ZwQueryInformationToken @ 0x1406A6830
 * Callers:
 *     RtlCheckTokenCapability @ 0x14048DC70 (RtlCheckTokenCapability.c)
 *     DifZwQueryInformationTokenWrapper @ 0x140645840 (DifZwQueryInformationTokenWrapper.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x14065ABEC (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     RtlFormatCurrentUserKeyPath @ 0x140865040 (RtlFormatCurrentUserKeyPath.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A8BE6C (_SysCtxRegOpenCurrentUserKey.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x140AA0B18 (ExpFirmwareAccessAppContainerCheck.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwQueryInformationToken(
        HANDLE TokenHandle,
        TOKEN_INFORMATION_CLASS TokenInformationClass,
        PVOID TokenInformation,
        ULONG TokenInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TokenHandle, *(_QWORD *)&TokenInformationClass);
}

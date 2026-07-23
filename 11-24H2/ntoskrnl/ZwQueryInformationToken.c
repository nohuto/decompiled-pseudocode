/*
 * XREFs of ZwQueryInformationToken @ 0x1406A77D0
 * Callers:
 *     RtlCheckTokenCapability @ 0x1403B5260 (RtlCheckTokenCapability.c)
 *     DifZwQueryInformationTokenWrapper @ 0x140643E00 (DifZwQueryInformationTokenWrapper.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x14065930C (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     RtlFormatCurrentUserKeyPath @ 0x140869650 (RtlFormatCurrentUserKeyPath.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A8835C (_SysCtxRegOpenCurrentUserKey.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x140A9BEA8 (ExpFirmwareAccessAppContainerCheck.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryInformationToken(
        HANDLE TokenHandle,
        TOKEN_INFORMATION_CLASS TokenInformationClass,
        PVOID TokenInformation,
        ULONG TokenInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TokenHandle);
}

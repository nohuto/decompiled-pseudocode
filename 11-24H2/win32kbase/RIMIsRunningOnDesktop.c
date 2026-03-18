/*
 * XREFs of RIMIsRunningOnDesktop @ 0x1400A8A78
 * Callers:
 *     RIMApiSetIsMouseDeviceOnIgnoreList @ 0x1400A79A0 (RIMApiSetIsMouseDeviceOnIgnoreList.c)
 *     RIMApiSetValidateDeviceSignature @ 0x1400A8638 (RIMApiSetValidateDeviceSignature.c)
 *     RIMApiSetSetUserPTPEnabledPreference @ 0x1400A89C8 (RIMApiSetSetUserPTPEnabledPreference.c)
 *     RIMApiSetCheckForLegacyTouchPad @ 0x14017D3A4 (RIMApiSetCheckForLegacyTouchPad.c)
 *     RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x14017D678 (RIMIDEInjectKeyboardFromKeybdInputStruct.c)
 *     ShouldEnableInputVirtualization @ 0x14018A67C (ShouldEnableInputVirtualization.c)
 *     RIMOpenDev @ 0x1401D2344 (RIMOpenDev.c)
 *     RIMCreatePointerDeviceInfo @ 0x1401DECF0 (RIMCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1401E4F04 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RIMIsRunningOnDesktop(__int64 a1)
{
  return *(_DWORD *)(W32GetUserSessionState(a1) + 36) == 3;
}

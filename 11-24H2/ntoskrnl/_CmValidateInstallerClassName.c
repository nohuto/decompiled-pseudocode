/*
 * XREFs of _CmValidateInstallerClassName @ 0x1408B54C0
 * Callers:
 *     _CmClassSubkeyCallback @ 0x14081B650 (_CmClassSubkeyCallback.c)
 *     _PnpDispatchInterfaceClass @ 0x1408B9700 (_PnpDispatchInterfaceClass.c)
 *     _PnpDispatchInstallerClass @ 0x1409ADA00 (_PnpDispatchInstallerClass.c)
 * Callees:
 *     PnpIsValidGuidString @ 0x1408B5960 (PnpIsValidGuidString.c)
 */

__int64 __fastcall CmValidateInstallerClassName(__int64 a1, const WCHAR *a2)
{
  return (unsigned __int8)PnpIsValidGuidString(a2) == 0 ? 0xC0000033 : 0;
}

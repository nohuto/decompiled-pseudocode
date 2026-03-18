/*
 * XREFs of _CmValidateInstallerClassName @ 0x1408B7B50
 * Callers:
 *     _CmClassSubkeyCallback @ 0x14081AF10 (_CmClassSubkeyCallback.c)
 *     _PnpDispatchInterfaceClass @ 0x1408BBDB0 (_PnpDispatchInterfaceClass.c)
 *     _PnpDispatchInstallerClass @ 0x1409B6670 (_PnpDispatchInstallerClass.c)
 * Callees:
 *     PnpIsValidGuidString @ 0x1408B7FF0 (PnpIsValidGuidString.c)
 */

__int64 __fastcall CmValidateInstallerClassName(__int64 a1, const WCHAR *a2)
{
  return (unsigned __int8)PnpIsValidGuidString(a2) == 0 ? 0xC0000033 : 0;
}

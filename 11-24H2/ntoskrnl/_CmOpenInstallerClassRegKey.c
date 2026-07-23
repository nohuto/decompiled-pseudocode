/*
 * XREFs of _CmOpenInstallerClassRegKey @ 0x1409AE8F4
 * Callers:
 *     _CmCreateInstallerClassWorker @ 0x140818520 (_CmCreateInstallerClassWorker.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x140819A14 (_CmSetInstallerClassRegPropWorker.c)
 *     _CmDeleteInstallerClassMappedPropertyFromRegValue @ 0x14081E990 (_CmDeleteInstallerClassMappedPropertyFromRegValue.c)
 *     PipCallDriverAddDevice @ 0x140980ED0 (PipCallDriverAddDevice.c)
 *     _PnpDispatchInstallerClass @ 0x1409ADA00 (_PnpDispatchInstallerClass.c)
 *     _CmSetInstallerClassMappedPropertyFromRegValue @ 0x140A937F0 (_CmSetInstallerClassMappedPropertyFromRegValue.c)
 * Callees:
 *     _CmOpenCommonClassRegKey @ 0x1408C5CDC (_CmOpenCommonClassRegKey.c)
 */

__int64 __fastcall CmOpenInstallerClassRegKey(
        _QWORD *a1,
        WCHAR *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        __int64 a7,
        _DWORD *a8)
{
  return CmOpenCommonClassRegKey(a1, a2, 32, 0, a5, a6, a7, a8);
}

/*
 * XREFs of _CmOpenInstallerClassRegKey @ 0x1409B7564
 * Callers:
 *     _CmCreateInstallerClassWorker @ 0x140817DE0 (_CmCreateInstallerClassWorker.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x1408192D4 (_CmSetInstallerClassRegPropWorker.c)
 *     _CmDeleteInstallerClassMappedPropertyFromRegValue @ 0x14081E250 (_CmDeleteInstallerClassMappedPropertyFromRegValue.c)
 *     _PnpDispatchInstallerClass @ 0x1409B6670 (_PnpDispatchInstallerClass.c)
 *     PipCallDriverAddDevice @ 0x1409C6228 (PipCallDriverAddDevice.c)
 *     _CmSetInstallerClassMappedPropertyFromRegValue @ 0x140A96FC0 (_CmSetInstallerClassMappedPropertyFromRegValue.c)
 * Callees:
 *     _CmOpenCommonClassRegKey @ 0x1408C82AC (_CmOpenCommonClassRegKey.c)
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

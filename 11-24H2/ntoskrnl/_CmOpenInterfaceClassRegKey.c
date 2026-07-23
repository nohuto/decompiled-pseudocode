/*
 * XREFs of _CmOpenInterfaceClassRegKey @ 0x140A1AF98
 * Callers:
 *     _CmDeleteInterfaceClassMappedPropertyFromRegValue @ 0x14081EB28 (_CmDeleteInterfaceClassMappedPropertyFromRegValue.c)
 *     _CmSetInterfaceClassMappedPropertyFromRegValue @ 0x140820468 (_CmSetInterfaceClassMappedPropertyFromRegValue.c)
 *     _PnpDispatchInterfaceClass @ 0x1408B9700 (_PnpDispatchInterfaceClass.c)
 * Callees:
 *     _CmOpenCommonClassRegKey @ 0x1408C5CDC (_CmOpenCommonClassRegKey.c)
 */

__int64 __fastcall CmOpenInterfaceClassRegKey(
        _QWORD *a1,
        WCHAR *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        __int64 a7,
        _DWORD *a8)
{
  return CmOpenCommonClassRegKey(a1, a2, 64, 0, a5, a6, a7, a8);
}

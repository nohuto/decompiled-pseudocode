/*
 * XREFs of _Details::GetDeviceStringProperty_::_1_::catch$1 @ 0x1801D51D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800CBD08 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall Details::GetDeviceStringProperty_::_1_::catch_1(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 96) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 72),
                           (void *)0x74,
                           (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\pnphelper\\lib\\details.cpp",
                           a4);
  return 0LL;
}

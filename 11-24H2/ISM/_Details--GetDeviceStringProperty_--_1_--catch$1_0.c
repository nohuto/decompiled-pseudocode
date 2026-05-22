/*
 * XREFs of _Details::GetDeviceStringProperty_::_1_::catch$1_0 @ 0x1801D520C
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800CBD08 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall Details::GetDeviceStringProperty_::_1_::catch_1_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 144) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 120),
                            (void *)0x5A,
                            (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\pnphelper\\lib\\details.cpp",
                            a4);
  return 0LL;
}

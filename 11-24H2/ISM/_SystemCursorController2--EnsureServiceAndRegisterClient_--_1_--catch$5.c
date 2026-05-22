/*
 * XREFs of _SystemCursorController2::EnsureServiceAndRegisterClient_::_1_::catch$5 @ 0x1801D67B6
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800F3984 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall SystemCursorController2::EnsureServiceAndRegisterClient_::_1_::catch_5(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 56),
    (void *)0x2E,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\systemcurs"
         "orcontroller2.cpp",
    a4);
  return 0LL;
}

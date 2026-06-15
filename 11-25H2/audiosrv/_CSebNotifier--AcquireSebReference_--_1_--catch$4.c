/*
 * XREFs of _CSebNotifier::AcquireSebReference_::_1_::catch$4 @ 0x18015F23B
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800FEA88 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CSebNotifier::AcquireSebReference_::_1_::catch_4(__int64 a1, __int64 a2)
{
  wil::details::in1diag3::Log_Hr(
    *(wil::details::in1diag3 **)(a2 + 88),
    530LL,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
    (const char *)0x8007000ELL);
  return 0LL;
}

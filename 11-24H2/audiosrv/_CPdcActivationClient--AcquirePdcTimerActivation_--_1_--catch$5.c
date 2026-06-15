/*
 * XREFs of _CPdcActivationClient::AcquirePdcTimerActivation_::_1_::catch$5 @ 0x18016B3F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180103394 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CPdcActivationClient::AcquirePdcTimerActivation_::_1_::catch_5(__int64 a1, __int64 a2)
{
  wil::details::in1diag3::Log_Hr(
    *(wil::details::in1diag3 **)(a2 + 104),
    56LL,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\pdcactivationclient.cpp",
    (const char *)0x8007000ELL);
  return 0LL;
}

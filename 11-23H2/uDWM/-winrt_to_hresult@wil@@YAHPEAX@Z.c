/*
 * XREFs of ?winrt_to_hresult@wil@@YAHPEAX@Z @ 0x18009E4A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReportFailure_CaughtException@$00@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x180098CC8 (--$ReportFailure_CaughtException@$00@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z.c)
 */

__int64 __fastcall wil::winrt_to_hresult(wil *this, void *a2)
{
  return wil::details::ReportFailure_CaughtException<1>(0, 0, 0);
}

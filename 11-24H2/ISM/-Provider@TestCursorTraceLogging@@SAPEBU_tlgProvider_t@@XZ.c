/*
 * XREFs of ?Provider@TestCursorTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800FAAFC
 * Callers:
 *     ??$CursorSuppressed@AEA_N@TestCursorTraceLogging@@SAXAEA_N@Z @ 0x1800F826C (--$CursorSuppressed@AEA_N@TestCursorTraceLogging@@SAXAEA_N@Z.c)
 *     ??$StateChange@AEAY07$$CBG@TestCursorTraceLogging@@SAXAEAY07$$CBG@Z @ 0x1801470AC (--$StateChange@AEAY07$$CBG@TestCursorTraceLogging@@SAXAEAY07$$CBG@Z.c)
 *     ??$StateChange@AEAY0BB@$$CBG@TestCursorTraceLogging@@SAXAEAY0BB@$$CBG@Z @ 0x1801470F0 (--$StateChange@AEAY0BB@$$CBG@TestCursorTraceLogging@@SAXAEAY0BB@$$CBG@Z.c)
 *     ??$StateChange@AEAY0L@$$CBG@TestCursorTraceLogging@@SAXAEAY0L@$$CBG@Z @ 0x180147134 (--$StateChange@AEAY0L@$$CBG@TestCursorTraceLogging@@SAXAEAY0L@$$CBG@Z.c)
 *     ??$StateChange@AEAY0O@$$CBG@TestCursorTraceLogging@@SAXAEAY0O@$$CBG@Z @ 0x180147178 (--$StateChange@AEAY0O@$$CBG@TestCursorTraceLogging@@SAXAEAY0O@$$CBG@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VTestCursorTraceLogging@@@details@wil@@QEAAPEAVTestCursorTraceLogging@@P6AXXZ@Z @ 0x1800FBA68 (-get@-$static_lazy@VTestCursorTraceLogging@@@details@wil@@QEAAPEAVTestCursorTraceLogging@@P6AXXZ.c)
 */

const struct _tlgProvider_t *__fastcall TestCursorTraceLogging::Provider(__int64 a1)
{
  return *(const struct _tlgProvider_t **)(wil::details::static_lazy<TestCursorTraceLogging>::get(
                                             a1,
                                             _lambda_f8a530405e8d431733881e929c3e0226_::_lambda_invoker_cdecl_)
                                         + 8);
}

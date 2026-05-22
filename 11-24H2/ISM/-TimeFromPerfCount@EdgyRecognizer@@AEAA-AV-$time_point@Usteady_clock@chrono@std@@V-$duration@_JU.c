/*
 * XREFs of ?TimeFromPerfCount@EdgyRecognizer@@AEAA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@_K@Z @ 0x180156024
 * Callers:
 *     ?OnPointerInfoFrame@EdgyRecognizer@@QEAAJPEAUPointerInputInfo@@AEAUtagPOINTER_INFO@@@Z @ 0x180155E6C (-OnPointerInfoFrame@EdgyRecognizer@@QEAAJPEAUPointerInputInfo@@AEAUtagPOINTER_INFO@@@Z.c)
 * Callees:
 *     ?QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z @ 0x180061048 (-QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800A279C (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

_QWORD *__fastcall EdgyRecognizer::TimeFromPerfCount(__int64 a1, _QWORD *a2, unsigned __int64 a3)
{
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  if ( !(unsigned int)QpcTimeConverter::QpcToMicroSec((QpcTimeConverter *)(a1 + 64), a3, &v7) )
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x9D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\system\\lib\\edgyrecognizer.cpp",
      v4);
  *a2 = 1000 * v7;
  return a2;
}

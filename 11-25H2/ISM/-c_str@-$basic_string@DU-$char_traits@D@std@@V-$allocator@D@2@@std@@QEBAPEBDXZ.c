/*
 * XREFs of ?c_str@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBAPEBDXZ @ 0x1800C80DC
 * Callers:
 *     ?LogLampArrayHidReportFailure@LampArrayTelemetry@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@JPEBGGGG@Z @ 0x1800E6EF8 (-LogLampArrayHidReportFailure@LampArrayTelemetry@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::string::c_str(_QWORD *a1)
{
  if ( a1[3] > 0xFuLL )
    return (_QWORD *)*a1;
  return a1;
}

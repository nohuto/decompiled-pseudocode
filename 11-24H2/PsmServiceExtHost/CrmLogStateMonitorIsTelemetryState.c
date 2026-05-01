/*
 * XREFs of CrmLogStateMonitorIsTelemetryState @ 0x1800307DC
 * Callers:
 *     CrmLogStateMonitorRundown @ 0x180030484 (CrmLogStateMonitorRundown.c)
 *     CrmLogStateMonitorStop @ 0x180069B90 (CrmLogStateMonitorStop.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CrmLogStateMonitorIsTelemetryState(unsigned __int64 a1)
{
  __int64 v1; // rax
  _BOOL8 result; // rax

  result = 0;
  if ( (unsigned int)a1 <= 0x2A )
  {
    v1 = 0x4C50001FFF8LL;
    if ( _bittest64(&v1, a1) )
      return 1;
  }
  return result;
}

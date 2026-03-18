/*
 * XREFs of DisableUserkTraceLogging @ 0x1C0094150
 * Callers:
 *     <none>
 * Callees:
 *     TlgUnregisterAggregateProvider @ 0x1C0399664 (TlgUnregisterAggregateProvider.c)
 */

NTSTATUS DisableUserkTraceLogging()
{
  REGHANDLE v0; // rcx
  REGHANDLE v1; // rcx

  v0 = qword_1C03540B8;
  qword_1C03540B8 = 0LL;
  dword_1C0354098 = 0;
  EtwUnregister(v0);
  TlgUnregisterAggregateProvider();
  v1 = qword_1C03590A0;
  qword_1C03590A0 = 0LL;
  dword_1C0359080 = 0;
  return EtwUnregister(v1);
}

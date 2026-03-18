/*
 * XREFs of ?DxgkCleanupTelemetry@@YAXXZ @ 0x140070778
 * Callers:
 *     DxgkUnload @ 0x1401C6C00 (DxgkUnload.c)
 * Callees:
 *     TlgUnregisterAggregateProvider @ 0x1402826EC (TlgUnregisterAggregateProvider.c)
 */

void DxgkCleanupTelemetry(void)
{
  REGHANDLE v0; // rcx
  REGHANDLE v1; // rcx
  REGHANDLE v2; // rcx
  REGHANDLE v3; // rcx

  TlgUnregisterAggregateProvider(&dword_14015B5B8);
  v0 = qword_14015B5A0;
  qword_14015B5A0 = 0LL;
  dword_14015B580 = 0;
  EtwUnregister(v0);
  v1 = qword_14015B568;
  qword_14015B568 = 0LL;
  dword_14015B548 = 0;
  EtwUnregister(v1);
  v2 = RegHandle;
  RegHandle = 0LL;
  dword_14015B5F0 = 0;
  EtwUnregister(v2);
  TlgUnregisterAggregateProvider(&dword_14015B660);
  v3 = qword_14015B648;
  qword_14015B648 = 0LL;
  dword_14015B628 = 0;
  EtwUnregister(v3);
}

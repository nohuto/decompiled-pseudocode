/*
 * XREFs of ?DxgkCleanupTelemetry@@YAXXZ @ 0x1400710F8
 * Callers:
 *     DxgkUnload @ 0x1401CBE90 (DxgkUnload.c)
 * Callees:
 *     TlgUnregisterAggregateProvider @ 0x140289B9C (TlgUnregisterAggregateProvider.c)
 */

void DxgkCleanupTelemetry(void)
{
  REGHANDLE v0; // rcx
  REGHANDLE v1; // rcx
  REGHANDLE v2; // rcx
  REGHANDLE v3; // rcx

  TlgUnregisterAggregateProvider(&dword_14015E5A8);
  v0 = qword_14015E590;
  qword_14015E590 = 0LL;
  dword_14015E570 = 0;
  EtwUnregister(v0);
  v1 = qword_14015E558;
  qword_14015E558 = 0LL;
  dword_14015E538 = 0;
  EtwUnregister(v1);
  v2 = RegHandle;
  RegHandle = 0LL;
  dword_14015E5E0 = 0;
  EtwUnregister(v2);
  TlgUnregisterAggregateProvider(&dword_14015E650);
  v3 = qword_14015E638;
  qword_14015E638 = 0LL;
  dword_14015E618 = 0;
  EtwUnregister(v3);
}

/*
 * XREFs of DbgkpWerInvokeCallbacks @ 0x140A953B4
 * Callers:
 *     DbgkpWerCaptureLiveTriageDump @ 0x1406FCA20 (DbgkpWerCaptureLiveTriageDump.c)
 *     DbgkpWerCaptureLiveFullDump @ 0x140A9519C (DbgkpWerCaptureLiveFullDump.c)
 * Callees:
 *     DbgPrintEx @ 0x1403A9690 (DbgPrintEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall DbgkpWerInvokeCallbacks(_QWORD *a1)
{
  const void *v2; // r9
  int v4; // eax
  unsigned int v5; // edi

  DbgPrintEx(5u, 3u, "DBGK: DbgkpWerInvokeCallbacks entered, context 0x%p\n", a1);
  v2 = *(const void **)(a1[9] + 8LL);
  if ( !v2 )
    return 0LL;
  DbgPrintEx(5u, 3u, "DBGK: Invoking callback at address 0x%p\n", v2);
  v4 = guard_dispatch_icall_no_overrides(a1);
  v5 = v4;
  if ( v4 < 0 )
    DbgPrintEx(5u, 0, "DBGK: callback at address 0x%p returned status 0x%X\n", *(const void **)(a1[9] + 8LL), v4);
  return v5;
}

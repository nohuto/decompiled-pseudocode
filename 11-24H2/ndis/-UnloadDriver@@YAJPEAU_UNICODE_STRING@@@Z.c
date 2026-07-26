/*
 * XREFs of ?UnloadDriver@@YAJPEAU_UNICODE_STRING@@@Z @ 0x1400DCFB4
 * Callers:
 *     ?Close@DriverService@@QEAAXXZ @ 0x14014B454 (-Close@DriverService@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall UnloadDriver(struct _UNICODE_STRING *a1)
{
  return ZwUnloadDriver(a1);
}

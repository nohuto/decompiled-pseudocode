/*
 * XREFs of ?LoadDriver@@YAJPEAU_UNICODE_STRING@@@Z @ 0x1400DCF98
 * Callers:
 *     ?Reference@DriverService@@QEAAJ_N@Z @ 0x14014B668 (-Reference@DriverService@@QEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall LoadDriver(struct _UNICODE_STRING *a1)
{
  return ZwLoadDriver(a1);
}

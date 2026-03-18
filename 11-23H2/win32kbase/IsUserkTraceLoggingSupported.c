/*
 * XREFs of IsUserkTraceLoggingSupported @ 0x1C00C49BC
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0134430 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     Win32kBaseDriverEntry @ 0x1C02DEBC0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 IsUserkTraceLoggingSupported()
{
  if ( qword_1C02961B0 )
    return qword_1C02961B0();
  else
    return 3221225659LL;
}

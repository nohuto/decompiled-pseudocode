/*
 * XREFs of HalpHvInvokeWheaErrorNotificationCallback @ 0x140548E54
 * Callers:
 *     HalpMemoryErrorDeferredHandler @ 0x140552B2C (HalpMemoryErrorDeferredHandler.c)
 *     HalpPmemErrorDeferredHandler @ 0x140552CF0 (HalpPmemErrorDeferredHandler.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpHvInvokeWheaErrorNotificationCallback(__int64 a1)
{
  if ( qword_140FC07B8 )
    return guard_dispatch_icall_no_overrides(a1);
  else
    return 3221225473LL;
}

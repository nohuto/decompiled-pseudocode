/*
 * XREFs of HalpHvInvokeWheaErrorNotificationCallback @ 0x140549004
 * Callers:
 *     HalpMemoryErrorDeferredHandler @ 0x140552D6C (HalpMemoryErrorDeferredHandler.c)
 *     HalpPmemErrorDeferredHandler @ 0x140552F30 (HalpPmemErrorDeferredHandler.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpHvInvokeWheaErrorNotificationCallback(__int64 a1, __int64 a2)
{
  if ( !qword_140FC11B8 )
    return 3221225473LL;
  LOBYTE(a2) = 1;
  return guard_dispatch_icall_no_overrides(a1, a2);
}

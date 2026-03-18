/*
 * XREFs of HalpHvInvokeWheaErrorNotificationCallback @ 0x14054B744
 * Callers:
 *     HalpMemoryErrorDeferredHandler @ 0x14055542C (HalpMemoryErrorDeferredHandler.c)
 *     HalpPmemErrorDeferredHandler @ 0x1405555F0 (HalpPmemErrorDeferredHandler.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpHvInvokeWheaErrorNotificationCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( !qword_140FC0F58 )
    return 3221225473LL;
  LOBYTE(a2) = 1;
  return guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
}

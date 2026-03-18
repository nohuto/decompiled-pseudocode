/*
 * XREFs of HvlInvokeWheaErrorNotificationCallback @ 0x1405874D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HvlInvokeWheaErrorNotificationCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = 3221225473LL;
  if ( HvlpWheaErrorNotificationCallback )
    return guard_dispatch_icall_no_overrides(a1, a2, HvlpWheaErrorNotificationCallback, a4);
  return result;
}

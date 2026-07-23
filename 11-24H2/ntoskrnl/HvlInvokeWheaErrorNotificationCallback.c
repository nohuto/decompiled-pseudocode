/*
 * XREFs of HvlInvokeWheaErrorNotificationCallback @ 0x140584850
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HvlInvokeWheaErrorNotificationCallback(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 3221225473LL;
  if ( HvlpWheaErrorNotificationCallback )
    return guard_dispatch_icall_no_overrides(a1, a2);
  return result;
}

/*
 * XREFs of PopFxInvokeDripsWatchdogCallback @ 0x14074E118
 * Callers:
 *     PopDripsWatchdogInvokeDeviceCallbacks @ 0x140A8B370 (PopDripsWatchdogInvokeDeviceCallbacks.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopFxInvokeDripsWatchdogCallback(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx

  result = a1;
  v4 = *(_QWORD *)(a1 + 80);
  if ( v4 )
  {
    if ( *(_QWORD *)(v4 + 168) )
    {
      if ( result == a2
        || (result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(v4 + 864), 0, 0),
            (result & 8) != 0) )
      {
        result = *(_QWORD *)(v4 + 904);
        v5 = *(_QWORD *)(a2 + 32);
        if ( !result || result == *(_QWORD *)(v5 + 8) )
          return guard_dispatch_icall_no_overrides(*(_QWORD *)(v4 + 192), v5, a3, 0LL);
      }
    }
  }
  return result;
}

/*
 * XREFs of PopDisablePowerLimitExtension @ 0x14074B2F8
 * Callers:
 *     PopPowerLimitPnpNotification @ 0x14074B970 (PopPowerLimitPnpNotification.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PopEvaluatePowerLimitChange @ 0x14074B3D4 (PopEvaluatePowerLimitChange.c)
 *     PopDiagTracePowerLimitExtension @ 0x14075706C (PopDiagTracePowerLimitExtension.c)
 */

__int64 __fastcall PopDisablePowerLimitExtension(__int64 a1)
{
  signed __int64 *v1; // rsi
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  v1 = (signed __int64 *)(a1 + 32);
  memset(&Event, 0, sizeof(Event));
  PopAcquireRwLockExclusive((unsigned __int64 *)(a1 + 32));
  if ( !*(_BYTE *)(a1 + 48) )
    return PopReleaseRwLock(v1);
  *(_BYTE *)(a1 + 48) = 0;
  PopDiagTracePowerLimitExtension(a1, POP_ETW_EVENT_POWER_LIMIT_EXTENSION_REMOVE);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  *(_QWORD *)(a1 + 192) = &Event;
  PopEvaluatePowerLimitChange(a1);
  PopReleaseRwLock(v1);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  PopAcquireRwLockExclusive((unsigned __int64 *)v1);
  *(_QWORD *)(a1 + 192) = 0LL;
  v4 = *(_QWORD *)(a1 + 120);
  PopReleaseRwLock(v1);
  return guard_dispatch_icall_no_overrides(v4, v5, v6, v7);
}

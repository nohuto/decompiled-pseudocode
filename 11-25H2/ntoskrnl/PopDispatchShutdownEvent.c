/*
 * XREFs of PopDispatchShutdownEvent @ 0x14074DDA0
 * Callers:
 *     <none>
 * Callees:
 *     PopEventCalloutDispatch @ 0x1404A9BF8 (PopEventCalloutDispatch.c)
 *     Feature_RsUserModeShutdown__private_IsEnabledDeviceUsageNoInline @ 0x1405CF098 (Feature_RsUserModeShutdown__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PopUserShutdownScenarioNotifyWinlogonCallout @ 0x1407481E8 (PopUserShutdownScenarioNotifyWinlogonCallout.c)
 */

struct _KTHREAD *__fastcall PopDispatchShutdownEvent(__int64 a1)
{
  unsigned __int32 v1; // ebx
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct _KTHREAD *result; // rax

  v1 = _InterlockedExchange(&PopShutdownEventCode, 0);
  if ( v1 )
  {
    if ( (unsigned int)Feature_RsUserModeShutdown__private_IsEnabledDeviceUsageNoInline() )
      PopUserShutdownScenarioNotifyWinlogonCallout(v3, v2);
    PopEventCalloutDispatch(1, v1);
  }
  if ( PoPdcCallbacks )
    guard_dispatch_icall_no_overrides(a1);
  result = KeGetCurrentThread();
  if ( result->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return result;
}

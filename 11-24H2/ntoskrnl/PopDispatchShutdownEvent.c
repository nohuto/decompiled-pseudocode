/*
 * XREFs of PopDispatchShutdownEvent @ 0x14075A380
 * Callers:
 *     <none>
 * Callees:
 *     PopEventCalloutDispatch @ 0x1404AAEB8 (PopEventCalloutDispatch.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PopUserShutdownScenarioNotifyWinlogonCallout @ 0x1407542C0 (PopUserShutdownScenarioNotifyWinlogonCallout.c)
 */

struct _KTHREAD *__fastcall PopDispatchShutdownEvent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int32 v4; // ebx
  struct _KTHREAD *result; // rax

  v4 = _InterlockedExchange(&PopShutdownEventCode, 0);
  if ( v4 )
  {
    PopUserShutdownScenarioNotifyWinlogonCallout(a1, a2);
    PopEventCalloutDispatch(1, v4);
  }
  if ( PoPdcCallbacks )
    guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
  result = KeGetCurrentThread();
  if ( result->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return result;
}

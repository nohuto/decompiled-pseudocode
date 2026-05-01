/*
 * XREFs of CrmStateMonitorPostShellReadyTimeSinceLogonCallback @ 0x18006C000
 * Callers:
 *     <none>
 * Callees:
 *     CrmRegisterToStateMonitor @ 0x18002DDF0 (CrmRegisterToStateMonitor.c)
 *     CrmStateMonitorPostShellReadySetAndReset @ 0x18007147C (CrmStateMonitorPostShellReadySetAndReset.c)
 */

__int64 __fastcall CrmStateMonitorPostShellReadyTimeSinceLogonCallback(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1 - 64;
  if ( !*a3 )
  {
    TpSetTimer(*(_QWORD *)(v3 + 136), 0LL, 0LL, 0LL);
    TpWaitForTimer(*(_QWORD *)(v3 + 136), 1LL);
    CrmStateMonitorPostShellReadySetAndReset(v3, 0LL);
    *(_DWORD *)(v3 + 160) = 0;
    *(_OWORD *)(v3 + 144) = 0LL;
    CrmRegisterToStateMonitor(v3 + 88, 24);
    *(_DWORD *)(v3 + 180) = 0;
    *(_OWORD *)(v3 + 164) = 0LL;
    CrmRegisterToStateMonitor(v3 + 112, 25);
    v4 = *(_QWORD *)(v3 + 136);
    v6 = -3000000000LL;
    return TpSetTimer(v4, &v6, 0LL, 2000LL);
  }
  return result;
}

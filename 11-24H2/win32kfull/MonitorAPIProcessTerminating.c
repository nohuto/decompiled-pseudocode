/*
 * XREFs of MonitorAPIProcessTerminating @ 0x1401ABBB0
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyPhysicalMonitorsOwnedByProcess@CMonitorAPI@@QEAAXPEAX@Z @ 0x1401ABBE8 (-DestroyPhysicalMonitorsOwnedByProcess@CMonitorAPI@@QEAAXPEAX@Z.c)
 */

void __fastcall MonitorAPIProcessTerminating(void *a1, __int64 a2)
{
  __int64 SessionState; // rax

  SessionState = W32GetSessionState((_DWORD)a1, a2);
  CMonitorAPI::DestroyPhysicalMonitorsOwnedByProcess(*(CMonitorAPI **)(*(_QWORD *)(SessionState + 96) + 128LL), a1);
}

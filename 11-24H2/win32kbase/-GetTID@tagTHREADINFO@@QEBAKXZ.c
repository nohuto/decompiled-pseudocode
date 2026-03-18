/*
 * XREFs of ?GetTID@tagTHREADINFO@@QEBAKXZ @ 0x1400F2110
 * Callers:
 *     ?ClearPriorityFloor@tagTHREADINFO@@QEAAXW4tagThreadPriorityFloor@@@Z @ 0x1400BFA00 (-ClearPriorityFloor@tagTHREADINFO@@QEAAXW4tagThreadPriorityFloor@@@Z.c)
 *     ?ComputeAndTestForegroundActivate@tagTHREADINFO@@QEAA_NXZ @ 0x14015CB10 (-ComputeAndTestForegroundActivate@tagTHREADINFO@@QEAA_NXZ.c)
 *     ?SetForegroundActivate@tagTHREADINFO@@QEAAXW4AllowForegroundActivateReason@@@Z @ 0x14015D080 (-SetForegroundActivate@tagTHREADINFO@@QEAAXW4AllowForegroundActivateReason@@@Z.c)
 *     ?ClearForegroundActivate@tagTHREADINFO@@QEAAXW4AllowForegroundActivateReason@@@Z @ 0x1401A2D50 (-ClearForegroundActivate@tagTHREADINFO@@QEAAXW4AllowForegroundActivateReason@@@Z.c)
 *     GetKeyboardInputThreadId @ 0x140212860 (GetKeyboardInputThreadId.c)
 *     IsKeyboardDelegationTarget @ 0x140212F60 (IsKeyboardDelegationTarget.c)
 * Callees:
 *     <none>
 */

HANDLE __fastcall tagTHREADINFO::GetTID(PETHREAD *this)
{
  return PsGetThreadId(*this);
}

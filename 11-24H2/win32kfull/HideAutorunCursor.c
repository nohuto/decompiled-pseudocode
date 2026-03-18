/*
 * XREFs of HideAutorunCursor @ 0x1402717B0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     FindTimer @ 0x14005FED0 (FindTimer.c)
 *     zzzUpdateCursorImage @ 0x140075AF0 (zzzUpdateCursorImage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x14026F748 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 */

void __fastcall HideAutorunCursor(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct tagTHREADINFO *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  _BYTE v13[8]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v14; // [rsp+40h] [rbp-18h]

  UserSessionState = W32GetUserSessionState(a1, a2);
  FindTimer(0LL, *(_QWORD *)(UserSessionState + 62752), 4u, 1, 0LL);
  *(_QWORD *)(W32GetUserSessionState(v4, v3) + 62752) = 0LL;
  v7 = PtiCurrent(v6, v5);
  if ( v7 != *(struct tagTHREADINFO **)(W32GetUserSessionState(v9, v8) + 18704) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 962);
  v13[0] = 0;
  v14 = 0LL;
  AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v13, v10);
  zzzUpdateCursorImage(v12, v11);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v13);
}

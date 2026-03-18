/*
 * XREFs of InvokeMouseCursorPositionCallout @ 0x140189720
 * Callers:
 *     <none>
 * Callees:
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x140060B94 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x140062674 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?CallUserModeLockFree@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1400BB320 (-CallUserModeLockFree@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 *     IsInputThread @ 0x1400BB380 (IsInputThread.c)
 *     IsKSTThread @ 0x1400BB410 (IsKSTThread.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 */

void __fastcall InvokeMouseCursorPositionCallout(int a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 UserSessionState; // rax
  __int64 *v10; // [rsp+28h] [rbp-D0h] BYREF
  _QWORD v11[20]; // [rsp+30h] [rbp-C8h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v10, "MouseCursorPosCallout", 0LL);
  if ( !IsInputThread(v6) && !IsKSTThread(v7) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2536LL);
  memset(v11, 0, sizeof(v11));
  v11[0] = 0x300000000LL;
  v11[3] = a3;
  LODWORD(v11[2]) = a1;
  v11[1] = a2;
  UserSessionState = W32GetUserSessionState(v8);
  InputExtensibilityCallout::CallUserModeLockFree(
    *(InputExtensibilityCallout **)(UserSessionState + 16408),
    (struct _CLIENT_DEVICE_NOTIFICATION *)v11);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v10);
}

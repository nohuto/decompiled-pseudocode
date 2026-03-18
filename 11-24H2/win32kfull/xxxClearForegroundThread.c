/*
 * XREFs of xxxClearForegroundThread @ 0x140277BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x140233A48 (-xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x14026F748 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 */

void __fastcall xxxClearForegroundThread(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  _BYTE v5[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]

  if ( !*(_QWORD *)(W32GetUserSessionState(a1, a2) + 18960)
    || (_InterlockedCompareExchange(
          (volatile signed __int32 *)(*(_QWORD *)(W32GetUserSessionState(v3, v2) + 18960) + 528LL),
          0,
          0) & 1) == 0 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4106);
  }
  v5[0] = 0;
  v6 = 0LL;
  AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v5, v4);
  xxxSetForegroundThreadWithWindowHint(0LL, 0LL);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v5);
}

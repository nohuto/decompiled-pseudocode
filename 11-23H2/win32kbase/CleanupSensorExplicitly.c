/*
 * XREFs of CleanupSensorExplicitly @ 0x1C006E510
 * Callers:
 *     DeactivateKSTInputProcessingHelper @ 0x1C00807B4 (DeactivateKSTInputProcessingHelper.c)
 *     UninitializeInputSensorsOnSharedThread @ 0x1C01E9298 (UninitializeInputSensorsOnSharedThread.c)
 * Callees:
 *     ?ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ @ 0x1C0057FD0 (-ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ.c)
 *     ?CleanupHandles@CRIMBase@@IEAAXXZ @ 0x1C006E594 (-CleanupHandles@CRIMBase@@IEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CleanupSensorExplicitly(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  CRIMBase *v6; // rbx

  v4 = 6LL * (int)a1;
  v5 = SGDGetUserSessionState(a1, a2, a3, a4);
  if ( !*(_QWORD *)(v5 + 8 * v4 + 3304) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 975LL);
  v6 = *(CRIMBase **)(v5 + 8 * v4 + 3304);
  if ( CBaseInput::ExecutingOnSensorHostingThread(v6) )
  {
    (*(void (__fastcall **)(CRIMBase *))(*(_QWORD *)v6 + 40LL))(v6);
    CRIMBase::CleanupHandles(v6);
    *((_QWORD *)v6 + 167) = 0LL;
  }
}

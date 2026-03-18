/*
 * XREFs of ?UninitializeSensor@CBaseInput@@QEAAXXZ @ 0x140187818
 * Callers:
 *     CleanupSensorExplicitly @ 0x140212570 (CleanupSensorExplicitly.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B060 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B0F4 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?CleanupHandles@CRIMBase@@IEAAXXZ @ 0x14006C338 (-CleanupHandles@CRIMBase@@IEAAXXZ.c)
 *     ?ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ @ 0x140106334 (-ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall CBaseInput::UninitializeSensor(CBaseInput *this)
{
  if ( !CBaseInput::ExecutingOnSensorHostingThread(this) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 979LL);
  (*(void (__fastcall **)(CBaseInput *))(*(_QWORD *)this + 40LL))(this);
  CRIMBase::CleanupHandles((HANDLE *)this);
  W32AcquirePushLockExclusiveEx((CBaseInput *)((char *)this + 1312), 0);
  *((_QWORD *)this + 165) = 0LL;
  W32ReleasePushLockExclusiveEx((CBaseInput *)((char *)this + 1312), 0LL);
}

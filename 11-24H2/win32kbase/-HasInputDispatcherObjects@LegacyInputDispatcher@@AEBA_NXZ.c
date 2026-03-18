/*
 * XREFs of ?HasInputDispatcherObjects@LegacyInputDispatcher@@AEBA_NXZ @ 0x140187324
 * Callers:
 *     ?Dispatch@LegacyInputDispatcher@@QEBAJI@Z @ 0x14018719C (-Dispatch@LegacyInputDispatcher@@QEBAJI@Z.c)
 *     ?WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1401878A0 (-WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ.c)
 *     ?PurgeInputDispatcherObjects@LegacyInputDispatcher@@QEAAXXZ @ 0x14020D400 (-PurgeInputDispatcherObjects@LegacyInputDispatcher@@QEAAXXZ.c)
 *     ?RegisterInputDispatcherObjects@LegacyInputDispatcher@@UEAAJPEAXIPEAUInputDispatcherObject@@@Z @ 0x14020D610 (-RegisterInputDispatcherObjects@LegacyInputDispatcher@@UEAAJPEAXIPEAUInputDispatcherObject@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

bool __fastcall LegacyInputDispatcher::HasInputDispatcherObjects(LegacyInputDispatcher *this)
{
  unsigned int v1; // eax

  v1 = *((_DWORD *)this + 10);
  if ( v1 >= *((_DWORD *)this + 13) && v1 != 64 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3276LL);
  return *((_DWORD *)this + 10) != 64;
}

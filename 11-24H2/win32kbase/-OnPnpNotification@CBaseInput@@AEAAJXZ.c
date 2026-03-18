/*
 * XREFs of ?OnPnpNotification@CBaseInput@@AEAAJXZ @ 0x140061410
 * Callers:
 *     ?RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z @ 0x1400E46B0 (-RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z.c)
 *     ?OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z @ 0x1400EB910 (-OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z.c)
 * Callees:
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x140060B94 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     RIMOnPnpNotification @ 0x140061480 (RIMOnPnpNotification.c)
 *     ?Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ @ 0x1400626B8 (-Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall CBaseInput::OnPnpNotification(CBaseInput *this)
{
  unsigned int v2; // eax
  __int64 *v3; // rbx
  unsigned int v4; // edi
  __int64 *v6; // [rsp+30h] [rbp+8h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v6, "OnPnpNotification", 0LL);
  v2 = RIMOnPnpNotification(*((_QWORD *)this + 1));
  v3 = v6;
  v4 = v2;
  if ( v6 )
  {
    *((_QWORD *)PtiCurrent() + 48) = v3[6];
    InputTraceLogging::ThreadLockedPerfRegion::Cleanup((InputTraceLogging::ThreadLockedPerfRegion *)&v6);
  }
  return v4;
}

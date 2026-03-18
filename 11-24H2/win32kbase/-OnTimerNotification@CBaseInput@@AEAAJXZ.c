/*
 * XREFs of ?OnTimerNotification@CBaseInput@@AEAAJXZ @ 0x140058F50
 * Callers:
 *     <none>
 * Callees:
 *     RIMOnTimerNotification @ 0x14005A190 (RIMOnTimerNotification.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x140060B94 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ?Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ @ 0x1400626B8 (-Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall CBaseInput::OnTimerNotification(HANDLE *this)
{
  unsigned int v2; // eax
  __int64 v3; // rbx
  unsigned int v4; // edi
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)&v6,
    "OnTimerNotification",
    0LL);
  v2 = RIMOnTimerNotification(this[1]);
  v3 = v6;
  v4 = v2;
  if ( v6 )
  {
    *((_QWORD *)PtiCurrent() + 48) = *(_QWORD *)(v3 + 48);
    InputTraceLogging::ThreadLockedPerfRegion::Cleanup((InputTraceLogging::ThreadLockedPerfRegion *)&v6);
  }
  return v4;
}

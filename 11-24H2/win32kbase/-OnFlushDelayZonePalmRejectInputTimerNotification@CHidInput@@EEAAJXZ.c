/*
 * XREFs of ?OnFlushDelayZonePalmRejectInputTimerNotification@CHidInput@@EEAAJXZ @ 0x1400602F0
 * Callers:
 *     ?PreProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x140060280 (-PreProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     ?FlushDelayZonePalmRejectInputTimerProc@DelayZonePalmRejection@@QEAAXXZ @ 0x14006034C (-FlushDelayZonePalmRejectInputTimerProc@DelayZonePalmRejection@@QEAAXXZ.c)
 *     ?GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ @ 0x14006041C (-GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x140060B94 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ?Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ @ 0x1400626B8 (-Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall CHidInput::OnFlushDelayZonePalmRejectInputTimerNotification(CHidInput *this)
{
  DelayZonePalmRejection *Instance; // rax
  __int64 v2; // rbx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)&v4,
    "OnFlushDelayZonePalmRejectInputTimerNotification",
    0LL);
  Instance = DelayZonePalmRejection::GetInstance();
  DelayZonePalmRejection::FlushDelayZonePalmRejectInputTimerProc(Instance);
  v2 = v4;
  if ( v4 )
  {
    *((_QWORD *)PtiCurrent() + 48) = *(_QWORD *)(v2 + 48);
    InputTraceLogging::ThreadLockedPerfRegion::Cleanup((InputTraceLogging::ThreadLockedPerfRegion *)&v4);
  }
  return 0LL;
}

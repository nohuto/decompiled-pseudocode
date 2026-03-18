/*
 * XREFs of ?OnDelayZonePalmRejectionTimerNotification@CHidInput@@EEAAJXZ @ 0x14020F380
 * Callers:
 *     <none>
 * Callees:
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x14005AA08 (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@H@Z @ 0x14005AA28 (--0ApiSetEditionCrit@@QEAA@H@Z.c)
 *     ?GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ @ 0x14006041C (-GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x140060B94 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x140062674 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?PalmRejectTimerProc@DelayZonePalmRejection@@QEAAXXZ @ 0x1402118F4 (-PalmRejectTimerProc@DelayZonePalmRejection@@QEAAXXZ.c)
 */

__int64 __fastcall CHidInput::OnDelayZonePalmRejectionTimerNotification(CHidInput *this)
{
  __int64 v1; // rcx
  DelayZonePalmRejection *Instance; // rax
  char v4; // [rsp+38h] [rbp+10h] BYREF
  __int64 *v5; // [rsp+40h] [rbp+18h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
    &v5,
    "OnDelayZonePalmRejectionTimerNotification",
    0LL);
  ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v4);
  Instance = DelayZonePalmRejection::GetInstance(v1);
  DelayZonePalmRejection::PalmRejectTimerProc(Instance);
  ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&v4);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v5);
  return 0LL;
}

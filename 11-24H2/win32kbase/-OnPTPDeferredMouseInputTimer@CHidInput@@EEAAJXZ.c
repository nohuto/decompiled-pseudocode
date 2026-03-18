/*
 * XREFs of ?OnPTPDeferredMouseInputTimer@CHidInput@@EEAAJXZ @ 0x14020F3E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x140060B94 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x140062674 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     InitiatePTPMouseProcessing @ 0x1400F7C60 (InitiatePTPMouseProcessing.c)
 */

__int64 __fastcall CHidInput::OnPTPDeferredMouseInputTimer(CHidInput *this)
{
  __int64 v1; // rcx
  __int64 *v3; // [rsp+38h] [rbp+10h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v3, "OnPTPDeferredMouseInputTimer", 0LL);
  InitiatePTPMouseProcessing(v1);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v3);
  return 0LL;
}

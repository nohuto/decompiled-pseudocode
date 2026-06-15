/*
 * XREFs of ?DestroyStream@CStreamInstance@@UEAAJXZ @ 0x1400297E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1400073B4 (-Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x14000761C (--1CPerfTracker@@QEAA@XZ.c)
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x1400079B0 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x1400298F4 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?GetHistoryBufferManager@@YAJPEAPEAVCAudioHistoryBufferManager@@@Z @ 0x140041BE0 (-GetHistoryBufferManager@@YAJPEAPEAVCAudioHistoryBufferManager@@@Z.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     ?Remove@CAudioHistoryBufferManager@@QEAAJ_K@Z @ 0x140066548 (-Remove@CAudioHistoryBufferManager@@QEAAJ_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CStreamInstance::DestroyStream(CStreamInstance *this)
{
  const struct _tlgProvider_t *v2; // rax
  unsigned __int64 v4; // rax
  CAudioHistoryBufferManager *v5; // [rsp+20h] [rbp-118h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp-108h] BYREF

  v2 = AudioDgTelemetryProvider::Provider((__int64)this);
  CPerfTracker::CPerfTracker(&PerformanceCount, v2, "SrvStreamInstance_DestroyStream", 0LL);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 216));
  if ( (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 1) + 120LL))((char *)this - 8) )
  {
    v5 = 0LL;
    if ( GetHistoryBufferManager(&v5) >= 0 )
    {
      v4 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 1) + 120LL))((char *)this - 8);
      CAudioHistoryBufferManager::Remove(v5, v4);
    }
  }
  PublishDeviceGraphWnfState();
  if ( this != (CStreamInstance *)-216LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 216));
  CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
  return 0LL;
}

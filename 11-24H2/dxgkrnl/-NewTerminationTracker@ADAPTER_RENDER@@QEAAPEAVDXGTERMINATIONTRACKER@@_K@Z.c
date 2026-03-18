/*
 * XREFs of ?NewTerminationTracker@ADAPTER_RENDER@@QEAAPEAVDXGTERMINATIONTRACKER@@_K@Z @ 0x140371594
 * Callers:
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x140336F2C (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DeleteTerminationTracker@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x14038B360 (-DeleteTerminationTracker@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 */

struct DXGTERMINATIONTRACKER *__fastcall ADAPTER_RENDER::NewTerminationTracker(
        struct _PAGED_LOOKASIDE_LIST *this,
        __int64 a2)
{
  struct DXGTERMINATIONTRACKER *v4; // rdi
  char v5; // r14
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int64 v7; // rsi

  v4 = (struct DXGTERMINATIONTRACKER *)ExAllocateFromPagedLookasideList(this + 12);
  if ( v4 )
  {
    v5 = 0;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&this[10].L.Future[6], 0LL);
    CurrentThread = KeGetCurrentThread();
    *(_QWORD *)&this[10].L.Future[8] = CurrentThread;
    v7 = *(_QWORD *)&this[10].L.Future[2] + a2;
    if ( ((*((_DWORD *)DXGPROCESS::GetCurrent((__int64)CurrentThread) + 102) & 4) != 0
       || v7 <= *((_QWORD *)DXGGLOBAL::GetGlobal() + 114))
      && v7 >= *(_QWORD *)&this[10].L.Future[2] )
    {
      v5 = 1;
      *(_QWORD *)&this[10].L.Future[2] = v7;
    }
    *(_QWORD *)&this[10].L.Future[8] = 0LL;
    ExReleasePushLockExclusiveEx(&this[10].L.Future[6], 0LL);
    KeLeaveCriticalRegion();
    if ( v5 )
      return v4;
    WdLogSingleEntry0(4LL);
    WdLogGlobalForLineNumber = 4915;
    ADAPTER_RENDER::DeleteTerminationTracker((ADAPTER_RENDER *)this, v4);
  }
  else
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 4924;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Failed to allocate memory for deferred allocation tracker, destroying allocation synchronously.",
      4924LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return 0LL;
}

/*
 * XREFs of ?NewTerminationTracker@ADAPTER_RENDER@@QEAAPEAVDXGTERMINATIONTRACKER@@_K@Z @ 0x1403861A8
 * Callers:
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x140349230 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DeleteTerminationTracker@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x140395328 (-DeleteTerminationTracker@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 */

struct DXGTERMINATIONTRACKER *__fastcall ADAPTER_RENDER::NewTerminationTracker(
        struct _PAGED_LOOKASIDE_LIST *this,
        __int64 a2)
{
  struct DXGTERMINATIONTRACKER *v4; // rsi
  char v5; // r14
  unsigned __int64 v6; // rbp
  __int64 v7; // rcx

  v4 = (struct DXGTERMINATIONTRACKER *)ExAllocateFromPagedLookasideList(this + 12);
  if ( v4 )
  {
    v5 = 0;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&this[10].L.Future[6], 0LL);
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *(_QWORD *)&this[10].L.Future[8] = KeGetCurrentThread();
    v6 = a2 + *(_QWORD *)&this[10].L.Future[2];
    if ( ((*((_DWORD *)DXGPROCESS::GetCurrent(v7) + 102) & 4) != 0 || v6 <= *((_QWORD *)DXGGLOBAL::GetGlobal() + 110))
      && v6 >= *(_QWORD *)&this[10].L.Future[2] )
    {
      v5 = 1;
      *(_QWORD *)&this[10].L.Future[2] = v6;
    }
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *(_QWORD *)&this[10].L.Future[8] = 0LL;
    ExReleasePushLockExclusiveEx(&this[10].L.Future[6], 0LL);
    KeLeaveCriticalRegion();
    if ( v5 )
      return v4;
    WdLogSingleEntry0(4LL);
    WdLogGlobalForLineNumber = 4916;
    ADAPTER_RENDER::DeleteTerminationTracker((ADAPTER_RENDER *)this, v4);
  }
  else
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 4925;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Failed to allocate memory for deferred allocation tracker, destroying allocation synchronously.",
      4925LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return 0LL;
}

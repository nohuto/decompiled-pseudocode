/*
 * XREFs of DpiIndirectCbOpmGetSrmListVersion @ 0x14008A190
 * Callers:
 *     <none>
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x14002A8E8 (DpiCheckForOutstandingD3Requests.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x140041998 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x1400419DC (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     DpiEnableD3Requests @ 0x1402C7FF0 (DpiEnableD3Requests.c)
 *     DxgkAcquireAdapterDdiSync @ 0x14031E9B8 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x14031EAA8 (DxgkReleaseAdapterDdiSync.c)
 *     DxgkReleaseAdapterOpmI2CSync @ 0x1403C4838 (DxgkReleaseAdapterOpmI2CSync.c)
 *     DpiMiracastFindRenderAdapterForSession @ 0x1403C4E78 (DpiMiracastFindRenderAdapterForSession.c)
 *     DxgkAcquireAdapterOpmI2CSync @ 0x1403CDE4C (DxgkAcquireAdapterOpmI2CSync.c)
 */

__int64 __fastcall DpiIndirectCbOpmGetSrmListVersion(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 RenderAdapterForSession; // rbx
  unsigned int v7; // edi

  AcquireMiniportListMutex();
  RenderAdapterForSession = DpiMiracastFindRenderAdapterForSession();
  if ( RenderAdapterForSession )
  {
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(RenderAdapterForSession + 484) )
      DpiCheckForOutstandingD3Requests(RenderAdapterForSession);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(RenderAdapterForSession + 168), 1u);
    ReleaseMiniportListMutex();
    if ( *(_DWORD *)(RenderAdapterForSession + 3152) >= 4u )
    {
      DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 4032));
      DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 4032), 1LL);
      v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(RenderAdapterForSession + 3280))(
             *(_QWORD *)(RenderAdapterForSession + 48),
             a2,
             a3);
      DxgkReleaseAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 4032));
      DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 4032));
    }
    else
    {
      WdLogSingleEntry1(2LL, RenderAdapterForSession);
      WdLogGlobalForLineNumber = 1252;
      v7 = -1073741637;
    }
    if ( *(_BYTE *)(RenderAdapterForSession + 484) )
      DpiEnableD3Requests(*(_QWORD *)(RenderAdapterForSession + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(RenderAdapterForSession + 168));
    KeLeaveCriticalRegion();
    return v7;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1238;
    ReleaseMiniportListMutex();
    return 3221226021LL;
  }
}

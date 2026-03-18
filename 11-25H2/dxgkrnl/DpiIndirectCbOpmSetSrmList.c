/*
 * XREFs of DpiIndirectCbOpmSetSrmList @ 0x140089C00
 * Callers:
 *     <none>
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x14002A148 (DpiCheckForOutstandingD3Requests.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x140042008 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x14004204C (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     DpiEnableD3Requests @ 0x1402BA7B0 (DpiEnableD3Requests.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1403762D8 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1403763C8 (DxgkReleaseAdapterDdiSync.c)
 *     DpiMiracastFindRenderAdapterForSession @ 0x1403D12F8 (DpiMiracastFindRenderAdapterForSession.c)
 *     DxgkReleaseAdapterOpmI2CSync @ 0x1403D1690 (DxgkReleaseAdapterOpmI2CSync.c)
 *     DxgkAcquireAdapterOpmI2CSync @ 0x1403D5F64 (DxgkAcquireAdapterOpmI2CSync.c)
 */

__int64 __fastcall DpiIndirectCbOpmSetSrmList(__int64 a1, unsigned int a2, __int64 a3)
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
      v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(RenderAdapterForSession + 3272))(
             *(_QWORD *)(RenderAdapterForSession + 48),
             a2,
             a3);
      DxgkReleaseAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 4032));
      DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 4032));
    }
    else
    {
      WdLogSingleEntry1(2LL, RenderAdapterForSession);
      WdLogGlobalForLineNumber = 1197;
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
    WdLogGlobalForLineNumber = 1183;
    ReleaseMiniportListMutex();
    return 3221226021LL;
  }
}

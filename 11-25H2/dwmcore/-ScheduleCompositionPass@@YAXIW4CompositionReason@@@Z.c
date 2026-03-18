/*
 * XREFs of ?ScheduleCompositionPass@@YAXIW4CompositionReason@@@Z @ 0x1800C5BD8
 * Callers:
 *     ?InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z @ 0x18003E134 (-InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z.c)
 *     ?GetNextBufferIndexAvailable@CCaptureRenderTarget@@IEAAHXZ @ 0x1800C46F4 (-GetNextBufferIndexAvailable@CCaptureRenderTarget@@IEAAHXZ.c)
 *     ?IsRenderTime@COffScreenRenderTarget@@MEAA_NXZ @ 0x1800C4CC0 (-IsRenderTime@COffScreenRenderTarget@@MEAA_NXZ.c)
 *     ?Present@CDDARenderTarget@@IEAAJXZ @ 0x1800C5AC8 (-Present@CDDARenderTarget@@IEAAJXZ.c)
 *     ?RenderAndPresent@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800C7630 (-RenderAndPresent@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Present@CLegacyRenderTarget@@IEAAJXZ @ 0x1800C7AC8 (-Present@CLegacyRenderTarget@@IEAAJXZ.c)
 *     ?RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800C81C0 (-RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?EnsureAdapterInfo@CGlobalSurfaceManager@@AEAAJXZ @ 0x1800FFA34 (-EnsureAdapterInfo@CGlobalSurfaceManager@@AEAAJXZ.c)
 *     ?WorkerThreadMain@CComputeScribbleScheduler@@AEAAKXZ @ 0x180174084 (-WorkerThreadMain@CComputeScribbleScheduler@@AEAAKXZ.c)
 *     ?UpdateDXGIFactory@CDisplayManager@@IEAAJXZ @ 0x18022CD24 (-UpdateDXGIFactory@CDisplayManager@@IEAAJXZ.c)
 *     ?TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ @ 0x18023F450 (-TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ.c)
 *     ?Present@CRemoteAppRenderTarget@@IEAAJXZ @ 0x18028BE9C (-Present@CRemoteAppRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B1240 (McGenEventWrite_EventWriteTransfer.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ScheduleCompositionPass(unsigned int a1, DWORD a2)
{
  CGlobalComposition *v2; // rbx
  ULONG TolerableDelay; // edx
  __int64 v5; // r8
  signed int LastError; // eax
  LARGE_INTEGER DueTime; // [rsp+40h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+48h] [rbp-30h] BYREF
  LARGE_INTEGER *p_DueTime; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+60h] [rbp-18h]
  int v11; // [rsp+64h] [rbp-14h]
  void *retaddr; // [rsp+78h] [rbp+0h]

  v2 = g_pComposition;
  if ( g_pComposition && *((_BYTE *)g_pComposition + 6496) )
  {
    TolerableDelay = (unsigned int)((unsigned __int64)(1000LL
                                                     * *(_QWORD *)((*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)g_pComposition + 39) + 24LL))(*((_QWORD *)g_pComposition + 39))
                                                                 + 8))
                                  / g_qpcFrequency.QuadPart) < a1
                   ? a1
                   : 0;
    if ( TolerableDelay < *((_DWORD *)v2 + 62) )
    {
      *((_DWORD *)v2 + 62) = TolerableDelay;
      DueTime.QuadPart = -10000LL * TolerableDelay;
      if ( !SetWaitableTimerEx(*((HANDLE *)v2 + 30), &DueTime, 0, 0LL, 0LL, 0LL, TolerableDelay) )
      {
        LastError = GetLastError();
        if ( LastError > 0 )
          LastError = (unsigned __int16)LastError | 0x80070000;
        if ( LastError >= 0 )
          LastError = -2003304445;
        ModuleFailFastForHRESULT(LastError, retaddr);
      }
    }
    _m_prefetchw((char *)v2 + 252);
    if ( (~_InterlockedOr((volatile signed __int32 *)v2 + 63, a2) & a2) != 0
      && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      v11 = 0;
      p_DueTime = &DueTime;
      DueTime.LowPart = a2;
      v10 = 4;
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_SCHEDULED_COMPOSITION_REASON,
        v5,
        2u,
        &v8);
    }
  }
}

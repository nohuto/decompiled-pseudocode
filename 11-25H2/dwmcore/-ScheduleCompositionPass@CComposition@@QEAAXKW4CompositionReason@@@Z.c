/*
 * XREFs of ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z @ 0x1800E5580
 * Callers:
 *     ?AddDelayDeleteResource@CComposition@@QEAAXPEAVCResource@@@Z @ 0x180069728 (-AddDelayDeleteResource@CComposition@@QEAAXPEAVCResource@@@Z.c)
 *     ?TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1800C4D70 (-TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?ProcessSetOffset@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOFFSET@@@Z @ 0x1800E4780 (-ProcessSetOffset@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOFFSET@@@Z.c)
 *     ?ProcessComposition@CComposition@@QEAAXXZ @ 0x1800E6E20 (-ProcessComposition@CComposition@@QEAAXXZ.c)
 *     ?OnInteractionUpdate@CManipulationManager@@IEAAXXZ @ 0x180134D80 (-OnInteractionUpdate@CManipulationManager@@IEAAXXZ.c)
 *     ?RequestOffThreadCleanTree@CComposition@@QEAAJXZ @ 0x180137A38 (-RequestOffThreadCleanTree@CComposition@@QEAAJXZ.c)
 *     ?ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPILEDEFFECTTEMPLATE@@@Z @ 0x18013B3FC (-ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPILEDEFFECTTEM.c)
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x18013DBE0 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@@Z.c)
 *     ?TurnOffScribblingForTarget@CSuperWetInkManager@@AEBAXPEAVIMonitorTarget@@@Z @ 0x180175B90 (-TurnOffScribblingForTarget@CSuperWetInkManager@@AEBAXPEAVIMonitorTarget@@@Z.c)
 *     ?_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z @ 0x1801BA33C (-_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z.c)
 *     ?Push2DVisualTransformToRenderThread@CInteraction@@UEAAJXZ @ 0x1801BBF60 (-Push2DVisualTransformToRenderThread@CInteraction@@UEAAJXZ.c)
 *     ?SetOffset@CVisual@@QEAAXMMM@Z @ 0x1801D983C (-SetOffset@CVisual@@QEAAXMMM@Z.c)
 *     ?ProcessSetProgress@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETPROGRESS@@@Z @ 0x1801E7290 (-ProcessSetProgress@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION.c)
 *     ?UpdateBatterySaverState@CComposition@@IEAAX_N@Z @ 0x1802665B8 (-UpdateBatterySaverState@CComposition@@IEAAX_N@Z.c)
 *     ?CheckForRenderCompleted@CVisualCapture@@IEAAXXZ @ 0x1802B21AC (-CheckForRenderCompleted@CVisualCapture@@IEAAXXZ.c)
 *     ?ScheduleCompositionPass@CCursorState@@AEAAXXZ @ 0x1802BD18C (-ScheduleCompositionPass@CCursorState@@AEAAXXZ.c)
 *     ?RenderAndPresent@CHolographicInteropTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x1802D9830 (-RenderAndPresent@CHolographicInteropTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?UpdateFrameStatistics@CHolographicExclusiveView@@QEAAXPEBUDXGI_FRAME_STATISTICS@@@Z @ 0x1802DB750 (-UpdateFrameStatistics@CHolographicExclusiveView@@QEAAXPEBUDXGI_FRAME_STATISTICS@@@Z.c)
 *     ?ProcessCreate@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICINTEROPTEXTURE_CREATE@@@Z @ 0x1802DC28C (-ProcessCreate@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICINT.c)
 *     ?ProcessSetFlags@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICINTEROPTEXTURE_SETFLAGS@@@Z @ 0x1802DC38C (-ProcessSetFlags@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICI.c)
 *     ?ProcessSetPosition@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICINTEROPTEXTURE_SETPOSITION@@@Z @ 0x1802DC3D8 (-ProcessSetPosition@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPH.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B1240 (McGenEventWrite_EventWriteTransfer.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

ULONG __fastcall CComposition::ScheduleCompositionPass(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // r8
  ULONG TolerableDelay; // edx
  ULONG result; // eax
  signed int LastError; // eax
  LARGE_INTEGER DueTime; // [rsp+40h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+48h] [rbp-40h] BYREF
  LARGE_INTEGER *p_DueTime; // [rsp+58h] [rbp-30h]
  __int64 v14; // [rsp+60h] [rbp-28h]
  void *retaddr; // [rsp+88h] [rbp+0h]

  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 312) + 24LL))(*(_QWORD *)(a1 + 312));
  TolerableDelay = 0;
  if ( a2 > (unsigned int)((unsigned __int64)(1000LL * *(_QWORD *)(v6 + 8)) / g_qpcFrequency.QuadPart) )
    TolerableDelay = a2;
  if ( TolerableDelay < *(_DWORD *)(a1 + 248) )
  {
    *(_DWORD *)(a1 + 248) = TolerableDelay;
    DueTime.QuadPart = -10000LL * TolerableDelay;
    if ( !SetWaitableTimerEx(*(HANDLE *)(a1 + 240), &DueTime, 0, 0LL, 0LL, 0LL, TolerableDelay) )
    {
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      if ( LastError >= 0 )
        LastError = -2003304445;
      ModuleFailFastForHRESULT(LastError, retaddr);
    }
  }
  _m_prefetchw((const void *)(a1 + 252));
  result = ~_InterlockedOr((volatile signed __int32 *)(a1 + 252), a3);
  if ( (result & a3) != 0 && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    DueTime.LowPart = a3;
    p_DueTime = &DueTime;
    v14 = 4LL;
    return McGenEventWrite_EventWriteTransfer(
             &Microsoft_Windows_Dwm_Core_Provider_Context,
             &EVTDESC_SCHEDULED_COMPOSITION_REASON,
             v7,
             2u,
             &v12);
  }
  return result;
}

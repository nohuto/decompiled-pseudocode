/*
 * XREFs of ?PostRender@CComputeScribbleRenderer@@QEAAJPEAVIMonitorTarget@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180245810
 * Callers:
 *     ?RenderAndPresent@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x180099730 (-RenderAndPresent@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x18009A200 (-RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIMonitorTarget@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18018EA60 (-ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIMonitorTarget@@AEBV-$TMilRect@I.c)
 *     ?GetBackBufferData@CComputeScribbleRenderer@@AEAAPEAVCComputeScribbleFramebuffer@@XZ @ 0x1801C5014 (-GetBackBufferData@CComputeScribbleRenderer@@AEAAPEAVCComputeScribbleFramebuffer@@XZ.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x1801C6A8C (McTemplateU0xq_EventWriteTransfer.c)
 */

__int64 __fastcall CComputeScribbleRenderer::PostRender(__int64 a1, __int64 *a2, __int64 a3)
{
  struct CComputeScribbleFramebuffer *BackBufferData; // rax
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
  {
    if ( *(_BYTE *)(a1 + 48) )
    {
      BackBufferData = CComputeScribbleRenderer::GetBackBufferData((CComputeScribbleRenderer *)a1);
      if ( BackBufferData )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
          McTemplateU0xq_EventWriteTransfer(
            v7,
            &EVTDESC_COMPUTESCRIBBLE_POSTRENDER,
            *(_QWORD *)(a1 + 24),
            *((_DWORD *)BackBufferData + 65));
      }
    }
  }
  v8 = CSuperWetInkManager::ScheduleScribblesForRenderTarget(*((CSuperWetInkManager **)g_pComposition + 82), a2, a3);
  v9 = v8;
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x101,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblerenderer.cpp",
    (const char *)(unsigned int)v8);
  return v9;
}

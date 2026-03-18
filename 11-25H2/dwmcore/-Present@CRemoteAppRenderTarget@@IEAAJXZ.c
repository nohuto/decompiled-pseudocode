/*
 * XREFs of ?Present@CRemoteAppRenderTarget@@IEAAJXZ @ 0x18028BE9C
 * Callers:
 *     ?RenderAndPresent@CRemoteAppRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x180282E50 (-RenderAndPresent@CRemoteAppRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?SetFullDirty@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x1800C3F90 (-SetFullDirty@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     ?ScheduleCompositionPass@@YAXIW4CompositionReason@@@Z @ 0x1800C5BD8 (-ScheduleCompositionPass@@YAXIW4CompositionReason@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Present@CCompSwapChain@@QEAAJII@Z @ 0x1802D1160 (-Present@CCompSwapChain@@QEAAJII@Z.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::Present(CRemoteAppRenderTarget *this, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // ebx
  CCompSwapChain *v5; // rcx
  int v6; // eax

  v3 = 0;
  if ( *((_BYTE *)this + 2631) )
  {
    if ( *(_DWORD *)(*((_QWORD *)this + 3) + 6288LL) == 7 )
    {
      v5 = (CCompSwapChain *)*((_QWORD *)this + 22);
      if ( v5 )
      {
        v6 = CCompSwapChain::Present(v5, a2, a3);
        *((_BYTE *)this + 2631) = 0;
        v3 = v6;
        if ( v6 == -2005270518 )
        {
          ScheduleCompositionPass(0, 0x2000u);
          CTargetDirtyBase<8>::SetFullDirty((__int64)this + 280);
          return 0;
        }
        else if ( v6 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0xFFu, 0LL);
        }
      }
    }
  }
  return v3;
}

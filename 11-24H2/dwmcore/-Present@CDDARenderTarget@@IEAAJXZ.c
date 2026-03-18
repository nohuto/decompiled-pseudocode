/*
 * XREFs of ?Present@CDDARenderTarget@@IEAAJXZ @ 0x180097A78
 * Callers:
 *     ?RenderAndPresent@CDDARenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x180097A20 (-RenderAndPresent@CDDARenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Present@CDDASwapChain@@QEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x180097BA0 (-Present@CDDASwapChain@@QEAAJIIAEBV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@@Z.c)
 *     ?GetTightDirtyRects@?$CTargetDirtyBase@$07@@QEAA_NPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x180097CC0 (-GetTightDirtyRects@-$CTargetDirtyBase@$07@@QEAA_NPEAV-$vector@UtagRECT@@V-$allocator@UtagRECT@@.c)
 *     ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z @ 0x1800BF040 (-ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z.c)
 */

__int64 __fastcall CDDARenderTarget::Present(CDDARenderTarget *this)
{
  unsigned int v1; // ebx
  char v3; // bl
  __int64 v4; // rdx
  int v5; // eax
  _QWORD *v6; // rcx
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]

  v1 = 0;
  if ( *((_QWORD *)this + 22) && *(int *)(*((_QWORD *)this + 3) + 6264LL) < 7 && *((_BYTE *)this + 2800) )
  {
    v3 = *((_BYTE *)this + 2801);
    v9 = 0LL;
    v8 = 0LL;
    CTargetDirtyBase<8>::GetTightDirtyRects((char *)this + 480, &v8);
    v5 = CDDASwapChain::Present(*((_QWORD *)this + 22), v4, v3 != 0 ? 0x80 : 0, &v8);
    v1 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0xFFu, 0LL);
      if ( (_QWORD)v8 )
        std::_Deallocate<16,0>((_QWORD *)v8, (v9 - v8) & 0xFFFFFFFFFFFFFFF0uLL);
    }
    else
    {
      v6 = (_QWORD *)v8;
      *((_BYTE *)this + 2800) = 0;
      if ( v6 )
        std::_Deallocate<16,0>(v6, (v9 - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF0uLL);
      if ( v1 == 142213130 )
      {
        if ( g_pComposition && *((_BYTE *)g_pComposition + 6473) )
          CComposition::ScheduleCompositionPass(g_pComposition, 0LL, 0x2000LL);
        *((_BYTE *)this + 2800) = 1;
        return 0;
      }
    }
  }
  return v1;
}

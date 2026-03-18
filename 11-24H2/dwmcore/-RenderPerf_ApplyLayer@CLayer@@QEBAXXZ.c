/*
 * XREFs of ?RenderPerf_ApplyLayer@CLayer@@QEBAXXZ @ 0x1800FBF8C
 * Callers:
 *     ?ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18006F8D0 (-ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ApplyState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800FBE20 (-ApplyState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x18003A510 (-GetCurrentFrameId@@YA_KXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CLayer::RenderPerf_ApplyLayer(CLayer *this)
{
  __int64 v2; // rdi
  CGlobalComposition *CurrentFrameId; // rax
  __int64 v4; // rcx
  CGlobalComposition *v5; // rax
  __int64 v6; // rcx

  if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 2) != 0 )
  {
    v2 = (*(__int64 (__fastcall **)(CLayer *))(*(_QWORD *)this + 16LL))(this);
    if ( (*(unsigned int (__fastcall **)(CLayer *))(*(_QWORD *)this + 8LL))(this) == 1 )
    {
      CurrentFrameId = GetCurrentFrameId();
      if ( *(CGlobalComposition **)(v4 + 16) == CurrentFrameId )
      {
        ++*(_DWORD *)(v4 + 212);
        *(_QWORD *)(v4 + 176) += v2;
      }
    }
    else
    {
      v5 = GetCurrentFrameId();
      if ( *(CGlobalComposition **)(v6 + 16) == v5 )
      {
        ++*(_DWORD *)(v6 + 216);
        *(_QWORD *)(v6 + 184) += v2;
      }
    }
  }
}

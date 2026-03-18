/*
 * XREFs of ?Render@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180281524
 * Callers:
 *     ?RenderAndPresent@CRemoteAppRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x1802782C0 (-RenderAndPresent@CRemoteAppRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetFullDirty@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x18009823C (-SetFullDirty@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     ?AddDirtyRegionAndCalcOcclusion@?$CTargetDirtyBase@$07@@QEAAXAEBVCTreeDirty@@@Z @ 0x180098B64 (-AddDirtyRegionAndCalcOcclusion@-$CTargetDirtyBase@$07@@QEAAXAEBVCTreeDirty@@@Z.c)
 *     ?Reset@?$CMergedRectBase@$07@@QEAAXXZ @ 0x18009A1D4 (-Reset@-$CMergedRectBase@$07@@QEAAXXZ.c)
 *     ?ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIVailRenderTarget@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180260804 (-ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIVailRenderTarget@@AEBV-$TMilRec.c)
 *     ?CalcVailAlphaMode@CRemoteAppRenderTarget@@IEBAXPEAW4DXGI_ALPHA_MODE@@PEAU_D3DCOLORVALUE@@@Z @ 0x180280D5C (-CalcVailAlphaMode@CRemoteAppRenderTarget@@IEBAXPEAW4DXGI_ALPHA_MODE@@PEAU_D3DCOLORVALUE@@@Z.c)
 *     ?RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180281244 (-RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@AEBVCMILMatrix@@PEAW4ProtectionMode@1@@Z @ 0x180281850 (-RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@AEBVCMILMat.c)
 *     ?SetAlphaMode@CCompSwapChain@@QEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x1802C742C (-SetAlphaMode@CCompSwapChain@@QEAAXW4DXGI_ALPHA_MODE@@@Z.c)
 *     ?SetSize@CCompSwapChain@@QEAAJAEBUD2D_SIZE_U@@I@Z @ 0x1802C8238 (-SetSize@CCompSwapChain@@QEAAJAEBUD2D_SIZE_U@@I@Z.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::Render(CRemoteAppRenderTarget *this, struct CDrawingContext *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // edi
  char v6; // r14
  __int64 v7; // rax
  CSuperWetInkManager *v8; // r13
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  __int64 v12; // r10
  __int64 v13; // r11
  __int64 v14; // xmm1_8
  __m128i v15; // xmm6
  struct ISwapChain *v16; // r8
  int v17; // eax
  DXGI_ALPHA_MODE v18; // eax
  unsigned int v19; // r8d
  int v20; // eax
  int v21; // eax
  int v22; // eax
  float v23; // xmm0_4
  float v24; // xmm1_4
  int v25; // eax
  char v27[4]; // [rsp+30h] [rbp-40h] BYREF
  DXGI_ALPHA_MODE v28; // [rsp+34h] [rbp-3Ch] BYREF
  struct _D3DCOLORVALUE v29; // [rsp+38h] [rbp-38h] BYREF
  __m128i v30; // [rsp+48h] [rbp-28h] BYREF

  v4 = *((_QWORD *)this + 3);
  v5 = 0;
  v6 = 0;
  v7 = *((_QWORD *)this + 14);
  v8 = *(CSuperWetInkManager **)(v4 + 656);
  if ( v7 )
  {
    v9 = *(_DWORD *)(v4 + 6264);
    if ( v9 >= 5 )
    {
      v10 = v9 - 5;
      if ( v10 && (v11 = v10 - 1) != 0 )
      {
        if ( v11 == 1 && *((_QWORD *)this + 22) )
        {
          v28 = DXGI_ALPHA_MODE_UNSPECIFIED;
          *(struct _D3DCOLORVALUE *)&v29.r = 0LL;
          CRemoteAppRenderTarget::CalcVailAlphaMode(this, &v28, &v29);
          v14 = *(_QWORD *)(v12 + 108);
          v30.m128i_i32[2] = *(_DWORD *)(v12 + 116);
          v30.m128i_i64[0] = v14;
          if ( v28 == HIDWORD(v14) )
          {
            CTargetDirtyBase<8>::AddDirtyRegionAndCalcOcclusion((__int64)this + 280, v13);
          }
          else
          {
            CCompSwapChain::SetAlphaMode((CCompSwapChain *)v12, v28);
            CTargetDirtyBase<8>::SetFullDirty((__int64)this + 280);
          }
          v15 = _mm_loadu_si128((const __m128i *)((char *)this + 140));
          v28 = DXGI_ALPHA_MODE_UNSPECIFIED;
          *(struct _D3DCOLORVALUE *)((char *)this + 140) = *(struct _D3DCOLORVALUE *)&v29.r;
          *((_QWORD *)v8 + 10) = (char *)this + 168;
          v6 = 1;
          v16 = (struct ISwapChain *)*((_QWORD *)this + 22);
          v30 = v15;
          v17 = CRemoteAppRenderTarget::RenderDirtyRegion(
                  this,
                  a2,
                  v16,
                  (CRemoteAppRenderTarget *)((char *)this + 192),
                  (enum CRemoteAppRenderTarget::ProtectionMode *)&v28);
          v5 = v17;
          if ( v17 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0xA8u, 0LL);
            goto LABEL_18;
          }
          v18 = v28;
          if ( v28 && v28 != *((_DWORD *)this + 656) )
          {
            v19 = 32;
            *((_DWORD *)this + 656) = v28;
            if ( v18 != DXGI_ALPHA_MODE_STRAIGHT )
              v19 = 0;
            v20 = CCompSwapChain::SetSize(*((CCompSwapChain **)this + 22), (const struct D2D_SIZE_U *)this + 15, v19);
            v5 = v20;
            if ( v20 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v20, 0xB3u, 0LL);
              goto LABEL_18;
            }
            CTargetDirtyBase<8>::SetFullDirty((__int64)this + 280);
            v21 = CRemoteAppRenderTarget::RenderDirtyRegion(
                    this,
                    a2,
                    *((struct ISwapChain **)this + 22),
                    (CRemoteAppRenderTarget *)((char *)this + 192),
                    (enum CRemoteAppRenderTarget::ProtectionMode *)&v28);
            v5 = v21;
            if ( v21 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, 0xB9u, 0LL);
LABEL_18:
              *(__m128i *)((char *)this + 140) = v15;
LABEL_31:
              *((_QWORD *)v8 + 10) = 0LL;
              return v5;
            }
          }
          *((_BYTE *)this + 2631) = 1;
          *(__m128i *)((char *)this + 140) = v15;
        }
      }
      else
      {
        CTargetDirtyBase<8>::AddDirtyRegionAndCalcOcclusion((__int64)this + 280, v7 + 112);
        v22 = CRemoteAppRenderTarget::RailMultimonRenderAndPresent(this, a2);
        v5 = v22;
        if ( v22 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v22, 0x7Cu, 0LL);
          return v5;
        }
      }
      CMergedRectBase<8>::Reset((__int64)this + 296);
      *((_WORD *)this + 1296) = 0;
    }
  }
  if ( *(_DWORD *)(*((_QWORD *)this + 3) + 6264LL) == 7 && *((_QWORD *)this + 14) )
  {
    v23 = *((float *)this + 67) - *((float *)this + 65);
    v24 = *((float *)this + 68) - *((float *)this + 66);
    v30.m128i_i64[0] = 0LL;
    v27[0] = 0;
    v30.m128i_i32[2] = (int)v23;
    v30.m128i_i32[3] = (int)v24;
    v25 = CSuperWetInkManager::ScheduleScribblesForRenderTarget(v8, (__int64)this + 168, &v30, v27);
    v5 = v25;
    if ( v25 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v25, 0xD8u, 0LL);
    else
      *((_BYTE *)this + 2631) |= v27[0];
  }
  if ( v6 )
    goto LABEL_31;
  return v5;
}

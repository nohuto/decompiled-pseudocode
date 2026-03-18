/*
 * XREFs of ?SyncLock@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@II_N@Z @ 0x180085CF0
 * Callers:
 *     ?SyncLock@CLegacyRenderTarget@@UEAAXI@Z @ 0x180084850 (-SyncLock@CLegacyRenderTarget@@UEAAXI@Z.c)
 *     ?Render@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180086570 (-Render@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?SyncLock@CDDisplayRenderTarget@@UEAAXI@Z @ 0x1800C52C0 (-SyncLock@CDDisplayRenderTarget@@UEAAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?PresentMPO@CLegacySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x1800843A0 (-PresentMPO@CLegacySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OV.c)
 *     ?GetPhysicalFrontBuffer@CDDisplaySwapChain@@UEBAPEAVISwapChainBuffer@@XZ @ 0x1800847B0 (-GetPhysicalFrontBuffer@CDDisplaySwapChain@@UEBAPEAVISwapChainBuffer@@XZ.c)
 *     ?LegacyPresentRequired@COverlayContext@@AEBA_NXZ @ 0x1800847F4 (-LegacyPresentRequired@COverlayContext@@AEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall COverlayContext::SyncLock(
        COverlayContext *this,
        struct IOverlaySwapChain *a2,
        unsigned int a3,
        int a4,
        bool a5)
{
  unsigned int v5; // ebx
  __int64 v9; // r14
  __int64 v10; // rax
  struct ISwapChainBuffer *(__fastcall *v11)(CDDisplaySwapChain *); // rax
  struct ISwapChainBuffer *PhysicalFrontBuffer; // rax
  __int128 v13; // xmm0
  __int64 v14; // r9
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int64 v17; // rax
  __int128 v18; // xmm1
  __int64 (__fastcall *v19)(CLegacySwapChain *, unsigned int, unsigned int, enum DXGI_HDR_METADATA_TYPE, void *, const struct DWM_PRESENT_MULTIPLANE_OVERLAY *, unsigned int); // rax
  __int128 v20; // xmm1
  int v21; // eax
  __int64 v23; // rax
  __int64 (__fastcall *v24)(struct IOverlaySwapChain *, __int64, __int64, __int128 *, int); // rax
  int v25; // eax
  __int128 v26; // [rsp+40h] [rbp-81h] BYREF
  __int64 v27; // [rsp+50h] [rbp-71h]
  _BYTE v28[8]; // [rsp+60h] [rbp-61h] BYREF
  struct ISwapChainBuffer *v29; // [rsp+68h] [rbp-59h]
  __int128 v30; // [rsp+70h] [rbp-51h]
  __int128 v31; // [rsp+80h] [rbp-41h]
  __int128 v32; // [rsp+90h] [rbp-31h]
  __int128 v33; // [rsp+A0h] [rbp-21h]
  __int128 v34; // [rsp+B0h] [rbp-11h]
  __int128 v35; // [rsp+C0h] [rbp-1h]
  __int128 v36; // [rsp+D0h] [rbp+Fh]

  v5 = 0;
  if ( *((_BYTE *)this + 19472) && *((_BYTE *)this + 19592) && !*((_QWORD *)this + 2468) )
  {
    if ( a3 )
    {
      v9 = a3;
      do
      {
        if ( a5 || COverlayContext::LegacyPresentRequired(this) )
        {
          v23 = *(_QWORD *)a2;
          v27 = 0LL;
          v24 = *(__int64 (__fastcall **)(struct IOverlaySwapChain *, __int64, __int64, __int128 *, int))(v23 + 376);
          v26 = 0LL;
          v25 = v24(a2, 1LL, 2LL, &v26, a4);
          v5 = v25;
          if ( v25 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0xC7Au, 0LL);
          if ( (_QWORD)v26 )
            std::_Deallocate<16,0>((_QWORD *)v26, (v27 - v26) & 0xFFFFFFFFFFFFFFF0uLL);
        }
        else
        {
          memset_0(v28, 0, 0x80uLL);
          v10 = *(_QWORD *)a2;
          v28[4] = 1;
          v11 = *(struct ISwapChainBuffer *(__fastcall **)(CDDisplaySwapChain *))(v10 + 200);
          if ( v11 == CDDisplaySwapChain::GetPhysicalFrontBuffer )
            PhysicalFrontBuffer = CDDisplaySwapChain::GetPhysicalFrontBuffer(a2);
          else
            PhysicalFrontBuffer = v11(a2);
          v13 = *(_OWORD *)((char *)this + 19480);
          v14 = *((unsigned int *)this + 2);
          v15 = *(_OWORD *)((char *)this + 19496);
          v29 = PhysicalFrontBuffer;
          v30 = v13;
          v16 = *(_OWORD *)((char *)this + 19512);
          v17 = *(_QWORD *)a2;
          v31 = v15;
          v18 = *(_OWORD *)((char *)this + 19528);
          v19 = *(__int64 (__fastcall **)(CLegacySwapChain *, unsigned int, unsigned int, enum DXGI_HDR_METADATA_TYPE, void *, const struct DWM_PRESENT_MULTIPLANE_OVERLAY *, unsigned int))(v17 + 392);
          v32 = v16;
          v33 = v18;
          v20 = *(_OWORD *)((char *)this + 19560);
          v34 = *(_OWORD *)((char *)this + 19544);
          v35 = v20;
          v36 = *(_OWORD *)((char *)this + 19576);
          if ( v19 == CLegacySwapChain::PresentMPO )
            v21 = CLegacySwapChain::PresentMPO(
                    a2,
                    1u,
                    2u,
                    (enum DXGI_HDR_METADATA_TYPE)v14,
                    0LL,
                    (const struct DWM_PRESENT_MULTIPLANE_OVERLAY *)v28,
                    1u);
          else
            v21 = ((__int64 (__fastcall *)(struct IOverlaySwapChain *, __int64, __int64, __int64, _QWORD, _BYTE *))v19)(
                    a2,
                    1LL,
                    2LL,
                    v14,
                    0LL,
                    v28);
          v5 = v21;
          if ( v21 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0xC71u, 0LL);
        }
        --v9;
      }
      while ( v9 );
    }
  }
  else
  {
    v5 = -2003304309;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003304309, 0xC82u, 0LL);
  }
  return v5;
}

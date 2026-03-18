/*
 * XREFs of ?Present@CCaptureRenderTarget@@MEAAJXZ @ 0x1800C28E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFrameTargetTime@CComposition@@QEBA_KXZ @ 0x1800320D0 (-GetFrameTargetTime@CComposition@@QEBA_KXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?push_back@?$vector@UFlipPropertyItem@@V?$allocator@UFlipPropertyItem@@@std@@@std@@QEAAX$$QEAUFlipPropertyItem@@@Z @ 0x1800C25B8 (-push_back@-$vector@UFlipPropertyItem@@V-$allocator@UFlipPropertyItem@@@std@@@std@@QEAAX$$QEAUFl.c)
 *     ??$_Emplace_reallocate@UFlipPropertyItem@@@?$vector@UFlipPropertyItem@@V?$allocator@UFlipPropertyItem@@@std@@@std@@AEAAPEAUFlipPropertyItem@@QEAU2@$$QEAU2@@Z @ 0x1800C25E8 (--$_Emplace_reallocate@UFlipPropertyItem@@@-$vector@UFlipPropertyItem@@V-$allocator@UFlipPropert.c)
 *     ?GetCurrentFrameBuffer@CCaptureRenderTarget@@IEAAPEAUIDXGIResource@@XZ @ 0x1800C2C64 (-GetCurrentFrameBuffer@CCaptureRenderTarget@@IEAAPEAUIDXGIResource@@XZ.c)
 *     ?GetD3DDeviceNoRef@CCaptureRenderTarget@@IEAAPEAVCD3DDevice@@XZ @ 0x1800C388C (-GetD3DDeviceNoRef@CCaptureRenderTarget@@IEAAPEAVCD3DDevice@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180142B50 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_RequestFrameAPI@@@details@wil@@QEAA_NXZ @ 0x18024E1E8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_RequestFrameAPI@@@details.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCaptureRenderTarget::Present(CComposition **this)
{
  int v2; // edi
  struct CD3DDevice *D3DDeviceNoRef; // r14
  CComposition *v4; // rcx
  unsigned __int64 FrameTargetTime; // rax
  int v6; // ecx
  CComposition *v7; // rax
  CComposition *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rsi
  int v12; // eax
  CComposition *v13; // rdx
  int v14; // eax
  int v15; // eax
  CComposition *v17; // rax
  CComposition *v18; // rcx
  CComposition *v19; // rax
  unsigned __int64 *v20; // rcx
  int v21; // eax
  unsigned int v22; // [rsp+58h] [rbp-29h] BYREF
  __int128 v23; // [rsp+60h] [rbp-21h] BYREF
  __int64 v24; // [rsp+70h] [rbp-11h]
  __int128 v25; // [rsp+78h] [rbp-9h] BYREF
  __int64 v26; // [rsp+88h] [rbp+7h]
  unsigned __int64 *v27; // [rsp+90h] [rbp+Fh]
  unsigned __int64 v28; // [rsp+98h] [rbp+17h] BYREF
  int v29; // [rsp+A0h] [rbp+1Fh]
  int v30; // [rsp+A4h] [rbp+23h]
  __int64 v31; // [rsp+A8h] [rbp+27h]
  int v32; // [rsp+B0h] [rbp+2Fh]
  int v33; // [rsp+B4h] [rbp+33h]
  int v34; // [rsp+B8h] [rbp+37h]
  int v35; // [rsp+BCh] [rbp+3Bh]

  v2 = 0;
  v22 = 0;
  D3DDeviceNoRef = CCaptureRenderTarget::GetD3DDeviceNoRef((CCaptureRenderTarget *)this);
  if ( D3DDeviceNoRef && CCaptureRenderTarget::GetCurrentFrameBuffer((CCaptureRenderTarget *)this) )
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_RequestFrameAPI>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Capture_RequestFrameAPI>::GetImpl'::`2'::impl) )
      *((_BYTE *)this + 2729) = 0;
    v4 = this[3];
    v23 = 0LL;
    v24 = 0LL;
    v35 = 0;
    FrameTargetTime = CComposition::GetFrameTargetTime(v4);
    v6 = *((_DWORD *)this + 44);
    v28 = FrameTargetTime;
    v29 = *((_DWORD *)this + 30);
    v30 = *((_DWORD *)this + 31);
    v33 = *((_DWORD *)this + 738);
    v34 = *((_DWORD *)this + 739);
    v31 = 0LL;
    v32 = 0;
    if ( v6 == 2 )
      HIDWORD(v31) = 1;
    v26 = 40LL;
    v27 = &v28;
    v25 = xmmword_1803370E0;
    std::vector<FlipPropertyItem>::_Emplace_reallocate<FlipPropertyItem>(&v23, 0LL, &v25);
    v7 = this[98];
    if ( v7 )
      **(_DWORD **)v7 = 0;
    if ( *((_DWORD *)this + 44) )
    {
      v18 = this[390];
      v19 = this[391];
      if ( v18 != v19 )
      {
        v27 = (unsigned __int64 *)this[390];
        LODWORD(v31) = (v19 - v18) >> 4;
        v26 = (unsigned int)(16 * v31);
        v25 = xmmword_1803A1988;
        std::vector<FlipPropertyItem>::push_back((__int64)&v23, &v25);
      }
    }
    v8 = this[345];
    if ( v8 )
    {
      v9 = *((_QWORD *)v8 + 16);
      v10 = *((_QWORD *)v8 + 17);
      if ( v9 != v10 )
      {
        v32 = (v10 - v9) >> 5;
        v20 = (unsigned __int64 *)*((_QWORD *)v8 + 16);
        v21 = *((_QWORD *)v8 + 17) - (_DWORD)v20;
        v27 = v20;
        v26 = v21 & 0xFFFFFFE0;
        v25 = xmmword_1803A1978;
        std::vector<FlipPropertyItem>::push_back((__int64)&v23, &v25);
      }
    }
    v11 = (_QWORD *)v23;
    v12 = (*(__int64 (__fastcall **)(CComposition *, _QWORD, __int64, _QWORD))(*(_QWORD *)this[379] + 24LL))(
            this[379],
            *((_QWORD *)this[384] + *((unsigned int *)this + 748)),
            (__int64)(*((_QWORD *)&v23 + 1) - v23) >> 5,
            v23);
    v22 = v12;
    v2 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x40Cu, 0LL);
    }
    else
    {
      v13 = this[375];
      this[376] = (CComposition *)((char *)this[376] + 1);
      *((_BYTE *)D3DDeviceNoRef + 1499) = 0;
      v14 = (*(__int64 (__fastcall **)(_QWORD, CComposition *))(**((_QWORD **)D3DDeviceNoRef + 28) + 152LL))(
              *((_QWORD *)D3DDeviceNoRef + 28),
              v13);
      v22 = v14;
      v2 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x410u, 0LL);
      }
      else
      {
        v15 = (*(__int64 (__fastcall **)(CComposition *, CComposition *, CComposition *, _QWORD, _BYTE, _DWORD, _QWORD, _QWORD))(*(_QWORD *)this[378] + 72LL))(
                this[378],
                this[375],
                this[376],
                0LL,
                0,
                0,
                0LL,
                0LL);
        v22 = v15;
        v2 = v15;
        if ( v15 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x41Au, 0LL);
      }
    }
    if ( v11 )
      std::_Deallocate<16,0>(v11, (v24 - (_QWORD)v11) & 0xFFFFFFFFFFFFFFE0uLL);
  }
  if ( CCaptureRenderTarget::GetCurrentFrameBuffer((CCaptureRenderTarget *)this) )
  {
    v17 = *this;
    *((_DWORD *)this + 748) = -1;
    (*((void (**)(void))v17 + 33))();
  }
  if ( v2 < 0 )
  {
    TranslateDXGIorD3DErrorInContext((unsigned int)v2, 0LL, &v22);
    return v22;
  }
  return (unsigned int)v2;
}

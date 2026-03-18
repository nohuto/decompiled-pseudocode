/*
 * XREFs of ?Present@CCaptureRenderTarget@@MEAAJXZ @ 0x1802361B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetFrameTargetTime@CComposition@@QEBA_KXZ @ 0x1800F3A90 (-GetFrameTargetTime@CComposition@@QEBA_KXZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180106F10 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?GetD3DDeviceNoRef@CCaptureRenderTarget@@IEAAPEAVCD3DDevice@@XZ @ 0x180158D0C (-GetD3DDeviceNoRef@CCaptureRenderTarget@@IEAAPEAVCD3DDevice@@XZ.c)
 *     ?GetCurrentFrameBuffer@CCaptureRenderTarget@@IEAAPEAUIDXGIResource@@XZ @ 0x180159E90 (-GetCurrentFrameBuffer@CCaptureRenderTarget@@IEAAPEAUIDXGIResource@@XZ.c)
 *     ?push_back@?$vector@UFlipPropertyItem@@V?$allocator@UFlipPropertyItem@@@std@@@std@@QEAAX$$QEAUFlipPropertyItem@@@Z @ 0x1801F6314 (-push_back@-$vector@UFlipPropertyItem@@V-$allocator@UFlipPropertyItem@@@std@@@std@@QEAAX$$QEAUFl.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCaptureRenderTarget::Present(CComposition **this)
{
  int v2; // edi
  struct CD3DDevice *D3DDeviceNoRef; // r14
  CComposition *v4; // rcx
  unsigned __int64 FrameTargetTime; // rax
  int v6; // ecx
  CComposition *v7; // rax
  CComposition *v8; // rcx
  CComposition *v9; // rax
  CComposition *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 *v13; // rcx
  int v14; // eax
  _QWORD *v15; // rsi
  int v16; // eax
  CComposition *v17; // rdx
  int v18; // eax
  int v19; // eax
  CComposition *v20; // rax
  unsigned int v22; // [rsp+58h] [rbp-39h] BYREF
  __int128 v23; // [rsp+60h] [rbp-31h] BYREF
  __int64 v24; // [rsp+70h] [rbp-21h]
  __int128 v25; // [rsp+78h] [rbp-19h] BYREF
  __int64 v26; // [rsp+88h] [rbp-9h]
  unsigned __int64 *v27; // [rsp+90h] [rbp-1h]
  unsigned __int64 v28; // [rsp+98h] [rbp+7h] BYREF
  int v29; // [rsp+A0h] [rbp+Fh]
  int v30; // [rsp+A4h] [rbp+13h]
  __int64 v31; // [rsp+A8h] [rbp+17h]
  int v32; // [rsp+B0h] [rbp+1Fh]
  int v33; // [rsp+B4h] [rbp+23h]
  int v34; // [rsp+B8h] [rbp+27h]
  __int64 v35; // [rsp+BCh] [rbp+2Bh]
  int v36; // [rsp+C4h] [rbp+33h]

  v2 = 0;
  v22 = 0;
  D3DDeviceNoRef = CCaptureRenderTarget::GetD3DDeviceNoRef((CCaptureRenderTarget *)this);
  if ( D3DDeviceNoRef && CCaptureRenderTarget::GetCurrentFrameBuffer((CCaptureRenderTarget *)this) )
  {
    v4 = this[3];
    v23 = 0LL;
    *((_BYTE *)this + 2729) = 0;
    v24 = 0LL;
    v35 = 0LL;
    v36 = 0;
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
    v26 = 48LL;
    v27 = &v28;
    v25 = xmmword_1803969D8;
    std::vector<FlipPropertyItem>::push_back((__int64)&v23, &v25);
    v7 = this[98];
    if ( v7 )
      **(_DWORD **)v7 = 0;
    if ( *((_DWORD *)this + 44) )
    {
      v8 = this[390];
      v9 = this[391];
      if ( v8 != v9 )
      {
        v27 = (unsigned __int64 *)this[390];
        LODWORD(v31) = (v9 - v8) >> 4;
        v26 = (unsigned int)(16 * v31);
        v25 = xmmword_1803969C8;
        std::vector<FlipPropertyItem>::push_back((__int64)&v23, &v25);
      }
    }
    v10 = this[345];
    if ( v10 )
    {
      v11 = *((_QWORD *)v10 + 16);
      v12 = *((_QWORD *)v10 + 17);
      if ( v11 != v12 )
      {
        v32 = (v12 - v11) >> 5;
        v13 = (unsigned __int64 *)*((_QWORD *)v10 + 16);
        v14 = *((_QWORD *)v10 + 17) - (_DWORD)v13;
        v27 = v13;
        v26 = v14 & 0xFFFFFFE0;
        v25 = xmmword_1803969B8;
        std::vector<FlipPropertyItem>::push_back((__int64)&v23, &v25);
      }
    }
    v15 = (_QWORD *)v23;
    v16 = (*(__int64 (__fastcall **)(CComposition *, _QWORD, __int64, _QWORD))(*(_QWORD *)this[379] + 24LL))(
            this[379],
            *((_QWORD *)this[384] + *((unsigned int *)this + 748)),
            (__int64)(*((_QWORD *)&v23 + 1) - v23) >> 5,
            v23);
    v22 = v16;
    v2 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x3AEu, 0LL);
    }
    else
    {
      v17 = this[375];
      this[376] = (CComposition *)((char *)this[376] + 1);
      *((_BYTE *)D3DDeviceNoRef + 1499) = 0;
      v18 = (*(__int64 (__fastcall **)(_QWORD, CComposition *))(**((_QWORD **)D3DDeviceNoRef + 28) + 152LL))(
              *((_QWORD *)D3DDeviceNoRef + 28),
              v17);
      v22 = v18;
      v2 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x3B2u, 0LL);
      }
      else
      {
        v19 = (*(__int64 (__fastcall **)(CComposition *, CComposition *, CComposition *, _QWORD, _BYTE, _DWORD, _QWORD, _QWORD))(*(_QWORD *)this[378] + 72LL))(
                this[378],
                this[375],
                this[376],
                0LL,
                0,
                0,
                0LL,
                0LL);
        v22 = v19;
        v2 = v19;
        if ( v19 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0x3BCu, 0LL);
      }
    }
    if ( v15 )
      std::_Deallocate<16,0>(v15, (v24 - (_QWORD)v15) & 0xFFFFFFFFFFFFFFE0uLL);
  }
  if ( CCaptureRenderTarget::GetCurrentFrameBuffer((CCaptureRenderTarget *)this) )
  {
    v20 = *this;
    *((_DWORD *)this + 748) = -1;
    (*((void (**)(void))v20 + 33))();
  }
  if ( v2 < 0 )
  {
    TranslateDXGIorD3DErrorInContext(v2, 0, &v22);
    return v22;
  }
  return (unsigned int)v2;
}

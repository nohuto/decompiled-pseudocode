/*
 * XREFs of ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTexture@@II@Z @ 0x1802D0A38
 * Callers:
 *     ?RenderAndPresent@CHolographicInteropTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x1802D0590 (-RenderAndPresent@CHolographicInteropTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800454A4 (--1-$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x180056D30 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@IRenderTarget@@PEAVCOverlayContext@@@Z @ 0x1800CF2C0 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@.c)
 *     ?RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@IIPEAVIRenderTargetBitmap@@PEAVCDrawingContext@@@Z @ 0x1802D0854 (-RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@IIPEAVIRender.c)
 *     ?EnsureRenderBuffers@CHolographicInteropTexture@@QEAAJPEAVCD3DDevice@@W4DXGI_FORMAT@@@Z @ 0x1802D2904 (-EnsureRenderBuffers@CHolographicInteropTexture@@QEAAJPEAVCD3DDevice@@W4DXGI_FORMAT@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CHolographicInteropTarget::RenderTexture(
        CHolographicInteropTarget *this,
        struct CDrawingContext *a2,
        RTL_SRWLOCK *a3,
        __int64 a4,
        unsigned int a5)
{
  PVOID Ptr; // rbx
  enum DXGI_FORMAT v7; // r8d
  struct CD3DDevice *v9; // rdx
  struct IRenderTargetBitmap *v11; // r14
  char v12; // r15
  int v13; // eax
  unsigned int v14; // esi
  struct IRenderTargetBitmap **v15; // rax
  __int64 v16; // rax
  int v17; // eax
  CHolographicInteropTarget *v18; // rcx
  __int64 v19; // r8
  char v20; // r13
  int v21; // eax
  struct IRenderTargetBitmap *v23; // [rsp+70h] [rbp+8h] BYREF
  struct IRenderTargetBitmap *v24; // [rsp+80h] [rbp+18h] BYREF

  Ptr = a3[12].Ptr;
  v7 = *((_DWORD *)this + 62);
  v9 = (struct CD3DDevice *)*((_QWORD *)this + 25);
  v11 = 0LL;
  v24 = 0LL;
  v12 = 0;
  v13 = CHolographicInteropTexture::EnsureRenderBuffers((CHolographicInteropTexture *)a3, v9, v7);
  v14 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x178u, 0LL);
  }
  else if ( (BYTE4(a3[268].Ptr) & 1) == 0 && Ptr && LODWORD(a3[244].Ptr) )
  {
    AcquireSRWLockExclusive(a3 + 290);
    if ( HIDWORD(a3[269].Ptr) && !a5 )
    {
      v15 = (struct IRenderTargetBitmap **)a3[266].Ptr;
      v11 = *v15;
      *(_DWORD *)v15[2] = 0;
    }
    ReleaseSRWLockExclusive(a3 + 290);
    if ( v11 )
    {
      v23 = v11;
      wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>((__int64 *)&v23);
      v24 = v11;
      v23 = 0LL;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v23);
      v16 = (*(__int64 (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v11 + 144LL))(v11);
      v17 = CDrawingContext::BeginFrame(
              (__int64)a2,
              (v16 + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)v16 >> 64),
              (__int64)&a3[272],
              (CHolographicInteropTarget *)((char *)this + 252),
              0,
              0LL);
      v14 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0x188u, 0LL);
        v20 = 0;
      }
      else
      {
        v20 = 1;
        v21 = CHolographicInteropTarget::RenderDirtyRegion(
                v18,
                (struct CHolographicInteropTexture *)a3,
                v19,
                a5,
                v11,
                a2);
        v14 = v21;
        if ( v21 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, 0x19Au, 0LL);
        }
        else if ( *((_BYTE *)a2 + 7980) || *((_BYTE *)a2 + 7981) )
        {
          v12 = 1;
        }
      }
      AcquireSRWLockExclusive(a3 + 290);
      if ( HIDWORD(a3[269].Ptr) && !a5 )
        *((_BYTE *)a3[266].Ptr + 88) = v12;
      ReleaseSRWLockExclusive(a3 + 290);
      if ( v20 )
        CDrawingContext::EndFrame((CD3DDevice **)a2);
    }
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
  return v14;
}

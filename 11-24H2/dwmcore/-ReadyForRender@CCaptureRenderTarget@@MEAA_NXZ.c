/*
 * XREFs of ?ReadyForRender@CCaptureRenderTarget@@MEAA_NXZ @ 0x1801593D0
 * Callers:
 *     ?Render@COffScreenRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1801591D0 (-Render@COffScreenRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?GetD3DDeviceNoRef@CCaptureRenderTarget@@IEAAPEAVCD3DDevice@@XZ @ 0x180158D0C (-GetD3DDeviceNoRef@CCaptureRenderTarget@@IEAAPEAVCD3DDevice@@XZ.c)
 *     ?EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z @ 0x180158D2C (-EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z.c)
 *     ?TryTargetNextBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x18015948C (-TryTargetNextBuffer@CCaptureRenderTarget@@IEAAJXZ.c)
 *     ?ReadyForRender@COffScreenRenderTarget@@MEAA_NXZ @ 0x180159A70 (-ReadyForRender@COffScreenRenderTarget@@MEAA_NXZ.c)
 *     ?GetCurrentFrameBuffer@CCaptureRenderTarget@@IEAAPEAUIDXGIResource@@XZ @ 0x180159E90 (-GetCurrentFrameBuffer@CCaptureRenderTarget@@IEAAPEAUIDXGIResource@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CCaptureRenderTarget::ReadyForRender(CCaptureRenderTarget *this)
{
  __int64 v2; // rcx
  bool result; // al
  struct CD3DDevice *D3DDeviceNoRef; // rax
  struct D3D11_SUBRESOURCE_DATA *v5; // r8
  char v6; // [rsp+30h] [rbp+8h] BYREF

  result = 0;
  if ( (!*((_BYTE *)this + 3160) || *((_DWORD *)g_pComposition + 1615)) && COffScreenRenderTarget::ReadyForRender(this) )
  {
    v2 = *((_QWORD *)this + 378);
    if ( v2 )
    {
      v6 = 0;
      if ( (*(int (__fastcall **)(__int64, char *))(*(_QWORD *)v2 + 24LL))(v2, &v6) >= 0 )
      {
        if ( v6 )
        {
          D3DDeviceNoRef = CCaptureRenderTarget::GetD3DDeviceNoRef(this);
          if ( D3DDeviceNoRef )
          {
            if ( *((_QWORD *)this + 385) != *((_QWORD *)this + 384)
              && *((_BYTE *)this + 2941)
              && (int)CCaptureRenderTarget::EnsureResources(this, D3DDeviceNoRef, v5) >= 0
              && (int)CCaptureRenderTarget::TryTargetNextBuffer(this) >= 0
              && CCaptureRenderTarget::GetCurrentFrameBuffer(this) )
            {
              return 1;
            }
          }
        }
      }
    }
  }
  return result;
}

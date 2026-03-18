/*
 * XREFs of ?ReadyForRender@CCaptureRenderTarget@@MEAA_NXZ @ 0x1800C4520
 * Callers:
 *     ?Render@COffScreenRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800C4320 (-Render@COffScreenRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?GetCurrentFrameBuffer@CCaptureRenderTarget@@IEAAPEAUIDXGIResource@@XZ @ 0x1800C2C64 (-GetCurrentFrameBuffer@CCaptureRenderTarget@@IEAAPEAUIDXGIResource@@XZ.c)
 *     ?GetD3DDeviceNoRef@CCaptureRenderTarget@@IEAAPEAVCD3DDevice@@XZ @ 0x1800C388C (-GetD3DDeviceNoRef@CCaptureRenderTarget@@IEAAPEAVCD3DDevice@@XZ.c)
 *     ?EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z @ 0x1800C38AC (-EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z.c)
 *     ?TryTargetNextBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x1800C4694 (-TryTargetNextBuffer@CCaptureRenderTarget@@IEAAJXZ.c)
 *     ?ReadyForRender@COffScreenRenderTarget@@MEAA_NXZ @ 0x1800C4C70 (-ReadyForRender@COffScreenRenderTarget@@MEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CCaptureRenderTarget::ReadyForRender(CCaptureRenderTarget *this)
{
  __int64 v2; // rcx
  bool result; // al
  struct CD3DDevice *D3DDeviceNoRef; // rax
  struct D3D11_SUBRESOURCE_DATA *v5; // r8
  char v6; // [rsp+30h] [rbp+8h] BYREF

  result = 0;
  if ( (!*((_BYTE *)this + 3160) || *((_DWORD *)g_pComposition + 1621)) && COffScreenRenderTarget::ReadyForRender(this) )
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

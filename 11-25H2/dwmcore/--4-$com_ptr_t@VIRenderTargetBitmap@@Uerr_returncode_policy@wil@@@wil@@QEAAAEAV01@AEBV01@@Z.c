/*
 * XREFs of ??4?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x1800C4FE8
 * Callers:
 *     ?CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x1800C4784 (-CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ.c)
 *     ?CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1800C4E44 (-CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800AC9A0 (-InternalRelease@-$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?Release@CDeviceTextureTarget@@WBAA@EAAKXZ @ 0x1802D6FB0 (-Release@CDeviceTextureTarget@@WBAA@EAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct CMILPoolResource **__fastcall wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::operator=(
        struct CMILPoolResource **a1,
        CMILRefCountImpl **a2)
{
  struct CMILPoolResource *v2; // rbx
  CMILRefCountImpl *v4; // rcx
  void (*v5)(void); // rax
  __int64 (__fastcall *v6)(struct CMILPoolResource *); // rax

  v2 = *a1;
  v4 = *a2;
  *a1 = *a2;
  if ( v4 )
  {
    v5 = *(void (**)(void))(*(_QWORD *)v4 + 8LL);
    if ( (char *)v5 == (char *)CMILRefCountImpl::AddReference )
      CMILRefCountImpl::AddReference(v4);
    else
      v5();
  }
  if ( v2 )
  {
    v6 = *(__int64 (__fastcall **)(struct CMILPoolResource *))(*(_QWORD *)v2 + 16LL);
    if ( (char *)v6 == (char *)CDeviceTextureTarget::Release )
    {
      CDeviceTextureTarget::Release(v2);
    }
    else if ( v6 == CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease )
    {
      CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease(v2);
    }
    else
    {
      v6(v2);
    }
  }
  return a1;
}

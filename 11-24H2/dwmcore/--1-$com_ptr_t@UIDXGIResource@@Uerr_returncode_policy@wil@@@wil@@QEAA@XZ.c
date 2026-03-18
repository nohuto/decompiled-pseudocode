/*
 * XREFs of ??1?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801A51D8
 * Callers:
 *     ?GetDXGIResource@CDxHandleYUVBitmapRealization@@UEAAPEAUIDXGIResource@@PEAI@Z @ 0x18005CE20 (-GetDXGIResource@CDxHandleYUVBitmapRealization@@UEAAPEAUIDXGIResource@@PEAI@Z.c)
 *     ?EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z @ 0x180158D2C (-EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z.c)
 *     ?EnsureDisplaySurface@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x180196A30 (-EnsureDisplaySurface@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1801A4E08 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@s.c)
 *     ??1CWarpLockSubresource@@MEAA@XZ @ 0x1801A4E7C (--1CWarpLockSubresource@@MEAA@XZ.c)
 *     ??1CD2DBitmap@@UEAA@XZ @ 0x1801A50EC (--1CD2DBitmap@@UEAA@XZ.c)
 *     ?_Tidy@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x1801A513C (-_Tidy@-$vector@V-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$c.c)
 *     ??1CBufferResource@CLegacySwapChain@@QEAA@XZ @ 0x1801B6D58 (--1CBufferResource@CLegacySwapChain@@QEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800DA5C0 (-InternalRelease@-$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 */

void __fastcall wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>::~com_ptr_t<IDXGIResource,wil::err_returncode_policy>(
        CGlobalDrawingContext **a1)
{
  CGlobalDrawingContext *v1; // rcx
  void (*v2)(void); // rax

  v1 = *a1;
  if ( v1 )
  {
    v2 = *(void (**)(void))(*(_QWORD *)v1 + 16LL);
    if ( (char *)v2 == (char *)CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease )
    {
      CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease(v1);
    }
    else if ( (char *)v2 == (char *)CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease )
    {
      CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease(v1);
    }
    else if ( (char *)v2 == (char *)CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease )
    {
      CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease(v1);
    }
    else
    {
      v2();
    }
  }
}

/*
 * XREFs of ??1CDxHandleYUVBitmapRealization@@MEAA@XZ @ 0x1801C71BC
 * Callers:
 *     ??_GCDxHandleYUVBitmapRealization@@MEAAPEAXI@Z @ 0x1801C7180 (--_GCDxHandleYUVBitmapRealization@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18006C940 (--1-$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ReleaseTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ @ 0x1801C74F0 (-ReleaseTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ.c)
 */

void __fastcall CDxHandleYUVBitmapRealization::~CDxHandleYUVBitmapRealization(CDxHandleYUVBitmapRealization *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &CDxHandleYUVBitmapRealization::`vftable'{for `CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>'};
  *((_QWORD *)this + 2) = &CDxHandleYUVBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 10) = &CDxHandleYUVBitmapRealization::`vftable'{for `IBitmapRealization's `CBitmapRealization'};
  *((_QWORD *)this + 11) = &CGDISectionBitmapRealization::`vftable'{for `IRemotableBitmapRealization'};
  *((_QWORD *)this + 41) = &CDxHandleYUVBitmapRealization::`vftable'{for `IDeviceResource'};
  *((_QWORD *)this + 42) = &CDxHandleYUVBitmapRealization::`vftable'{for `IBitmapRealization's `IYUVSwapChainRealization'};
  *((_QWORD *)this + 43) = &CDxHandleYUVBitmapRealization::`vftable'{for `IOverlayPlaneResource'};
  v2 = (void *)*((_QWORD *)this + 32);
  if ( v2 )
    CloseHandle(v2);
  CDxHandleYUVBitmapRealization::ReleaseTexture(this);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 48);
  wil::com_ptr_t<CD3DVidMemOnlyTexture,wil::err_returncode_policy>::~com_ptr_t<CD3DVidMemOnlyTexture,wil::err_returncode_policy>((struct CMILPoolResource **)this + 47);
  CDeviceResourceT<IBitmapRealizationMethodsT<CBitmapRealization,IYUVSwapChainRealization>>::~CDeviceResourceT<IBitmapRealizationMethodsT<CBitmapRealization,IYUVSwapChainRealization>>(this);
}

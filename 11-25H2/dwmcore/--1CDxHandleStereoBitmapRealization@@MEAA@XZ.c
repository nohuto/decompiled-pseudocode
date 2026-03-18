/*
 * XREFs of ??1CDxHandleStereoBitmapRealization@@MEAA@XZ @ 0x1802E1C30
 * Callers:
 *     ??_ECDxHandleStereoBitmapRealization@@MEAAPEAXI@Z @ 0x1802E1CC0 (--_ECDxHandleStereoBitmapRealization@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AdjustStereoEntityCount@CComposition@@QEAAX_N@Z @ 0x1802658C0 (-AdjustStereoEntityCount@CComposition@@QEAAX_N@Z.c)
 */

void __fastcall CDxHandleStereoBitmapRealization::~CDxHandleStereoBitmapRealization(
        CDxHandleStereoBitmapRealization *this)
{
  *(_QWORD *)this = &CDxHandleStereoBitmapRealization::`vftable'{for `CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>'};
  *((_QWORD *)this + 2) = &CDxHandleStereoBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 10) = &CDxHandleStereoBitmapRealization::`vftable'{for `IBitmapRealization's `CBitmapRealization'};
  *((_QWORD *)this + 11) = &CGDISectionBitmapRealization::`vftable'{for `IRemotableBitmapRealization'};
  *((_QWORD *)this + 41) = &CDxHandleStereoBitmapRealization::`vftable'{for `IDeviceResource'};
  *((_QWORD *)this + 42) = &CDxHandleStereoBitmapRealization::`vftable'{for `IBitmapRealization's `ISwapChainRealization'};
  *((_QWORD *)this + 43) = &CDxHandleStereoBitmapRealization::`vftable'{for `IOverlayPlaneResource'};
  CComposition::AdjustStereoEntityCount(this, 0);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 51);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 50);
  CDxHandleBitmapRealization::~CDxHandleBitmapRealization(this);
}

/*
 * XREFs of ??1CCompositionSurfaceBitmap@@MEAA@XZ @ 0x1801EFDFC
 * Callers:
 *     ??_GCCompositionSurfaceBitmap@@MEAAPEAXI@Z @ 0x1801EFDB0 (--_GCCompositionSurfaceBitmap@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?UnRegisterBitmapNotifier@CCompositionSurfaceInfo@@QEAAXPEAVICompositionSurfaceInfoListener@@@Z @ 0x1801EFE68 (-UnRegisterBitmapNotifier@CCompositionSurfaceInfo@@QEAAXPEAVICompositionSurfaceInfoListener@@@Z.c)
 */

void __fastcall CCompositionSurfaceBitmap::~CCompositionSurfaceBitmap(CCompositionSurfaceBitmap *this)
{
  struct ICompositionSurfaceInfoListener *v2; // rdx
  CCompositionSurfaceInfo *v3; // rcx

  *(_QWORD *)this = &CCompositionSurfaceBitmap::`vftable'{for `CContent'};
  v2 = (CCompositionSurfaceBitmap *)((char *)this + 80);
  *((_QWORD *)this + 9) = &CCompositionSurfaceBitmap::`vftable'{for `IBitmapResource'};
  *((_QWORD *)this + 10) = &CCompositionSurfaceBitmap::`vftable'{for `ICompositionSurfaceInfoListener'};
  *((_QWORD *)this + 11) = &CCompositionSurfaceBitmap::`vftable'{for `IDirtyRectSource'};
  v3 = (CCompositionSurfaceInfo *)*((_QWORD *)this + 12);
  if ( v3 )
    CCompositionSurfaceInfo::UnRegisterBitmapNotifier(v3, v2);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 12);
  CResource::~CResource(this);
}

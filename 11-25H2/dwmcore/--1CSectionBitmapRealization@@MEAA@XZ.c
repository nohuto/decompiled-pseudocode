/*
 * XREFs of ??1CSectionBitmapRealization@@MEAA@XZ @ 0x1801FA74C
 * Callers:
 *     ??_GCGDISectionBitmapRealization@@UEAAPEAXI@Z @ 0x1801FA710 (--_GCGDISectionBitmapRealization@@UEAAPEAXI@Z.c)
 *     ??_ECSectionBitmapRealization@@MEAAPEAXI@Z @ 0x1802DFDB0 (--_ECSectionBitmapRealization@@MEAAPEAXI@Z.c)
 *     ??_GCGDISubSectionBitmapRealization@@UEAAPEAXI@Z @ 0x1802E0300 (--_GCGDISubSectionBitmapRealization@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?UnmapSection@CSectionBitmapRealization@@AEAA_NXZ @ 0x1801FA7E4 (-UnmapSection@CSectionBitmapRealization@@AEAA_NXZ.c)
 */

void __fastcall CSectionBitmapRealization::~CSectionBitmapRealization(CSectionBitmapRealization *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &CSectionBitmapRealization::`vftable'{for `CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>'};
  *((_QWORD *)this + 2) = &CGDISectionBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 10) = &CSectionBitmapRealization::`vftable'{for `IBitmapRealization'};
  *((_QWORD *)this + 11) = &CGDISectionBitmapRealization::`vftable'{for `IRemotableBitmapRealization'};
  *((_QWORD *)this + 41) = &CGDISectionBitmapRealization::`vftable'{for `ID2DBitmapCacheSource'};
  *((_QWORD *)this + 42) = &CGDISectionBitmapRealization::`vftable'{for `IPixelColor'};
  CSectionBitmapRealization::UnmapSection(this);
  v2 = (void *)*((_QWORD *)this + 44);
  if ( v2 && *((_BYTE *)this + 384) )
    CloseHandle(v2);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 43);
  CBitmapRealization::~CBitmapRealization(this);
}

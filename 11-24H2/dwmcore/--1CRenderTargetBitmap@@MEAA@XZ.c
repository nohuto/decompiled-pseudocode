/*
 * XREFs of ??1CRenderTargetBitmap@@MEAA@XZ @ 0x18005CA2C
 * Callers:
 *     ??_GCDecodeBitmap@@UEAAPEAXI@Z @ 0x18005C970 (--_GCDecodeBitmap@@UEAAPEAXI@Z.c)
 *     ??_ECRenderTargetBitmap@@MEAAPEAXI@Z @ 0x18005C9B0 (--_ECRenderTargetBitmap@@MEAAPEAXI@Z.c)
 *     ??_GCScratchRenderTargetBitmap@@UEAAPEAXI@Z @ 0x18005C9F0 (--_GCScratchRenderTargetBitmap@@UEAAPEAXI@Z.c)
 *     ??1CStereoRenderTargetBitmap@@UEAA@XZ @ 0x1802DA7FC (--1CStereoRenderTargetBitmap@@UEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?ReleaseDeviceTarget@CRenderTargetBitmap@@IEAAXXZ @ 0x18005CAAC (-ReleaseDeviceTarget@CRenderTargetBitmap@@IEAAXXZ.c)
 */

void __fastcall CRenderTargetBitmap::~CRenderTargetBitmap(CRenderTargetBitmap *this)
{
  _QWORD *v2; // rcx

  *(_QWORD *)this = &CRenderTargetBitmap::`vftable'{for `CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>'};
  *((_QWORD *)this + 2) = &CScratchRenderTargetBitmap::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 10) = &CScratchRenderTargetBitmap::`vftable'{for `IDeviceResource'};
  *((_QWORD *)this + 11) = &CStereoRenderTargetBitmap::`vftable'{for `IBitmapRealization'};
  CRenderTargetBitmap::ReleaseDeviceTarget(this);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 15);
  v2 = (_QWORD *)*((_QWORD *)this + 12);
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (*((_QWORD *)this + 14) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 12) = 0LL;
    *((_QWORD *)this + 13) = 0LL;
    *((_QWORD *)this + 14) = 0LL;
  }
  CD2DBitmapCache::~CD2DBitmapCache(this);
}

/*
 * XREFs of ??1CD2DBitmapCache@@MEAA@XZ @ 0x18018B658
 * Callers:
 *     ??1CRenderTargetBitmap@@MEAA@XZ @ 0x18005CA2C (--1CRenderTargetBitmap@@MEAA@XZ.c)
 *     ??_GCWICBitmapRealization@@UEAAPEAXI@Z @ 0x18018B450 (--_GCWICBitmapRealization@@UEAAPEAXI@Z.c)
 *     ??1CColorKeyBitmapRealization@@UEAA@XZ @ 0x1801EF04C (--1CColorKeyBitmapRealization@@UEAA@XZ.c)
 *     ??1CBitmapRealization@@UEAA@XZ @ 0x180201564 (--1CBitmapRealization@@UEAA@XZ.c)
 *     ??_ECD2DBitmapCache@@MEAAPEAXI@Z @ 0x1802D6AD0 (--_ECD2DBitmapCache@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@@0@@Z @ 0x18018B6F0 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U-$default_delete@V.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VID2DBitmapCacheSource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18018B8F0 (-InternalRelease@-$CMILRefCountBaseT@VID2DBitmapCacheSource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 */

void __fastcall CD2DBitmapCache::~CD2DBitmapCache(CD2DBitmapCache *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx

  *(_QWORD *)this = &CD2DBitmapCache::`vftable'{for `CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>'};
  *((_QWORD *)this + 2) = &CGDISectionBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  v2 = *((_QWORD *)this + 6);
  v3 = *((_QWORD *)this + 7);
  if ( v2 != v3 )
  {
    std::_Destroy_range<std::allocator<std::unique_ptr<CD2DBitmapCache::CCachedBitmap>>>(v2, v3);
    v3 = *((_QWORD *)this + 6);
    *((_QWORD *)this + 7) = v3;
  }
  v4 = *((_QWORD *)this + 6);
  if ( v4 )
  {
    std::_Destroy_range<std::allocator<std::unique_ptr<CD2DBitmapCache::CCachedBitmap>>>(v4, v3);
    std::_Deallocate<16,0>(
      *((_QWORD **)this + 6),
      (*((_QWORD *)this + 8) - *((_QWORD *)this + 6)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
  }
  if ( *((_QWORD *)this + 5) )
    CMILRefCountBaseT<ID2DBitmapCacheSource,CMilObjectDeleter>::InternalRelease();
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 4);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 3);
}

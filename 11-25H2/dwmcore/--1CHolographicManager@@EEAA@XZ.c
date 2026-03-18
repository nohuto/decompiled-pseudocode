/*
 * XREFs of ??1CHolographicManager@@EEAA@XZ @ 0x1802D7750
 * Callers:
 *     ??_ECHolographicManager@@EEAAPEAXI@Z @ 0x1802D7870 (--_ECHolographicManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$ReleaseInterface@VCPolygon@@@@YAXAEAPEAVCPolygon@@@Z @ 0x180097BD8 (--$ReleaseInterface@VCPolygon@@@@YAXAEAPEAVCPolygon@@@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800AC850 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800E54D0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18010807C (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@w.c)
 *     ?ReleaseInteropRenderTarget@CHolographicManager@@AEAAXXZ @ 0x1802D8CF0 (-ReleaseInteropRenderTarget@CHolographicManager@@AEAAXXZ.c)
 */

void __fastcall CHolographicManager::~CHolographicManager(CHolographicManager *this)
{
  CGlobalDrawingContext *v2; // rcx
  void *v3; // rcx
  _QWORD *v4; // rcx
  __int64 v5; // rcx

  *(_QWORD *)this = &CHolographicManager::`vftable'{for `IHolographicManager'};
  *((_QWORD *)this + 1) = &CHolographicManager::`vftable'{for `CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>'};
  v2 = (CGlobalDrawingContext *)*((_QWORD *)this + 5);
  if ( v2 )
  {
    CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease(v2);
    *((_QWORD *)this + 5) = 0LL;
    ReleaseInterface<CPolygon>((__int64 *)this + 6);
    ReleaseInterface<CPolygon>((__int64 *)this + 7);
    *((_DWORD *)this + 16) = -1;
    *(_QWORD *)((char *)this + 68) = 0LL;
  }
  CHolographicManager::ReleaseInteropRenderTarget(this);
  v3 = (void *)*((_QWORD *)this + 29);
  if ( v3 )
    CloseHandle(v3);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 200);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 168);
  v4 = (_QWORD *)*((_QWORD *)this + 18);
  if ( v4 )
  {
    std::_Deallocate<16,0>(v4, (*((_QWORD *)this + 20) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 18) = 0LL;
    *((_QWORD *)this + 19) = 0LL;
    *((_QWORD *)this + 20) = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 112);
  v5 = *((_QWORD *)this + 10);
  if ( v5 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CHolographicExclusiveMode,wil::err_returncode_policy>>>(
      v5,
      *((_QWORD *)this + 11));
    std::_Deallocate<16,0>(
      *((_QWORD **)this + 10),
      (*((_QWORD *)this + 12) - *((_QWORD *)this + 10)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
    *((_QWORD *)this + 12) = 0LL;
  }
}

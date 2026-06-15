/*
 * XREFs of ??1CConstraintModelResourceManager@@UEAA@XZ @ 0x1800E6670
 * Callers:
 *     ??_GCConstraintModelResourceManager@@UEAAPEAXI@Z @ 0x1800E6DA0 (--_GCConstraintModelResourceManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@V?$CAutoPtr@VReacquireResourceWorkItem@@@ATL@@V?$CAutoPtrElementTraits@VReacquireResourceWorkItem@@@2@@ATL@@QEAAXXZ @ 0x180059F88 (-RemoveAll@-$CAtlList@V-$CAutoPtr@VReacquireResourceWorkItem@@@ATL@@V-$CAutoPtrElementTraits@VRe.c)
 *     ?RemoveAll@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAXXZ @ 0x1800EA25C (-RemoveAll@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QE.c)
 *     ?Shutdown@CConstraintModelResourceManager@@AEAAXXZ @ 0x1800EA8B8 (-Shutdown@CConstraintModelResourceManager@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CConstraintModelResourceManager::~CConstraintModelResourceManager(
        CConstraintModelResourceManager *this)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx

  *(_QWORD *)this = &CConstraintModelResourceManager::`vftable';
  CConstraintModelResourceManager::Shutdown(this);
  ATL::CAtlList<ATL::CAutoPtr<ReacquireResourceWorkItem>,ATL::CAutoPtrElementTraits<ReacquireResourceWorkItem>>::RemoveAll((__int64 *)this + 29);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 192));
  ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::RemoveAll((char *)this + 120);
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 2);
  v2 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 7);
  if ( v2 )
    (**v2)(v2, 1LL);
  *((_QWORD *)this + 7) = 0LL;
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  *(_QWORD *)this = &CUnknown::`vftable';
}

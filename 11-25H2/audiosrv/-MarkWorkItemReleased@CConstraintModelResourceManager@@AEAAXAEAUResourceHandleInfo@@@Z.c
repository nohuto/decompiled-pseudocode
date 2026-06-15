/*
 * XREFs of ?MarkWorkItemReleased@CConstraintModelResourceManager@@AEAAXAEAUResourceHandleInfo@@@Z @ 0x1800E9718
 * Callers:
 *     ?ReleaseResource@CConstraintModelResourceManager@@UEAAJPEA_K@Z @ 0x180089BC0 (-ReleaseResource@CConstraintModelResourceManager@@UEAAJPEA_K@Z.c)
 * Callees:
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x18002F408 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180068548 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?GetNext@?$CAtlList@V?$CAutoPtr@VReacquireResourceWorkItem@@@ATL@@V?$CAutoPtrElementTraits@VReacquireResourceWorkItem@@@2@@ATL@@QEAAAEAV?$CAutoPtr@VReacquireResourceWorkItem@@@2@AEAPEAU__POSITION@@@Z @ 0x1800E8790 (-GetNext@-$CAtlList@V-$CAutoPtr@VReacquireResourceWorkItem@@@ATL@@V-$CAutoPtrElementTraits@VReac.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CConstraintModelResourceManager::MarkWorkItemReleased(
        CConstraintModelResourceManager *this,
        struct ResourceHandleInfo *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rcx
  LPCRITICAL_SECTION v6[3]; // [rsp+20h] [rbp-18h] BYREF
  _QWORD *v7; // [rsp+40h] [rbp+8h] BYREF

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)v6,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 192));
  v4 = (_QWORD *)*((_QWORD *)this + 29);
  v7 = v4;
  while ( v4 )
  {
    (*(void (__fastcall **)(_QWORD, struct ResourceHandleInfo *))(*(_QWORD *)v4[2] + 16LL))(v4[2], a2);
    ATL::CAtlList<ATL::CAutoPtr<ReacquireResourceWorkItem>,ATL::CAutoPtrElementTraits<ReacquireResourceWorkItem>>::GetNext(
      v5,
      &v7);
    v4 = v7;
  }
  ATL::CCritSecLock::~CCritSecLock(v6);
}

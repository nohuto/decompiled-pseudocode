/*
 * XREFs of ?MarkWorkItemReleased@CConstraintModelResourceManager@@AEAAXPEA_K@Z @ 0x18009E518
 * Callers:
 *     ?ReleaseResource@CConstraintModelResourceManager@@UEAAJPEA_K@Z @ 0x18007B2E0 (-ReleaseResource@CConstraintModelResourceManager@@UEAAJPEA_K@Z.c)
 * Callees:
 *     ?GetNext@?$CAtlList@V?$CAutoPtr@VReacquireResourceWorkItem@@@ATL@@V?$CAutoPtrElementTraits@VReacquireResourceWorkItem@@@2@@ATL@@QEAAAEAV?$CAutoPtr@VReacquireResourceWorkItem@@@2@AEAPEAU__POSITION@@@Z @ 0x1800ED468 (-GetNext@-$CAtlList@V-$CAutoPtr@VReacquireResourceWorkItem@@@ATL@@V-$CAutoPtrElementTraits@VReac.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CConstraintModelResourceManager::MarkWorkItemReleased(
        CConstraintModelResourceManager *this,
        unsigned __int64 *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 192);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 192));
  v5 = *((_QWORD *)this + 29);
  v7 = v5;
  while ( v5 )
  {
    (*(void (__fastcall **)(_QWORD, unsigned __int64 *))(**(_QWORD **)(v5 + 16) + 24LL))(*(_QWORD *)(v5 + 16), a2);
    ATL::CAtlList<ATL::CAutoPtr<ReacquireResourceWorkItem>,ATL::CAutoPtrElementTraits<ReacquireResourceWorkItem>>::GetNext(
      v6,
      &v7);
    v5 = v7;
  }
  LeaveCriticalSection(v4);
}

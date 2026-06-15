/*
 * XREFs of ?AddWorkItemToQueue@CConstraintModelResourceManager@@AEAAJPEAVReacquireResourceWorkItem@@@Z @ 0x18005A8CC
 * Callers:
 *     ?ReacquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJKPEA_K@Z @ 0x18007B1E0 (-ReacquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJKPEA_K@Z.c)
 *     ?ReacquireResourceGroup@CConstraintModelResourceManager@@UEAAJKAEAUResourceHandleInfo@@@Z @ 0x1800EEC50 (-ReacquireResourceGroup@CConstraintModelResourceManager@@UEAAJKAEAUResourceHandleInfo@@@Z.c)
 * Callees:
 *     ?GetFreeNode@?$CAtlList@V?$CAutoPtr@VReacquireResourceWorkItem@@@ATL@@V?$CAutoPtrElementTraits@VReacquireResourceWorkItem@@@2@@ATL@@AEAAXXZ @ 0x18005A9D4 (-GetFreeNode@-$CAtlList@V-$CAutoPtr@VReacquireResourceWorkItem@@@ATL@@V-$CAutoPtrElementTraits@V.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CConstraintModelResourceManager::AddWorkItemToQueue(
        CConstraintModelResourceManager *this,
        struct ReacquireResourceWorkItem *a2)
{
  CConstraintModelResourceManager *v3; // rsi
  struct _RTL_CRITICAL_SECTION *v4; // r14
  unsigned int v5; // r15d
  __int64 v6; // r13
  __int64 *v7; // rcx
  __int64 v8; // rax
  __int64 **v9; // rax
  ATL::CAtlException *v11; // rbx
  ATL::CAtlException *v12; // [rsp+20h] [rbp-58h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+28h] [rbp-50h]
  char v14; // [rsp+30h] [rbp-48h]

  v3 = this;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 192);
  v13 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 192);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 192));
  try
  {
    v14 = 1;
    v5 = 0;
    v6 = *((_QWORD *)v3 + 30);
    ATL::CAtlList<ATL::CAutoPtr<ReacquireResourceWorkItem>,ATL::CAutoPtrElementTraits<ReacquireResourceWorkItem>>::GetFreeNode((char *)v3 + 232);
    v7 = (__int64 *)*((_QWORD *)v3 + 33);
    v8 = *v7;
    v7[2] = (__int64)a2;
    *((_QWORD *)v3 + 33) = v8;
    v7[1] = v6;
    *v7 = 0LL;
    ++*((_QWORD *)v3 + 31);
    v9 = (__int64 **)*((_QWORD *)v3 + 30);
    if ( v9 )
      *v9 = v7;
    else
      *((_QWORD *)v3 + 29) = v7;
    *((_QWORD *)v3 + 30) = v7;
  }
  catch ( ATL::CAtlException *v12 )
  {
    v11 = v12;
    if ( *(_DWORD *)v12 == -1073741571 )
      _o__resetstkoflw();
    v3 = this;
    v5 = *(_DWORD *)v11;
    v4 = v13;
  }
  SetEvent(*((HANDLE *)v3 + 23));
  LeaveCriticalSection(v4);
  return v5;
}

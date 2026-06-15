/*
 * XREFs of ?ProcessRevokedResources@CConstraintModelResourceManager@@AEAAXXZ @ 0x1800E9938
 * Callers:
 *     ?DoReacquireSaDeviceResource@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo@@@Z @ 0x1800895AC (-DoReacquireSaDeviceResource@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleI.c)
 *     ?AcquireResourceHandle@CConstraintModelResourceManager@@AEAAJPEAU_ResourceInfo@@KKHPEA_K@Z @ 0x1800E6E6C (-AcquireResourceHandle@CConstraintModelResourceManager@@AEAAJPEAU_ResourceInfo@@KKHPEA_K@Z.c)
 *     ?RevokeEndpointResources@CConstraintModelResourceManager@@AEAAJPEAVEndpointInfo@@@Z @ 0x1800EA384 (-RevokeEndpointResources@CConstraintModelResourceManager@@AEAAJPEAVEndpointInfo@@@Z.c)
 *     ?RevokeEndpointResourcesInGroup@CConstraintModelResourceManager@@AEAAJPEAVEndpointInfo@@H@Z @ 0x1800EA4AC (-RevokeEndpointResourcesInGroup@CConstraintModelResourceManager@@AEAAJPEAVEndpointInfo@@H@Z.c)
 * Callees:
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x18002F408 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180068548 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ?AddTail@?$CAtlList@_KV?$CElementTraits@_K@ATL@@@ATL@@QEAAPEAU__POSITION@@_K@Z @ 0x1800E77A4 (-AddTail@-$CAtlList@_KV-$CElementTraits@_K@ATL@@@ATL@@QEAAPEAU__POSITION@@_K@Z.c)
 *     ?GetAt@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAEAUResourceHandleInfo@@PEAU__POSITION@@@Z @ 0x1800E86AC (-GetAt@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAE.c)
 *     ?GetNext@?$CAtlList@V?$CAutoPtr@VReacquireResourceWorkItem@@@ATL@@V?$CAutoPtrElementTraits@VReacquireResourceWorkItem@@@2@@ATL@@QEAAAEAV?$CAutoPtr@VReacquireResourceWorkItem@@@2@AEAPEAU__POSITION@@@Z @ 0x1800E8790 (-GetNext@-$CAtlList@V-$CAutoPtr@VReacquireResourceWorkItem@@@ATL@@V-$CAutoPtrElementTraits@VReac.c)
 *     ?RemoveAll@?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEAAXXZ @ 0x1800EA2C0 (-RemoveAll@-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEAAXXZ.c)
 *     ?RevokeEndpointResourcesInGroup@CConstraintModelResourceManager@@AEAAJPEAVEndpointInfo@@H@Z @ 0x1800EA4AC (-RevokeEndpointResourcesInGroup@CConstraintModelResourceManager@@AEAAJPEAVEndpointInfo@@H@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CConstraintModelResourceManager::ProcessRevokedResources(struct _RTL_CRITICAL_SECTION *this)
{
  __int64 v2; // rcx
  _QWORD *p_Type; // rax
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // r14
  char v8; // di
  _QWORD *v9; // rbx
  __int64 v10; // rdx
  _QWORD *v11; // [rsp+28h] [rbp-29h] BYREF
  __int128 v12; // [rsp+30h] [rbp-21h] BYREF
  __int64 v13; // [rsp+40h] [rbp-11h]
  __int128 v14; // [rsp+48h] [rbp-9h]
  int v15; // [rsp+58h] [rbp+7h]
  LPCRITICAL_SECTION v16[2]; // [rsp+60h] [rbp+Fh] BYREF
  __int128 v17; // [rsp+70h] [rbp+1Fh] BYREF
  __int128 v18; // [rsp+80h] [rbp+2Fh] BYREF

  do
  {
    v12 = 0LL;
    v13 = 0LL;
    v14 = 0LL;
    v15 = 10;
    ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
      (__int64)v16,
      this + 2);
    p_Type = &this[3].DebugInfo->Type;
    v11 = p_Type;
    while ( p_Type )
    {
      v4 = ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::GetAt(v2, (__int64)p_Type);
      v5 = *(_QWORD *)v4;
      v17 = 0LL;
      if ( *(_DWORD *)(v4 + 292) == 1 )
      {
        ATL::CAtlList<unsigned __int64,ATL::CElementTraits<unsigned __int64>>::AddTail((__int64 *)&v12, v5);
      }
      else
      {
        while ( (int)RmGetNotification(v5, &v17) >= 0 )
        {
          if ( (_DWORD)v17 == 1 )
          {
            ATL::CAtlList<unsigned __int64,ATL::CElementTraits<unsigned __int64>>::AddTail((__int64 *)&v12, v5);
            *(_DWORD *)(v4 + 292) = 1;
          }
        }
        if ( !*(_DWORD *)(v4 + 292) && *(_DWORD *)(v4 + 436) )
        {
          v7 = *(_QWORD *)(*(_QWORD *)(v4 + 448) + 24LL);
          v18 = 0LL;
          while ( (int)RmGetNotification(v7, &v18) >= 0 )
          {
            if ( (_DWORD)v18 == 1 )
            {
              ATL::CAtlList<unsigned __int64,ATL::CElementTraits<unsigned __int64>>::AddTail((__int64 *)&v12, v5);
              *(_DWORD *)(v4 + 292) = 1;
              CConstraintModelResourceManager::RevokeEndpointResourcesInGroup(
                (CConstraintModelResourceManager *)this,
                (struct EndpointInfo *)(v4 + 304),
                0);
            }
          }
        }
      }
      ATL::CAtlList<ATL::CAutoPtr<ReacquireResourceWorkItem>,ATL::CAutoPtrElementTraits<ReacquireResourceWorkItem>>::GetNext(
        v6,
        &v11);
      p_Type = v11;
    }
    ATL::CCritSecLock::~CCritSecLock(v16);
    if ( v13 )
    {
      v8 = 0;
      v9 = (_QWORD *)v12;
      while ( v9 )
      {
        v10 = v9[2];
        v9 = (_QWORD *)*v9;
        (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)&this[4].LockCount + 24LL))(
          *(_QWORD *)&this[4].LockCount,
          v10);
      }
    }
    else
    {
      v8 = 1;
    }
    ATL::CAtlList<_ResourceInfo,ResourceInfoTraits>::RemoveAll(&v12);
  }
  while ( !v8 );
}

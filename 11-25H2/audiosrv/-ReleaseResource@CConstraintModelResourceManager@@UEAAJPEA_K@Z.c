/*
 * XREFs of ?ReleaseResource@CConstraintModelResourceManager@@UEAAJPEA_K@Z @ 0x180089BC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x18002F408 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005B488 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180068548 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?MarkWorkItemReleased@CConstraintModelResourceManager@@AEAAXPEA_K@Z @ 0x1800A1FB8 (-MarkWorkItemReleased@CConstraintModelResourceManager@@AEAAXPEA_K@Z.c)
 *     WPP_SF_d @ 0x1800C180C (WPP_SF_d.c)
 *     ?GetAt@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAEAUResourceHandleInfo@@PEAU__POSITION@@@Z @ 0x1800E86AC (-GetAt@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAE.c)
 *     ?GetEndpointStatus@CConstraintModelResourceManager@@AEAAXPEBVEndpointInfo@@PEAHPEAK@Z @ 0x1800E86D0 (-GetEndpointStatus@CConstraintModelResourceManager@@AEAAXPEBVEndpointInfo@@PEAHPEAK@Z.c)
 *     ?GetNext@?$CAtlList@V?$CAutoPtr@VReacquireResourceWorkItem@@@ATL@@V?$CAutoPtrElementTraits@VReacquireResourceWorkItem@@@2@@ATL@@QEAAAEAV?$CAutoPtr@VReacquireResourceWorkItem@@@2@AEAPEAU__POSITION@@@Z @ 0x1800E8790 (-GetNext@-$CAtlList@V-$CAutoPtr@VReacquireResourceWorkItem@@@ATL@@V-$CAutoPtrElementTraits@VReac.c)
 *     ?MarkWorkItemReleased@CConstraintModelResourceManager@@AEAAXAEAUResourceHandleInfo@@@Z @ 0x1800E9718 (-MarkWorkItemReleased@CConstraintModelResourceManager@@AEAAXAEAUResourceHandleInfo@@@Z.c)
 *     ?RemoveAt@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1800EA334 (-RemoveAt@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEA.c)
 *     WPP_SF_I @ 0x1800EAD3C (WPP_SF_I.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CConstraintModelResourceManager::ReleaseResource(
        struct _RTL_CRITICAL_SECTION *this,
        unsigned __int64 *a2)
{
  unsigned int v4; // ebp
  __int64 v5; // rcx
  __int64 v6; // r8
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rdi
  __int64 v8; // rcx
  __int64 v9; // rbx
  int v10; // r12d
  int v11; // eax
  LPCRITICAL_SECTION v13[7]; // [rsp+20h] [rbp-38h] BYREF
  struct _RTL_CRITICAL_SECTION_DEBUG *v14; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v15; // [rsp+68h] [rbp+10h] BYREF

  v4 = 0;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)v13,
    this + 2);
  CConstraintModelResourceManager::MarkWorkItemReleased((CConstraintModelResourceManager *)this, a2);
  if ( *a2 )
  {
    DebugInfo = this[3].DebugInfo;
    v14 = DebugInfo;
    while ( DebugInfo )
    {
      v9 = ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::GetAt(v5, DebugInfo);
      if ( *a2 == *(_QWORD *)v9 )
      {
        v10 = *(_DWORD *)(v9 + 296);
        if ( *(_DWORD *)(v9 + 436) )
        {
          LODWORD(v14) = 0;
          v15 = -1;
          CConstraintModelResourceManager::GetEndpointStatus(
            (CConstraintModelResourceManager *)this,
            (const struct EndpointInfo *)(v9 + 304),
            (int *)&v14,
            &v15);
          CConstraintModelResourceManager::MarkWorkItemReleased(
            (CConstraintModelResourceManager *)this,
            (struct ResourceHandleInfo *)v9);
          if ( (_DWORD)v14 )
          {
            if ( v15 != *(_DWORD *)(*(_QWORD *)(v9 + 448) + 16LL) )
              ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *, _QWORD, __int64))this->DebugInfo[1].ProcessLocksList.Flink)(
                this,
                v15,
                v9);
          }
        }
        wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)(v9 + 448));
        ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::RemoveAt(&this[3], DebugInfo);
        if ( v10 )
          goto LABEL_17;
        break;
      }
      ATL::CAtlList<ATL::CAutoPtr<ReacquireResourceWorkItem>,ATL::CAutoPtrElementTraits<ReacquireResourceWorkItem>>::GetNext(
        v8,
        &v14);
      DebugInfo = v14;
    }
    v11 = RmReleaseResources(*a2);
    v4 = v11;
    if ( v11 >= 0 )
      goto LABEL_17;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        29LL,
        &WPP_7a63d399f94f32cb8d4be129f7d61b2c_Traceguids,
        (unsigned int)v11);
    }
  }
  else
  {
LABEL_17:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_I(*((_QWORD *)WPP_GLOBAL_Control + 2), &WPP_GLOBAL_Control, v6, *a2);
    }
  }
  ATL::CCritSecLock::~CCritSecLock(v13);
  return v4;
}

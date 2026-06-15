/*
 * XREFs of ?ReleaseResource@CConstraintModelResourceManager@@UEAAJPEA_K@Z @ 0x18007B2E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x180008BA8 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004CC08 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005B718 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?MarkWorkItemReleased@CConstraintModelResourceManager@@AEAAXPEA_K@Z @ 0x18009E518 (-MarkWorkItemReleased@CConstraintModelResourceManager@@AEAAXPEA_K@Z.c)
 *     WPP_SF_D @ 0x1800C03A4 (WPP_SF_D.c)
 *     ?GetAt@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAEAUResourceHandleInfo@@PEAU__POSITION@@@Z @ 0x1800ECAFC (-GetAt@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAE.c)
 *     ?GetEndpointStatus@CConstraintModelResourceManager@@AEAAXPEBVEndpointInfo@@PEAHPEAK@Z @ 0x1800ED3A8 (-GetEndpointStatus@CConstraintModelResourceManager@@AEAAXPEBVEndpointInfo@@PEAHPEAK@Z.c)
 *     ?GetNext@?$CAtlList@V?$CAutoPtr@VReacquireResourceWorkItem@@@ATL@@V?$CAutoPtrElementTraits@VReacquireResourceWorkItem@@@2@@ATL@@QEAAAEAV?$CAutoPtr@VReacquireResourceWorkItem@@@2@AEAPEAU__POSITION@@@Z @ 0x1800ED468 (-GetNext@-$CAtlList@V-$CAutoPtr@VReacquireResourceWorkItem@@@ATL@@V-$CAutoPtrElementTraits@VReac.c)
 *     ?MarkWorkItemReleased@CConstraintModelResourceManager@@AEAAXAEAUResourceHandleInfo@@@Z @ 0x1800EE408 (-MarkWorkItemReleased@CConstraintModelResourceManager@@AEAAXAEAUResourceHandleInfo@@@Z.c)
 *     ?RemoveAt@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1800EEFB4 (-RemoveAt@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEA.c)
 *     WPP_SF_I @ 0x1800EFCEC (WPP_SF_I.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CConstraintModelResourceManager::ReleaseResource(
        struct _RTL_CRITICAL_SECTION *this,
        unsigned __int64 *a2)
{
  unsigned int v4; // ebp
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rdi
  __int64 v9; // rcx
  __int64 v10; // rbx
  int v11; // r12d
  int v12; // eax
  LPCRITICAL_SECTION v14[7]; // [rsp+20h] [rbp-38h] BYREF
  struct _RTL_CRITICAL_SECTION_DEBUG *v15; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v16; // [rsp+68h] [rbp+10h] BYREF

  v4 = 0;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)v14,
    this + 2);
  CConstraintModelResourceManager::MarkWorkItemReleased((CConstraintModelResourceManager *)this, a2);
  if ( *a2 )
  {
    DebugInfo = this[3].DebugInfo;
    v15 = DebugInfo;
    while ( DebugInfo )
    {
      v10 = ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::GetAt(v6, DebugInfo);
      if ( *a2 == *(_QWORD *)v10 )
      {
        v11 = *(_DWORD *)(v10 + 296);
        if ( *(_DWORD *)(v10 + 436) )
        {
          LODWORD(v15) = 0;
          v16 = -1;
          CConstraintModelResourceManager::GetEndpointStatus(
            (CConstraintModelResourceManager *)this,
            (const struct EndpointInfo *)(v10 + 304),
            (int *)&v15,
            &v16);
          CConstraintModelResourceManager::MarkWorkItemReleased(
            (CConstraintModelResourceManager *)this,
            (struct ResourceHandleInfo *)v10);
          if ( (_DWORD)v15 )
          {
            if ( v16 != *(_DWORD *)(*(_QWORD *)(v10 + 448) + 16LL) )
              ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *, _QWORD, __int64))this->DebugInfo[1].ProcessLocksList.Flink)(
                this,
                v16,
                v10);
          }
        }
        wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)(v10 + 448));
        ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::RemoveAt(&this[3], DebugInfo);
        if ( v11 )
          goto LABEL_17;
        break;
      }
      ATL::CAtlList<ATL::CAutoPtr<ReacquireResourceWorkItem>,ATL::CAutoPtrElementTraits<ReacquireResourceWorkItem>>::GetNext(
        v9,
        &v15);
      DebugInfo = v15;
    }
    v12 = RmReleaseResources(*a2, v5);
    v4 = v12;
    if ( v12 >= 0 )
      goto LABEL_17;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        29LL,
        &WPP_a5774a8bafb0327b6b857065801df2a8_Traceguids,
        (unsigned int)v12);
    }
  }
  else
  {
LABEL_17:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_I(*((_QWORD *)WPP_GLOBAL_Control + 2), &WPP_GLOBAL_Control, v7, *a2);
    }
  }
  ATL::CCritSecLock::~CCritSecLock(v14);
  return v4;
}

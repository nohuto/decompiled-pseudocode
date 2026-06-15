/*
 * XREFs of ?RevokeEndpointResourcesInGroup@CConstraintModelResourceManager@@AEAAJPEAVEndpointInfo@@H@Z @ 0x1800EF364
 * Callers:
 *     ?AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@AEAVEndpointInfo@@PEAU_ResourceInfo@@KKHPEAUResourceHandleInfo@@@Z @ 0x1800EBC28 (-AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@AEAVEndpointInfo@@PEAU.c)
 *     ?DoReacquireResourceGroup@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo@@@Z @ 0x1800EC56C (-DoReacquireResourceGroup@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo.c)
 *     ?ProcessRevokedResources@CConstraintModelResourceManager@@AEAAXXZ @ 0x1800EE628 (-ProcessRevokedResources@CConstraintModelResourceManager@@AEAAXXZ.c)
 * Callees:
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x180008BA8 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x18000F840 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005B718 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     WPP_SF_D @ 0x1800C03A4 (WPP_SF_D.c)
 *     ??8EndpointInfo@@QEBA_NAEBV0@@Z @ 0x1800EAE84 (--8EndpointInfo@@QEBA_NAEBV0@@Z.c)
 *     ?GetAt@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAEAUResourceHandleInfo@@PEAU__POSITION@@@Z @ 0x1800ECAFC (-GetAt@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAE.c)
 *     ?GetNext@?$CAtlList@V?$CAutoPtr@VReacquireResourceWorkItem@@@ATL@@V?$CAutoPtrElementTraits@VReacquireResourceWorkItem@@@2@@ATL@@QEAAAEAV?$CAutoPtr@VReacquireResourceWorkItem@@@2@AEAPEAU__POSITION@@@Z @ 0x1800ED468 (-GetNext@-$CAtlList@V-$CAutoPtr@VReacquireResourceWorkItem@@@ATL@@V-$CAutoPtrElementTraits@VReac.c)
 *     ?GetPrintableId@EndpointInfo@@QEBAPEBGXZ @ 0x1800ED498 (-GetPrintableId@EndpointInfo@@QEBAPEBGXZ.c)
 *     ?ProcessRevokedResources@CConstraintModelResourceManager@@AEAAXXZ @ 0x1800EE628 (-ProcessRevokedResources@CConstraintModelResourceManager@@AEAAXXZ.c)
 *     WPP_SF_SSd @ 0x1800EFE60 (WPP_SF_SSd.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CConstraintModelResourceManager::RevokeEndpointResourcesInGroup(
        struct _RTL_CRITICAL_SECTION *this,
        struct EndpointInfo *a2,
        int a3)
{
  int v6; // edi
  EndpointInfo *v7; // rdx
  unsigned int PrintableId; // eax
  __int64 v9; // r10
  __int64 v10; // r8
  char v11; // r9
  __int64 v12; // rcx
  _QWORD *p_Type; // rax
  __int64 v14; // rbx
  __int64 v15; // rcx
  LPCRITICAL_SECTION v17[5]; // [rsp+30h] [rbp-28h] BYREF
  _QWORD *v18; // [rsp+60h] [rbp+8h] BYREF

  v6 = 0;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    std::wstring::c_str((__int64)a2 + 64, (__int64)a2);
    PrintableId = (unsigned int)EndpointInfo::GetPrintableId(v7, (__int64)v7);
    WPP_SF_SSd(*(_QWORD *)(v9 + 16), 14, v10, PrintableId, v10, v11);
  }
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)v17,
    this + 2);
  p_Type = &this[3].DebugInfo->Type;
  v18 = p_Type;
  while ( p_Type )
  {
    v14 = ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::GetAt(v12, (__int64)p_Type);
    if ( EndpointInfo::operator==((__int64)a2, v14 + 304) && *(_DWORD *)(v14 + 436) )
    {
      ++v6;
      *(_DWORD *)(v14 + 292) = 1;
    }
    ATL::CAtlList<ATL::CAutoPtr<ReacquireResourceWorkItem>,ATL::CAutoPtrElementTraits<ReacquireResourceWorkItem>>::GetNext(
      v15,
      &v18);
    p_Type = v18;
  }
  ATL::CCritSecLock::~CCritSecLock(v17);
  if ( a3 )
    CConstraintModelResourceManager::ProcessRevokedResources(this);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xFu, (__int64)&WPP_a5774a8bafb0327b6b857065801df2a8_Traceguids, v6);
  }
  return 0LL;
}

/*
 * XREFs of ?DoReacquireSaDeviceResource@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo@@@Z @ 0x1800895AC
 * Callers:
 *     ?Process@ReacquireResourceWorkItem@@UEAAXPEAVCConstraintModelResourceManager@@@Z @ 0x1800E9920 (-Process@ReacquireResourceWorkItem@@UEAAXPEAVCConstraintModelResourceManager@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000A850 (--3@YAXPEAX@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x18002F408 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ??$copy_to@VCAudioSession@@@?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAVCAudioSession@@@Z @ 0x18004E288 (--$copy_to@VCAudioSession@@@-$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEBAJP.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180068548 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?GetEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x18006EE54 (-GetEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z.c)
 *     ??1ResourceHandleInfo@@QEAA@XZ @ 0x180089580 (--1ResourceHandleInfo@@QEAA@XZ.c)
 *     ?GetStreamResourceConsumption@CConstraintModel@@QEAAJPEAUIMMDevice@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x18009190C (-GetStreamResourceConsumption@CConstraintModel@@QEAAJPEAUIMMDevice@@U_GUID@@W4__MIDL___MIDL_itf_.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800A8BC4 (memset_0.c)
 *     ??4ResourceHandleInfo@@QEAAAEAU0@AEBU0@@Z @ 0x1800E6960 (--4ResourceHandleInfo@@QEAAAEAU0@AEBU0@@Z.c)
 *     ?GetAt@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAEAUResourceHandleInfo@@PEAU__POSITION@@@Z @ 0x1800E86AC (-GetAt@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAE.c)
 *     ?GetNext@?$CAtlList@V?$CAutoPtr@VReacquireResourceWorkItem@@@ATL@@V?$CAutoPtrElementTraits@VReacquireResourceWorkItem@@@2@@ATL@@QEAAAEAV?$CAutoPtr@VReacquireResourceWorkItem@@@2@AEAPEAU__POSITION@@@Z @ 0x1800E8790 (-GetNext@-$CAtlList@V-$CAutoPtr@VReacquireResourceWorkItem@@@ATL@@V-$CAutoPtrElementTraits@VReac.c)
 *     ?GetResourceConsumptionInfoInGroup@CConstraintModelResourceManager@@AEAAJW4RmResourceType@@PEAU_ResourceInfo@@KPEAKPEAPEAU3@@Z @ 0x1800E87E8 (-GetResourceConsumptionInfoInGroup@CConstraintModelResourceManager@@AEAAJW4RmResourceType@@PEAU_.c)
 *     ?ProcessRevokedResources@CConstraintModelResourceManager@@AEAAXXZ @ 0x1800E9938 (-ProcessRevokedResources@CConstraintModelResourceManager@@AEAAXXZ.c)
 *     ?ReacquireResourceHandle@CConstraintModelResourceManager@@AEAAJ_KPEAU_ResourceInfo@@KKPEAHPEA_K@Z @ 0x1800EA0DC (-ReacquireResourceHandle@CConstraintModelResourceManager@@AEAAJ_KPEAU_ResourceInfo@@KKPEAHPEA_K@.c)
 *     WPP_SF_ddI @ 0x1800EB3A0 (WPP_SF_ddI.c)
 *     WPP_SF_ddID @ 0x1800EB408 (WPP_SF_ddID.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CConstraintModelResourceManager::DoReacquireSaDeviceResource(
        CConstraintModelResourceManager *this,
        unsigned int a2,
        unsigned __int64 **a3)
{
  unsigned int v4; // r12d
  int EndpointCharacteristics; // edi
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  struct _ResourceInfo *v8; // rbx
  int v9; // esi
  struct CEndpointCharacteristics *v10; // r14
  __int64 v11; // rcx
  __int64 v12; // r8
  struct CEndpointCharacteristics *v13; // rbx
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned __int64 v18; // rsi
  __int64 v19; // rcx
  struct IMMDevice *v20; // r12
  __int64 v21; // rcx
  struct IMMDevice *v22; // rax
  __int64 v23; // rax
  int v24; // esi
  __int64 v25; // rcx
  struct IMMDevice *v26; // rax
  unsigned int *v28; // [rsp+20h] [rbp-E0h]
  unsigned int v29; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v30; // [rsp+44h] [rbp-BCh]
  int v31; // [rsp+48h] [rbp-B8h] BYREF
  struct IMMDevice *v32[2]; // [rsp+50h] [rbp-B0h] BYREF
  struct CEndpointCharacteristics *v33; // [rsp+60h] [rbp-A0h] BYREF
  struct _ResourceInfo *v34; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v35; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v36; // [rsp+78h] [rbp-88h]
  struct _GUID v37; // [rsp+80h] [rbp-80h] BYREF
  struct _RTL_CRITICAL_SECTION *v38; // [rsp+90h] [rbp-70h] BYREF
  __int64 v39; // [rsp+A0h] [rbp-60h] BYREF
  int v40; // [rsp+A8h] [rbp-58h]
  unsigned __int16 v41[128]; // [rsp+ACh] [rbp-54h] BYREF
  struct _GUID v42; // [rsp+1ACh] [rbp+ACh]
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v43[4]; // [rsp+1BCh] [rbp+BCh]
  int v44; // [rsp+1CCh] [rbp+CCh]
  __int128 v45; // [rsp+1D0h] [rbp+D0h]
  __m128i si128; // [rsp+1E0h] [rbp+E0h]
  __int128 v47; // [rsp+1F0h] [rbp+F0h]
  __m128i v48; // [rsp+200h] [rbp+100h]
  __int128 v49; // [rsp+210h] [rbp+110h]
  __m128i v50; // [rsp+220h] [rbp+120h]
  int v51; // [rsp+230h] [rbp+130h]
  __int64 v52; // [rsp+238h] [rbp+138h]
  __int128 v53; // [rsp+240h] [rbp+140h]
  __int128 v54; // [rsp+250h] [rbp+150h]
  __int64 v55; // [rsp+260h] [rbp+160h]

  v4 = a2;
  v30 = a2;
  EndpointCharacteristics = 0;
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v38 = v7;
  v39 = 0LL;
  v40 = 0;
  memset_0(v41, 0, sizeof(v41));
  v42 = 0LL;
  *(_OWORD *)v43 = 0LL;
  v44 = 0;
  v45 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v8 = 0LL;
  LOWORD(v45) = 0;
  v47 = 0LL;
  v48 = si128;
  LOWORD(v47) = 0;
  v49 = 0LL;
  v50 = si128;
  LOWORD(v49) = 0;
  v51 = 0;
  v52 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v9 = 0;
  v10 = 0LL;
  v36 = 0LL;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)v32,
    (struct _RTL_CRITICAL_SECTION *)this + 2);
  if ( !*((_DWORD *)a3 + 118) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_ddI(*((_QWORD *)WPP_GLOBAL_Control + 2), WPP_GLOBAL_Control, v12, v4, 0, **a3);
    }
    v13 = (struct CEndpointCharacteristics *)*((_QWORD *)this + 15);
    v33 = v13;
    while ( v13 )
    {
      v14 = ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::GetAt(v11, v13);
      v15 = **a3;
      if ( v15 == *(_QWORD *)v14 )
      {
        v36 = **a3;
        v10 = v13;
        v9 = 1;
        *(_DWORD *)(v14 + 296) = 1;
        ResourceHandleInfo::operator=(&v39);
        break;
      }
      ATL::CAtlList<ATL::CAutoPtr<ReacquireResourceWorkItem>,ATL::CAutoPtrElementTraits<ReacquireResourceWorkItem>>::GetNext(
        v15,
        &v33);
      v13 = v33;
    }
    v8 = 0LL;
  }
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)v32);
  if ( v9 )
  {
    v31 = 0;
    v18 = 0LL;
    v35 = 0LL;
    v29 = 0;
    v34 = 0LL;
    v33 = 0LL;
    EndpointCharacteristics = GetEndpointCharacteristics(v41, 0, &v33);
    if ( EndpointCharacteristics >= 0 )
    {
      v32[0] = 0LL;
      wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::copy_to<CAudioSession>((__int64 *)v33 + 5, v32);
      v37 = v42;
      EndpointCharacteristics = CConstraintModel::GetStreamResourceConsumption(
                                  *((CConstraintModel **)this + 7),
                                  v32[0],
                                  &v37,
                                  v43[1],
                                  &v29,
                                  &v34);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v32);
      if ( EndpointCharacteristics >= 0 )
      {
        if ( !v29 )
        {
          v8 = v34;
          goto LABEL_53;
        }
        if ( DWORD1(v54) )
        {
          v29 = 0;
          v32[0] = 0LL;
          v28 = &v29;
          v8 = v34;
          EndpointCharacteristics = CConstraintModelResourceManager::GetResourceConsumptionInfoInGroup(
                                      v19,
                                      DWORD2(v54),
                                      v34);
          v20 = v32[0];
          if ( EndpointCharacteristics >= 0 )
          {
            EndpointCharacteristics = CConstraintModelResourceManager::ReacquireResourceHandle(
                                        this,
                                        v36,
                                        (struct _ResourceInfo *)v32[0],
                                        v29,
                                        v30,
                                        &v31,
                                        &v35);
            v18 = v35;
          }
          if ( v20 )
            operator delete(v20);
          v4 = v30;
        }
        else
        {
          v8 = v34;
          EndpointCharacteristics = CConstraintModelResourceManager::ReacquireResourceHandle(
                                      this,
                                      v36,
                                      v34,
                                      v29,
                                      v4,
                                      &v31,
                                      &v35);
          v18 = v35;
        }
        if ( EndpointCharacteristics < 0 )
          goto LABEL_42;
        ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
          (__int64)&v37,
          (struct _RTL_CRITICAL_SECTION *)this + 2);
        v22 = (struct IMMDevice *)*((_QWORD *)this + 15);
        v32[0] = v22;
        while ( v22 && v22 != (struct IMMDevice *)v10 )
        {
          ATL::CAtlList<ATL::CAutoPtr<ReacquireResourceWorkItem>,ATL::CAutoPtrElementTraits<ReacquireResourceWorkItem>>::GetNext(
            v21,
            v32);
          v22 = v32[0];
        }
        if ( v22 && v22 == (struct IMMDevice *)v10 )
        {
          v23 = ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::GetAt(v21, v10);
          if ( *(_DWORD *)(v23 + 292) )
          {
            EndpointCharacteristics = -2147467259;
          }
          else
          {
            *(_QWORD *)v23 = v18;
            *(_DWORD *)(v23 + 432) = v4;
            *(_DWORD *)(v23 + 296) = 0;
            **a3 = v18;
          }
          if ( EndpointCharacteristics >= 0 )
          {
LABEL_38:
            ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)&v37);
            if ( EndpointCharacteristics < 0 )
              goto LABEL_42;
LABEL_53:
            if ( v8 )
              operator delete(v8);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v33);
            goto LABEL_56;
          }
        }
        else
        {
          EndpointCharacteristics = -2147467259;
        }
        RmReleaseResources(v18);
        goto LABEL_38;
      }
      v8 = v34;
    }
LABEL_42:
    v24 = 0;
    ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
      (__int64)&v37,
      (struct _RTL_CRITICAL_SECTION *)this + 2);
    if ( !v31 )
      RmReleaseResources(v36);
    v26 = (struct IMMDevice *)*((_QWORD *)this + 15);
    v32[0] = v26;
    while ( v26 && v26 != (struct IMMDevice *)v10 )
    {
      ATL::CAtlList<ATL::CAutoPtr<ReacquireResourceWorkItem>,ATL::CAutoPtrElementTraits<ReacquireResourceWorkItem>>::GetNext(
        v25,
        v32);
      v26 = v32[0];
    }
    if ( v26 && v26 == (struct IMMDevice *)v10 )
    {
      v24 = 1;
      *(_DWORD *)(ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::GetAt(v25, v10) + 292) = 1;
    }
    ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)&v37);
    if ( v24 )
      CConstraintModelResourceManager::ProcessRevokedResources(this);
    goto LABEL_53;
  }
LABEL_56:
  if ( !*((_DWORD *)a3 + 118)
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    LODWORD(v28) = 0;
    WPP_SF_ddID(*((_QWORD *)WPP_GLOBAL_Control + 2), v16, v17, v4, v28, **a3, EndpointCharacteristics);
  }
  ResourceHandleInfo::~ResourceHandleInfo((ResourceHandleInfo *)&v39);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v38);
  return (unsigned int)EndpointCharacteristics;
}

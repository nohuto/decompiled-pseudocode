/*
 * XREFs of ?DoReacquireSaDeviceResource@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo@@@Z @ 0x18007AC9C
 * Callers:
 *     ?Process@ReacquireResourceWorkItem@@UEAAXPEAVCConstraintModelResourceManager@@@Z @ 0x1800EE610 (-Process@ReacquireResourceWorkItem@@UEAAXPEAVCConstraintModelResourceManager@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x180008BA8 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180020710 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??3@YAXPEAX@Z @ 0x180021540 (--3@YAXPEAX@Z.c)
 *     ??$copy_to@VCAudioSession@@@?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAVCAudioSession@@@Z @ 0x18003AFEC (--$copy_to@VCAudioSession@@@-$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEBAJP.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005B718 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?GetEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x180062390 (-GetEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z.c)
 *     ??1ResourceHandleInfo@@QEAA@XZ @ 0x18007AC70 (--1ResourceHandleInfo@@QEAA@XZ.c)
 *     ?GetStreamResourceConsumption@CConstraintModel@@QEAAJPEAUIMMDevice@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x18008EB10 (-GetStreamResourceConsumption@CConstraintModel@@QEAAJPEAUIMMDevice@@U_GUID@@W4__MIDL___MIDL_itf_.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800A4EB4 (memset_0.c)
 *     ??4ResourceHandleInfo@@QEAAAEAU0@AEBU0@@Z @ 0x1800EADAC (--4ResourceHandleInfo@@QEAAAEAU0@AEBU0@@Z.c)
 *     ?GetAt@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAEAUResourceHandleInfo@@PEAU__POSITION@@@Z @ 0x1800ECAFC (-GetAt@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAE.c)
 *     ?GetNext@?$CAtlList@V?$CAutoPtr@VReacquireResourceWorkItem@@@ATL@@V?$CAutoPtrElementTraits@VReacquireResourceWorkItem@@@2@@ATL@@QEAAAEAV?$CAutoPtr@VReacquireResourceWorkItem@@@2@AEAPEAU__POSITION@@@Z @ 0x1800ED468 (-GetNext@-$CAtlList@V-$CAutoPtr@VReacquireResourceWorkItem@@@ATL@@V-$CAutoPtrElementTraits@VReac.c)
 *     ?GetResourceConsumptionInfoInGroup@CConstraintModelResourceManager@@AEAAJW4RmResourceType@@PEAU_ResourceInfo@@KPEAKPEAPEAU3@@Z @ 0x1800ED4C0 (-GetResourceConsumptionInfoInGroup@CConstraintModelResourceManager@@AEAAJW4RmResourceType@@PEAU_.c)
 *     ?ProcessRevokedResources@CConstraintModelResourceManager@@AEAAXXZ @ 0x1800EE628 (-ProcessRevokedResources@CConstraintModelResourceManager@@AEAAXXZ.c)
 *     ?ReacquireResourceHandle@CConstraintModelResourceManager@@AEAAJ_KPEAU_ResourceInfo@@KKPEAHPEA_K@Z @ 0x1800EED5C (-ReacquireResourceHandle@CConstraintModelResourceManager@@AEAAJ_KPEAU_ResourceInfo@@KKPEAHPEA_K@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AudioConstraintReacquireCrash@@@details@wil@@QEAA_NXZ @ 0x1800EFBA0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AudioConstraintReacquir.c)
 *     WPP_SF_ddI @ 0x1800F0350 (WPP_SF_ddI.c)
 *     WPP_SF_ddID @ 0x1800F03B8 (WPP_SF_ddID.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CConstraintModelResourceManager::DoReacquireSaDeviceResource(
        CConstraintModelResourceManager *this,
        unsigned int a2,
        unsigned __int64 **a3)
{
  unsigned int v4; // esi
  int EndpointCharacteristics; // edi
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  struct _ResourceInfo *v8; // rbx
  int v9; // r14d
  struct CEndpointCharacteristics *v10; // r12
  __int64 v11; // rcx
  __int64 v12; // r8
  struct CEndpointCharacteristics *v13; // rbx
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned __int64 v18; // r14
  __int64 v19; // rcx
  struct IMMDevice *v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  struct IMMDevice *v23; // rax
  __int64 v24; // rsi
  char IsEnabled; // al
  int v26; // ecx
  bool v27; // zf
  unsigned int v28; // eax
  int v29; // esi
  __int64 v30; // rdx
  __int64 v31; // rcx
  struct IMMDevice *v32; // rax
  unsigned int *v34; // [rsp+20h] [rbp-E0h]
  unsigned int v35; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v36; // [rsp+44h] [rbp-BCh]
  int v37; // [rsp+48h] [rbp-B8h] BYREF
  struct IMMDevice *v38[2]; // [rsp+50h] [rbp-B0h] BYREF
  struct CEndpointCharacteristics *v39; // [rsp+60h] [rbp-A0h] BYREF
  struct _ResourceInfo *v40; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v41; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v42; // [rsp+78h] [rbp-88h]
  struct _GUID v43; // [rsp+80h] [rbp-80h] BYREF
  struct _RTL_CRITICAL_SECTION *v44; // [rsp+90h] [rbp-70h] BYREF
  __int64 v45; // [rsp+A0h] [rbp-60h] BYREF
  int v46; // [rsp+A8h] [rbp-58h]
  unsigned __int16 v47[128]; // [rsp+ACh] [rbp-54h] BYREF
  struct _GUID v48; // [rsp+1ACh] [rbp+ACh]
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v49[4]; // [rsp+1BCh] [rbp+BCh]
  int v50; // [rsp+1CCh] [rbp+CCh]
  __int128 v51; // [rsp+1D0h] [rbp+D0h]
  __m128i si128; // [rsp+1E0h] [rbp+E0h]
  __int128 v53; // [rsp+1F0h] [rbp+F0h]
  __m128i v54; // [rsp+200h] [rbp+100h]
  __int128 v55; // [rsp+210h] [rbp+110h]
  __m128i v56; // [rsp+220h] [rbp+120h]
  int v57; // [rsp+230h] [rbp+130h]
  __int64 v58; // [rsp+238h] [rbp+138h]
  __int128 v59; // [rsp+240h] [rbp+140h]
  __int128 v60; // [rsp+250h] [rbp+150h]
  __int64 v61; // [rsp+260h] [rbp+160h]

  v4 = a2;
  v36 = a2;
  EndpointCharacteristics = 0;
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v44 = v7;
  v45 = 0LL;
  v46 = 0;
  memset_0(v47, 0, sizeof(v47));
  v48 = 0LL;
  *(_OWORD *)v49 = 0LL;
  v50 = 0;
  v51 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v8 = 0LL;
  LOWORD(v51) = 0;
  v53 = 0LL;
  v54 = si128;
  LOWORD(v53) = 0;
  v55 = 0LL;
  v56 = si128;
  LOWORD(v55) = 0;
  v57 = 0;
  v58 = 0LL;
  v59 = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  v9 = 0;
  v10 = 0LL;
  v42 = 0LL;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)v38,
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
    v39 = v13;
    while ( v13 )
    {
      v14 = ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::GetAt(v11, v13);
      v15 = **a3;
      if ( v15 == *(_QWORD *)v14 )
      {
        v42 = **a3;
        v10 = v13;
        v9 = 1;
        *(_DWORD *)(v14 + 296) = 1;
        ResourceHandleInfo::operator=(&v45);
        break;
      }
      ATL::CAtlList<ATL::CAutoPtr<ReacquireResourceWorkItem>,ATL::CAutoPtrElementTraits<ReacquireResourceWorkItem>>::GetNext(
        v15,
        &v39);
      v13 = v39;
    }
    v8 = 0LL;
  }
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)v38);
  if ( v9 )
  {
    v37 = 0;
    v18 = 0LL;
    v41 = 0LL;
    v35 = 0;
    v40 = 0LL;
    v39 = 0LL;
    EndpointCharacteristics = GetEndpointCharacteristics(v47, 0, &v39);
    if ( EndpointCharacteristics < 0 )
      goto LABEL_45;
    v38[0] = 0LL;
    wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::copy_to<CAudioSession>((__int64 *)v39 + 5, v38);
    v43 = v48;
    EndpointCharacteristics = CConstraintModel::GetStreamResourceConsumption(
                                *((CConstraintModel **)this + 7),
                                v38[0],
                                &v43,
                                v49[1],
                                &v35,
                                &v40);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v38);
    if ( EndpointCharacteristics < 0 )
    {
      v8 = v40;
      goto LABEL_45;
    }
    if ( !v35 )
    {
      v8 = v40;
LABEL_57:
      if ( v8 )
        operator delete(v8);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v39);
      goto LABEL_60;
    }
    if ( DWORD1(v60) )
    {
      v35 = 0;
      v38[0] = 0LL;
      v34 = &v35;
      v8 = v40;
      EndpointCharacteristics = CConstraintModelResourceManager::GetResourceConsumptionInfoInGroup(
                                  v19,
                                  DWORD2(v60),
                                  v40);
      v20 = v38[0];
      if ( EndpointCharacteristics >= 0 )
      {
        EndpointCharacteristics = CConstraintModelResourceManager::ReacquireResourceHandle(
                                    this,
                                    v42,
                                    (struct _ResourceInfo *)v38[0],
                                    v35,
                                    v36,
                                    &v37,
                                    &v41);
        v18 = v41;
      }
      if ( v20 )
        operator delete(v20);
    }
    else
    {
      v8 = v40;
      EndpointCharacteristics = CConstraintModelResourceManager::ReacquireResourceHandle(
                                  this,
                                  v42,
                                  v40,
                                  v35,
                                  v4,
                                  &v37,
                                  &v41);
      v18 = v41;
    }
    if ( EndpointCharacteristics < 0 )
      goto LABEL_45;
    ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
      (__int64)&v43,
      (struct _RTL_CRITICAL_SECTION *)this + 2);
    v23 = (struct IMMDevice *)*((_QWORD *)this + 15);
    v38[0] = v23;
    while ( v23 && v23 != (struct IMMDevice *)v10 )
    {
      ATL::CAtlList<ATL::CAutoPtr<ReacquireResourceWorkItem>,ATL::CAutoPtrElementTraits<ReacquireResourceWorkItem>>::GetNext(
        v22,
        v38);
      v23 = v38[0];
    }
    if ( !v23 || v23 != (struct IMMDevice *)v10 )
    {
      EndpointCharacteristics = -2147467259;
LABEL_40:
      RmReleaseResources(v18, v21);
LABEL_41:
      ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)&v43);
      if ( EndpointCharacteristics >= 0 )
      {
LABEL_56:
        v4 = v36;
        goto LABEL_57;
      }
LABEL_45:
      v29 = 0;
      ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
        (__int64)&v43,
        (struct _RTL_CRITICAL_SECTION *)this + 2);
      if ( !v37 )
        RmReleaseResources(v42, v30);
      v32 = (struct IMMDevice *)*((_QWORD *)this + 15);
      v38[0] = v32;
      while ( v32 && v32 != (struct IMMDevice *)v10 )
      {
        ATL::CAtlList<ATL::CAutoPtr<ReacquireResourceWorkItem>,ATL::CAutoPtrElementTraits<ReacquireResourceWorkItem>>::GetNext(
          v31,
          v38);
        v32 = v38[0];
      }
      if ( v32 && v32 == (struct IMMDevice *)v10 )
      {
        v29 = 1;
        *(_DWORD *)(ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::GetAt(v31, v10) + 292) = 1;
      }
      ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)&v43);
      if ( v29 )
        CConstraintModelResourceManager::ProcessRevokedResources(this);
      goto LABEL_56;
    }
    v24 = ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::GetAt(v22, v10);
    IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_AudioConstraintReacquireCrash>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_AudioConstraintReacquireCrash>::GetImpl'::`2'::impl);
    v26 = *(_DWORD *)(v24 + 292);
    v21 = 0LL;
    if ( IsEnabled )
    {
      if ( v26 )
        goto LABEL_36;
      v27 = *((_DWORD *)a3 + 118) == 0;
    }
    else
    {
      v27 = v26 == 0;
    }
    if ( v27 )
    {
      v28 = v36;
      *(_QWORD *)v24 = v18;
      *(_DWORD *)(v24 + 432) = v28;
      *(_DWORD *)(v24 + 296) = 0;
      **a3 = v18;
      goto LABEL_37;
    }
LABEL_36:
    EndpointCharacteristics = -2147467259;
LABEL_37:
    if ( EndpointCharacteristics >= 0 )
      goto LABEL_41;
    goto LABEL_40;
  }
LABEL_60:
  if ( !*((_DWORD *)a3 + 118)
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    LODWORD(v34) = 0;
    WPP_SF_ddID(*((_QWORD *)WPP_GLOBAL_Control + 2), v16, v17, v4, v34, **a3, EndpointCharacteristics);
  }
  ResourceHandleInfo::~ResourceHandleInfo((ResourceHandleInfo *)&v45);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v44);
  return (unsigned int)EndpointCharacteristics;
}

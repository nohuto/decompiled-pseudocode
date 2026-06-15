/*
 * XREFs of ?DoReacquireResourceGroup@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo@@@Z @ 0x1800E811C
 * Callers:
 *     ?Process@ReacquireResourceGroupWorkItem@@UEAAXPEAVCConstraintModelResourceManager@@@Z @ 0x1800E9900 (-Process@ReacquireResourceGroupWorkItem@@UEAAXPEAVCConstraintModelResourceManager@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000A850 (--3@YAXPEAX@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x18002F408 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ??$copy_to@VCAudioSession@@@?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAVCAudioSession@@@Z @ 0x18004E288 (--$copy_to@VCAudioSession@@@-$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEBAJP.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005B488 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180068548 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?GetEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x18006EE54 (-GetEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z.c)
 *     ??1ResourceHandleInfo@@QEAA@XZ @ 0x180089580 (--1ResourceHandleInfo@@QEAA@XZ.c)
 *     ?GetStreamResourceConsumption@CConstraintModel@@QEAAJPEAUIMMDevice@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x18009190C (-GetStreamResourceConsumption@CConstraintModel@@QEAAJPEAUIMMDevice@@U_GUID@@W4__MIDL___MIDL_itf_.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     WPP_SF_dd @ 0x1800C4724 (WPP_SF_dd.c)
 *     ??0ResourceHandleInfo@@QEAA@XZ @ 0x1800E64A8 (--0ResourceHandleInfo@@QEAA@XZ.c)
 *     ??1EndpointInfo@@QEAA@XZ @ 0x1800E6708 (--1EndpointInfo@@QEAA@XZ.c)
 *     ??4EndpointInfo@@QEAAAEAV0@AEBV0@@Z @ 0x1800E6884 (--4EndpointInfo@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??4ResourceHandleInfo@@QEAAAEAU0@AEBU0@@Z @ 0x1800E6960 (--4ResourceHandleInfo@@QEAAAEAU0@AEBU0@@Z.c)
 *     ?GetEndpointStatus@CConstraintModelResourceManager@@AEAAXPEBVEndpointInfo@@PEAHPEAK@Z @ 0x1800E86D0 (-GetEndpointStatus@CConstraintModelResourceManager@@AEAAXPEBVEndpointInfo@@PEAHPEAK@Z.c)
 *     ?GetResourceGroupConsumptionInfo@CConstraintModelResourceManager@@AEAAJW4RmResourceType@@PEAU_ResourceInfo@@KPEAPEAU3@@Z @ 0x1800E897C (-GetResourceGroupConsumptionInfo@CConstraintModelResourceManager@@AEAAJW4RmResourceType@@PEAU_Re.c)
 *     ?ReacquireResourceHandle@CConstraintModelResourceManager@@AEAAJ_KPEAU_ResourceInfo@@KKPEAHPEA_K@Z @ 0x1800EA0DC (-ReacquireResourceHandle@CConstraintModelResourceManager@@AEAAJ_KPEAU_ResourceInfo@@KKPEAHPEA_K@.c)
 *     ?RevokeEndpointResourcesInGroup@CConstraintModelResourceManager@@AEAAJPEAVEndpointInfo@@H@Z @ 0x1800EA4AC (-RevokeEndpointResourcesInGroup@CConstraintModelResourceManager@@AEAAJPEAVEndpointInfo@@H@Z.c)
 *     WPP_SF_ddD @ 0x1800EB33C (WPP_SF_ddD.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CConstraintModelResourceManager::DoReacquireResourceGroup(
        CConstraintModelResourceManager *this,
        __int64 a2,
        struct ReacquireResourceHandleInfo *a3)
{
  int EndpointCharacteristics; // edi
  int v6; // r15d
  unsigned int v7; // r14d
  __int64 v8; // r8
  struct _ResourceInfo *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // r9
  struct _ResourceInfo *v12; // r15
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  int v17; // [rsp+20h] [rbp-E0h]
  struct _ResourceInfo *v18; // [rsp+40h] [rbp-C0h] BYREF
  struct IMMDevice *v19; // [rsp+48h] [rbp-B8h] BYREF
  struct CEndpointCharacteristics *v20; // [rsp+50h] [rbp-B0h] BYREF
  struct _ResourceInfo *v21[2]; // [rsp+58h] [rbp-A8h] BYREF
  struct _RTL_CRITICAL_SECTION *v22; // [rsp+68h] [rbp-98h] BYREF
  struct _GUID v23; // [rsp+70h] [rbp-90h] BYREF
  __int128 v24; // [rsp+80h] [rbp-80h] BYREF
  __m128i si128; // [rsp+90h] [rbp-70h]
  __int128 v26; // [rsp+A0h] [rbp-60h]
  __m128i v27; // [rsp+B0h] [rbp-50h]
  __int128 v28; // [rsp+C0h] [rbp-40h]
  __m128i v29; // [rsp+D0h] [rbp-30h]
  int v30; // [rsp+E0h] [rbp-20h]
  __int64 v31; // [rsp+E8h] [rbp-18h]
  __int128 v32; // [rsp+F0h] [rbp-10h]
  _BYTE v33[12]; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int16 v34[128]; // [rsp+10Ch] [rbp+Ch] BYREF
  struct _GUID v35; // [rsp+20Ch] [rbp+10Ch]
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v36; // [rsp+220h] [rbp+120h]
  unsigned int v37; // [rsp+2B8h] [rbp+1B8h]
  __int64 v38; // [rsp+2C0h] [rbp+1C0h] BYREF

  EndpointCharacteristics = 0;
  v6 = 0;
  ResourceHandleInfo::ResourceHandleInfo((ResourceHandleInfo *)v33);
  v7 = -1;
  LODWORD(v19) = -1;
  v24 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v24) = v8;
  v26 = 0LL;
  v27 = si128;
  LOWORD(v26) = v8;
  v28 = 0LL;
  v29 = si128;
  LOWORD(v28) = v8;
  v30 = v8;
  v31 = v8;
  v32 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v22 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)v21,
    (struct _RTL_CRITICAL_SECTION *)this + 2);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v17 = *((_DWORD *)a3 + 118);
    WPP_SF_dd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x18u,
      (__int64)&WPP_7a63d399f94f32cb8d4be129f7d61b2c_Traceguids,
      -1,
      v17);
  }
  v9 = 0LL;
  if ( !*((_DWORD *)a3 + 118) )
  {
    if ( *((_QWORD *)a3 + 58) )
    {
      LODWORD(v18) = 0;
      EndpointInfo::operator=((EndpointInfo *)&v24, (__int64)a3 + 320);
      CConstraintModelResourceManager::GetEndpointStatus(
        this,
        (const struct EndpointInfo *)&v24,
        (int *)&v18,
        (unsigned int *)&v19);
      v7 = (unsigned int)v19;
      if ( (_DWORD)v18 )
      {
        if ( (_DWORD)v19 != *(_DWORD *)(*((_QWORD *)a3 + 58) + 16LL) )
        {
          v6 = 1;
          ResourceHandleInfo::operator=((__int64)v33, (__int64)a3 + 16);
        }
      }
    }
  }
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)v21);
  if ( v6 )
  {
    v20 = 0LL;
    EndpointCharacteristics = GetEndpointCharacteristics(v34, 0, &v20);
    v11 = 0LL;
    LODWORD(v18) = 0;
    v12 = 0LL;
    v21[0] = 0LL;
    if ( EndpointCharacteristics >= 0 )
    {
      v19 = 0LL;
      wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::copy_to<CAudioSession>((__int64 *)v20 + 5, &v19);
      v23 = v35;
      EndpointCharacteristics = CConstraintModel::GetStreamResourceConsumption(
                                  *((CConstraintModel **)this + 7),
                                  v19,
                                  &v23,
                                  v36,
                                  (unsigned int *)&v18,
                                  v21);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v19);
      v11 = (unsigned int)v18;
      v12 = v21[0];
    }
    v18 = 0LL;
    if ( EndpointCharacteristics < 0
      || (EndpointCharacteristics = CConstraintModelResourceManager::GetResourceGroupConsumptionInfo(
                                      v10,
                                      v37,
                                      v12,
                                      v11,
                                      &v18),
          v9 = v18,
          EndpointCharacteristics < 0)
      || (v21[0] = 0LL,
          EndpointCharacteristics = CConstraintModelResourceManager::ReacquireResourceHandle(
                                      this,
                                      *(_QWORD *)(v38 + 24),
                                      v18,
                                      1u,
                                      v7,
                                      0LL,
                                      (unsigned __int64 *)v21),
          EndpointCharacteristics < 0) )
    {
      CConstraintModelResourceManager::RevokeEndpointResourcesInGroup(this, (struct EndpointInfo *)&v24, 1);
    }
    else
    {
      ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
        (__int64)&v23,
        (struct _RTL_CRITICAL_SECTION *)this + 2);
      v13 = v38;
      *(struct _ResourceInfo **)(v38 + 24) = v21[0];
      *(_DWORD *)(v13 + 16) = v7;
      ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)&v23);
    }
    if ( v12 )
      operator delete(v12);
    if ( v9 )
      operator delete(v9);
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v38);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v20);
  }
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)a3 + 58);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_ddD(*((_QWORD *)WPP_GLOBAL_Control + 2), v14, v15, v7, *((_DWORD *)a3 + 118), EndpointCharacteristics);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v22);
  EndpointInfo::~EndpointInfo((EndpointInfo *)&v24);
  ResourceHandleInfo::~ResourceHandleInfo((ResourceHandleInfo *)v33);
  return (unsigned int)EndpointCharacteristics;
}

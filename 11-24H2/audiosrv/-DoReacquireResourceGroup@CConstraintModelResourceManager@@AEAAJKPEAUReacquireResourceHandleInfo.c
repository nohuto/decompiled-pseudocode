/*
 * XREFs of ?DoReacquireResourceGroup@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo@@@Z @ 0x1800EC56C
 * Callers:
 *     ?Process@ReacquireResourceGroupWorkItem@@UEAAXPEAVCConstraintModelResourceManager@@@Z @ 0x1800EE5F0 (-Process@ReacquireResourceGroupWorkItem@@UEAAXPEAVCConstraintModelResourceManager@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x180008BA8 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180020710 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??3@YAXPEAX@Z @ 0x180021540 (--3@YAXPEAX@Z.c)
 *     ??$copy_to@VCAudioSession@@@?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAVCAudioSession@@@Z @ 0x18003AFEC (--$copy_to@VCAudioSession@@@-$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEBAJP.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004CC08 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005B718 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?GetEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x180062390 (-GetEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z.c)
 *     ??1ResourceHandleInfo@@QEAA@XZ @ 0x18007AC70 (--1ResourceHandleInfo@@QEAA@XZ.c)
 *     ?GetStreamResourceConsumption@CConstraintModel@@QEAAJPEAUIMMDevice@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x18008EB10 (-GetStreamResourceConsumption@CConstraintModel@@QEAAJPEAUIMMDevice@@U_GUID@@W4__MIDL___MIDL_itf_.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     WPP_SF_dd @ 0x1800C33FC (WPP_SF_dd.c)
 *     ??0ResourceHandleInfo@@QEAA@XZ @ 0x1800EA8F4 (--0ResourceHandleInfo@@QEAA@XZ.c)
 *     ??1EndpointInfo@@QEAA@XZ @ 0x1800EAB54 (--1EndpointInfo@@QEAA@XZ.c)
 *     ??4EndpointInfo@@QEAAAEAV0@AEBV0@@Z @ 0x1800EACD0 (--4EndpointInfo@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??4ResourceHandleInfo@@QEAAAEAU0@AEBU0@@Z @ 0x1800EADAC (--4ResourceHandleInfo@@QEAAAEAU0@AEBU0@@Z.c)
 *     ?GetEndpointStatus@CConstraintModelResourceManager@@AEAAXPEBVEndpointInfo@@PEAHPEAK@Z @ 0x1800ED3A8 (-GetEndpointStatus@CConstraintModelResourceManager@@AEAAXPEBVEndpointInfo@@PEAHPEAK@Z.c)
 *     ?GetResourceGroupConsumptionInfo@CConstraintModelResourceManager@@AEAAJW4RmResourceType@@PEAU_ResourceInfo@@KPEAPEAU3@@Z @ 0x1800ED654 (-GetResourceGroupConsumptionInfo@CConstraintModelResourceManager@@AEAAJW4RmResourceType@@PEAU_Re.c)
 *     ?ReacquireResourceHandle@CConstraintModelResourceManager@@AEAAJ_KPEAU_ResourceInfo@@KKPEAHPEA_K@Z @ 0x1800EED5C (-ReacquireResourceHandle@CConstraintModelResourceManager@@AEAAJ_KPEAU_ResourceInfo@@KKPEAHPEA_K@.c)
 *     ?RevokeEndpointResourcesInGroup@CConstraintModelResourceManager@@AEAAJPEAVEndpointInfo@@H@Z @ 0x1800EF364 (-RevokeEndpointResourcesInGroup@CConstraintModelResourceManager@@AEAAJPEAVEndpointInfo@@H@Z.c)
 *     WPP_SF_ddD @ 0x1800F02EC (WPP_SF_ddD.c)
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
  __int64 v16; // rdx
  int v18; // [rsp+20h] [rbp-E0h]
  struct _ResourceInfo *v19; // [rsp+40h] [rbp-C0h] BYREF
  struct IMMDevice *v20; // [rsp+48h] [rbp-B8h] BYREF
  struct CEndpointCharacteristics *v21; // [rsp+50h] [rbp-B0h] BYREF
  struct _ResourceInfo *v22[2]; // [rsp+58h] [rbp-A8h] BYREF
  struct _RTL_CRITICAL_SECTION *v23; // [rsp+68h] [rbp-98h] BYREF
  struct _GUID v24; // [rsp+70h] [rbp-90h] BYREF
  __int128 v25; // [rsp+80h] [rbp-80h] BYREF
  __m128i si128; // [rsp+90h] [rbp-70h]
  __int128 v27; // [rsp+A0h] [rbp-60h]
  __m128i v28; // [rsp+B0h] [rbp-50h]
  __int128 v29; // [rsp+C0h] [rbp-40h]
  __m128i v30; // [rsp+D0h] [rbp-30h]
  int v31; // [rsp+E0h] [rbp-20h]
  __int64 v32; // [rsp+E8h] [rbp-18h]
  __int128 v33; // [rsp+F0h] [rbp-10h]
  _BYTE v34[12]; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int16 v35[128]; // [rsp+10Ch] [rbp+Ch] BYREF
  struct _GUID v36; // [rsp+20Ch] [rbp+10Ch]
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v37; // [rsp+220h] [rbp+120h]
  unsigned int v38; // [rsp+2B8h] [rbp+1B8h]
  __int64 v39; // [rsp+2C0h] [rbp+1C0h] BYREF

  EndpointCharacteristics = 0;
  v6 = 0;
  ResourceHandleInfo::ResourceHandleInfo((ResourceHandleInfo *)v34);
  v7 = -1;
  LODWORD(v20) = -1;
  v25 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v25) = v8;
  v27 = 0LL;
  v28 = si128;
  LOWORD(v27) = v8;
  v29 = 0LL;
  v30 = si128;
  LOWORD(v29) = v8;
  v31 = v8;
  v32 = v8;
  v33 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v23 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)v22,
    (struct _RTL_CRITICAL_SECTION *)this + 2);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v18 = *((_DWORD *)a3 + 118);
    WPP_SF_dd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x18u,
      (__int64)&WPP_a5774a8bafb0327b6b857065801df2a8_Traceguids,
      -1,
      v18);
  }
  v9 = 0LL;
  if ( !*((_DWORD *)a3 + 118) )
  {
    if ( *((_QWORD *)a3 + 58) )
    {
      LODWORD(v19) = 0;
      EndpointInfo::operator=((EndpointInfo *)&v25, (__int64)a3 + 320);
      CConstraintModelResourceManager::GetEndpointStatus(
        this,
        (const struct EndpointInfo *)&v25,
        (int *)&v19,
        (unsigned int *)&v20);
      v7 = (unsigned int)v20;
      if ( (_DWORD)v19 )
      {
        if ( (_DWORD)v20 != *(_DWORD *)(*((_QWORD *)a3 + 58) + 16LL) )
        {
          v6 = 1;
          ResourceHandleInfo::operator=((__int64)v34, (__int64)a3 + 16);
        }
      }
    }
  }
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)v22);
  if ( v6 )
  {
    v21 = 0LL;
    EndpointCharacteristics = GetEndpointCharacteristics(v35, 0, &v21);
    v11 = 0LL;
    LODWORD(v19) = 0;
    v12 = 0LL;
    v22[0] = 0LL;
    if ( EndpointCharacteristics >= 0 )
    {
      v20 = 0LL;
      wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::copy_to<CAudioSession>((__int64 *)v21 + 5, &v20);
      v24 = v36;
      EndpointCharacteristics = CConstraintModel::GetStreamResourceConsumption(
                                  *((CConstraintModel **)this + 7),
                                  v20,
                                  &v24,
                                  v37,
                                  (unsigned int *)&v19,
                                  v22);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v20);
      v11 = (unsigned int)v19;
      v12 = v22[0];
    }
    v19 = 0LL;
    if ( EndpointCharacteristics < 0
      || (EndpointCharacteristics = CConstraintModelResourceManager::GetResourceGroupConsumptionInfo(
                                      v10,
                                      v38,
                                      v12,
                                      v11,
                                      &v19),
          v9 = v19,
          EndpointCharacteristics < 0)
      || (v22[0] = 0LL,
          EndpointCharacteristics = CConstraintModelResourceManager::ReacquireResourceHandle(
                                      this,
                                      *(_QWORD *)(v39 + 24),
                                      v19,
                                      1u,
                                      v7,
                                      0LL,
                                      (unsigned __int64 *)v22),
          EndpointCharacteristics < 0) )
    {
      CConstraintModelResourceManager::RevokeEndpointResourcesInGroup(this, (struct EndpointInfo *)&v25, 1);
    }
    else
    {
      ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
        (__int64)&v24,
        (struct _RTL_CRITICAL_SECTION *)this + 2);
      v13 = v39;
      *(struct _ResourceInfo **)(v39 + 24) = v22[0];
      *(_DWORD *)(v13 + 16) = v7;
      ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)&v24);
    }
    if ( v12 )
      operator delete(v12);
    if ( v9 )
      operator delete(v9);
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v39);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v21);
  }
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)a3 + 58);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_ddD(*((_QWORD *)WPP_GLOBAL_Control + 2), v14, v15, v7, *((_DWORD *)a3 + 118), EndpointCharacteristics);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v23);
  EndpointInfo::~EndpointInfo((EndpointInfo *)&v25, v16);
  ResourceHandleInfo::~ResourceHandleInfo((ResourceHandleInfo *)v34);
  return (unsigned int)EndpointCharacteristics;
}

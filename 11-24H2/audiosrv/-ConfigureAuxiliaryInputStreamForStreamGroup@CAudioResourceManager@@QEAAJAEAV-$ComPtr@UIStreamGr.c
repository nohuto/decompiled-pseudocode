/*
 * XREFs of ?ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@QEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@PEBG_N@Z @ 0x1800B7EBC
 * Callers:
 *     ?ConfigureAuxiliaryInputStream@CSharedStreamGroupProxy@@IEAAJXZ @ 0x1800A276C (-ConfigureAuxiliaryInputStream@CSharedStreamGroupProxy@@IEAAJXZ.c)
 *     _lambda_27af74114ee4e9d8e8865818d8d3377d_::operator() @ 0x1800B6AA0 (_lambda_27af74114ee4e9d8e8865818d8d3377d_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x18000DC00 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180020710 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180029ADC (--1-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004CC08 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GenerateStreamIdentifier@@YA_JXZ @ 0x18006DAD4 (-GenerateStreamIdentifier@@YA_JXZ.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B096C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_J_NPEAUIStreamGroupProxy@@PEAPEAUIBridgeStreamInstanceProxy@@@Z @ 0x1800B809C (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_J_NPEAUIStreamGroupProxy@@PEAPEAU.c)
 *     ?RegisterDisconnectNotificationClient@CAudioSessionManager@@QEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Z @ 0x1800C6790 (-RegisterDisconnectNotificationClient@CAudioSessionManager@@QEAAJAEAV-$ComPtr@UIStreamGroupProxy.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAudioResourceManager::ConfigureAuxiliaryInputStreamForStreamGroup(
        CAudioResourceManager *this,
        struct IStreamGroupProxy **a2,
        const unsigned __int16 *a3,
        bool a4)
{
  CEndpointStoreCache *v8; // rcx
  int EndpointStore; // eax
  unsigned int v10; // ebx
  struct CEndpointStore *v11; // rbx
  __int64 StreamIdentifier; // rbx
  int v13; // eax
  struct IStreamGroupProxy *v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  struct IBridgeStreamInstanceProxy *v18; // [rsp+30h] [rbp-49h] BYREF
  struct CEndpointStore *v19; // [rsp+38h] [rbp-41h] BYREF
  struct _RTL_CRITICAL_SECTION *v20[2]; // [rsp+40h] [rbp-39h] BYREF
  GUID v21; // [rsp+50h] [rbp-29h] BYREF
  GUID pguid; // [rsp+60h] [rbp-19h] BYREF
  GUID v23; // [rsp+70h] [rbp-9h]
  GUID v24; // [rsp+80h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  pguid = GUID_00000000_0000_0000_0000_000000000000;
  CoCreateGuid(&pguid);
  v23 = pguid;
  v24 = pguid;
  EtwEventActivityIdControl(4LL, &v24);
  v19 = 0LL;
  EndpointStore = CEndpointStoreCache::GetEndpointStore(v8, a3, &v19);
  v10 = EndpointStore;
  if ( EndpointStore >= 0 )
  {
    v11 = v19;
    (*(void (__fastcall **)(_QWORD, struct _RTL_CRITICAL_SECTION **, struct CEndpointStore *))(**((_QWORD **)this + 7)
                                                                                             + 80LL))(
      *((_QWORD *)this + 7),
      v20,
      v19);
    CAudioSessionManager::RegisterDisconnectNotificationClient(*((_QWORD *)v11 + 12), a2);
    StreamIdentifier = GenerateStreamIdentifier();
    v18 = 0LL;
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v18);
    v13 = CAudioResourceManager::CreateInternalLoopbackStream(this, a3, StreamIdentifier, a4, *a2, &v18);
    if ( v13 >= 0 )
    {
      v15 = *a2;
      v16 = *(_QWORD *)*a2;
      v21 = pguid;
      v17 = (*(__int64 (__fastcall **)(struct IStreamGroupProxy *, GUID *, __int64, struct IBridgeStreamInstanceProxy *, const unsigned __int16 *))(v16 + 288))(
              v15,
              &v21,
              StreamIdentifier,
              v18,
              a3);
      v10 = v17;
      if ( v17 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x5BB,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)v17);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v18);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(v20);
        goto LABEL_6;
      }
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        1465LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v13);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v18);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(v20);
    v10 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5AD,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)EndpointStore);
  }
LABEL_6:
  wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v19);
  EtwEventActivityIdControl(4LL, &v24);
  return v10;
}

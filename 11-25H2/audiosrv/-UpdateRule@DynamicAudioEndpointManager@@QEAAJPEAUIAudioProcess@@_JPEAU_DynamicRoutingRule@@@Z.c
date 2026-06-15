/*
 * XREFs of ?UpdateRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_JPEAU_DynamicRoutingRule@@@Z @ 0x18011F058
 * Callers:
 *     ?UpdateRule@DynamicAudioEndpointManager@@QEAAJPEAX_JPEAU_DynamicRoutingRule@@@Z @ 0x18011F328 (-UpdateRule@DynamicAudioEndpointManager@@QEAAJPEAX_JPEAU_DynamicRoutingRule@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY05_NK@Z @ 0x1800699CC (-RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY05_NK@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18007E518 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ??0?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCEndpointCharacteristics@@@Z @ 0x1800A1B1C (--0-$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCEndpointCh.c)
 *     ?VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NQEAY05_N@Z @ 0x1800A3160 (-VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NQEAY05_N@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800A8BC4 (memset_0.c)
 *     ??$_Try_emplace@AEB_J$$V@?$map@_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@U?$less@_J@std@@V?$allocator@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@PEAX@std@@_N@1@AEB_J@Z @ 0x18011CC80 (--$_Try_emplace@AEB_J$$V@-$map@_JV-$ComPtr@UIUnknown@@@WRL@Microsoft@@U-$less@_J@std@@V-$allocat.c)
 *     ?BuildRefreshListAndAddRule@DynamicAudioEndpointManager@@AEAAJ_NW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAUIPolicyRule@@QEAY05_N@Z @ 0x18011DB34 (-BuildRefreshListAndAddRule@DynamicAudioEndpointManager@@AEAAJ_NW4__MIDL___MIDL_itf_mmdeviceapip.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall DynamicAudioEndpointManager::UpdateRule(
        RTL_SRWLOCK *this,
        struct IAudioProcess *a2,
        __int64 a3,
        struct _DynamicRoutingRule *a4)
{
  RTL_SRWLOCK *v6; // rbx
  __int64 v7; // rax
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rdx
  int refreshed; // eax
  int v13; // eax
  int v14[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct IAudioProcess *v15; // [rsp+38h] [rbp-C8h] BYREF
  __int64 (__fastcall ***v16)(_QWORD, GUID *, int *); // [rsp+40h] [rbp-C0h] BYREF
  RTL_SRWLOCK *v17; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v18[4]; // [rsp+50h] [rbp-B0h] BYREF
  char v19; // [rsp+70h] [rbp-90h]
  _BYTE v20[24]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v21[288]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v22; // [rsp+1B0h] [rbp+B0h] BYREF
  int v23; // [rsp+1B8h] [rbp+B8h]
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]

  v15 = a2;
  v18[0] = a3;
  v22 = 0LL;
  v23 = 0;
  v6 = this + 2;
  AcquireSRWLockExclusive(this + 2);
  v17 = v6;
  memset_0(v21, 0, 0x114uLL);
  *(_QWORD *)v14 = 0LL;
  v7 = std::map<__int64,Microsoft::WRL::ComPtr<IUnknown>>::_Try_emplace<__int64 const &,>(
         &this[81].Ptr,
         (__int64)v20,
         v18);
  wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>(
    &v16,
    *(_QWORD *)(*(_QWORD *)v7 + 40LL));
  if ( !v16 )
  {
    v8 = -2147024809;
LABEL_14:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v16);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v14);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v17);
    return v8;
  }
  *(_QWORD *)v14 = 0LL;
  v9 = (**v16)(v16, &GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3, v14);
  v8 = v9;
  if ( v9 < 0 )
  {
    v10 = 534LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_14;
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, struct IAudioProcess *, _BYTE *))(**(_QWORD **)v14 + 88LL))(
         *(_QWORD *)v14,
         v15,
         v21);
  v8 = v9;
  if ( v9 < 0 )
  {
    v10 = 536LL;
    goto LABEL_5;
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, struct IAudioProcess *, struct _DynamicRoutingRule *))(**(_QWORD **)v14 + 96LL))(
         *(_QWORD *)v14,
         v15,
         a4);
  v8 = v9;
  if ( v9 < 0 )
  {
    v10 = 538LL;
    goto LABEL_5;
  }
  v18[1] = v14;
  v18[2] = &v15;
  v18[3] = v21;
  v19 = 1;
  refreshed = DynamicAudioEndpointManager::BuildRefreshListAndAddRule(
                (__int64)this,
                0LL,
                *(unsigned int *)a4,
                *((_DWORD *)a4 + 1),
                *(__int64 *)v14,
                (__int64)&v22);
  v8 = refreshed;
  if ( refreshed < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x220,
      (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)(unsigned int)refreshed);
    (*(void (__fastcall **)(_QWORD, struct IAudioProcess *, _BYTE *))(**(_QWORD **)v14 + 96LL))(
      *(_QWORD *)v14,
      v15,
      v21);
    goto LABEL_14;
  }
  if ( !DynamicAudioEndpointManager::VerifyListIntegrityAndRefreshDependencies(
          (DynamicAudioEndpointManager *)this,
          (bool (*const)[6])&v22) )
  {
    v8 = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x223,
      (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)0x80004005LL);
    (*(void (__fastcall **)(_QWORD, struct IAudioProcess *, _BYTE *))(**(_QWORD **)v14 + 96LL))(
      *(_QWORD *)v14,
      v15,
      v21);
    goto LABEL_14;
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v16);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v14);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v17);
  v13 = DynamicAudioEndpointManager::RefreshPublishedDefaults(this, (bool (*const)[6])&v22, 0);
  v8 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x228,
      (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)(unsigned int)v13);
    return v8;
  }
  return 0LL;
}

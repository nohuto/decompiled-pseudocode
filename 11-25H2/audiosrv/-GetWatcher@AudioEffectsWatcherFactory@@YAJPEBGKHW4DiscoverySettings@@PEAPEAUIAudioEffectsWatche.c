/*
 * XREFs of ?GetWatcher@AudioEffectsWatcherFactory@@YAJPEBGKHW4DiscoverySettings@@PEAPEAUIAudioEffectsWatcher@@@Z @ 0x1800B47C8
 * Callers:
 *     s_afxOpenAudioEffectsWatcher @ 0x1800B52E0 (s_afxOpenAudioEffectsWatcher.c)
 *     ?SetUpAudioEffectsWatcher@CAudioStream@@AEAAJXZ @ 0x1800CADF4 (-SetUpAudioEffectsWatcher@CAudioStream@@AEAAJXZ.c)
 * Callees:
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x1800132E0 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002153C (--1-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A54 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180022D84 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?HasTooManyReferences@@YA_NPEAUIUnknown@@@Z @ 0x18005377C (-HasTooManyReferences@@YA_NPEAUIUnknown@@@Z.c)
 *     ?push_front@?$forward_list@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAAXAEBVWeakRef@WRL@Microsoft@@@Z @ 0x18009FA30 (-push_front@-$forward_list@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@s.c)
 *     std::forward_list_Microsoft::WRL::WeakRef_std::allocator_Microsoft::WRL::WeakRef___::remove_if__lambda_18f5db6963bdb451b262a69b713c7ee0___ @ 0x18009FC28 (std--forward_list_Microsoft--WRL--WeakRef_std--allocator_Microsoft--WRL--WeakRef___--remove_if__.c)
 *     ??$AsWeak@UIAudioModeEffectsWatcher@@@WRL@Microsoft@@YAJPEAUIAudioModeEffectsWatcher@@PEAVWeakRef@01@@Z @ 0x1800B4044 (--$AsWeak@UIAudioModeEffectsWatcher@@@WRL@Microsoft@@YAJPEAUIAudioModeEffectsWatcher@@PEAVWeakRe.c)
 *     ??$MakeAndInitialize@VAudioEffectsWatcher@@UIAudioEffectsWatcher@@AEAPEBGAEAKAEAHAEAW4DiscoverySettings@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioEffectsWatcher@@AEAPEBGAEAKAEAHAEAW4DiscoverySettings@@@Z @ 0x1800B414C (--$MakeAndInitialize@VAudioEffectsWatcher@@UIAudioEffectsWatcher@@AEAPEBGAEAKAEAHAEAW4DiscoveryS.c)
 *     _lambda_8ea9f2c5e3a9fcb3919d37e759784c23_::operator() @ 0x1800B4504 (_lambda_8ea9f2c5e3a9fcb3919d37e759784c23_--operator().c)
 *     ?attach@?$com_ptr_t@VDialogSession@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAVDialogSession@@@Z @ 0x1800B51C0 (-attach@-$com_ptr_t@VDialogSession@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAVDialogSession@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall AudioEffectsWatcherFactory::GetWatcher(__int64 *a1, int a2, int a3, int a4, struct IUnknown **a5)
{
  struct IUnknown **v5; // rsi
  int EndpointStore; // eax
  unsigned int v7; // ebx
  struct CEndpointStore *v8; // rbx
  struct _RTL_CRITICAL_SECTION *v9; // rdi
  _QWORD *v10; // rdi
  _QWORD *i; // rbx
  struct IUnknown **v12; // rcx
  int v13; // eax
  __int64 *v14; // rax
  int v15; // eax
  struct IUnknown **v16; // rdx
  struct IUnknown *v17; // rcx
  struct IUnknown *v19; // [rsp+30h] [rbp-48h] BYREF
  __int64 v20; // [rsp+38h] [rbp-40h] BYREF
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+40h] [rbp-38h] BYREF
  struct CEndpointStore *v22; // [rsp+48h] [rbp-30h] BYREF
  unsigned int *v23[5]; // [rsp+50h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+20h]
  __int64 *v25; // [rsp+A0h] [rbp+28h] BYREF
  int v26; // [rsp+A8h] [rbp+30h] BYREF
  int v27; // [rsp+B0h] [rbp+38h] BYREF
  int v28; // [rsp+B8h] [rbp+40h] BYREF

  v28 = a4;
  v27 = a3;
  v26 = a2;
  v25 = a1;
  v5 = a5;
  *a5 = 0LL;
  v22 = 0LL;
  EndpointStore = CEndpointStoreCache::GetEndpointStore((CEndpointStoreCache *)a1, (const unsigned __int16 *)a1, &v22);
  v7 = EndpointStore;
  if ( EndpointStore < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x164,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioeffectsdiscovery.cpp",
      (const char *)(unsigned int)EndpointStore);
    goto LABEL_22;
  }
  v8 = v22;
  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)v22 + 160);
  EnterCriticalSection((LPCRITICAL_SECTION)v22 + 4);
  v21 = v9;
  v10 = (_QWORD *)((char *)v8 + 200);
  std::forward_list_Microsoft::WRL::WeakRef_std::allocator_Microsoft::WRL::WeakRef___::remove_if__lambda_18f5db6963bdb451b262a69b713c7ee0___((__int64 **)v8 + 25);
  v19 = 0LL;
  v23[0] = (unsigned int *)&v26;
  v23[1] = (unsigned int *)&v27;
  v23[2] = (unsigned int *)&v28;
  v23[3] = (unsigned int *)&v19;
  for ( i = (_QWORD *)*((_QWORD *)v8 + 25); i; i = (_QWORD *)*i )
  {
    v12 = (struct IUnknown **)i[1];
    a5 = v12;
    if ( v12 )
      ((void (__fastcall *)(struct IUnknown **))(*v12)[1].lpVtbl)(v12);
    if ( lambda_8ea9f2c5e3a9fcb3919d37e759784c23_::operator()(v23, (__int64 *)&a5) )
      goto LABEL_16;
  }
  a5 = 0LL;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&a5);
  v13 = Microsoft::WRL::Details::MakeAndInitialize<AudioEffectsWatcher,IAudioEffectsWatcher,unsigned short const * &,unsigned long &,int &,enum DiscoverySettings &>(
          &a5,
          (const WCHAR **)&v25,
          &v26,
          &v27,
          &v28);
  v7 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x181,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioeffectsdiscovery.cpp",
      (const char *)(unsigned int)v13);
LABEL_11:
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&a5);
LABEL_12:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v19);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v21);
    goto LABEL_22;
  }
  v20 = 0LL;
  v25 = &v20;
  v14 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v25);
  v15 = Microsoft::WRL::AsWeak<IAudioModeEffectsWatcher>((__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a5, v14);
  v7 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x184,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioeffectsdiscovery.cpp",
      (const char *)(unsigned int)v15);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v20);
    goto LABEL_11;
  }
  std::forward_list<Microsoft::WRL::WeakRef>::push_front(v10, (__int64)&v20);
  v16 = a5;
  a5 = 0LL;
  wil::com_ptr_t<DialogSession,wil::err_returncode_policy>::attach(&v19, v16);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v20);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&a5);
LABEL_16:
  if ( HasTooManyReferences(v19) )
  {
    v7 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18A,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioeffectsdiscovery.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_12;
  }
  v17 = v19;
  if ( v19 )
  {
    *v5 = v19;
    ((void (__fastcall *)(struct IUnknown *))v17->lpVtbl->AddRef)(v17);
  }
  else
  {
    *v5 = 0LL;
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v19);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v21);
  v7 = 0;
LABEL_22:
  wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v22);
  return v7;
}

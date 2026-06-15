/*
 * XREFs of ??1CProcess@@MEAA@XZ @ 0x1800333C4
 * Callers:
 *     ??_ECProcess@@MEAAPEAXI@Z @ 0x180033A60 (--_ECProcess@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180010D60 (--3@YAXPEAX@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180012CA0 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180015D50 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180017420 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?GetValueAt@?$CSimpleMap@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAIV?$CSimpleMapEqualHelper@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAI@ATL@@@ATL@@QEBAAEAPEAIH@Z @ 0x18001955C (-GetValueAt@-$CSimpleMap@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEAIV-$CS.c)
 *     ?CancelDeferredBamExemptionRelease@CProcess@@IEAAXXZ @ 0x18001983C (-CancelDeferredBamExemptionRelease@CProcess@@IEAAXXZ.c)
 *     ??_G?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAPEAXI@Z @ 0x18001AF80 (--_G-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAPEAXI@Z.c)
 *     ?CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z @ 0x18001E3AC (-CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EF7C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$com_ptr_t@VCApplication@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800282FC (--1-$com_ptr_t@VCApplication@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$_Hash@V?$_Umap_traits@PEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAXU?$hash@PEAX@std@@U?$equal_to@PEAX@2@@std@@V?$allocator@U?$pair@QEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x180032F90 (--1-$_Hash@V-$_Umap_traits@PEAXV-$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@V.c)
 *     ?RemoveAll@?$CAtlMap@PEAUIUnknown@@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@@5@@ATL@@QEAAXXZ @ 0x180036598 (-RemoveAll@-$CAtlMap@PEAUIUnknown@@V-$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_poli.c)
 *     ?RemoveAt@?$CSimpleMap@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAIV?$CSimpleMapEqualHelper@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAI@ATL@@@ATL@@QEAAHH@Z @ 0x180036680 (-RemoveAt@-$CSimpleMap@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEAIV-$CSim.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CProcess::~CProcess(CProcess *this)
{
  char *v2; // rsi
  void *v3; // rbx
  void *v4; // rbx
  void *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  int i; // ebx
  void *v10; // rcx
  int j; // ebx
  void *v12; // rcx
  void *v13; // rcx

  *(_QWORD *)this = &CProcess::`vftable'{for `IAudioProcess'};
  *((_QWORD *)this + 1) = &CProcess::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioProcessInternal>'};
  if ( *((int *)this + 68) > 0 )
  {
    v2 = (char *)this + 256;
    do
    {
      v3 = *(void **)ATL::CSimpleMap<std::wstring,unsigned int *,ATL::CSimpleMapEqualHelper<std::wstring,unsigned int *>>::GetValueAt(
                       (__int64)v2,
                       0);
      ATL::CSimpleMap<std::wstring,unsigned int *,ATL::CSimpleMapEqualHelper<std::wstring,unsigned int *>>::RemoveAt(v2);
      operator delete(v3);
    }
    while ( *((int *)this + 68) > 0 );
  }
  while ( *((int *)this + 74) > 0 )
  {
    v4 = *(void **)ATL::CSimpleMap<std::wstring,unsigned int *,ATL::CSimpleMapEqualHelper<std::wstring,unsigned int *>>::GetValueAt(
                     (__int64)this + 280,
                     0);
    ATL::CSimpleMap<std::wstring,unsigned int *,ATL::CSimpleMapEqualHelper<std::wstring,unsigned int *>>::RemoveAt((char *)this + 280);
    operator delete(v4);
  }
  if ( *((_DWORD *)this + 58) )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 30) + 40LL))(*((_QWORD *)this + 30));
  if ( *((_QWORD *)this + 73) )
  {
    CProcess::CancelDeferredBamExemptionRelease(this);
    CloseThreadpoolTimer(*((PTP_TIMER *)this + 73));
  }
  CProcess::CleanupProcessTerminationWatcher(this, 0);
  v5 = (void *)*((_QWORD *)this + 95);
  if ( v5 )
  {
    std::_Deallocate<16,0>(
      v5,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 97) - (_QWORD)v5) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 95) = 0LL;
    *((_QWORD *)this + 96) = 0LL;
    *((_QWORD *)this + 97) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 712));
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 88);
  ATL::CAtlMap<IUnknown *,wil::com_ptr_t<IAudioProcessNotification,wil::err_returncode_policy>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<wil::com_ptr_t<IAudioProcessNotification,wil::err_returncode_policy>>>::RemoveAll((char *)this + 632);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 592));
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)this + 72);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 536));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 368));
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 8);
  if ( *((_QWORD *)this + 35) )
  {
    for ( i = 0; i < *((_DWORD *)this + 74); ++i )
      std::wstring::`scalar deleting destructor'(*((_QWORD *)this + 35) + 32LL * i, v6, v7, v8);
    free(*((void **)this + 35));
    *((_QWORD *)this + 35) = 0LL;
  }
  v10 = (void *)*((_QWORD *)this + 36);
  if ( v10 )
  {
    free(v10);
    *((_QWORD *)this + 36) = 0LL;
  }
  *((_DWORD *)this + 74) = 0;
  if ( *((_QWORD *)this + 32) )
  {
    for ( j = 0; j < *((_DWORD *)this + 68); ++j )
      std::wstring::`scalar deleting destructor'(*((_QWORD *)this + 32) + 32LL * j, v6, v7, v8);
    free(*((void **)this + 32));
    *((_QWORD *)this + 32) = 0LL;
  }
  v12 = (void *)*((_QWORD *)this + 33);
  if ( v12 )
  {
    free(v12);
    *((_QWORD *)this + 33) = 0LL;
  }
  *((_DWORD *)this + 68) = 0;
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 31);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 30);
  wil::com_ptr_t<CApplication,wil::err_returncode_policy>::~com_ptr_t<CApplication,wil::err_returncode_policy>((__int64 *)this + 28);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)this + 25);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)this + 23);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)this + 22);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)this + 21);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)this + 19);
  v13 = (void *)*((_QWORD *)this + 16);
  if ( v13 )
  {
    std::_Deallocate<16,0>(
      v13,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 18) - (_QWORD)v13) & 0xFFFFFFFFFFFFFFFCuLL));
    *((_QWORD *)this + 16) = 0LL;
    *((_QWORD *)this + 17) = 0LL;
    *((_QWORD *)this + 18) = 0LL;
  }
  std::_Hash<std::_Umap_traits<void *,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>,std::_Uhash_compare<void *,std::hash<void *>,std::equal_to<void *>>,std::allocator<std::pair<void * const,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>>,0>>::~_Hash<std::_Umap_traits<void *,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>,std::_Uhash_compare<void *,std::hash<void *>,std::equal_to<void *>>,std::allocator<std::pair<void * const,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>>,0>>((__int64)this + 64);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  *((_DWORD *)this + 5) = -1073741823;
}

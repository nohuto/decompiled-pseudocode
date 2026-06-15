/*
 * XREFs of ?Shutdown@CExclusiveModeListener@@AEAAXXZ @ 0x18014D03C
 * Callers:
 *     ??1CExclusiveModeListener@@UEAA@XZ @ 0x18014BBE4 (--1CExclusiveModeListener@@UEAA@XZ.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1800020BC (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18006310C (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KV-$function.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x180063DE4 (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ??0?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCEndpointCharacteristics@@@Z @ 0x18009E07C (--0-$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCEndpointCh.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B096C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x18014D818 (-clear@-$_Tree@V-$_Tmap_traits@U_GUID@@UHmdInfo@@U-$less@U_GUID@@@std@@V-$allocator@U-$pair@$$CB.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CExclusiveModeListener::Shutdown(CExclusiveModeListener *this)
{
  wil::details **v2; // rcx
  __int64 v3; // rcx
  int v4; // eax
  int v5; // eax
  __int64 v6; // rbx
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rdx
  _DWORD *v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  __int64 (__fastcall ***v13)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp+10h] BYREF
  __int64 v14; // [rsp+50h] [rbp+18h] BYREF

  *((_BYTE *)this + 385) = 0;
  v2 = (wil::details **)((char *)this + 360);
  if ( *v2 )
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      v2,
      0LL);
  if ( *((_QWORD *)this + 46) )
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      (wil::details **)this + 46,
      0LL);
  v3 = *((_QWORD *)this + 9);
  if ( v3 )
  {
    if ( *((_QWORD *)this + 15) )
    {
      v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 64LL))(v3);
      if ( v4 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          118LL,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\exclusivemodelistener.cpp",
          (const char *)(unsigned int)v4);
      *((_QWORD *)this + 15) = 0LL;
    }
    if ( *((_QWORD *)this + 16) )
    {
      v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 80LL))(*((_QWORD *)this + 9));
      if ( v5 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          124LL,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\exclusivemodelistener.cpp",
          (const char *)(unsigned int)v5);
      *((_QWORD *)this + 16) = 0LL;
    }
    v6 = **((_QWORD **)this + 20);
    v14 = v6;
    while ( !*(_BYTE *)(v6 + 25) )
    {
      v7 = *(_QWORD *)(v6 + 48);
      if ( v7 && *(_QWORD *)(v6 + 56) )
      {
        wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>(
          &v13,
          v7);
        v12 = 0LL;
        v8 = (**v13)(v13, &GUID_2396ae05_f3f5_49e9_954b_d178b5677fd7, &v12);
        if ( v8 >= 0 )
        {
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 104LL))(v12, *(_QWORD *)(v6 + 56));
          *(_QWORD *)(v6 + 56) = 0LL;
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            133LL,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\exclusivemodelistener.cpp",
            (const char *)(unsigned int)v8);
        }
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v12);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v13);
      }
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::function<void (bool)>>>>,std::_Iterator_base0>::operator++(&v14);
      v6 = v14;
    }
    std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::clear((char *)this + 160);
  }
  v9 = *((unsigned int *)this + 94);
  if ( (_DWORD)v9 )
  {
    (*(void (__fastcall **)(struct IAudioPolicyManager *, __int64, unsigned __int64))(*(_QWORD *)g_PolicyManager + 344LL))(
      g_PolicyManager,
      v9,
      ((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
    *((_DWORD *)this + 94) = 0;
  }
  v10 = (_DWORD *)*((_QWORD *)this + 44);
  if ( *v10 > 4u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (int)v10,
      (int)&unk_1801B292B);
}

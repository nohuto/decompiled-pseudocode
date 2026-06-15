/*
 * XREFs of ?DisconnectSessionsForTsSession@CAudioSessionManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800C6524
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_af569ec3404ee5e24e94d87111621ae3__long_wil::com_ptr_t_CEndpointStore_wil::err_returncode_policy__&_::_Do_call @ 0x1800C7E50 (std--_Func_impl_no_alloc__lambda_af569ec3404ee5e24e94d87111621ae3__long_wil--com_pt_ea_1800C7E50.c)
 *     std::_Func_impl_no_alloc__lambda_bf16b35437704c38a733151e8b0dfb35__long_wil::com_ptr_t_CEndpointStore_wil::err_returncode_policy__&_::_Do_call @ 0x1800C7E80 (std--_Func_impl_no_alloc__lambda_bf16b35437704c38a733151e8b0dfb35__long_wil--com_pt_ea_1800C7E80.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?OnSessionStateChanged@CAudioSessionManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x18000BDD8 (-OnSessionStateChanged@CAudioSessionManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA@XZ @ 0x180016DB4 (--1-$_Hash@V-$_Umap_traits@VCAudioSessionInstanceId@@V-$com_ptr_t@VCAudioSession@@Uerr_returncod.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180020710 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??$?0V?$allocator@U?$_List_node@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@IEAA@AEBV01@AEBV?$allocator@U?$_List_node@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@@Z @ 0x18002A74C (--$-0V-$allocator@U-$_List_node@U-$pair@$$CBVCAudioSessionInstanceId@@V-$com_ptr_t@VCAudioSessio.c)
 *     WPP_SF_dd @ 0x1800C33FC (WPP_SF_dd.c)
 *     ?FindAudioSession@CAudioSessionManager@@IEAAJKPEBU_GUID@@PEAPEAVCAudioSession@@@Z @ 0x1800C66CC (-FindAudioSession@CAudioSessionManager@@IEAAJKPEBU_GUID@@PEAPEAVCAudioSession@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAudioSessionManager::DisconnectSessionsForTsSession(
        CAudioSessionManager *this,
        unsigned int a2,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a3)
{
  __int64 v6; // r8
  _QWORD *v7; // rdi
  _QWORD *i; // rbx
  __int64 v9; // rcx
  const struct _GUID *v10; // r8
  int AudioSession; // eax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v15; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v16; // [rsp+38h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  struct CAudioSession *v18; // [rsp+90h] [rbp+8h] BYREF

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_dd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x23u,
      (__int64)&WPP_a93cb6bcfd8139528881ae8cee6da3d9_Traceguids,
      a2,
      a3);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
  v18 = (CAudioSessionManager *)((char *)this + 8);
  std::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>(
    (__int64)&v15,
    (__int64)this + 48);
  v7 = v16;
  for ( i = (_QWORD *)*v16; i != v7; i = (_QWORD *)*i )
  {
    v9 = i[12];
    if ( *(_DWORD *)(v9 + 644) != a2 )
      continue;
    if ( a3 == eAll )
    {
LABEL_14:
      LOBYTE(v6) = 1;
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)i[12] + 72LL))(i[12], 0LL, v6);
      continue;
    }
    if ( a3 == eCapture )
    {
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)(v9 + 8) + 56LL))(v9 + 8) )
        goto LABEL_14;
    }
    else if ( a3 == eRender && !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)(v9 + 8) + 56LL))(v9 + 8) )
    {
      goto LABEL_14;
    }
  }
  std::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>::~_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>(&v15);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)&v18);
  v18 = 0LL;
  AudioSession = CAudioSessionManager::FindAudioSession(this, a2, v10, &v18);
  v12 = AudioSession;
  if ( AudioSession < 0 )
  {
    v13 = 1268LL;
    goto LABEL_20;
  }
  AudioSession = CAudioSessionManager::OnSessionStateChanged(
                   this,
                   (struct IAudioSessionInfo *)(((unsigned __int64)v18 + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)v18 >> 64)),
                   AudioSessionStateInactive,
                   2u);
  v12 = AudioSession;
  if ( AudioSession >= 0 )
  {
    v12 = 0;
  }
  else
  {
    v13 = 1271LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)(unsigned int)AudioSession);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v18);
  return v12;
}

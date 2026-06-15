/*
 * XREFs of ?RevokeSessionsWithoutDataFlowAccess@CAudioSessionManager@@QEAAJPEBG0W4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800C7464
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_10a1a3556bb16ca1ed32eceff650c844__long_wil::com_ptr_t_CEndpointStore_wil::err_returncode_policy__&_::_Do_call @ 0x1800C87A0 (std--_Func_impl_no_alloc__lambda_10a1a3556bb16ca1ed32eceff650c844__long_wil--com_pt_ea_1800C87A0.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??$?0V?$allocator@U?$_List_node@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@IEAA@AEBV01@AEBV?$allocator@U?$_List_node@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@@Z @ 0x1800221CC (--$-0V-$allocator@U-$_List_node@U-$pair@$$CBVCAudioSessionInstanceId@@V-$com_ptr_t@VCAudioSessio.c)
 *     ?_Tidy@?$vector@V?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x180025F28 (-_Tidy@-$vector@V-$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$.c)
 *     ??1?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA@XZ @ 0x1800274B0 (--1-$_Hash@V-$_Umap_traits@VCAudioSessionInstanceId@@V-$com_ptr_t@VCAudioSession@@Uerr_returncod.c)
 *     ?GetOwningProcesses@CAudioSession@@QEAAJAEAV?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800A3F94 (-GetOwningProcesses@CAudioSession@@QEAAJAEAV-$vector@V-$com_ptr_t@UIAudioProcess@@Uerr_returncod.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B279C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MatchesParameters@CAudioSession@@QEAAH_NPEBG1@Z @ 0x1800C38E4 (-MatchesParameters@CAudioSession@@QEAAH_NPEBG1@Z.c)
 *     ?CapabilityAccessCheck@CAudioSessionManager@@CAJPEBGKPEA_N@Z @ 0x1800C6C30 (-CapabilityAccessCheck@CAudioSessionManager@@CAJPEBGKPEA_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioSessionManager::RevokeSessionsWithoutDataFlowAccess(
        __int64 a1,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        __int64 a4,
        bool a5)
{
  struct _RTL_CRITICAL_SECTION *v8; // rbx
  __int64 v9; // rdx
  _QWORD *v10; // rdi
  _QWORD *i; // rbx
  int OwningProcesses; // eax
  wil::details::in1diag3 *v13; // rcx
  __int64 v14; // rdx
  _QWORD *j; // r14
  _QWORD *v16; // r15
  unsigned int v17; // esi
  const WCHAR *v18; // rax
  int v19; // eax
  __int64 v20; // r8
  __int128 v22; // [rsp+20h] [rbp-60h] BYREF
  __int64 v23; // [rsp+30h] [rbp-50h]
  _BYTE v24[8]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD *v25; // [rsp+48h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  struct _RTL_CRITICAL_SECTION *v27; // [rsp+B0h] [rbp+30h] BYREF

  v8 = (struct _RTL_CRITICAL_SECTION *)(a1 + 8);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 8));
  v27 = v8;
  std::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>(
    (__int64)v24,
    a1 + 48);
  v10 = v25;
  for ( i = (_QWORD *)*v25; i != v10; i = (_QWORD *)*i )
  {
    if ( (unsigned int)CAudioSession::MatchesParameters((CAudioSession *)i[12], v9, a2, a3) )
    {
      v22 = 0LL;
      v23 = 0LL;
      OwningProcesses = CAudioSession::GetOwningProcesses(i[12], (__int64 *)&v22);
      v13 = retaddr;
      if ( OwningProcesses >= 0 )
      {
        v16 = (_QWORD *)*((_QWORD *)&v22 + 1);
        for ( j = (_QWORD *)v22; j != v16; ++j )
        {
          a5 = 0;
          v17 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*j + 40LL))(*j);
          v18 = (const WCHAR *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*j + 56LL))(*j);
          v19 = CAudioSessionManager::CapabilityAccessCheck(v18, (const unsigned __int16 *)v17, &a5);
          if ( v19 < 0 )
          {
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              1183LL,
              (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
              (const char *)(unsigned int)v19);
LABEL_12:
            LOBYTE(v20) = 1;
            OwningProcesses = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)i[12] + 72LL))(
                                i[12],
                                0LL,
                                v20);
            v13 = retaddr;
            if ( OwningProcesses >= 0 )
              break;
            v14 = 1187LL;
            goto LABEL_14;
          }
          if ( !a5 )
            goto LABEL_12;
        }
      }
      else
      {
        v14 = 1174LL;
LABEL_14:
        wil::details::in1diag3::_Log_Hr(
          v13,
          v14,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
          (const char *)(unsigned int)OwningProcesses);
      }
      std::vector<wil::com_ptr_t<IAPOWrapperSrv,wil::err_returncode_policy>>::_Tidy((__int64)&v22);
    }
  }
  std::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>::~_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>((__int64)v24);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v27);
  return 0LL;
}

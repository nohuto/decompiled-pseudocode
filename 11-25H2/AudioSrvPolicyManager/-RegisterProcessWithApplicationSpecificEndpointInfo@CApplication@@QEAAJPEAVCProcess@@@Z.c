/*
 * XREFs of ?RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x1800118C0
 * Callers:
 *     ?LinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x1800356A8 (-LinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x1800065B0 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007BD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000D140 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??$_Try_emplace@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180011B00 (--$_Try_emplace@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$$V@-$map@V-$basic.c)
 *     ?GetApplicationName@ApplicationSpecificEndpointInfo@@SAPEBGPEAUIAudioProcess@@@Z @ 0x180011CD0 (-GetApplicationName@ApplicationSpecificEndpointInfo@@SAPEBGPEAUIAudioProcess@@@Z.c)
 *     ?_Large_mode_engaged@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBA_NXZ @ 0x18001B218 (-_Large_mode_engaged@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBA_NXZ.c)
 *     ?_Deallocate_for_capacity@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CAXAEAV?$allocator@G@2@QEAG_K@Z @ 0x18001B228 (-_Deallocate_for_capacity@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CAXAEAV-$.c)
 *     ??1?$MakeAllocator@VCAudioSessionPropertyStore@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001F970 (--1-$MakeAllocator@VCAudioSessionPropertyStore@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180020100 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002060C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0ApplicationSpecificEndpointInfo@@QEAA@XZ @ 0x180032DC4 (--0ApplicationSpecificEndpointInfo@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@ApplicationSpecificEndpointInfo@@QEAAJPEAUIAudioProcess@@@Z @ 0x180048810 (-RuntimeClassInitialize@ApplicationSpecificEndpointInfo@@QEAAJPEAUIAudioProcess@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8 #try_helpers=1
__int64 __fastcall CApplication::RegisterProcessWithApplicationSpecificEndpointInfo(
        CApplication *this,
        struct CProcess *a2)
{
  const unsigned __int16 *ApplicationName; // rbx
  struct _RTL_CRITICAL_SECTION *v5; // r14
  unsigned __int64 v6; // r8
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  struct _RTL_CRITICAL_SECTION *v12; // rax
  int v13; // edi
  struct _RTL_CRITICAL_SECTION *v14; // rbx
  int v16; // eax
  unsigned int v17; // ebx
  int v18[2]; // [rsp+20h] [rbp-88h] BYREF
  struct _RTL_CRITICAL_SECTION *v19[3]; // [rsp+28h] [rbp-80h] BYREF
  _BYTE v20[16]; // [rsp+40h] [rbp-68h] BYREF
  __int128 v21; // [rsp+50h] [rbp-58h] BYREF
  __m128i si128; // [rsp+60h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  ApplicationName = ApplicationSpecificEndpointInfo::GetApplicationName(a2);
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v19[0] = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  v21 = 0LL;
  si128 = 0LL;
  v6 = -1LL;
  do
    ++v6;
  while ( ApplicationName[v6] );
  std::wstring::_Construct<1,unsigned short const *>((char **)&v21, ApplicationName, v6);
  v7 = *(_QWORD *)std::map<std::wstring,wil::com_ptr_t<IApplicationSpecificEndpointInfo,wil::err_returncode_policy>>::_Try_emplace<std::wstring,>(
                    (char *)this + 704,
                    v20,
                    &v21);
  if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(&v21, v8, v9, v10) )
    std::wstring::_Deallocate_for_capacity(v11, v21, si128.m128i_i64[1]);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v21) = 0;
  if ( *(_QWORD *)(v7 + 64) )
    goto LABEL_16;
  *(_QWORD *)(v7 + 64) = 0LL;
  v12 = (struct _RTL_CRITICAL_SECTION *)operator new(0xC0uLL, (const struct std::nothrow_t *)&std::nothrow);
  *(_QWORD *)v18 = v12;
  v19[2] = v12;
  if ( !v12 )
  {
    v13 = -2147024882;
    goto LABEL_13;
  }
  v14 = (struct _RTL_CRITICAL_SECTION *)ApplicationSpecificEndpointInfo::ApplicationSpecificEndpointInfo((ApplicationSpecificEndpointInfo *)v12);
  v19[1] = v14;
  *(_QWORD *)v18 = 0LL;
  v13 = ApplicationSpecificEndpointInfo::RuntimeClassInitialize((ApplicationSpecificEndpointInfo *)v14, a2);
  if ( v13 < 0 )
  {
    if ( v14 )
      ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *))v14->DebugInfo->ProcessLocksList.Flink)(v14);
    Microsoft::WRL::Details::MakeAllocator<CAudioSessionPropertyStore>::~MakeAllocator<CAudioSessionPropertyStore>(v18);
    goto LABEL_13;
  }
  v13 = ((__int64 (__fastcall *)(struct _RTL_CRITICAL_SECTION *, GUID *, __int64))v14->DebugInfo->Type)(
          v14,
          &GUID_21cc96a8_b1ca_4369_9b14_88ae80a3abd0,
          v7 + 64);
  ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *))v14->DebugInfo->ProcessLocksList.Flink)(v14);
  Microsoft::WRL::Details::MakeAllocator<CAudioSessionPropertyStore>::~MakeAllocator<CAudioSessionPropertyStore>(v18);
  if ( v13 >= 0 )
  {
LABEL_16:
    v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v7 + 64) + 64LL))(
            *(_QWORD *)(v7 + 64),
            *((unsigned int *)a2 + 40));
    v17 = v16;
    if ( v16 >= 0 )
    {
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(v19);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9BA,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
        (const char *)(unsigned int)v16);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(v19);
      return v17;
    }
  }
LABEL_13:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x9B7,
    (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
    (const char *)(unsigned int)v13);
  if ( v5 )
    LeaveCriticalSection(v5);
  return (unsigned int)v13;
}

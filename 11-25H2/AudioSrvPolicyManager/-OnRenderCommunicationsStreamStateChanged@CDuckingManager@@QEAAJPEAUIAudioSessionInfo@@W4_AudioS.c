/*
 * XREFs of ?OnRenderCommunicationsStreamStateChanged@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x180030A30
 * Callers:
 *     ?OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180002360 (-OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180004B00 (-OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180006B20 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000D140 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180015310 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001765C (--1-$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UIAudioStreamInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIAudioStreamInfo@@@Z @ 0x180018990 (--0-$com_ptr_t@UIAudioStreamInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIAudioStreamInfo@@@.c)
 *     ??$try_com_query_to@UIDuckingController@@AEAPEAUIAudioStreamInfo@@@wil@@YA_NAEAPEAUIAudioStreamInfo@@PEAPEAUIDuckingController@@@Z @ 0x18001A250 (--$try_com_query_to@UIDuckingController@@AEAPEAUIAudioStreamInfo@@@wil@@YA_NAEAPEAUIAudioStreamI.c)
 *     __security_check_cookie @ 0x180020100 (__security_check_cookie.c)
 *     _lambda_aa732a8a991b7eb0f1632fe44cffa677_::__lambda_aa732a8a991b7eb0f1632fe44cffa677_ @ 0x18002EBC4 (_lambda_aa732a8a991b7eb0f1632fe44cffa677_--__lambda_aa732a8a991b7eb0f1632fe44cffa677_.c)
 *     ??A?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@2@@std@@QEAAAEAUCRenderEndpointDuckingManagerContext@@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18002EE80 (--A-$unordered_map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UCRenderEndpoin.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180030D28 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7 #try_helpers=1
__int64 __fastcall CDuckingManager::OnRenderCommunicationsStreamStateChanged(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5)
{
  struct CDuckingManager *v6; // rdi
  _WORD *v8; // r14
  _DWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  _WORD *v17; // r14
  _DWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  struct _RTL_CRITICAL_SECTION *v26; // [rsp+20h] [rbp-88h] BYREF
  __int64 v27; // [rsp+28h] [rbp-80h] BYREF
  __int64 (__fastcall **v28)(); // [rsp+30h] [rbp-78h] BYREF
  __int64 v29; // [rsp+38h] [rbp-70h]
  struct CDuckingManager *v30; // [rsp+40h] [rbp-68h]
  __int64 v31; // [rsp+48h] [rbp-60h]
  __int64 (__fastcall ***v32)(); // [rsp+68h] [rbp-40h]
  __int64 v33; // [rsp+70h] [rbp-38h] BYREF
  struct CDuckingManager *v34; // [rsp+78h] [rbp-30h]
  _QWORD v35[2]; // [rsp+80h] [rbp-28h] BYREF

  v27 = a5;
  v6 = g_DuckingManager;
  if ( *((_BYTE *)g_DuckingManager + 408) )
    return 0LL;
  if ( a4 != 1 )
  {
    if ( a4 )
      return 0LL;
    v17 = (_WORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL))(a2);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v6 + 136));
    v26 = (struct _RTL_CRITICAL_SECTION *)((char *)v6 + 136);
    std::wstring::wstring((__int64)&v33, v17);
    v18 = (_DWORD *)std::unordered_map<std::wstring,CRenderEndpointDuckingManagerContext>::operator[](
                      (float *)v6 + 44,
                      (__int64)&v33);
    --*v18;
    std::wstring::~wstring((__int64)&v33, v19, v20, v21);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v26);
    if ( *((_DWORD *)v6 + 92) == 3 )
      return 0LL;
    v26 = 0LL;
    wil::try_com_query_to<IDuckingController,IAudioStreamInfo * &>(&v27, (__int64)&v26);
    v22 = wil::com_ptr_t<IAudioStreamInfo,wil::err_returncode_policy>::com_ptr_t<IAudioStreamInfo,wil::err_returncode_policy>(
            &v27,
            a2);
    v23 = *v22;
    *v22 = 0LL;
    v33 = v23;
    v34 = v6;
    wil::com_ptr_t<IAudioStreamInfo,wil::err_returncode_policy>::com_ptr_t<IAudioStreamInfo,wil::err_returncode_policy>(
      v35,
      (__int64)v26);
    v28 = off_180053968;
    v24 = v33;
    v33 = 0LL;
    v29 = v24;
    v30 = v34;
    v25 = v35[0];
    v35[0] = 0LL;
    v31 = v25;
    v32 = &v28;
    CSerialWorkQueue::QueueWorkItem((struct CDuckingManager *)((char *)v6 + 240));
    lambda_aa732a8a991b7eb0f1632fe44cffa677_::__lambda_aa732a8a991b7eb0f1632fe44cffa677_(&v33);
    wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>(&v27);
    goto LABEL_9;
  }
  v8 = (_WORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL))(a2);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v6 + 136));
  v26 = (struct _RTL_CRITICAL_SECTION *)((char *)v6 + 136);
  std::wstring::wstring((__int64)&v33, v8);
  v9 = (_DWORD *)std::unordered_map<std::wstring,CRenderEndpointDuckingManagerContext>::operator[](
                   (float *)v6 + 44,
                   (__int64)&v33);
  ++*v9;
  std::wstring::~wstring((__int64)&v33, v10, v11, v12);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v26);
  if ( *((_DWORD *)v6 + 92) != 3 )
  {
    v26 = 0LL;
    wil::try_com_query_to<IDuckingController,IAudioStreamInfo * &>(&v27, (__int64)&v26);
    v13 = wil::com_ptr_t<IAudioStreamInfo,wil::err_returncode_policy>::com_ptr_t<IAudioStreamInfo,wil::err_returncode_policy>(
            &v27,
            a2);
    v14 = *v13;
    *v13 = 0LL;
    v33 = v14;
    v34 = v6;
    wil::com_ptr_t<IAudioStreamInfo,wil::err_returncode_policy>::com_ptr_t<IAudioStreamInfo,wil::err_returncode_policy>(
      v35,
      (__int64)v26);
    v28 = off_180053998;
    v15 = v33;
    v33 = 0LL;
    v29 = v15;
    v30 = v34;
    v16 = v35[0];
    v35[0] = 0LL;
    v31 = v16;
    v32 = &v28;
    CSerialWorkQueue::QueueWorkItem((struct CDuckingManager *)((char *)v6 + 240));
    lambda_aa732a8a991b7eb0f1632fe44cffa677_::__lambda_aa732a8a991b7eb0f1632fe44cffa677_(&v33);
    wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>(&v27);
LABEL_9:
    wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>((__int64 *)&v26);
  }
  return 0LL;
}

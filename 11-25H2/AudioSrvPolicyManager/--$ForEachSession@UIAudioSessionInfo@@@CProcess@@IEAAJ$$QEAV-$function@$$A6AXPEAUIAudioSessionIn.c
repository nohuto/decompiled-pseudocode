/*
 * XREFs of ??$ForEachSession@UIAudioSessionInfo@@@CProcess@@IEAAJ$$QEAV?$function@$$A6AXPEAUIAudioSessionInfo@@PEA_N@Z@std@@@Z @ 0x18003201C
 * Callers:
 *     ?AsyncProcessTerminatedNotifications@CProcess@@IEAAXXZ @ 0x180033E44 (-AsyncProcessTerminatedNotifications@CProcess@@IEAAXXZ.c)
 *     ?FindReusableGroupingParam@CProcess@@UEAA?AU_GUID@@PEBU2@@Z @ 0x180034810 (-FindReusableGroupingParam@CProcess@@UEAA-AU_GUID@@PEBU2@@Z.c)
 *     ?ResetReusedSessionGroupingParams@CProcess@@IEAAXXZ @ 0x180036890 (-ResetReusedSessionGroupingParams@CProcess@@IEAAXXZ.c)
 * Callees:
 *     ?query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x180011F20 (-query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180015D50 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001765C (--1-$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18001E94C (--0-$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800327C4 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x180032928 (--$_Emplace_reallocate@AEBV-$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@@-$.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CProcess::ForEachSession<IAudioSessionInfo>(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  __int64 *v5; // r14
  __int64 ***v6; // rdi
  __int64 **v7; // rbx
  __int64 *v8; // rsi
  __int64 v9; // rcx
  void *v10; // rbx
  __int64 result; // rax
  void *v12; // [rsp+20h] [rbp-48h] BYREF
  __int128 v13; // [rsp+28h] [rbp-40h] BYREF
  __int64 *v14; // [rsp+38h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int v16; // [rsp+70h] [rbp+8h] BYREF
  void *v17; // [rsp+80h] [rbp+18h] BYREF
  int *v18; // [rsp+88h] [rbp+20h] BYREF

  v13 = 0LL;
  v5 = 0LL;
  v14 = 0LL;
  v6 = *(__int64 ****)(a1 + 72);
  v7 = *v6;
  v8 = (__int64 *)_mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
  try
  {
    while ( v7 != (__int64 **)v6 )
    {
      v17 = 0LL;
      if ( (int)wil::details::weak_query_policy::query(
                  (struct IWeakReference *)v7[3],
                  &GUID_01de3f73_63e1_4021_a563_2efba2c7fb9b,
                  &v17) >= 0 )
      {
        if ( v8 == v5 )
        {
          std::vector<wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy> const &>(
            &v13,
            v8,
            &v17);
          v5 = v14;
          v8 = (__int64 *)*((_QWORD *)&v13 + 1);
        }
        else
        {
          wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>(
            v8++,
            (__int64 *)&v17);
          *((_QWORD *)&v13 + 1) = v8;
        }
        LOBYTE(v16) = 0;
        v18 = &v16;
        v12 = v17;
        v9 = *(_QWORD *)(a2 + 56);
        if ( !v9 )
          std::_Xbad_function_call();
        (*(void (__fastcall **)(__int64, void **, int **))(*(_QWORD *)v9 + 16LL))(v9, &v12, &v18);
        if ( (_BYTE)v16 )
        {
          wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>((__int64 *)&v17);
          break;
        }
      }
      wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>((__int64 *)&v17);
      v7 = (__int64 **)*v7;
    }
    v10 = (void *)v13;
    if ( (_QWORD)v13 )
    {
      std::_Destroy_range<std::allocator<wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>>>(v13, v8);
      std::_Deallocate<16,0>(v10, (const struct std::nothrow_t *)(8 * (((char *)v5 - (_BYTE *)v10) >> 3)));
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x36B,
                           (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.h",
                           a4);
  }
  return result;
}

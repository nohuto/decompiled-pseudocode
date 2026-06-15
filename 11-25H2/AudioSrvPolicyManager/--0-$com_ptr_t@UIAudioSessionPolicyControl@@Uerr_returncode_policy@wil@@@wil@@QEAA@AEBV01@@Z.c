/*
 * XREFs of ??0?$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18001E94C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_1e03ffd0b3816784b19a9acf2aab20e8__void_::_Copy @ 0x1800313B0 (std--_Func_impl_no_alloc__lambda_1e03ffd0b3816784b19a9acf2aab20e8__void_--_Copy.c)
 *     std::_Func_impl_no_alloc__lambda_aa732a8a991b7eb0f1632fe44cffa677__void_::_Copy @ 0x180031470 (std--_Func_impl_no_alloc__lambda_aa732a8a991b7eb0f1632fe44cffa677__void_--_Copy.c)
 *     ??$ForEachSession@UIAudioSessionInfo@@@CProcess@@IEAAJ$$QEAV?$function@$$A6AXPEAUIAudioSessionInfo@@PEA_N@Z@std@@@Z @ 0x18003201C (--$ForEachSession@UIAudioSessionInfo@@@CProcess@@IEAAJ$$QEAV-$function@$$A6AXPEAUIAudioSessionIn.c)
 *     ??$ForEachSession@UIAudioSessionPolicyControl@@@CProcess@@IEAAJ$$QEAV?$function@$$A6AXPEAUIAudioSessionPolicyControl@@PEA_N@Z@std@@@Z @ 0x180032180 (--$ForEachSession@UIAudioSessionPolicyControl@@@CProcess@@IEAAJ$$QEAV-$function@$$A6AXPEAUIAudio.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x180032928 (--$_Emplace_reallocate@AEBV-$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@@-$.c)
 *     ?QueueStreamStartedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x18003CFBC (-QueueStreamStartedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?QueueStreamStoppedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x18003D10C (-QueueStreamStoppedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_318849112bdacfedbf03f674f146fe6c__void_::_Copy @ 0x18003D260 (std--_Func_impl_no_alloc__lambda_318849112bdacfedbf03f674f146fe6c__void_--_Copy.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v3; // rcx

  v3 = *a2;
  *a1 = *a2;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a1;
}

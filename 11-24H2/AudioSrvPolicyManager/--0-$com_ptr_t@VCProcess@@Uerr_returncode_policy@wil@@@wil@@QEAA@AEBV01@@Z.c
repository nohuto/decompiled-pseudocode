/*
 * XREFs of ??0?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x180018A8C
 * Callers:
 *     ?NotifyDialogSessionStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@_N@Z @ 0x180029220 (-NotifyDialogSessionStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@_N@Z.c)
 *     ?NotifyVoipCallStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@_N@Z @ 0x1800296A0 (-NotifyVoipCallStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@_N@Z.c)
 *     std::_Func_impl_no_alloc__lambda_7be77f52425797de9629a1559daf9291__void_::_Copy @ 0x18002AF10 (std--_Func_impl_no_alloc__lambda_7be77f52425797de9629a1559daf9291__void_--_Copy.c)
 *     std::_Func_impl_no_alloc__lambda_7d69d41627b1d936e688f09992cbd28e__void_::_Copy @ 0x18002AF50 (std--_Func_impl_no_alloc__lambda_7d69d41627b1d936e688f09992cbd28e__void_--_Copy.c)
 *     ?InactivityTimerCallback@CProcess@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800328D0 (-InactivityTimerCallback@CProcess@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?ProcessTerminationWatcherCallback@CProcess@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x1800332D0 (-ProcessTerminationWatcherCallback@CProcess@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z.c)
 *     std::_Func_impl_no_alloc__lambda_1550c94524242620b0bb27e2e38687d1__void_::_Copy @ 0x180034F20 (std--_Func_impl_no_alloc__lambda_1550c94524242620b0bb27e2e38687d1__void_--_Copy.c)
 *     std::_Func_impl_no_alloc__lambda_a57db9963e5a44e7e98dd749c7c1930c__void_::_Copy @ 0x180034FB0 (std--_Func_impl_no_alloc__lambda_a57db9963e5a44e7e98dd749c7c1930c__void_--_Copy.c)
 *     std::_Func_impl_no_alloc__lambda_b373bd1a9b8e3a57f3542cd9188d3fed__void_::_Copy @ 0x180034FE0 (std--_Func_impl_no_alloc__lambda_b373bd1a9b8e3a57f3542cd9188d3fed__void_--_Copy.c)
 *     ?QueueStreamStartedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x18003A79C (-QueueStreamStartedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?QueueStreamStoppedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x18003A8EC (-QueueStreamStoppedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_318849112bdacfedbf03f674f146fe6c__void_::_Copy @ 0x18003AA40 (std--_Func_impl_no_alloc__lambda_318849112bdacfedbf03f674f146fe6c__void_--_Copy.c)
 *     std::_Func_impl_no_alloc__lambda_450436a14271dedc9936bb949bbf07b2__void_::_Copy @ 0x18003AC90 (std--_Func_impl_no_alloc__lambda_450436a14271dedc9936bb949bbf07b2__void_--_Copy.c)
 *     std::_Func_impl_no_alloc__lambda_574d5d0e55cfdb3d7e70cee17ad133ad__void_::_Copy @ 0x18003AD30 (std--_Func_impl_no_alloc__lambda_574d5d0e55cfdb3d7e70cee17ad133ad__void_--_Copy.c)
 *     std::_Func_impl_no_alloc__lambda_5d23040e3cc104b729db1f2fc579e0ae__void_::_Copy @ 0x18003AD70 (std--_Func_impl_no_alloc__lambda_5d23040e3cc104b729db1f2fc579e0ae__void_--_Copy.c)
 *     std::_Func_impl_no_alloc__lambda_862e17b5ba5aad8032b797f753f777db__void_::_Copy @ 0x18003ADC0 (std--_Func_impl_no_alloc__lambda_862e17b5ba5aad8032b797f753f777db__void_--_Copy.c)
 *     PbmCastingAppStateChanged @ 0x18003B190 (PbmCastingAppStateChanged.c)
 *     PbmPlayToStreamStateChanged @ 0x18003B450 (PbmPlayToStreamStateChanged.c)
 *     PbmSetScreenReaderState @ 0x18003B870 (PbmSetScreenReaderState.c)
 *     PbmSetSmtcSubscriptionState @ 0x18003B960 (PbmSetSmtcSubscriptionState.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall wil::com_ptr_t<CProcess,wil::err_returncode_policy>::com_ptr_t<CProcess,wil::err_returncode_policy>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // r8
  signed __int32 v3; // eax

  v2 = *a2;
  *a1 = *a2;
  if ( v2 )
  {
    do
      v3 = *(_DWORD *)(v2 + 20);
    while ( v3 != 0x7FFFFFFF && v3 != _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 20), v3 + 1, v3) );
  }
  return a1;
}

/*
 * XREFs of std::forward_list_IAudioSessionInfo___std::allocator_IAudioSessionInfo_____::remove_if__lambda_6c758f270a739346e4977fa18103cf5e___ @ 0x180013314
 * Callers:
 *     ?OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x1800131E0 (-OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180015D50 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001765C (--1-$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$try_com_query_to@UIAudioSessionDuckingControl@@AEAPEAUIAudioSessionInfo@@@wil@@YA_NAEAPEAUIAudioSessionInfo@@PEAPEAUIAudioSessionDuckingControl@@@Z @ 0x180019588 (--$try_com_query_to@UIAudioSessionDuckingControl@@AEAPEAUIAudioSessionInfo@@@wil@@YA_NAEAPEAUIAu.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall std::forward_list_IAudioSessionInfo___std::allocator_IAudioSessionInfo_____::remove_if__lambda_6c758f270a739346e4977fa18103cf5e___(
        _QWORD **a1,
        _QWORD *a2)
{
  _QWORD *v4; // rcx
  _QWORD *result; // rax
  _QWORD *v6; // rbx
  __int64 v7; // r14
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // r8
  _QWORD *v11; // rcx
  _QWORD *v12; // rbx
  _QWORD *v13; // [rsp+38h] [rbp-30h] BYREF
  _QWORD *v14; // [rsp+40h] [rbp-28h]
  __int64 v15; // [rsp+70h] [rbp+8h] BYREF

  v4 = 0LL;
  v13 = 0LL;
  result = &v13;
  v14 = &v13;
  v6 = *a1;
  if ( *a1 )
  {
    do
    {
      v7 = v6[1];
      v8 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 64LL))(*a2);
      v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 64LL))(v7);
      result = (_QWORD *)_o__wcsicmp(v9, v8);
      if ( (_DWORD)result )
      {
        a1 = (_QWORD **)v6;
        v6 = (_QWORD *)*v6;
      }
      else
      {
        v15 = 0LL;
        if ( (unsigned __int8)wil::try_com_query_to<IAudioSessionDuckingControl,IAudioSessionInfo * &>(a2, &v15) )
        {
          LOBYTE(v10) = 1;
          (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v15 + 40LL))(v15, 0LL, v10, 0LL);
        }
        wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>(&v15);
        v11 = *a1;
        v6 = (_QWORD *)**a1;
        *v11 = 0LL;
        *a1 = v6;
        result = v14;
        *v14 = v11;
        v14 = v11;
      }
    }
    while ( v6 );
    v4 = v13;
  }
  if ( v4 )
  {
    do
    {
      v12 = (_QWORD *)*v4;
      result = (_QWORD *)std::_Deallocate<16,0>(v4, 16LL);
      v4 = v12;
    }
    while ( v12 );
  }
  return result;
}

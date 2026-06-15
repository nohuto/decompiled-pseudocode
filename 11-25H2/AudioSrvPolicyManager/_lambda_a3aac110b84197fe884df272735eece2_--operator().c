/*
 * XREFs of _lambda_a3aac110b84197fe884df272735eece2_::operator() @ 0x18002F3C8
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_a3aac110b84197fe884df272735eece2__long_IAudioSessionInfo___::_Do_call @ 0x180031710 (std--_Func_impl_no_alloc__lambda_a3aac110b84197fe884df272735eece2__long_IAudioSessionInfo___--_D.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001765C (--1-$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$try_com_query_to@UIAudioSessionDuckingControl@@AEAPEAUIAudioSessionInfo@@@wil@@YA_NAEAPEAUIAudioSessionInfo@@PEAPEAUIAudioSessionDuckingControl@@@Z @ 0x180019588 (--$try_com_query_to@UIAudioSessionDuckingControl@@AEAPEAUIAudioSessionInfo@@@wil@@YA_NAEAPEAUIAu.c)
 *     WPP_SF_S @ 0x180031C70 (WPP_SF_S.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_a3aac110b84197fe884df272735eece2_::operator()(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  v5 = a2;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2);
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 29LL, &WPP_53f29f244fa932abd536e394721a76e7_Traceguids, v3);
  }
  v6 = 0LL;
  if ( wil::try_com_query_to<IAudioSessionDuckingControl,IAudioSessionInfo * &>(&v5, (__int64)&v6) )
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v6 + 40LL))(
      v6,
      **(_QWORD **)a1,
      0LL,
      *(_QWORD *)(a1 + 8));
  wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>(&v6);
  return 0LL;
}

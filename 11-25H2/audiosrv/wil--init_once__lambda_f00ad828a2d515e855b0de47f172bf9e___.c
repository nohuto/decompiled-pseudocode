/*
 * XREFs of wil::init_once__lambda_f00ad828a2d515e855b0de47f172bf9e___ @ 0x1800C6614
 * Callers:
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x18001AF40 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 * Callees:
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800C1490 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _lambda_f00ad828a2d515e855b0de47f172bf9e_::operator() @ 0x1800C6AD0 (_lambda_f00ad828a2d515e855b0de47f172bf9e_--operator().c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall wil::init_once__lambda_f00ad828a2d515e855b0de47f172bf9e___(LPINIT_ONCE lpInitOnce, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF
  WINBOOL fPending; // [rsp+50h] [rbp+18h] BYREF

  v8 = a2;
  fPending = 0;
  if ( !InitOnceBeginInitialize(lpInitOnce, 0, &fPending, 0LL) )
    wil::details::in1diag3::_Throw_GetLastError(retaddr, v3, v4, v5);
  if ( !fPending )
    return 0;
  lambda_f00ad828a2d515e855b0de47f172bf9e_::operator()(&v8);
  InitOnceComplete(lpInitOnce, 0, 0LL);
  return 1;
}

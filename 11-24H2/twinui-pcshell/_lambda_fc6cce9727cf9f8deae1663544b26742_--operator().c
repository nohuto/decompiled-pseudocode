/*
 * XREFs of _lambda_fc6cce9727cf9f8deae1663544b26742_::operator() @ 0x18040FF54
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fc6cce9727cf9f8deae1663544b26742___::Run @ 0x180413350 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_fc6cce9727cf9f8deae1663544b26742___--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800D25C0 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18013AF5C (-ContinueOnCurrentThread@-$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAA.c)
 *     ?Stop@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180389D24 (-Stop@-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_P.c)
 *     ?LaunchPeoplePaneForContactWithArgs@PeoplePaneViewManager@@AEAAJPEBG0@Z @ 0x180412820 (-LaunchPeoplePaneForContactWithArgs@PeoplePaneViewManager@@AEAAJPEBG0@Z.c)
 *     ?RemovePaneViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z @ 0x180412FE0 (-RemovePaneViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_fc6cce9727cf9f8deae1663544b26742_::operator()(__int64 a1)
{
  __int64 *v2; // rdi
  PeoplePaneViewManager *v3; // rbp
  const unsigned __int16 **v4; // rsi
  PeoplePaneViewManager *v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  _BYTE v9[80]; // [rsp+40h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v2 = (__int64 *)(a1 + 72);
  wil::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    a1 + 72,
    (__int64)v9);
  v3 = *(PeoplePaneViewManager **)a1;
  v4 = (const unsigned __int16 **)(a1 + 8);
  v6 = PeoplePaneViewManager::LaunchPeoplePaneForContactWithArgs(
         v5,
         *(const unsigned __int16 **)(a1 + 8),
         *(const unsigned __int16 **)(a1 + 40));
  v7 = v6;
  if ( v6 >= 0 )
  {
    wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
      v2,
      0);
    v7 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE6,
      (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v6);
    PeoplePaneViewManager::RemovePaneViewInfoForContactId(v3, *v4);
  }
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v9);
  return v7;
}

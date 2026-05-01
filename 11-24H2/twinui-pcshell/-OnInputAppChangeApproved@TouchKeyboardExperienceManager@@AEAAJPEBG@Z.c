/*
 * XREFs of ?OnInputAppChangeApproved@TouchKeyboardExperienceManager@@AEAAJPEBG@Z @ 0x180472E10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?StartActivity@InputAppActivationRequested@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z @ 0x1800E0AA8 (-StartActivity@InputAppActivationRequested@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800E17F4 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRefl.c)
 *     ?SetCurrentInputAppId@TouchKeyboardExperienceManager@@AEAAXPEBG@Z @ 0x1801FC7EC (-SetCurrentInputAppId@TouchKeyboardExperienceManager@@AEAAXPEBG@Z.c)
 *     ?GetCurrentInputAppId@TouchKeyboardExperienceManager@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x180294380 (-GetCurrentInputAppId@TouchKeyboardExperienceManager@@AEAA-AV-$basic_string@GU-$char_traits@G@st.c)
 *     ?ClearViewInfos@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1802A2998 (-ClearViewInfos@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ??1InputAppActivationRequested@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1802CCB14 (--1InputAppActivationRequested@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x180470388 (-CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?Stop@InputAppActivationRequested@TouchKeyboardExperienceTelemetryLogger@@QEAAX_N0@Z @ 0x180474D00 (-Stop@InputAppActivationRequested@TouchKeyboardExperienceTelemetryLogger@@QEAAX_N0@Z.c)
 *     ?TerminateInputApp@TouchKeyboardExperienceManager@@AEAAJPEBG@Z @ 0x180477724 (-TerminateInputApp@TouchKeyboardExperienceManager@@AEAAJPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TouchKeyboardExperienceManager::OnInputAppChangeApproved(
        struct _RTL_CRITICAL_SECTION *this,
        unsigned __int16 *a2)
{
  bool v4; // r14
  bool v5; // r15
  unsigned __int16 **v6; // rcx
  const unsigned __int16 *v7; // rdx
  int v8; // eax
  __int64 v9; // rax
  int ModalExperienceAsync; // eax
  unsigned int v11; // esi
  const char *v12; // r9
  __int64 result; // rax
  unsigned int v14; // [rsp+20h] [rbp-1A8h]
  unsigned __int16 *v15[3]; // [rsp+28h] [rbp-1A0h] BYREF
  unsigned __int64 v16; // [rsp+40h] [rbp-188h]
  _QWORD v17[42]; // [rsp+50h] [rbp-178h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+0h]

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v17,
    (__int64)"InputAppActivationRequested");
  v17[0] = &TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested::`vftable';
  TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested::StartActivity(
    (TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested *)v17,
    a2);
  try
  {
    v4 = 0;
    v5 = 0;
    TouchKeyboardExperienceManager::GetCurrentInputAppId(this, (__int64)v15);
    if ( v15[2] )
    {
      v4 = 1;
      v6 = v15;
      if ( v16 > 7 )
        v6 = (unsigned __int16 **)v15[0];
      if ( (unsigned int)_o__wcsicmp(v6, a2) )
      {
        TouchKeyboardExperienceManager::ClearViewInfos((RTL_SRWLOCK *)this);
        v5 = 1;
        v7 = (const unsigned __int16 *)v15;
        if ( v16 > 7 )
          v7 = v15[0];
        v8 = TouchKeyboardExperienceManager::TerminateInputApp((TouchKeyboardExperienceManager *)this, v7);
        if ( v8 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x2FC,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v8);
      }
    }
    v9 = -1LL;
    do
      ++v9;
    while ( a2[v9] );
    if ( v9
      && (TouchKeyboardExperienceManager::SetCurrentInputAppId((TouchKeyboardExperienceManager *)this, a2),
          ModalExperienceAsync = TouchKeyboardExperienceManager::CreateModalExperienceAsync((TouchKeyboardExperienceManager *)this),
          v11 = ModalExperienceAsync,
          ModalExperienceAsync < 0) )
    {
      LOBYTE(this[25].RecursionCount) = 0;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x305,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)ModalExperienceAsync);
      std::wstring::_Tidy_deallocate((void **)v15);
      TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested::~InputAppActivationRequested((TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested *)v17);
      result = v11;
    }
    else
    {
      std::wstring::_Tidy_deallocate((void **)v15);
      TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested::Stop(
        (TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested *)v17,
        v4,
        v5);
      TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested::~InputAppActivationRequested((TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested *)v17);
      result = 0LL;
    }
  }
  catch ( ... )
  {
    v14 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0x308,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            v12);
    TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested::~InputAppActivationRequested((TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested *)v17);
    return v14;
  }
  return result;
}

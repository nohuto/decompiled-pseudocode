/*
 * XREFs of _lambda_3b092b602b32291197616247ac44fb10_::operator() @ 0x18046DA58
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3b092b602b32291197616247ac44fb10___::Run @ 0x180474190 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_3b092b602b32291197616247ac44fb10___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18005F300 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?Stop@OnApplicationFramePositionChanged@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z @ 0x180081B28 (-Stop@OnApplicationFramePositionChanged@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800D25C0 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18013AF5C (-ContinueOnCurrentThread@-$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAA.c)
 *     ?FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV?$ComPtr@UIApplicationFrameWrapper@@@WRL@Microsoft@@@Z @ 0x18017A7C4 (-FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV-$ComPtr@UIApp.c)
 *     ?IsFrameReady@TouchKeyboardExperienceManager@@AEBA_NPEAUIApplicationFrame@@@Z @ 0x1801C2E68 (-IsFrameReady@TouchKeyboardExperienceManager@@AEBA_NPEAUIApplicationFrame@@@Z.c)
 *     ?TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x1802CDCB4 (-TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_3b092b602b32291197616247ac44fb10_::operator()(__int64 a1)
{
  TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged *v2; // rdi
  unsigned int v3; // ebx
  int v4; // eax
  TouchKeyboardExperienceManager *v5; // rcx
  int FrameWrapper; // esi
  int v8; // eax
  _BYTE v9[80]; // [rsp+20h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  __int64 v11; // [rsp+90h] [rbp+20h] BYREF
  __int64 v12; // [rsp+98h] [rbp+28h] BYREF

  v2 = (TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged *)(a1 + 24);
  wil::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    a1 + 24,
    (__int64)v9);
  v3 = 0;
  v12 = 0LL;
  v4 = Microsoft::WRL::WeakRef::As<IInspectable>((_QWORD *)(a1 + 8), &v12);
  v5 = retaddr;
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xDA0,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  if ( !v12 )
  {
    TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerDestroyed();
    TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged::Stop(
      v2,
      L"TouchKeyboardExperienceManagerDestroyed");
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
    wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v9);
    return 0LL;
  }
  if ( TouchKeyboardExperienceManager::IsFrameReady(v5, *(struct IApplicationFrame **)a1) )
  {
    v11 = 0LL;
    FrameWrapper = TouchKeyboardExperienceManager::FindFrameWrapper(*(RTL_SRWLOCK **)(a1 + 16), *(_QWORD *)a1, &v11);
    if ( FrameWrapper >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 96LL))(v11);
      FrameWrapper = v8;
      if ( v8 >= 0 )
      {
        TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged::Stop(v2, L"Success");
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
        goto LABEL_12;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xDB1,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
    v3 = FrameWrapper;
  }
  else
  {
    TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged::Stop(v2, L"FrameNotReady");
  }
LABEL_12:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v9);
  return v3;
}

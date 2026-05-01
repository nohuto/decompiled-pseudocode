/*
 * XREFs of ?AnimationGapTimerCallbackInternal@TouchKeyboardExperienceManager@@CAJPEAX@Z @ 0x1804700C0
 * Callers:
 *     ?AnimationGapTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z @ 0x180251AA0 (-AnimationGapTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x1800ABEA0 (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV-$shared_ptr@UKBViewInfo@@@std@@@Z.c)
 *     ?AnimateInputView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEAUHWND__@@_N@Z @ 0x18021056C (-AnimateInputView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEAUHWND__@@_N@Z.c)
 *     ?InternalAddRef@?$ComPtr@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@IEBAXXZ @ 0x1802C5680 (-InternalAddRef@-$ComPtr@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$AnimationGapTimerCallback@_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEA_N@Z @ 0x1802CA6D0 (--$AnimationGapTimerCallback@_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEA_N@Z.c)
 *     ?InternalRelease@?$ComPtr@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@IEAAKXZ @ 0x1802CE054 (-InternalRelease@-$ComPtr@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$PrimaryViewAnimationStarting@_NAEAU?$atomic@I@std@@@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEA_NAEAU?$atomic@I@std@@@Z @ 0x180469124 (--$PrimaryViewAnimationStarting@_NAEAU-$atomic@I@std@@@TouchKeyboardExperienceTelemetryLogger@@S.c)
 *     ?SendPrimaryViewAnimationStartingEvent@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x180474310 (-SendPrimaryViewAnimationStartingEvent@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TouchKeyboardExperienceManager::AnimationGapTimerCallbackInternal(
        TouchKeyboardExperienceManager *this)
{
  int ViewInfo; // eax
  unsigned int v3; // ebx
  struct KBViewInfo *v4; // r14
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, __int64 *); // rbx
  int v7; // eax
  __int64 v8; // rdx
  std::_Ref_count_base *v9; // rcx
  int v10; // eax
  std::_Ref_count_base *v11; // rcx
  int v12; // eax
  int v13; // eax
  HWND hwnd; // [rsp+20h] [rbp-30h] BYREF
  TouchKeyboardExperienceManager *v16; // [rsp+28h] [rbp-28h] BYREF
  std::_Ref_count_base *v17[2]; // [rsp+30h] [rbp-20h] BYREF
  std::_Ref_count_base *v18[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  char v20; // [rsp+80h] [rbp+30h] BYREF
  char v21; // [rsp+88h] [rbp+38h] BYREF
  char v22; // [rsp+90h] [rbp+40h]
  __int64 v23; // [rsp+98h] [rbp+48h] BYREF

  v16 = this;
  Microsoft::WRL::ComPtr<TouchKeyboardExperienceManager>::InternalAddRef((__int64 *)&v16);
  if ( !this )
    goto LABEL_25;
  if ( *((_BYTE *)this + 938) )
  {
    v20 = 0;
    TouchKeyboardExperienceTelemetryLogger::AnimationGapTimerCallback<bool>(&v20);
    *((_BYTE *)this + 938) = 0;
    *(_OWORD *)v17 = 0LL;
    ViewInfo = TouchKeyboardExperienceManager::FindViewInfo((RTL_SRWLOCK *)this, *((_DWORD *)this + 153), v17);
    v3 = ViewInfo;
    if ( ViewInfo < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x468,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)ViewInfo);
LABEL_8:
      v9 = v17[1];
      goto LABEL_9;
    }
    v23 = 0LL;
    v4 = v17[0];
    v5 = *((_QWORD *)v17[0] + 1);
    v6 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 32LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
    v7 = v6(v5, &v23);
    v3 = v7;
    if ( v7 < 0 )
    {
      v8 = 1130LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
      goto LABEL_8;
    }
    hwnd = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v23 + 24LL))(v23, &hwnd);
    v3 = v7;
    if ( v7 < 0 )
    {
      v8 = 1132LL;
      goto LABEL_7;
    }
    v10 = TouchKeyboardExperienceManager::AnimateInputView(this, v4, hwnd, 0);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x46D,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v10);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
    v11 = v17[1];
    goto LABEL_23;
  }
  if ( !*((_BYTE *)this + 936) || !*((_QWORD *)this + 73) )
  {
LABEL_25:
    v3 = 0;
    goto LABEL_26;
  }
  v21 = 1;
  TouchKeyboardExperienceTelemetryLogger::AnimationGapTimerCallback<bool>(&v21);
  *(_OWORD *)v18 = 0LL;
  v12 = TouchKeyboardExperienceManager::FindViewInfo((RTL_SRWLOCK *)this, *((_DWORD *)this + 153), v18);
  v3 = v12;
  if ( v12 >= 0 )
  {
    v22 = 1;
    TouchKeyboardExperienceTelemetryLogger::PrimaryViewAnimationStarting<bool,std::atomic<unsigned int> &>();
    v13 = TouchKeyboardExperienceManager::SendPrimaryViewAnimationStartingEvent(this, v18[0]);
    if ( v13 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x476,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v13);
    _InterlockedExchange((volatile __int32 *)this + 238, 0);
    v11 = v18[1];
LABEL_23:
    if ( v11 )
      std::_Ref_count_base::_Decref(v11);
    goto LABEL_25;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x474,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v12);
  v9 = v18[1];
LABEL_9:
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
LABEL_26:
  Microsoft::WRL::ComPtr<TouchKeyboardExperienceManager>::InternalRelease((__int64 *)&v16);
  return v3;
}

/*
 * XREFs of _lambda_a09f288fb701b6a3bb133eb64dd6b836_::operator() @ 0x180208118
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a09f288fb701b6a3bb133eb64dd6b836___::Run @ 0x18020BA50 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a09f288fb701b6a3bb133eb64dd6b836___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800BAF48 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x1800BBDE4 (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800DEC74 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?complete@?$tip_test@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@@tip@@QEAAXXZ @ 0x18020C3B4 (-complete@-$tip_test@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@@tip@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$GettingInputAppIdRetryCountMaxReached@AEAU?$atomic@I@std@@@GetDefautInputAppIdAndContinue@TouchKeyboardExperienceTelemetryLogger@@QEAAXAEAU?$atomic@I@std@@@Z @ 0x1805085B0 (--$GettingInputAppIdRetryCountMaxReached@AEAU-$atomic@I@std@@@GetDefautInputAppIdAndContinue@Tou.c)
 *     ??1?$test_data_control@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@@tip@@QEAA@XZ @ 0x18050C1B0 (--1-$test_data_control@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@@tip@@QEAA@XZ.c)
 *     ??4?$function@$$A6AJPEBG@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x18050CE0C (--4-$function@$$A6AJPEBG@Z@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??C?$tip_test@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@@tip@@QEAA?AV?$test_data_control@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@@1@XZ @ 0x18050CF3C (--C-$tip_test@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@@tip@@QEAA-AV-$test_data_con.c)
 *     ?GetInputAppId@TouchKeyboardExperienceManager@@CA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x18051050C (-GetInputAppId@TouchKeyboardExperienceManager@@CA-AV-$basic_string@GU-$char_traits@G@std@@V-$all.c)
 *     ?Stop@GetDefautInputAppIdAndContinue@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z @ 0x180517B0C (-Stop@GetDefautInputAppIdAndContinue@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z.c)
 *     ?TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x18051B7D8 (-TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_a09f288fb701b6a3bb133eb64dd6b836_::operator()(Microsoft::WRL::WeakRef *this)
{
  TouchKeyboardExperienceTelemetryLogger::GetDefautInputAppIdAndContinue *v2; // r13
  _DWORD *v3; // r8
  int v4; // eax
  __int64 result; // rax
  __int64 v6; // r14
  volatile __int32 *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  unsigned __int16 **v10; // rax
  int v11; // eax
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  const char *v16; // r9
  __int64 *v17; // rcx
  __int64 v18; // rdi
  __int64 (__fastcall *v19)(__int64, __int64 (__fastcall *)(void *), __int64, __int64); // rbx
  int v20; // eax
  unsigned int v21; // ebx
  int v22; // eax
  unsigned int v23; // ebx
  __int64 v24; // rdi
  int v25; // eax
  unsigned int v26; // ebx
  const unsigned __int16 *v27; // rdx
  struct IInspectable *v28; // [rsp+30h] [rbp-C8h] BYREF
  unsigned __int16 **v29; // [rsp+38h] [rbp-C0h] BYREF
  Microsoft::WRL::WeakRef *v30; // [rsp+40h] [rbp-B8h]
  _OWORD v31[3]; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v32; // [rsp+80h] [rbp-78h]
  int v33; // [rsp+88h] [rbp-70h]
  __int64 v34; // [rsp+90h] [rbp-68h]
  _BYTE v35[16]; // [rsp+A0h] [rbp-58h] BYREF
  unsigned __int16 *v36[3]; // [rsp+B0h] [rbp-48h] BYREF
  unsigned __int64 v37; // [rsp+C8h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]

  v30 = this;
  v2 = (Microsoft::WRL::WeakRef *)((char *)this + 16);
  v3 = (_DWORD *)*((_QWORD *)this + 8);
  if ( *v3 == 1 )
  {
    wil::ActivityThreadWatcher::ActivityThreadWatcher(
      (wil::ActivityThreadWatcher *)v31,
      (Microsoft::WRL::WeakRef *)((char *)this + 16),
      (const struct wil::details::StoredCallContextInfo *)(v3 + 10));
  }
  else
  {
    memset(v31, 0, sizeof(v31));
    v32 = 0LL;
    v33 = 0;
    v34 = 0LL;
  }
  v28 = 0LL;
  v4 = Microsoft::WRL::WeakRef::As<IInspectable>(this, &v28);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x719,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  if ( !v28 )
  {
    TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerDestroyed();
    TouchKeyboardExperienceTelemetryLogger::GetDefautInputAppIdAndContinue::Stop(v2, &LocaleName);
    *(_BYTE *)(*((_QWORD *)this + 1) + 1012LL) = 0;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v28);
    wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v31);
    return 0LL;
  }
  try
  {
    TouchKeyboardExperienceManager::GetInputAppId(v36);
    v6 = *((_QWORD *)this + 1);
    v7 = (volatile __int32 *)(v6 + 928);
    if ( v36[2] )
    {
      _InterlockedExchange(v7, 0);
      v8 = *(_QWORD *)(v6 + 824);
      if ( v8 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 96LL))(v8);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(v6 + 824));
      }
      v9 = *((_QWORD *)this + 49);
      if ( v9 )
      {
        v10 = v36;
        if ( v37 >= 8 )
          v10 = (unsigned __int16 **)v36[0];
        v29 = v10;
        v11 = (*(__int64 (__fastcall **)(__int64, unsigned __int16 ***))(*(_QWORD *)v9 + 16LL))(v9, &v29);
        if ( v11 < 0 )
        {
          *(_BYTE *)(v6 + 1012) = 0;
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x731,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v11);
        }
      }
      goto LABEL_30;
    }
    if ( (unsigned int)_InterlockedIncrement(v7) > 5 )
    {
      TouchKeyboardExperienceTelemetryLogger::GetDefautInputAppIdAndContinue::GettingInputAppIdRetryCountMaxReached<std::atomic<unsigned int> &>(v2);
      v12 = *((_QWORD *)this + 1);
      _InterlockedExchange((volatile __int32 *)(v12 + 928), 0);
      v13 = *(_QWORD *)(v12 + 824);
      if ( v13 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 96LL))(v13);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(v12 + 824));
      }
      *(_BYTE *)(v12 + 1012) = 0;
      v14 = *(_QWORD *)tip::tip_test<KeyboardHostingTipTests::_tip_InputAppActivationTest>::operator->(v12 + 2176, v35);
      v15 = v14 + 198;
      if ( !v14 )
        v15 = 22LL;
      *(_BYTE *)v15 = 1;
      tip::test_data_control<KeyboardHostingTipTests::_tip_InputAppActivationTest>::~test_data_control<KeyboardHostingTipTests::_tip_InputAppActivationTest>(v35);
      tip::tip_test<_tip_LoadCustomVDWallpaperWithGesturePerfTest>::complete(v12 + 2176);
      std::wstring::_Tidy_deallocate((__int64)v36);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v28);
      wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v31);
      return 2147549183LL;
    }
    v17 = (__int64 *)(v6 + 824);
    if ( !*(_QWORD *)(v6 + 824) )
    {
      v18 = *(_QWORD *)(v6 + 800);
      v19 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(void *), __int64, __int64))(*(_QWORD *)v18 + 144LL);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v17);
      v20 = v19(v18, TouchKeyboardExperienceManager::RetryGettingInputAppIdTimerCallback, v6, v6 + 824);
      v21 = v20;
      if ( v20 < 0 )
      {
        *(_BYTE *)(v6 + 1012) = 0;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x751,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v20);
        std::wstring::_Tidy_deallocate((__int64)v36);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v28);
        wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v31);
        return v21;
      }
      v17 = (__int64 *)(v6 + 824);
    }
    v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v17 + 96LL))(*v17);
    v23 = v22;
    if ( v22 >= 0 )
    {
      std::function<long (unsigned short const *)>::operator=(v6 + 864, (char *)this + 336);
      v24 = *((_QWORD *)this + 1);
      v25 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v24 + 824) + 80LL))(
              *(_QWORD *)(v24 + 824),
              20000000LL,
              0LL);
      v26 = v25;
      if ( v25 >= 0 )
      {
LABEL_30:
        v27 = (const unsigned __int16 *)v36;
        if ( v37 >= 8 )
          v27 = v36[0];
        TouchKeyboardExperienceTelemetryLogger::GetDefautInputAppIdAndContinue::Stop(v2, v27);
        std::wstring::_Tidy_deallocate((__int64)v36);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v28);
        wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v31);
        return 0LL;
      }
      *(_BYTE *)(v24 + 1012) = 0;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x756,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v25);
      std::wstring::_Tidy_deallocate((__int64)v36);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v28);
      wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v31);
      result = v26;
    }
    else
    {
      *(_BYTE *)(v6 + 1012) = 0;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x754,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v22);
      std::wstring::_Tidy_deallocate((__int64)v36);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v28);
      wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v31);
      result = v23;
    }
  }
  catch ( ... )
  {
    *(_BYTE *)(*((_QWORD *)v30 + 1) + 1012LL) = 0;
    LODWORD(v29) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x760,
                     (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
                     v16);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v28);
    wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v31);
    return (unsigned int)v29;
  }
  return result;
}

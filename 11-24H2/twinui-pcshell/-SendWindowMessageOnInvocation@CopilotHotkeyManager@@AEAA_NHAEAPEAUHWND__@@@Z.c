/*
 * XREFs of ?SendWindowMessageOnInvocation@CopilotHotkeyManager@@AEAA_NHAEAPEAUHWND__@@@Z @ 0x180634D90
 * Callers:
 *     ?HandlePenButtonAction@CopilotHotkeyManager@@AEAAXW4CopilotInvocationType@@AEBUPropertyDetails@@@Z @ 0x180625C60 (-HandlePenButtonAction@CopilotHotkeyManager@@AEAAXW4CopilotInvocationType@@AEBUPropertyDetails@@.c)
 *     ?InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@AEAV?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@tip2@@@Z @ 0x180625E74 (-InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@AEAV-$tip_test@.c)
 *     CopilotHotkeyManager::TrySendingCopilotHardwareKeyLongPressSignal$_ResumeCoro$1 @ 0x1806359B0 (CopilotHotkeyManager--TrySendingCopilotHardwareKeyLongPressSignal$_ResumeCoro$1.c)
 * Callees:
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800A5D64 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800BADF8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800F2678 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180120A50 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1801343EC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??$?9GU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0@Z @ 0x1802169A8 (--$-9GU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA_NAEBV-$basic_string@GU-$char_traits@G@std@.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180621FE8 (--1-$test_data_control@V-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@de.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@1@XZ @ 0x1806223A8 (--C-$tip_test@V-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip.c)
 *     ?FindMessageWindow@CopilotHotkeyManager@@QEAA_NPEAUFastpathWindowProperty@@@Z @ 0x180623144 (-FindMessageWindow@CopilotHotkeyManager@@QEAA_NPEAUFastpathWindowProperty@@@Z.c)
 *     ?IsTargetApplicationRunning@CopilotHotkeyManager@@AEAA_NXZ @ 0x1806326DC (-IsTargetApplicationRunning@CopilotHotkeyManager@@AEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_57343652@@@details@wil@@QEAA_NXZ @ 0x180636A5C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_57343652@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_PenButtonSettingsModernization@@@details@wil@@QEAA_NXZ @ 0x180636CC4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_PenButtonSettingsModernization@@@.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall CopilotHotkeyManager::SendWindowMessageOnInvocation(CopilotHotkeyManager *this, int a2, HWND *a3)
{
  HWND *v3; // r13
  WPARAM v4; // r12
  bool v6; // r14
  bool MessageWindow; // si
  char v8; // di
  __int64 v9; // r8
  BOOL v10; // eax
  bool v11; // r15
  int v12; // eax
  __int64 v13; // r8
  LPARAM v14; // r9
  const char *v15; // r9
  void *v17; // [rsp+20h] [rbp-50h] BYREF
  HWND *v18; // [rsp+28h] [rbp-48h]
  LPARAM lParam[4]; // [rsp+30h] [rbp-40h] BYREF
  UINT Msg[2]; // [rsp+50h] [rbp-20h]
  HWND hWnd; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]

  v3 = a3;
  v18 = a3;
  v4 = a2;
  std::wstring::wstring((__int64)lParam, (__int64)this + 208);
  v6 = 0;
  *(_QWORD *)Msg = 0LL;
  hWnd = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockShared((RTL_SRWLOCK **)&v17, (RTL_SRWLOCK *)this + 25);
  hWnd = (HWND)*((_QWORD *)this + 70);
  Msg[0] = *((_DWORD *)this + 138);
  MessageWindow = *((_DWORD *)this + 128) == 2;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)&v17);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_57343652>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_57343652>::GetImpl'::`2'::impl) )
  {
    if ( !hWnd && *((_DWORD *)this + 128) != 2 || !IsWindow(hWnd) )
    {
      MessageWindow = CopilotHotkeyManager::FindMessageWindow(this, (struct FastpathWindowProperty *)lParam);
      if ( !MessageWindow )
        MessageWindow = !EnumWindows((WNDENUMPROC)CopilotHotkeyManager::EnumWindowsCallback, (LPARAM)lParam);
    }
    v6 = *((_DWORD *)this + 128) == 2;
    v8 = 1;
    *((_DWORD *)this + 128) = !MessageWindow + 2;
    if ( MessageWindow
      && (std::operator!=<unsigned short>(lParam, (unsigned __int16 *)this + 260)
       || hWnd != *((HWND *)this + 70)
       || Msg[0] != *((_DWORD *)this + 138)) )
    {
      wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)&v17, (RTL_SRWLOCK *)this + 25);
      std::wstring::operator=((char *)this + 520, (char *)lParam, v9);
      *((_DWORD *)this + 138) = Msg[0];
      *((_QWORD *)this + 70) = hWnd;
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)&v17);
    }
  }
  else
  {
    v8 = 1;
    if ( !*((_DWORD *)this + 128) && CopilotHotkeyManager::IsTargetApplicationRunning(this) )
      *((_DWORD *)this + 128) = 1;
    if ( hWnd || *((_DWORD *)this + 128) != 1 )
    {
      v6 = *((_DWORD *)this + 128) == 2;
    }
    else
    {
      v10 = EnumWindows((WNDENUMPROC)CopilotHotkeyManager::EnumWindowsCallback, (LPARAM)lParam);
      v11 = !v10;
      v12 = v10 + 2;
      *((_DWORD *)this + 128) = v12;
      MessageWindow = v11;
      if ( v12 == 2 )
      {
        if ( std::operator!=<unsigned short>(lParam, (unsigned __int16 *)this + 260)
          || hWnd != *((HWND *)this + 70)
          || (v6 = 0, Msg[0] != *((_DWORD *)this + 138)) )
        {
          wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)&v17, (RTL_SRWLOCK *)this + 25);
          std::wstring::operator=((char *)this + 520, (char *)lParam, v13);
          *((_DWORD *)this + 138) = Msg[0];
          *((_QWORD *)this + 70) = hWnd;
          CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)&v17);
          MessageWindow = v11;
          v6 = 0;
        }
        v3 = v18;
      }
    }
  }
  if ( MessageWindow && hWnd )
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_PenButtonSettingsModernization>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_PenButtonSettingsModernization>::GetImpl'::`2'::impl) )
      v14 = *((_QWORD *)this + 79);
    else
      v14 = 0LL;
    if ( PostMessageW(hWnd, Msg[0], v4, v14) )
    {
      *v3 = hWnd;
      *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::operator->(
                    (__int64)this + 568,
                    (__int64 *)&v17)
               + 320) = 1;
      tip2::test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::~test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>(&v17);
      if ( v6 )
      {
        *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::operator->(
                      (__int64)this + 568,
                      (__int64 *)&v17)
                 + 332) = 1;
        tip2::test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::~test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>(&v17);
      }
    }
    else
    {
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x81E,
        (int)"pcshell\\twinui\\copilothotkeymanager\\lib\\copilothotkeymanager.cpp",
        v15);
    }
  }
  else
  {
    v8 = 0;
  }
  std::wstring::_Tidy_deallocate((void **)lParam);
  return v8;
}

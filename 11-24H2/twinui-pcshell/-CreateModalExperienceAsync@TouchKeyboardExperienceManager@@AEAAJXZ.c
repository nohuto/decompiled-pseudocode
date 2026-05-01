/*
 * XREFs of ?CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x180470388
 * Callers:
 *     ?EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180251C20 (-EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ?OnInputAppChangeApproved@TouchKeyboardExperienceManager@@AEAAJPEBG@Z @ 0x180472E10 (-OnInputAppChangeApproved@TouchKeyboardExperienceManager@@AEAAJPEBG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800BADF8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?IsSessionShuttingDown@TouchKeyboardExperienceManager@@SA_NXZ @ 0x180207E58 (-IsSessionShuttingDown@TouchKeyboardExperienceManager@@SA_NXZ.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEAAXXZ @ 0x180288A98 (-complete@-$tip_test@V-$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@d.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@@1@XZ @ 0x18028C4E8 (--C-$tip_test@V-$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@.c)
 *     ?GetCurrentInputAppId@TouchKeyboardExperienceManager@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x180294380 (-GetCurrentInputAppId@TouchKeyboardExperienceManager@@AEAA-AV-$basic_string@GU-$char_traits@G@st.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802C55A4 (--1-$test_data_control@V-$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_c5b63f338e787c1dc9ce32ee8c9a5927___ @ 0x180469624 (Windows--Internal--ComTaskPool--QueueTask__lambda_c5b63f338e787c1dc9ce32ee8c9a5927___.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::CreateModalExperienceAsync(TouchKeyboardExperienceManager *this)
{
  __int64 *v3; // rdi
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  _BYTE v7[8]; // [rsp+20h] [rbp-60h] BYREF
  void *v8[4]; // [rsp+28h] [rbp-58h] BYREF
  void *v9[5]; // [rsp+48h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  if ( TouchKeyboardExperienceManager::IsSessionShuttingDown() )
  {
    *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>::operator->(
                            (__int64)this + 2176,
                            (__int64)v7)
             + 281LL) = 1;
    tip2::test_data_control<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>::~test_data_control<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>((__int64)v7);
    tip2::tip_test<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>::complete((__int64 *)this + 272);
    return 2147943041LL;
  }
  TouchKeyboardExperienceManager::GetCurrentInputAppId((struct _RTL_CRITICAL_SECTION *)this, (__int64)v8);
  if ( v8[2] )
  {
    if ( !*((_BYTE *)this + 1013) )
    {
      std::wstring::wstring((__int64)v9, (__int64)v8);
      v9[4] = this;
      v4 = Windows::Internal::ComTaskPool::QueueTask__lambda_c5b63f338e787c1dc9ce32ee8c9a5927___(
             v6,
             v5,
             *((_DWORD *)this + 243),
             (__int64)v9);
      std::wstring::_Tidy_deallocate(v9);
      if ( v4 >= 0 )
        v4 = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1001,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v4);
      goto LABEL_11;
    }
    v3 = (__int64 *)((char *)this + 2176);
    *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>::operator->(
                            (__int64)this + 2176,
                            (__int64)v7)
             + 288LL) = 1;
    tip2::test_data_control<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>::~test_data_control<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>((__int64)v7);
    v4 = -2147023756;
  }
  else
  {
    v3 = (__int64 *)((char *)this + 2176);
    *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>::operator->(
                            (__int64)this + 2176,
                            (__int64)v7)
             + 272LL) = 1;
    tip2::test_data_control<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>::~test_data_control<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>((__int64)v7);
    v4 = -2147418113;
  }
  tip2::tip_test<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>::complete(v3);
LABEL_11:
  std::wstring::_Tidy_deallocate(v8);
  return (unsigned int)v4;
}

/*
 * XREFs of ?UpdateTargetAppDetailsCacheIfNecessary@CopilotHotkeyManager@@AEAAXXZ @ 0x1806366E4
 * Callers:
 *     CopilotHotkeyManager::MonitorForCopilotExtendedSignals$_ResumeCoro$1 @ 0x180633450 (CopilotHotkeyManager--MonitorForCopilotExtendedSignals$_ResumeCoro$1.c)
 *     ?OnPenButtonCopilotAction@CopilotHotkeyManager@@QEAAXAEBUPenButtonActionData@@@Z @ 0x180633C80 (-OnPenButtonCopilotAction@CopilotHotkeyManager@@QEAAXAEBUPenButtonActionData@@@Z.c)
 *     ?subscribe_to_services@CopilotHotkeyManager@@UEAAXPEAUIServiceProvider@@@Z @ 0x180637B20 (-subscribe_to_services@CopilotHotkeyManager@@UEAAXPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800BADF8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Equal@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_NQEBG@Z @ 0x18018ED94 (-_Equal@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_NQEBG@Z.c)
 *     ??$?9GU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0@Z @ 0x1802169A8 (--$-9GU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA_NAEBV-$basic_string@GU-$char_traits@G@std@.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$try_get_value@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@YA?AV?$optional@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAUHKEY__@@PEBG1@Z @ 0x18033A2D4 (--$try_get_value@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@reg@wil@@YA-AV-$.c)
 *     ??1?$_Optional_destruct_base@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$0A@@std@@QEAA@XZ @ 0x18033A528 (--1-$_Optional_destruct_base@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$0A@@.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180621FE8 (--1-$test_data_control@V-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@de.c)
 *     ??1TargetAppExtensionDetails@@QEAA@XZ @ 0x18062216C (--1TargetAppExtensionDetails@@QEAA@XZ.c)
 *     ??4TargetAppExtensionDetails@@QEAAAEAU0@$$QEAU0@@Z @ 0x180622234 (--4TargetAppExtensionDetails@@QEAAAEAU0@$$QEAU0@@Z.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@1@XZ @ 0x1806223A8 (--C-$tip_test@V-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip.c)
 *     ?ClearFastpathRegistrationProperties@CopilotHotkeyManager@@AEAAXXZ @ 0x180622BFC (-ClearFastpathRegistrationProperties@CopilotHotkeyManager@@AEAAXXZ.c)
 *     ?GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA?AUTargetAppExtensionDetails@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180624D18 (-GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA-AUTargetAppExtensionDetails@@V-$basic_s.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CopilotHotkeyManager::UpdateTargetAppDetailsCacheIfNecessary(CopilotHotkeyManager *this)
{
  __int64 v2; // rax
  void *v3; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v4[4]; // [rsp+30h] [rbp-D8h] BYREF
  char v5; // [rsp+50h] [rbp-B8h]
  char v6[40]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v7[40]; // [rsp+80h] [rbp-88h] BYREF
  __int128 v8; // [rsp+A8h] [rbp-60h] BYREF
  __m128i si128; // [rsp+B8h] [rbp-50h]
  __int128 v10; // [rsp+C8h] [rbp-40h]
  __m128i v11; // [rsp+D8h] [rbp-30h]
  __int128 v12; // [rsp+E8h] [rbp-20h]
  __m128i v13; // [rsp+F8h] [rbp-10h]
  __int64 v14; // [rsp+108h] [rbp+0h]
  __int128 v15; // [rsp+110h] [rbp+8h]
  __int64 v16; // [rsp+120h] [rbp+18h]
  __int64 v17; // [rsp+128h] [rbp+20h]
  __int64 v18; // [rsp+130h] [rbp+28h]
  __int128 v19; // [rsp+138h] [rbp+30h]
  __m128i v20; // [rsp+148h] [rbp+40h]
  __int64 v21; // [rsp+158h] [rbp+50h]
  __int128 v22; // [rsp+160h] [rbp+58h]
  __int64 v23; // [rsp+170h] [rbp+68h]
  __int64 v24; // [rsp+178h] [rbp+70h]
  __int64 v25; // [rsp+180h] [rbp+78h]
  __int128 v26; // [rsp+188h] [rbp+80h]
  __m128i v27; // [rsp+198h] [rbp+90h]
  __int64 v28; // [rsp+1A8h] [rbp+A0h]
  __int128 v29; // [rsp+1B0h] [rbp+A8h]
  __int64 v30; // [rsp+1C0h] [rbp+B8h]
  __int64 v31; // [rsp+1C8h] [rbp+C0h]
  __int64 v32; // [rsp+1D0h] [rbp+C8h]

  wil::reg::try_get_value<std::wstring>((__int64)v6, HKEY_CURRENT_USER);
  wil::reg::try_get_value<std::wstring>((__int64)v4, HKEY_CURRENT_USER);
  if ( v5
    && v6[32]
    && (std::wstring::_Equal(v6, (char *)L"App") || std::wstring::_Equal(v6, (char *)L"AppEnforcedByPolicy")) )
  {
    if ( !*((_QWORD *)this + 28) || std::operator!=<unsigned short>(v4, (unsigned __int16 *)this + 104) )
    {
      v2 = std::wstring::wstring((__int64)v7, (__int64)v4);
      CopilotHotkeyManager::GetTargetAppExtensionDetails(this, &v8, v2);
    }
  }
  else
  {
    *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::operator->(
                  (__int64)this + 568,
                  (__int64 *)&v3)
             + 283) = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::~test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>(&v3);
    v8 = 0LL;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    LOWORD(v8) = 0;
    v10 = 0LL;
    v11 = si128;
    LOWORD(v10) = 0;
    v12 = 0LL;
    v13 = si128;
    LOWORD(v12) = 0;
    v14 = 0LL;
    v15 = 0LL;
    v16 = 0LL;
    v17 = 7LL;
    LOWORD(v15) = 0;
    v18 = 0LL;
    v19 = 0LL;
    v20 = si128;
    LOWORD(v19) = 0;
    v21 = 0LL;
    v22 = 0LL;
    v23 = 0LL;
    v24 = 7LL;
    LOWORD(v22) = 0;
    v25 = 0LL;
    v26 = 0LL;
    v27 = si128;
    LOWORD(v26) = 0;
    v28 = 0LL;
    v32 = 0LL;
    v29 = 0LL;
    v30 = 0LL;
    v31 = 7LL;
    LOWORD(v29) = 0;
    TargetAppExtensionDetails::operator=((__int64)this + 208, (__int64)&v8);
    TargetAppExtensionDetails::~TargetAppExtensionDetails((void **)&v8);
  }
  std::_Optional_destruct_base<std::wstring,0>::~_Optional_destruct_base<std::wstring,0>((__int64)v4);
  std::_Optional_destruct_base<std::wstring,0>::~_Optional_destruct_base<std::wstring,0>((__int64)v6);
}

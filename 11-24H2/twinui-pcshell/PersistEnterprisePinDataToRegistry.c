/*
 * XREFs of PersistEnterprisePinDataToRegistry @ 0x180693528
 * Callers:
 *     GetPidlsFromTaskbarLayout @ 0x18068ED6C (GetPidlsFromTaskbarLayout.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x180056268 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x1802943F4 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 *     ?Size@?$consume_Windows_Foundation_Collections_IVector@UJsonArray@Json@Data@Windows@winrt@@UIJsonValue@2345@@impl@winrt@@QEBA@XZ @ 0x1802BC380 (-Size@-$consume_Windows_Foundation_Collections_IVector@UJsonArray@Json@Data@Windows@winrt@@UIJso.c)
 *     ?SHRegSetDWORD@@YAJPEAUHKEY__@@PEBG1K@Z @ 0x1802C790C (-SHRegSetDWORD@@YAJPEAUHKEY__@@PEBG1K@Z.c)
 *     ?SHRegSetString@@YAJPEAUHKEY__@@PEBG11@Z @ 0x1803BF980 (-SHRegSetString@@YAJPEAUHKEY__@@PEBG11@Z.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@QEAA@XZ @ 0x18068AE5C (--1-$test_data_control@V-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@V.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@1@XZ @ 0x18068B2F0 (--C-$tip_test@V-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data.c)
 *     ?Stringify@?$consume_Windows_Data_Json_IJsonValue@UIJsonArray@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1806966F8 (-Stringify@-$consume_Windows_Data_Json_IJsonValue@UIJsonArray@Json@Data@Windows@winrt@@@impl@win.c)
 *     ?get_or_add_flag_under_lock@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEAUtest_flag@3@GPEBD@Z @ 0x180699008 (-get_or_add_flag_under_lock@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEAUtest_flag@3@GPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PersistEnterprisePinDataToRegistry(
        __int64 (__fastcall ****a1)(_QWORD, void *, __int64 *),
        __int64 a2)
{
  winrt::hstring *v4; // rax
  BYTE *v5; // rax
  int v6; // eax
  int v7; // eax
  LSTATUS v8; // eax
  unsigned __int64 v9; // r9
  char v10; // bl
  char v11; // al
  LSTATUS v12; // eax
  unsigned __int64 v13; // r9
  const char *v14; // rdx
  const char *v15; // rax
  __int64 v16; // r9
  __int64 result; // rax
  __int64 v18; // rbx
  wil *v19; // rcx
  const char *v20; // rdx
  const char *v21; // rax
  int v22; // r9d
  int v23; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v26; // [rsp+50h] [rbp+18h] BYREF

  try
  {
    if ( (unsigned int)winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Data::Json::JsonArray,winrt::Windows::Data::Json::IJsonValue>::Size(a1) )
    {
      v4 = (winrt::hstring *)winrt::impl::consume_Windows_Data_Json_IJsonValue<winrt::Windows::Data::Json::IJsonArray>::Stringify(
                               a1,
                               &v26);
      v5 = (BYTE *)winrt::hstring::c_str(v4);
      v6 = SHRegSetString(
             HKEY_CURRENT_USER,
             L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Taskband",
             L"EnterprisePinData",
             v5);
      if ( v6 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x153,
          (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
          (const char *)(unsigned int)v6,
          v23);
      winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v26);
      v7 = SHRegSetDWORD(
             HKEY_CURRENT_USER,
             L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Taskband",
             L"EnterprisePinDataVersion",
             1);
      if ( v7 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x155,
          (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
          (const char *)(unsigned int)v7,
          v23);
    }
    else
    {
      v8 = SHDeleteValueW(
             HKEY_CURRENT_USER,
             L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Taskband",
             L"EnterprisePinData");
      v9 = (unsigned int)v8;
      if ( v8 > 0 )
        v9 = (unsigned __int16)v8 | 0x80070000;
      if ( (int)(v9 + 0x80000000) < 0 || (_DWORD)v9 == -2147024894 )
      {
        v11 = 0;
        v10 = 1;
      }
      else
      {
        v10 = 1;
        v11 = 1;
      }
      if ( v11 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x15C,
          (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
          (const char *)v9,
          v23);
      v12 = SHDeleteValueW(
              HKEY_CURRENT_USER,
              L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Taskband",
              L"EnterprisePinDataVersion");
      v13 = (unsigned int)v12;
      if ( v12 > 0 )
        v13 = (unsigned __int16)v12 | 0x80070000;
      if ( (((_DWORD)v13 + 0x80000000) & 0x80000000) != 0 || (_DWORD)v13 == -2147024894 )
        v10 = 0;
      if ( v10 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x160,
          (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
          (const char *)v13,
          v23);
    }
    tip2::tip_test<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::operator->(
      a2,
      (__int64 *)&v26);
    v15 = tip2::details::reason_string(
            (tip2::details *)"PinnedListTip::TaskbarEnterprisePinTestReason::enterprise_pin_data_persisted",
            v14);
    tip2::details::shared_data<0,0,1>::get_or_add_flag_under_lock(v16 + 8, 5LL, v15);
    result = tip2::test_data_control<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::~test_data_control<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>(&v26);
  }
  catch ( ... )
  {
    v18 = *tip2::tip_test<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::operator->(
             a2,
             (__int64 *)&v26);
    wil::ResultFromCaughtException(v19);
    v21 = tip2::details::reason_string(
            (tip2::details *)"PinnedListTip::TaskbarEnterprisePinTestReason::persist_enterprise_pin_data_failed",
            v20);
    tip2::details::shared_data<0,0,1>::set_flag_value<long>(v18 + 8, 10LL, (__int64)v21, v22);
    return tip2::test_data_control<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::~test_data_control<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>(&v26);
  }
  return result;
}

/*
 * XREFs of ?CancelSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ @ 0x1805CDAC0
 * Callers:
 *     <none>
 * Callees:
 *     ?TryWithRpcDisconnectFallbackAndTimeout@Shell@Internal@Windows@@YAJK$$QEAV?$function@$$A6AJXZ@wistd@@0$$QEAV?$function@$$A6A_NJ@Z@5@@Z @ 0x180015250 (-TryWithRpcDisconnectFallbackAndTimeout@Shell@Internal@Windows@@YAJK$$QEAV-$function@$$A6AJXZ@wi.c)
 *     ??1?$function@$$A6A_NJ@Z@wistd@@QEAA@XZ @ 0x1800BC4BC (--1-$function@$$A6A_NJ@Z@wistd@@QEAA@XZ.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800C6394 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ??0?$initializer_list@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@std@@QEAA@PEBV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@1@0@Z @ 0x18022A0E8 (--0-$initializer_list@V-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@@.c)
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x18028B600 (-begin_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?complete_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x180295BCC (-complete_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     wistd::function_long___cdecl(void)_::function_long___cdecl(void)___lambda_77a32147fc6c60e39773a7a23b5bdd9c__void_ @ 0x1805C2488 (wistd--function_long___cdecl(void)_--function_long___cdecl(void)___lambda_77a32147fc6c60e39773a7.c)
 *     ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x1805C4F90 (--$open_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805CB3A8 (--1-$test_data_control@V-$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805CB458 (--1-$test_watcher@V-$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@QEAA@.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::CancelSwipe(
        winrt::Windows::Internal::Shell::implementation::DashboardManager *this)
{
  char v2; // si
  volatile signed __int32 *v3; // rbx
  unsigned int v4; // esi
  volatile signed __int32 *v5; // rbx
  __int64 result; // rax
  volatile signed __int32 *v7; // kr00_8
  volatile signed __int32 *v8; // rbx
  volatile signed __int32 *v9; // [rsp+20h] [rbp-248h] BYREF
  __int64 v10; // [rsp+28h] [rbp-240h] BYREF
  volatile signed __int32 *v11; // [rsp+30h] [rbp-238h] BYREF
  volatile signed __int32 *v12; // [rsp+38h] [rbp-230h] BYREF
  volatile signed __int32 *v13; // [rsp+40h] [rbp-228h] BYREF
  __int128 v14; // [rsp+50h] [rbp-218h] BYREF
  _BYTE v15[56]; // [rsp+60h] [rbp-208h] BYREF
  volatile signed __int32 *v16; // [rsp+98h] [rbp-1D0h]
  __int64 v17; // [rsp+A0h] [rbp-1C8h] BYREF
  _BYTE v18[56]; // [rsp+B0h] [rbp-1B8h] BYREF
  volatile signed __int32 *v19; // [rsp+E8h] [rbp-180h]
  char v20[8]; // [rsp+F0h] [rbp-178h] BYREF
  _QWORD v21[14]; // [rsp+F8h] [rbp-170h] BYREF
  char v22[8]; // [rsp+168h] [rbp-100h] BYREF
  _QWORD v23[14]; // [rsp+170h] [rbp-F8h] BYREF
  _BYTE v24[120]; // [rsp+1E0h] [rbp-88h] BYREF

  tip2::open_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>>((struct wil::details::IFailureCallback *)v15);
  v10 = 0LL;
  v2 = winrt::Windows::Foundation::operator==((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))this + 18, &v10);
  v3 = v16;
  v11 = v16;
  if ( v16 )
    _InterlockedIncrement(v16 + 80);
  tip2::details::shared_data<1,0,0>::begin_update((__int64)(v3 + 2));
  *((_BYTE *)v3 + 275) = v2;
  tip2::test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::~test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>((void **)&v11);
  v4 = -2147483638;
  v5 = v16;
  v12 = v16;
  if ( v16 )
    _InterlockedIncrement(v16 + 80);
  tip2::details::shared_data<1,0,0>::begin_update((__int64)(v5 + 2));
  LOBYTE(v5) = *((_BYTE *)v5 + 275);
  tip2::test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::~test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>((void **)&v12);
  if ( (_BYTE)v5 )
  {
    v5 = v16;
    v13 = v16;
    if ( v16 )
      _InterlockedIncrement(v16 + 80);
    tip2::details::shared_data<1,0,0>::begin_update((__int64)(v5 + 2));
    *((_BYTE *)v5 + 279) = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::~test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>((void **)&v13);
  }
  else
  {
    v21[0] = ___7____func_P6A_NJ__E__A6A_NJ_Z___function_wistd__6B_;
    v21[1] = Windows::Internal::Shell::IsRpcDisconnectOrCancelError;
    v21[13] = v21;
    v23[0] = off_180757058;
    v23[13] = v23;
    v14 = *(_OWORD *)std::initializer_list<std::vector<Windows::UI::Color>>::initializer_list<std::vector<Windows::UI::Color>>(
                       &v17,
                       (__int64)this - 8,
                       (__int64)v15);
    wistd::function_long___cdecl_void__::function_long___cdecl_void____lambda_77a32147fc6c60e39773a7a23b5bdd9c__void_(
      (__int64)v24,
      &v14);
    v4 = Windows::Internal::Shell::TryWithRpcDisconnectFallbackAndTimeout(
           0x1F4u,
           (__int64)v24,
           (__int64)v22,
           (__int64)v20);
    wistd::function<bool (long)>::~function<bool (long)>((__int64)v24);
    wistd::function<bool (long)>::~function<bool (long)>((__int64)v22);
    wistd::function<bool (long)>::~function<bool (long)>((__int64)v20);
  }
  tip2::details::shared_data<1,0,0>::complete_without_lock((__int64)(v16 + 2));
  tip2::test_watcher<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::~test_watcher<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>((__int64)v15);
  result = v4;
  while ( 2 )
  {
    try
    {
    }
    catch ( ... )
    {
      v7 = v5;
      tip2::open_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>>((struct wil::details::IFailureCallback *)v18);
      v8 = v19;
      v9 = v19;
      if ( v19 )
      {
        _InterlockedIncrement(v19 + 80);
        v8 = v9;
      }
      tip2::details::shared_data<1,0,0>::begin_update((__int64)(v8 + 2));
      *((_BYTE *)v8 + 279) = 1;
      tip2::test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::~test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>((void **)&v9);
      tip2::details::shared_data<1,0,0>::complete_without_lock((__int64)(v19 + 2));
      tip2::test_watcher<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::~test_watcher<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>((__int64)v18);
      v5 = v7;
      result = 2147500037LL;
      continue;
    }
    break;
  }
  return result;
}

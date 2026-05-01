/*
 * XREFs of ??$call@AEAV_lambda_8e1259a6fed20bb5259b923f46cb90bd_@@@?$factory_cache_entry@UGraphicsCaptureItem@Capture@Graphics@Windows@winrt@@UIGraphicsCaptureItemInterop@@@impl@winrt@@QEAA?A_PAEAV_lambda_8e1259a6fed20bb5259b923f46cb90bd_@@@Z @ 0x18054C020
 * Callers:
 *     _anonymous_namespace_::CreateGraphicsCaptureItem @ 0x18054C190 (_anonymous_namespace_--CreateGraphicsCaptureItem.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801CAB80 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ @ 0x180200188 (-unconditional_release_ref@-$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802DB14D (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??$?RAEBU?$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@@_lambda_8e1259a6fed20bb5259b923f46cb90bd_@@QEBA?A_PAEBU?$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@@Z @ 0x18054BE10 (--$-RAEBU-$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@@_lambda_8e1259a6fed20bb5259b923f46cb90.c)
 *     ??$get_activation_factory@UIGraphicsCaptureItemInterop@@@winrt@@YA?AU?$com_ptr@UIGraphicsCaptureItemInterop@@@0@AEBUhstring@param@0@@Z @ 0x18054C12C (--$get_activation_factory@UIGraphicsCaptureItemInterop@@@winrt@@YA-AU-$com_ptr@UIGraphicsCapture.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::factory_cache_entry<winrt::Windows::Graphics::Capture::GraphicsCaptureItem,IGraphicsCaptureItemInterop>::call<_lambda_8e1259a6fed20bb5259b923f46cb90bd_ &>(
        __int64 a1,
        _QWORD *a2,
        void (__fastcall ***a3)(_QWORD, __int64 *, __int64 *))
{
  void (__fastcall ***v4)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 v5; // rax
  void (__fastcall ***v6)(_QWORD, _QWORD, _QWORD); // rcx
  bool v7; // zf
  __int64 v9[2]; // [rsp+28h] [rbp-38h] BYREF
  _BYTE v10[40]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v11; // [rsp+80h] [rbp+20h] BYREF
  void (__fastcall ***v12)(_QWORD, __int64 *, __int64 *); // [rsp+90h] [rbp+30h] BYREF
  __int64 v13; // [rsp+98h] [rbp+38h] BYREF

  v12 = a3;
  v11 = a1;
  v9[0] = (__int64)L"Windows.Graphics.Capture.GraphicsCaptureItem";
  v9[1] = 44LL;
  winrt::param::hstring::hstring((__int64)v10, v9);
  winrt::get_activation_factory<IGraphicsCaptureItemInterop>(&v12, v10);
  v4 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v12;
  if ( v12 )
  {
    v11 = 0LL;
    (**v12)(v12, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v11);
    v5 = v11;
    v13 = v11;
  }
  else
  {
    v13 = 0LL;
    v5 = 0LL;
  }
  if ( v5 )
  {
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v13);
    _InterlockedIncrement64(&qword_1808CC088);
    v6 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v12;
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::Graphics::Capture::GraphicsCaptureItem,IGraphicsCaptureItemInterop>,
            (signed __int64)v12,
            0LL) )
    {
      v12 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1808CC090);
    }
    _lambda_8e1259a6fed20bb5259b923f46cb90bd_::operator()<winrt::com_ptr<IGraphicsCaptureItemInterop> const &>(
      (__int64)v6,
      a2);
    _InterlockedDecrement64(&qword_1808CC088);
    v7 = v12 == 0LL;
  }
  else
  {
    *a2 = v4;
    if ( v4 )
      ((void (__fastcall *)(void (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v4)[1])(v4);
    v7 = v4 == 0LL;
  }
  if ( !v7 )
    winrt::com_ptr<IGraphicsCaptureItemInterop>::unconditional_release_ref((__int64 *)&v12);
  return a2;
}

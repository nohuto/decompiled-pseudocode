/*
 * XREFs of ?SetAt@?$vector_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@@winrt@@QEAAXIAEBUUserResizeVisual@Transitions@Udwm@2@@Z @ 0x180102658
 * Callers:
 *     ?SetAt@?$produce@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAX@Z @ 0x1801025F0 (-SetAt@-$produce@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@UUserResizeV.c)
 * Callees:
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x18002044C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     _CxxThrowException_0 @ 0x180066200 (_CxxThrowException_0.c)
 *     ??0hresult_out_of_bounds@winrt@@QEAA@XZ @ 0x1800FC768 (--0hresult_out_of_bounds@winrt@@QEAA@XZ.c)
 *     ??_GUserResizeVisual@Transitions@Udwm@winrt@@QEAAPEAXI@Z @ 0x180100D64 (--_GUserResizeVisual@Transitions@Udwm@winrt@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=1
winrt::Udwm::Transitions::UserResizeVisual *__fastcall winrt::vector_base<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Udwm::Transitions::UserResizeVisual>::SetAt(
        volatile signed __int32 *a1,
        unsigned int a2,
        winrt::Windows::Foundation::IUnknown *a3)
{
  __int64 v3; // r9
  __int64 v4; // rax
  winrt::Windows::Foundation::IUnknown *v5; // rbx
  __int64 v6; // rax
  __int64 v8; // [rsp+20h] [rbp-38h] BYREF
  char v9; // [rsp+28h] [rbp-30h]
  _BYTE pExceptionObject[40]; // [rsp+30h] [rbp-28h] BYREF

  v9 = 0;
  v3 = (__int64)(a1 + 2);
  if ( !a1 )
    v3 = 48LL;
  if ( a2 >= (unsigned __int64)((__int64)(*(_QWORD *)(v3 + 8) - *(_QWORD *)v3) >> 3) )
  {
    winrt::hresult_out_of_bounds::hresult_out_of_bounds((winrt::hresult_out_of_bounds *)pExceptionObject);
    throw (winrt::hresult_out_of_bounds *)pExceptionObject;
  }
  _InterlockedIncrement(a1);
  v4 = (__int64)(a1 + 2);
  if ( !a1 )
    v4 = 48LL;
  v5 = (winrt::Windows::Foundation::IUnknown *)(*(_QWORD *)v4 + 8LL * a2);
  v6 = *(_QWORD *)v5;
  *(_QWORD *)v5 = 0LL;
  v8 = v6;
  v9 = 1;
  winrt::Windows::Foundation::IUnknown::operator=(v5, a3);
  return winrt::Udwm::Transitions::UserResizeVisual::`scalar deleting destructor'((winrt::Udwm::Transitions::UserResizeVisual *)&v8);
}

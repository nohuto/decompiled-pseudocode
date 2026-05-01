/*
 * XREFs of std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_ITaskViewFrame_wil::err_exception_policy_________lambda_44f6d189e7116b6c3e129de871273415___ @ 0x180078534
 * Callers:
 *     ?DismissViewAnimated@TaskViewHost@@UEAAJXZ @ 0x18006FF80 (-DismissViewAnimated@TaskViewHost@@UEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x18007C280 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_ITaskViewFrame_wil::err_exception_policy_________lambda_44f6d189e7116b6c3e129de871273415___(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4)
{
  __int64 *v6; // r14
  __int64 v8; // rbx
  void (__fastcall *v9)(__int64, __int64); // rbp
  __int64 v10; // r12
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF
  __int64 *v13; // [rsp+68h] [rbp+10h]
  __int64 v14; // [rsp+70h] [rbp+18h]

  v6 = a2;
  if ( a2 != a3 )
  {
    v13 = &v12;
    do
    {
      v8 = *v6;
      v12 = v8;
      if ( v8 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
        v8 = v12;
      }
      v9 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 56LL);
      v10 = __abi_winrt_cast_to(0LL, *(_QWORD *)(a4 + 208), &_uuidof__AUIMonitorFrameDismissAnimationCallback__);
      v14 = v10;
      v9(v8, v10);
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v12);
      ++v6;
    }
    while ( v6 != a3 );
  }
  *a1 = a4;
  return a1;
}

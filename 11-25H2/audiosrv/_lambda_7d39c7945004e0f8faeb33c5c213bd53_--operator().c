/*
 * XREFs of _lambda_7d39c7945004e0f8faeb33c5c213bd53_::operator() @ 0x1800E6C64
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_7d39c7945004e0f8faeb33c5c213bd53__bool_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short_____::_Do_call @ 0x1800EAC70 (std--_Func_impl_no_alloc__lambda_7d39c7945004e0f8faeb33c5c213bd53__bool_std--basic__ea_1800EAC70.c)
 * Callees:
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x180014F20 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180054280 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005B488 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall lambda_7d39c7945004e0f8faeb33c5c213bd53_::operator()(_QWORD *a1, __int64 a2)
{
  HRESULT (__stdcall *GetDevice)(IMMDeviceEnumerator *, LPCWSTR, IMMDevice **); // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 *v8; // [rsp+20h] [rbp-50h]
  __int64 v9; // [rsp+40h] [rbp-30h] BYREF
  __int64 *v10; // [rsp+48h] [rbp-28h] BYREF
  int v11; // [rsp+50h] [rbp-20h] BYREF
  __int64 v12; // [rsp+58h] [rbp-18h]

  v12 = a2;
  v10 = 0LL;
  GetDevice = g_DeviceEnumerator->lpVtbl->GetDevice;
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v10);
  v5 = std::wstring::c_str(a2);
  if ( ((int (__fastcall *)(struct IMMDeviceEnumerator *, __int64, __int64 **))GetDevice)(g_DeviceEnumerator, v5, &v10) >= 0 )
  {
    v9 = 0LL;
    v6 = *v10;
    v9 = 0LL;
    v8 = &v9;
    if ( (*(int (__fastcall **)(__int64 *, GUID *, __int64))(v6 + 24))(
           v10,
           &GUID_28f54685_06fd_11d2_b27a_00a0c9223196,
           23LL) >= 0 )
    {
      v11 = 0;
      LODWORD(v8) = 516;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD, __int64 *, int *))(*(_QWORD *)v9 + 24LL))(
        v9,
        *a1,
        24LL,
        a1[1],
        v8,
        &v11);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v9);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v10);
  std::wstring::_Tidy_deallocate(a2);
  return 1;
}
